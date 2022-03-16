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
void JNICALL Java_NativeClass_jniCreateNativeObject(JNIEnv *env, jobject obj)
{
    NativeClass* nativeObj = new NativeClass();
    setNativeObj(env, obj, nativeObj);
    setOwnsNativeInstance(env, obj, JNI_TRUE);
}

extern "C" JNIEXPORT
jfloat JNICALL Java_NativeClass_getNumber(JNIEnv * env, jobject obj)
{
    NativeClass* nativeObj = getNativeObj<NativeClass>(env, obj);
    if (nativeObj != nullptr && !env->ExceptionCheck()) {
        return nativeObj->number;
    }
    else {
        if (!env->ExceptionCheck()) {
            throwNullPointerException(env, "NativeClass");
        }
        return (jint)0;
    }
}

extern "C" JNIEXPORT
void JNICALL Java_NativeClass_setNumber(JNIEnv * env, jobject obj, jfloat number)
{
    NativeClass* nativeObj = getNativeObj<NativeClass>(env, obj);
    if (nativeObj != nullptr && !env->ExceptionCheck()) {
        nativeObj->number = number;
    }
    else if (!env->ExceptionCheck()) {
        throwNullPointerException(env, "NativeClass");
    }
}

extern "C" JNIEXPORT
jint JNICALL Java_NativeClass_getInt(JNIEnv *env, jobject obj)
{
    NativeClass* nativeObj = getNativeObj<NativeClass>(env, obj);
    if (nativeObj != nullptr && !env->ExceptionCheck()) {
        return nativeObj->GetInt();
    }
    else {
        if (!env->ExceptionCheck()) {
            throwNullPointerException(env, "NativeClass");
        }
        return (jint)0;
    }
}

extern "C" JNIEXPORT
void JNICALL Java_NativeClass_setInt(JNIEnv *env, jobject obj, jint value)
{
    NativeClass* nativeObj = getNativeObj<NativeClass>(env, obj);
    if (nativeObj != nullptr && !env->ExceptionCheck()) {
        nativeObj->SetInt((int)value);
    }
    else if (!env->ExceptionCheck()) {
        throwNullPointerException(env, "NativeClass");
    }
}

extern "C" JNIEXPORT
jint JNICALL Java_NativeClass_square(JNIEnv *env, jobject obj, jint n)
{
    NativeClass* nativeObj = getNativeObj<NativeClass>(env, obj);
    if (nativeObj != nullptr && !env->ExceptionCheck()) {
        return nativeObj->Square(n);
    }
    else if (!env->ExceptionCheck()) {
        throwNullPointerException(env, "NativeClass");
    }
}

extern "C" JNIEXPORT
jfloat JNICALL Java_NativeClass_halve(JNIEnv *env, jobject obj, jfloat n)
{
    NativeClass* nativeObj = getNativeObj<NativeClass>(env, obj);
    if (nativeObj != nullptr && !env->ExceptionCheck()) {
        return nativeObj->Halve(n);
    }
    else if (!env->ExceptionCheck()) {
        throwNullPointerException(env, "NativeClass");
    }
}

extern "C" JNIEXPORT
jint JNICALL Java_NativeClass_throwJavaException(JNIEnv *env, jobject obj)
{
    return throwNullPointerException(env, "NativeClass");
}