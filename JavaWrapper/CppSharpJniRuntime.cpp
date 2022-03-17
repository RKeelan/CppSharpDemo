#include "CppSharpJniRuntime.h"

using namespace CppSharp::Runtime;

const char* JAVA_BOOLEAN_TYPE_SIGNATURE = "Z";
const char* JAVA_LONG_TYPE_SIGNATURE = "J";

const char* NATIVE_INSTANCE_ADDRESS_FIELD_NAME = "nativeInstanceAddr";
const char* OWNS_NATIVE_INSTANCE_FIELD_NAME = "ownsNativeInstance";

// Exceptions and Error Handling

jint CppSharp::Runtime::throwJavaException(JNIEnv *env, const char *class_name, const char *message)
{
    jclass exception_class = env->FindClass(class_name);
    return env->ThrowNew(exception_class, message);
}

jint CppSharp::Runtime::throwNoClassDefFoundError(JNIEnv *env, const char *message)
{
    return throwJavaException(env, "java/lang/NoClassDefFoundError", message);
}

jint CppSharp::Runtime::throwNoSuchMethodError(JNIEnv *env, const char *message)
{
    return throwJavaException(env, "java/lang/ThrowNoSuchMethodError", message);
}

jint CppSharp::Runtime::throwNoSuchFieldError(JNIEnv *env, const char *message)
{
    return throwJavaException(env, "java/lang/NoSuchFieldError", message);
}

jint CppSharp::Runtime::throwNullPointerException(JNIEnv *env, const char *message)
{
    return throwJavaException(env, "java/lang/NullPointerException", message);
}

// Fields

jfieldID CppSharp::Runtime::getFieldId(JNIEnv *env, jobject obj, const char *fieldName, const char *typeSignature) {
    jclass javaClass = env->GetObjectClass(obj);
    if (javaClass == nullptr) {
        throwNoClassDefFoundError(env, fieldName);
        return nullptr;
    }
    return env->GetFieldID(javaClass, fieldName, typeSignature);
}

jfieldID CppSharp::Runtime::getNativeInstanceAddrField(JNIEnv *env, jobject obj)
{
    jfieldID id = getFieldId(env, obj, NATIVE_INSTANCE_ADDRESS_FIELD_NAME, JAVA_LONG_TYPE_SIGNATURE);
    if (env->ExceptionCheck()) {
        // Don't overwrite an already-pending exception
        return 0;
    }
    else if (id == nullptr) {
        throwNoSuchFieldError(env, NATIVE_INSTANCE_ADDRESS_FIELD_NAME);
        return 0;
    }
    return id;
}

jfieldID CppSharp::Runtime::getOwnsNativeInstanceField(JNIEnv *env, jobject obj)
{
    jfieldID id = getFieldId(env, obj, OWNS_NATIVE_INSTANCE_FIELD_NAME, JAVA_BOOLEAN_TYPE_SIGNATURE);
    if (env->ExceptionCheck()) {
        // Don't overwrite an already-pending exception
        return 0;
    }
    else if (id == nullptr) {
        throwNoSuchFieldError(env, OWNS_NATIVE_INSTANCE_FIELD_NAME);
        return 0;
    }
    return id;
}

void CppSharp::Runtime::setOwnsNativeInstance(JNIEnv *env, jobject obj, jboolean ownsNativeIstance)
{
    jfieldID id = getOwnsNativeInstanceField(env, obj);
    if (env->ExceptionCheck()) {
        // Don't overwrite an already-pending exception
        return;
    }
    else if (id == nullptr) {
        throwNullPointerException(env, "Native Object Address Field");
        return;
    }
    env->SetBooleanField(obj, id, ownsNativeIstance);
}