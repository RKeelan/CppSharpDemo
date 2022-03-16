#include "jni.h"
#include "NativeClass.h"

// JNI Runtime

const char *JAVA_BOOLEAN_TYPE_SIGNATURE = "Z";
const char *JAVA_LONG_TYPE_SIGNATURE = "J";

const char *NATIVE_OBJECT_ADDRESS_FIELD_NAME = "nativeObjAddr";
const char *OWNS_NATIVE_INSTANCE_FIELD_NAME = "ownsNativeInstance";

// Exceptions and Error Handling

jint throwJavaException(JNIEnv *env, const char *class_name, const char *message)
{
    jclass exception_class = env->FindClass(class_name);
    return env->ThrowNew(exception_class, message);
}

jint throwNoClassDefFoundError(JNIEnv *env, const char *message)
{
    return throwJavaException(env, "java/lang/NoClassDefFoundError", message);
}

jint throwNoSuchMethodError(JNIEnv *env, const char *message)
{
    return throwJavaException(env, "java/lang/ThrowNoSuchMethodError", message);
}

jint throwNoSuchFieldError(JNIEnv *env, const char *message)
{
    return throwJavaException(env, "java/lang/NoSuchFieldError", message);
}

jint throwOutOfMemoryError(JNIEnv *env, const char *message)
{
    return throwJavaException(env, "java/lang/OutOfMemoryError", message);
}

jint throwNullPointerException(JNIEnv *env, const char *message)
{
    return throwJavaException(env, "java/lang/NullPointerException", message);
}

// Fields

jfieldID getFieldId(JNIEnv *env, jobject obj, const char *fieldName, const char *typeSignature) {
    jclass javaClass = env->GetObjectClass(obj);
    if (javaClass == nullptr) {
        throwNoClassDefFoundError(env, "");
        return nullptr;
    }

    return env->GetFieldID(javaClass, fieldName, typeSignature);
}

jfieldID getNativeObjAddrField(JNIEnv *env, jobject obj)
{
    jfieldID id = getFieldId(env, obj, NATIVE_OBJECT_ADDRESS_FIELD_NAME, JAVA_LONG_TYPE_SIGNATURE);
    if (id == nullptr && !env->ExceptionCheck()) {
        // Don't overwrite an already-pending exception
        throwNoSuchFieldError(env, NATIVE_OBJECT_ADDRESS_FIELD_NAME);
    }
    return id;
}

jfieldID getOwnsNativeInstanceField(JNIEnv *env, jobject obj)
{
    jfieldID id = getFieldId(env, obj, OWNS_NATIVE_INSTANCE_FIELD_NAME, JAVA_BOOLEAN_TYPE_SIGNATURE);
    if (id == nullptr && !env->ExceptionCheck()) {
        // Don't overwrite an already-pending exception
        throwNoSuchFieldError(env, OWNS_NATIVE_INSTANCE_FIELD_NAME);
    }
    return id;
}

template <typename T>
T* getNativeObj(JNIEnv *env, jobject obj)
{
    jfieldID id = getNativeObjAddrField(env, obj);
    if (id == nullptr && !env->ExceptionCheck()) {
        // Don't overwrite an already-pending exception
        throwNullPointerException(env, "Native Object Address Field");
    }

    jlong addr = env->GetLongField(obj, id);
    return reinterpret_cast<T*>(addr);
}

template <typename T>
void setNativeObj(JNIEnv *env, jobject obj, T nativeObj)
{
    jfieldID id = getNativeObjAddrField(env, obj);
    if (id == nullptr && !env->ExceptionCheck()) {
        // Don't overwrite an already-pending exception
        throwNullPointerException(env, "Native Object Address Field");
    }
    env->SetLongField(obj, id, reinterpret_cast<jlong>(nativeObj));
}

void setOwnsNativeInstance(JNIEnv *env, jobject obj, jboolean ownsNativeIstance)
{
    jfieldID id = getOwnsNativeInstanceField(env, obj);
    if (id == nullptr && !env->ExceptionCheck()) {
        // Don't overwrite an already-pending exception
        throwNullPointerException(env, "Native Object Address Field");
    }
    env->SetBooleanField(obj, id, ownsNativeIstance);
}

// JNI API

extern "C" JNIEXPORT
void JNICALL Java_NativeClass_jniCreateNativeObject(JNIEnv * env, jobject obj)
{
    NativeClass* nativeObj = new NativeClass();
    setNativeObj(env, obj, nativeObj);
    setOwnsNativeInstance(env, obj, JNI_TRUE);
}

extern "C" JNIEXPORT
jint JNICALL Java_NativeClass_getInt(JNIEnv *env, jobject obj)
{
    NativeClass* native_obj = getNativeObj<NativeClass>(env, obj);

    if (native_obj != nullptr && !env->ExceptionCheck()) {
        return native_obj->GetInt();
    }
    else {
        if (!env->ExceptionCheck()) {
            throwNullPointerException(env, "NativeClass");
            return (jint)1;
        }
        return (jint)0;
    }
}

extern "C" JNIEXPORT
jint JNICALL Java_NativeClass_throwJavaException(JNIEnv * env, jobject obj)
{
    return throwNullPointerException(env, "NativeClass");
}