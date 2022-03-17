#ifndef CPP_SHARP_RUNTIME_H
#define CPP_SHARP_RUNTIME_H

#include "jni.h"

namespace CppSharp {
	namespace Runtime {
		jint throwJavaException(JNIEnv* env, const char* class_name, const char* message);
		jint throwNoClassDefFoundError(JNIEnv* env, const char* message);
		jint throwNoSuchMethodError(JNIEnv* env, const char* message);
		jint throwNoSuchFieldError(JNIEnv* env, const char* message);
		jint throwNullPointerException(JNIEnv* env, const char* message);

		jfieldID getFieldId(JNIEnv* env, jobject obj, const char* fieldName, const char* typeSignature);
		jfieldID getNativeInstanceAddrField(JNIEnv* env, jobject obj);
		jfieldID getOwnsNativeInstanceField(JNIEnv* env, jobject obj);

		void setOwnsNativeInstance(JNIEnv* env, jobject obj, jboolean ownsNativeIstance);

		template <typename T>
		T* getNativeInstance(JNIEnv* env, jobject obj)
		{
			jfieldID id = getNativeInstanceAddrField(env, obj);
			if (env->ExceptionCheck()) {
				// Don't overwrite an already-pending exception
				return nullptr;
			}
			else if (id == nullptr) {
				throwNullPointerException(env, "Native Object Address Field");
				return nullptr;
			}
			jlong addr = env->GetLongField(obj, id);
			return reinterpret_cast<T*>(addr);
		}

		template <typename T>
		void setNativeInstance(JNIEnv* env, jobject obj, T nativeObj)
		{
			
			jfieldID id = getNativeInstanceAddrField(env, obj);
			if (env->ExceptionCheck()) {
				// Don't overwrite an already-pending exception
				return;
			}
			else if (id == nullptr) {
				throwNullPointerException(env, "Native Instance Address Field");
				return;
			}
			env->SetLongField(obj, id, reinterpret_cast<jlong>(nativeObj));
		}
	}
}
#endif