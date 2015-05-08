#include "java-core.hpp"
#include <memory>
#include "android.media.effect.Effect.hpp"
#include "android.media.effect.EffectContext.hpp"
#include "android.media.effect.EffectFactory.hpp"
#include "android.media.effect.EffectUpdateListener.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"

jclass android::media::effect::Effect::_class = nullptr;
jclass android::media::effect::EffectFactory::_class = nullptr;
jclass android::media::effect::EffectContext::_class = nullptr;
jclass android::media::effect::EffectUpdateListener::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::effect::Effect::Effect() : ::java::lang::Object((jobject)0) {
    if (!::android::media::effect::Effect::_class) ::android::media::effect::Effect::_class = java::fetch_class("android/media/effect/Effect");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::media::effect::Effect::getName() const {
    if (!::android::media::effect::Effect::_class) ::android::media::effect::Effect::_class = java::fetch_class("android/media/effect/Effect");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::media::effect::Effect::apply(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::media::effect::Effect::_class) ::android::media::effect::Effect::_class = java::fetch_class("android/media/effect/Effect");
    static jmethodID mid = java::jni->GetMethodID(_class, "apply", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::media::effect::Effect::setParameter(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::media::effect::Effect::_class) ::android::media::effect::Effect::_class = java::fetch_class("android/media/effect/Effect");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParameter", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::media::effect::Effect::setUpdateListener(const ::android::media::effect::EffectUpdateListener& arg0) const {
    if (!::android::media::effect::Effect::_class) ::android::media::effect::Effect::_class = java::fetch_class("android/media/effect/Effect");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUpdateListener", "(Landroid/media/effect/EffectUpdateListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::effect::Effect::release() const {
    if (!::android::media::effect::Effect::_class) ::android::media::effect::Effect::_class = java::fetch_class("android/media/effect/Effect");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::media::effect::Effect android::media::effect::EffectFactory::createEffect(const ::java::lang::String& arg0) const {
    if (!::android::media::effect::EffectFactory::_class) ::android::media::effect::EffectFactory::_class = java::fetch_class("android/media/effect/EffectFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createEffect", "(Ljava/lang/String;)Landroid/media/effect/Effect;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::media::effect::Effect _ret(ret);
    return _ret;
}

bool android::media::effect::EffectFactory::isEffectSupported(const ::java::lang::String& arg0){
    if (!::android::media::effect::EffectFactory::_class) ::android::media::effect::EffectFactory::_class = java::fetch_class("android/media/effect/EffectFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isEffectSupported", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

::android::media::effect::EffectContext android::media::effect::EffectContext::createWithCurrentGlContext(){
    if (!::android::media::effect::EffectContext::_class) ::android::media::effect::EffectContext::_class = java::fetch_class("android/media/effect/EffectContext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createWithCurrentGlContext", "()Landroid/media/effect/EffectContext;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::media::effect::EffectContext _ret(ret);
    return _ret;
}

::android::media::effect::EffectFactory android::media::effect::EffectContext::getFactory() const {
    if (!::android::media::effect::EffectContext::_class) ::android::media::effect::EffectContext::_class = java::fetch_class("android/media/effect/EffectContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFactory", "()Landroid/media/effect/EffectFactory;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::media::effect::EffectFactory _ret(ret);
    return _ret;
}

void android::media::effect::EffectContext::release() const {
    if (!::android::media::effect::EffectContext::_class) ::android::media::effect::EffectContext::_class = java::fetch_class("android/media/effect/EffectContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::media::effect::EffectUpdateListener::onEffectUpdated(const ::android::media::effect::Effect& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::media::effect::EffectUpdateListener::_class) ::android::media::effect::EffectUpdateListener::_class = java::fetch_class("android/media/effect/EffectUpdateListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onEffectUpdated", "(Landroid/media/effect/Effect;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

