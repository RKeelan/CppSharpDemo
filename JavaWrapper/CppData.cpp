/**
 * ----------------------------------------------------------------------------
 * <auto-generated>
 * This is autogenerated code by CppSharp.
 * Do not edit this file or all your changes will be lost after re-generation.
 * </auto-generated>
 * ----------------------------------------------------------------------------
 */

#include "CppSharpJniRuntime.h"
#include "CppData.h"

extern "C" JNIEXPORT
void JNICALL Java_CppData_jniCreateInstance(JNIEnv *env, jobject obj)
{
    CppData* nativeInstance = new CppData();
    CppSharp::Runtime::setNativeInstance(env, obj, nativeInstance);
    CppSharp::Runtime::setOwnsNativeInstance(env, obj, JNI_TRUE);
}

extern "C" JNIEXPORT
void JNICALL Java_CppData_jniDestroyInstance(JNIEnv *env, jobject obj)
{
    CppData* nativeInstance = CppSharp::Runtime::getNativeInstance<CppData>(env, obj);
    if (nativeInstance != nullptr) {
        delete nativeInstance;
        nativeInstance = nullptr;
    }
    // Make the native object address null in the Java wrapper
    CppSharp::Runtime::setNativeInstance(env, obj, nativeInstance);
    CppSharp::Runtime::setOwnsNativeInstance(env, obj, JNI_FALSE);
}