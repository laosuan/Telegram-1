// This file was generated by
//     //third_party/jni_zero/jni_zero.py
// For
//     java.util.Map

#ifndef java_util_Map_JNI
#define java_util_Map_JNI

#include <jni.h>

#include "third_party/jni_zero/jni_export.h"
#include "../../../../../../../third_party/jni_zero/jni_zero_internal.h"

// Class Accessors
#ifndef java_util_Map_clazz_defined
#define java_util_Map_clazz_defined
inline jclass java_util_Map_clazz(JNIEnv* env) {
  static const char kClassName[] = "java/util/Map";
  static std::atomic<jclass> cached_class;
  return jni_zero::internal::LazyGetClass(env, kClassName, &cached_class);
}
#endif


namespace JNI_Map {

// Native to Java functions
[[maybe_unused]] static void Java_Map_clear(JNIEnv* env, const jni_zero::JavaRef<jobject>& obj) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "clear",
      "()V",
      &cached_method_id);
  env->CallVoidMethod(obj.obj(), call_context.method_id());
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Map_compute(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0,
    const jni_zero::JavaRef<jobject>& p1) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "compute",
      "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
      &cached_method_id);
  auto _ret = env->CallObjectMethod(obj.obj(), call_context.method_id(), p0.obj(), p1.obj());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Map_computeIfAbsent(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0,
    const jni_zero::JavaRef<jobject>& p1) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "computeIfAbsent",
      "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;",
      &cached_method_id);
  auto _ret = env->CallObjectMethod(obj.obj(), call_context.method_id(), p0.obj(), p1.obj());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Map_computeIfPresent(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0,
    const jni_zero::JavaRef<jobject>& p1) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "computeIfPresent",
      "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
      &cached_method_id);
  auto _ret = env->CallObjectMethod(obj.obj(), call_context.method_id(), p0.obj(), p1.obj());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static jboolean Java_Map_containsKey(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, false);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "containsKey",
      "(Ljava/lang/Object;)Z",
      &cached_method_id);
  auto _ret = env->CallBooleanMethod(obj.obj(), call_context.method_id(), p0.obj());
  return _ret;
}

[[maybe_unused]] static jboolean Java_Map_containsValue(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, false);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "containsValue",
      "(Ljava/lang/Object;)Z",
      &cached_method_id);
  auto _ret = env->CallBooleanMethod(obj.obj(), call_context.method_id(), p0.obj());
  return _ret;
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Map_copyOf(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& p0) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "copyOf",
      "(Ljava/util/Map;)Ljava/util/Map;",
      &cached_method_id);
  auto _ret = env->CallStaticObjectMethod(clazz, call_context.method_id(), p0.obj());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Map_entry(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& p0,
    const jni_zero::JavaRef<jobject>& p1) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "entry",
      "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map$Entry;",
      &cached_method_id);
  auto _ret = env->CallStaticObjectMethod(clazz, call_context.method_id(), p0.obj(), p1.obj());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Map_entrySet(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "entrySet",
      "()Ljava/util/Set;",
      &cached_method_id);
  auto _ret = env->CallObjectMethod(obj.obj(), call_context.method_id());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static jboolean Java_Map_equals(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, false);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "equals",
      "(Ljava/lang/Object;)Z",
      &cached_method_id);
  auto _ret = env->CallBooleanMethod(obj.obj(), call_context.method_id(), p0.obj());
  return _ret;
}

[[maybe_unused]] static void Java_Map_forEach(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "forEach",
      "(Ljava/util/function/BiConsumer;)V",
      &cached_method_id);
  env->CallVoidMethod(obj.obj(), call_context.method_id(), p0.obj());
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Map_get(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "get",
      "(Ljava/lang/Object;)Ljava/lang/Object;",
      &cached_method_id);
  auto _ret = env->CallObjectMethod(obj.obj(), call_context.method_id(), p0.obj());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Map_getOrDefault(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0,
    const jni_zero::JavaRef<jobject>& p1) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "getOrDefault",
      "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
      &cached_method_id);
  auto _ret = env->CallObjectMethod(obj.obj(), call_context.method_id(), p0.obj(), p1.obj());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static jint Java_Map_hashCode(JNIEnv* env, const jni_zero::JavaRef<jobject>& obj) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, 0);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "hashCode",
      "()I",
      &cached_method_id);
  auto _ret = env->CallIntMethod(obj.obj(), call_context.method_id());
  return _ret;
}

[[maybe_unused]] static jboolean Java_Map_isEmpty(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, false);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "isEmpty",
      "()Z",
      &cached_method_id);
  auto _ret = env->CallBooleanMethod(obj.obj(), call_context.method_id());
  return _ret;
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Map_keySet(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "keySet",
      "()Ljava/util/Set;",
      &cached_method_id);
  auto _ret = env->CallObjectMethod(obj.obj(), call_context.method_id());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Map_merge(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0,
    const jni_zero::JavaRef<jobject>& p1,
    const jni_zero::JavaRef<jobject>& p2) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "merge",
      "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
      &cached_method_id);
  auto _ret = env->CallObjectMethod(
      obj.obj(),
      call_context.method_id(),
      p0.obj(),
      p1.obj(),
      p2.obj());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Map_of(JNIEnv* env) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "of",
      "()Ljava/util/Map;",
      &cached_method_id);
  auto _ret = env->CallStaticObjectMethod(clazz, call_context.method_id());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Map_of(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& p0,
    const jni_zero::JavaRef<jobject>& p1) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "of",
      "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;",
      &cached_method_id);
  auto _ret = env->CallStaticObjectMethod(clazz, call_context.method_id(), p0.obj(), p1.obj());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Map_of(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& p0,
    const jni_zero::JavaRef<jobject>& p1,
    const jni_zero::JavaRef<jobject>& p2,
    const jni_zero::JavaRef<jobject>& p3) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "of",
      "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;",
      &cached_method_id);
  auto _ret = env->CallStaticObjectMethod(
      clazz,
      call_context.method_id(),
      p0.obj(),
      p1.obj(),
      p2.obj(),
      p3.obj());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Map_of(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& p0,
    const jni_zero::JavaRef<jobject>& p1,
    const jni_zero::JavaRef<jobject>& p2,
    const jni_zero::JavaRef<jobject>& p3,
    const jni_zero::JavaRef<jobject>& p4,
    const jni_zero::JavaRef<jobject>& p5) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "of",
      "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;",
      &cached_method_id);
  auto _ret = env->CallStaticObjectMethod(
      clazz,
      call_context.method_id(),
      p0.obj(),
      p1.obj(),
      p2.obj(),
      p3.obj(),
      p4.obj(),
      p5.obj());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Map_of(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& p0,
    const jni_zero::JavaRef<jobject>& p1,
    const jni_zero::JavaRef<jobject>& p2,
    const jni_zero::JavaRef<jobject>& p3,
    const jni_zero::JavaRef<jobject>& p4,
    const jni_zero::JavaRef<jobject>& p5,
    const jni_zero::JavaRef<jobject>& p6,
    const jni_zero::JavaRef<jobject>& p7) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "of",
      "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;",
      &cached_method_id);
  auto _ret = env->CallStaticObjectMethod(
      clazz,
      call_context.method_id(),
      p0.obj(),
      p1.obj(),
      p2.obj(),
      p3.obj(),
      p4.obj(),
      p5.obj(),
      p6.obj(),
      p7.obj());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Map_of(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& p0,
    const jni_zero::JavaRef<jobject>& p1,
    const jni_zero::JavaRef<jobject>& p2,
    const jni_zero::JavaRef<jobject>& p3,
    const jni_zero::JavaRef<jobject>& p4,
    const jni_zero::JavaRef<jobject>& p5,
    const jni_zero::JavaRef<jobject>& p6,
    const jni_zero::JavaRef<jobject>& p7,
    const jni_zero::JavaRef<jobject>& p8,
    const jni_zero::JavaRef<jobject>& p9) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "of",
      "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;",
      &cached_method_id);
  auto _ret = env->CallStaticObjectMethod(
      clazz,
      call_context.method_id(),
      p0.obj(),
      p1.obj(),
      p2.obj(),
      p3.obj(),
      p4.obj(),
      p5.obj(),
      p6.obj(),
      p7.obj(),
      p8.obj(),
      p9.obj());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Map_of(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& p0,
    const jni_zero::JavaRef<jobject>& p1,
    const jni_zero::JavaRef<jobject>& p2,
    const jni_zero::JavaRef<jobject>& p3,
    const jni_zero::JavaRef<jobject>& p4,
    const jni_zero::JavaRef<jobject>& p5,
    const jni_zero::JavaRef<jobject>& p6,
    const jni_zero::JavaRef<jobject>& p7,
    const jni_zero::JavaRef<jobject>& p8,
    const jni_zero::JavaRef<jobject>& p9,
    const jni_zero::JavaRef<jobject>& p10,
    const jni_zero::JavaRef<jobject>& p11) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "of",
      "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;",
      &cached_method_id);
  auto _ret = env->CallStaticObjectMethod(
      clazz,
      call_context.method_id(),
      p0.obj(),
      p1.obj(),
      p2.obj(),
      p3.obj(),
      p4.obj(),
      p5.obj(),
      p6.obj(),
      p7.obj(),
      p8.obj(),
      p9.obj(),
      p10.obj(),
      p11.obj());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Map_of(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& p0,
    const jni_zero::JavaRef<jobject>& p1,
    const jni_zero::JavaRef<jobject>& p2,
    const jni_zero::JavaRef<jobject>& p3,
    const jni_zero::JavaRef<jobject>& p4,
    const jni_zero::JavaRef<jobject>& p5,
    const jni_zero::JavaRef<jobject>& p6,
    const jni_zero::JavaRef<jobject>& p7,
    const jni_zero::JavaRef<jobject>& p8,
    const jni_zero::JavaRef<jobject>& p9,
    const jni_zero::JavaRef<jobject>& p10,
    const jni_zero::JavaRef<jobject>& p11,
    const jni_zero::JavaRef<jobject>& p12,
    const jni_zero::JavaRef<jobject>& p13) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "of",
      "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;",
      &cached_method_id);
  auto _ret = env->CallStaticObjectMethod(
      clazz,
      call_context.method_id(),
      p0.obj(),
      p1.obj(),
      p2.obj(),
      p3.obj(),
      p4.obj(),
      p5.obj(),
      p6.obj(),
      p7.obj(),
      p8.obj(),
      p9.obj(),
      p10.obj(),
      p11.obj(),
      p12.obj(),
      p13.obj());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Map_of(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& p0,
    const jni_zero::JavaRef<jobject>& p1,
    const jni_zero::JavaRef<jobject>& p2,
    const jni_zero::JavaRef<jobject>& p3,
    const jni_zero::JavaRef<jobject>& p4,
    const jni_zero::JavaRef<jobject>& p5,
    const jni_zero::JavaRef<jobject>& p6,
    const jni_zero::JavaRef<jobject>& p7,
    const jni_zero::JavaRef<jobject>& p8,
    const jni_zero::JavaRef<jobject>& p9,
    const jni_zero::JavaRef<jobject>& p10,
    const jni_zero::JavaRef<jobject>& p11,
    const jni_zero::JavaRef<jobject>& p12,
    const jni_zero::JavaRef<jobject>& p13,
    const jni_zero::JavaRef<jobject>& p14,
    const jni_zero::JavaRef<jobject>& p15) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "of",
      "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;",
      &cached_method_id);
  auto _ret = env->CallStaticObjectMethod(
      clazz,
      call_context.method_id(),
      p0.obj(),
      p1.obj(),
      p2.obj(),
      p3.obj(),
      p4.obj(),
      p5.obj(),
      p6.obj(),
      p7.obj(),
      p8.obj(),
      p9.obj(),
      p10.obj(),
      p11.obj(),
      p12.obj(),
      p13.obj(),
      p14.obj(),
      p15.obj());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Map_of(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& p0,
    const jni_zero::JavaRef<jobject>& p1,
    const jni_zero::JavaRef<jobject>& p2,
    const jni_zero::JavaRef<jobject>& p3,
    const jni_zero::JavaRef<jobject>& p4,
    const jni_zero::JavaRef<jobject>& p5,
    const jni_zero::JavaRef<jobject>& p6,
    const jni_zero::JavaRef<jobject>& p7,
    const jni_zero::JavaRef<jobject>& p8,
    const jni_zero::JavaRef<jobject>& p9,
    const jni_zero::JavaRef<jobject>& p10,
    const jni_zero::JavaRef<jobject>& p11,
    const jni_zero::JavaRef<jobject>& p12,
    const jni_zero::JavaRef<jobject>& p13,
    const jni_zero::JavaRef<jobject>& p14,
    const jni_zero::JavaRef<jobject>& p15,
    const jni_zero::JavaRef<jobject>& p16,
    const jni_zero::JavaRef<jobject>& p17) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "of",
      "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;",
      &cached_method_id);
  auto _ret = env->CallStaticObjectMethod(
      clazz,
      call_context.method_id(),
      p0.obj(),
      p1.obj(),
      p2.obj(),
      p3.obj(),
      p4.obj(),
      p5.obj(),
      p6.obj(),
      p7.obj(),
      p8.obj(),
      p9.obj(),
      p10.obj(),
      p11.obj(),
      p12.obj(),
      p13.obj(),
      p14.obj(),
      p15.obj(),
      p16.obj(),
      p17.obj());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Map_of(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& p0,
    const jni_zero::JavaRef<jobject>& p1,
    const jni_zero::JavaRef<jobject>& p2,
    const jni_zero::JavaRef<jobject>& p3,
    const jni_zero::JavaRef<jobject>& p4,
    const jni_zero::JavaRef<jobject>& p5,
    const jni_zero::JavaRef<jobject>& p6,
    const jni_zero::JavaRef<jobject>& p7,
    const jni_zero::JavaRef<jobject>& p8,
    const jni_zero::JavaRef<jobject>& p9,
    const jni_zero::JavaRef<jobject>& p10,
    const jni_zero::JavaRef<jobject>& p11,
    const jni_zero::JavaRef<jobject>& p12,
    const jni_zero::JavaRef<jobject>& p13,
    const jni_zero::JavaRef<jobject>& p14,
    const jni_zero::JavaRef<jobject>& p15,
    const jni_zero::JavaRef<jobject>& p16,
    const jni_zero::JavaRef<jobject>& p17,
    const jni_zero::JavaRef<jobject>& p18,
    const jni_zero::JavaRef<jobject>& p19) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "of",
      "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;",
      &cached_method_id);
  auto _ret = env->CallStaticObjectMethod(
      clazz,
      call_context.method_id(),
      p0.obj(),
      p1.obj(),
      p2.obj(),
      p3.obj(),
      p4.obj(),
      p5.obj(),
      p6.obj(),
      p7.obj(),
      p8.obj(),
      p9.obj(),
      p10.obj(),
      p11.obj(),
      p12.obj(),
      p13.obj(),
      p14.obj(),
      p15.obj(),
      p16.obj(),
      p17.obj(),
      p18.obj(),
      p19.obj());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Map_ofEntries(
    JNIEnv* env,
    const jni_zero::JavaRef<jobjectArray>& p0) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "ofEntries",
      "([Ljava/util/Map$Entry;)Ljava/util/Map;",
      &cached_method_id);
  auto _ret = env->CallStaticObjectMethod(clazz, call_context.method_id(), p0.obj());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Map_put(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0,
    const jni_zero::JavaRef<jobject>& p1) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "put",
      "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
      &cached_method_id);
  auto _ret = env->CallObjectMethod(obj.obj(), call_context.method_id(), p0.obj(), p1.obj());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static void Java_Map_putAll(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "putAll",
      "(Ljava/util/Map;)V",
      &cached_method_id);
  env->CallVoidMethod(obj.obj(), call_context.method_id(), p0.obj());
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Map_putIfAbsent(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0,
    const jni_zero::JavaRef<jobject>& p1) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "putIfAbsent",
      "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
      &cached_method_id);
  auto _ret = env->CallObjectMethod(obj.obj(), call_context.method_id(), p0.obj(), p1.obj());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static jboolean Java_Map_remove(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0,
    const jni_zero::JavaRef<jobject>& p1) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, false);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "remove",
      "(Ljava/lang/Object;Ljava/lang/Object;)Z",
      &cached_method_id);
  auto _ret = env->CallBooleanMethod(obj.obj(), call_context.method_id(), p0.obj(), p1.obj());
  return _ret;
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Map_remove(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "remove",
      "(Ljava/lang/Object;)Ljava/lang/Object;",
      &cached_method_id);
  auto _ret = env->CallObjectMethod(obj.obj(), call_context.method_id(), p0.obj());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static jboolean Java_Map_replace(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0,
    const jni_zero::JavaRef<jobject>& p1,
    const jni_zero::JavaRef<jobject>& p2) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, false);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "replace",
      "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
      &cached_method_id);
  auto _ret = env->CallBooleanMethod(
      obj.obj(),
      call_context.method_id(),
      p0.obj(),
      p1.obj(),
      p2.obj());
  return _ret;
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Map_replace(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0,
    const jni_zero::JavaRef<jobject>& p1) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "replace",
      "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
      &cached_method_id);
  auto _ret = env->CallObjectMethod(obj.obj(), call_context.method_id(), p0.obj(), p1.obj());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static void Java_Map_replaceAll(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "replaceAll",
      "(Ljava/util/function/BiFunction;)V",
      &cached_method_id);
  env->CallVoidMethod(obj.obj(), call_context.method_id(), p0.obj());
}

[[maybe_unused]] static jint Java_Map_size(JNIEnv* env, const jni_zero::JavaRef<jobject>& obj) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, 0);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "size",
      "()I",
      &cached_method_id);
  auto _ret = env->CallIntMethod(obj.obj(), call_context.method_id());
  return _ret;
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Map_values(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Map_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "values",
      "()Ljava/util/Collection;",
      &cached_method_id);
  auto _ret = env->CallObjectMethod(obj.obj(), call_context.method_id());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}



}  // namespace JNI_Map

#endif  // java_util_Map_JNI
