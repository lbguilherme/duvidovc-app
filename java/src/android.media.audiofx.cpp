#include "java-core.hpp"
#include <memory>
#include "android.media.audiofx.AudioEffect.hpp"
#include "android.media.audiofx.BassBoost.hpp"
#include "android.media.audiofx.EnvironmentalReverb.hpp"
#include "android.media.audiofx.Equalizer.hpp"
#include "android.media.audiofx.PresetReverb.hpp"
#include "android.media.audiofx.Virtualizer.hpp"
#include "android.media.audiofx.Visualizer.hpp"
#include "java.lang.String.hpp"

jclass android::media::audiofx::Visualizer_OnDataCaptureListener::_class = nullptr;
jclass android::media::audiofx::PresetReverb_OnParameterChangeListener::_class = nullptr;
jclass android::media::audiofx::Visualizer::_class = nullptr;
jclass android::media::audiofx::EnvironmentalReverb_OnParameterChangeListener::_class = nullptr;
jclass android::media::audiofx::BassBoost::_class = nullptr;
jclass android::media::audiofx::Virtualizer::_class = nullptr;
jclass android::media::audiofx::PresetReverb::_class = nullptr;
jclass android::media::audiofx::AudioEffect_OnControlStatusChangeListener::_class = nullptr;
jclass android::media::audiofx::Virtualizer_OnParameterChangeListener::_class = nullptr;
jclass android::media::audiofx::BassBoost_OnParameterChangeListener::_class = nullptr;
jclass android::media::audiofx::BassBoost_Settings::_class = nullptr;
jclass android::media::audiofx::EnvironmentalReverb_Settings::_class = nullptr;
jclass android::media::audiofx::Virtualizer_Settings::_class = nullptr;
jclass android::media::audiofx::EnvironmentalReverb::_class = nullptr;
jclass android::media::audiofx::AudioEffect_OnEnableStatusChangeListener::_class = nullptr;
jclass android::media::audiofx::Equalizer_OnParameterChangeListener::_class = nullptr;
jclass android::media::audiofx::AudioEffect::_class = nullptr;
jclass android::media::audiofx::AudioEffect_Descriptor::_class = nullptr;
jclass android::media::audiofx::PresetReverb_Settings::_class = nullptr;
jclass android::media::audiofx::Equalizer::_class = nullptr;
jclass android::media::audiofx::Equalizer_Settings::_class = nullptr;

void android::media::audiofx::Visualizer_OnDataCaptureListener::onWaveFormDataCapture(const ::android::media::audiofx::Visualizer& arg0, const std::vector< int8_t>& arg1, int32_t arg2) const {
    if (!::android::media::audiofx::Visualizer_OnDataCaptureListener::_class) ::android::media::audiofx::Visualizer_OnDataCaptureListener::_class = java::fetch_class("android/media/audiofx/Visualizer$OnDataCaptureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onWaveFormDataCapture", "(Landroid/media/audiofx/Visualizer;[BI)V");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::media::audiofx::Visualizer_OnDataCaptureListener::onFftDataCapture(const ::android::media::audiofx::Visualizer& arg0, const std::vector< int8_t>& arg1, int32_t arg2) const {
    if (!::android::media::audiofx::Visualizer_OnDataCaptureListener::_class) ::android::media::audiofx::Visualizer_OnDataCaptureListener::_class = java::fetch_class("android/media/audiofx/Visualizer$OnDataCaptureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFftDataCapture", "(Landroid/media/audiofx/Visualizer;[BI)V");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::media::audiofx::PresetReverb_OnParameterChangeListener::onParameterChange(const ::android::media::audiofx::PresetReverb& arg0, int32_t arg1, int32_t arg2, int16_t arg3) const {
    if (!::android::media::audiofx::PresetReverb_OnParameterChangeListener::_class) ::android::media::audiofx::PresetReverb_OnParameterChangeListener::_class = java::fetch_class("android/media/audiofx/PresetReverb$OnParameterChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onParameterChange", "(Landroid/media/audiofx/PresetReverb;IIS)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int16_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::audiofx::Visualizer::Visualizer(int32_t arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::media::audiofx::Visualizer::_class) ::android::media::audiofx::Visualizer::_class = java::fetch_class("android/media/audiofx/Visualizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::media::audiofx::Visualizer::release() const {
    if (!::android::media::audiofx::Visualizer::_class) ::android::media::audiofx::Visualizer::_class = java::fetch_class("android/media/audiofx/Visualizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::media::audiofx::Visualizer::setEnabled(bool arg0) const {
    if (!::android::media::audiofx::Visualizer::_class) ::android::media::audiofx::Visualizer::_class = java::fetch_class("android/media/audiofx/Visualizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabled", "(Z)I");
    bool _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::media::audiofx::Visualizer::getEnabled() const {
    if (!::android::media::audiofx::Visualizer::_class) ::android::media::audiofx::Visualizer::_class = java::fetch_class("android/media/audiofx/Visualizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

std::vector< int32_t> android::media::audiofx::Visualizer::getCaptureSizeRange(){
    if (!::android::media::audiofx::Visualizer::_class) ::android::media::audiofx::Visualizer::_class = java::fetch_class("android/media/audiofx/Visualizer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCaptureSizeRange", "()[I");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t android::media::audiofx::Visualizer::getMaxCaptureRate(){
    if (!::android::media::audiofx::Visualizer::_class) ::android::media::audiofx::Visualizer::_class = java::fetch_class("android/media/audiofx/Visualizer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMaxCaptureRate", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::media::audiofx::Visualizer::setCaptureSize(int32_t arg0) const {
    if (!::android::media::audiofx::Visualizer::_class) ::android::media::audiofx::Visualizer::_class = java::fetch_class("android/media/audiofx/Visualizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCaptureSize", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::media::audiofx::Visualizer::getCaptureSize() const {
    if (!::android::media::audiofx::Visualizer::_class) ::android::media::audiofx::Visualizer::_class = java::fetch_class("android/media/audiofx/Visualizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCaptureSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::media::audiofx::Visualizer::getSamplingRate() const {
    if (!::android::media::audiofx::Visualizer::_class) ::android::media::audiofx::Visualizer::_class = java::fetch_class("android/media/audiofx/Visualizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSamplingRate", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::media::audiofx::Visualizer::getWaveForm(const std::vector< int8_t>& arg0) const {
    if (!::android::media::audiofx::Visualizer::_class) ::android::media::audiofx::Visualizer::_class = java::fetch_class("android/media/audiofx/Visualizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWaveForm", "([B)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::media::audiofx::Visualizer::getFft(const std::vector< int8_t>& arg0) const {
    if (!::android::media::audiofx::Visualizer::_class) ::android::media::audiofx::Visualizer::_class = java::fetch_class("android/media/audiofx/Visualizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFft", "([B)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::media::audiofx::Visualizer::setDataCaptureListener(const ::android::media::audiofx::Visualizer_OnDataCaptureListener& arg0, int32_t arg1, bool arg2, bool arg3) const {
    if (!::android::media::audiofx::Visualizer::_class) ::android::media::audiofx::Visualizer::_class = java::fetch_class("android/media/audiofx/Visualizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDataCaptureListener", "(Landroid/media/audiofx/Visualizer$OnDataCaptureListener;IZZ)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    bool _arg3 = arg3;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::media::audiofx::EnvironmentalReverb_OnParameterChangeListener::onParameterChange(const ::android::media::audiofx::EnvironmentalReverb& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::media::audiofx::EnvironmentalReverb_OnParameterChangeListener::_class) ::android::media::audiofx::EnvironmentalReverb_OnParameterChangeListener::_class = java::fetch_class("android/media/audiofx/EnvironmentalReverb$OnParameterChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onParameterChange", "(Landroid/media/audiofx/EnvironmentalReverb;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::audiofx::BassBoost::BassBoost(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::media::audiofx::AudioEffect((jobject)0) {
    if (!::android::media::audiofx::BassBoost::_class) ::android::media::audiofx::BassBoost::_class = java::fetch_class("android/media/audiofx/BassBoost");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool android::media::audiofx::BassBoost::getStrengthSupported() const {
    if (!::android::media::audiofx::BassBoost::_class) ::android::media::audiofx::BassBoost::_class = java::fetch_class("android/media/audiofx/BassBoost");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStrengthSupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::media::audiofx::BassBoost::setStrength(int16_t arg0) const {
    if (!::android::media::audiofx::BassBoost::_class) ::android::media::audiofx::BassBoost::_class = java::fetch_class("android/media/audiofx/BassBoost");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStrength", "(S)V");
    int16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int16_t android::media::audiofx::BassBoost::getRoundedStrength() const {
    if (!::android::media::audiofx::BassBoost::_class) ::android::media::audiofx::BassBoost::_class = java::fetch_class("android/media/audiofx/BassBoost");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRoundedStrength", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

void android::media::audiofx::BassBoost::setParameterListener(const ::android::media::audiofx::BassBoost_OnParameterChangeListener& arg0) const {
    if (!::android::media::audiofx::BassBoost::_class) ::android::media::audiofx::BassBoost::_class = java::fetch_class("android/media/audiofx/BassBoost");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParameterListener", "(Landroid/media/audiofx/BassBoost$OnParameterChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::media::audiofx::BassBoost_Settings android::media::audiofx::BassBoost::getProperties() const {
    if (!::android::media::audiofx::BassBoost::_class) ::android::media::audiofx::BassBoost::_class = java::fetch_class("android/media/audiofx/BassBoost");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProperties", "()Landroid/media/audiofx/BassBoost$Settings;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::media::audiofx::BassBoost_Settings _ret(ret);
    return _ret;
}

void android::media::audiofx::BassBoost::setProperties(const ::android::media::audiofx::BassBoost_Settings& arg0) const {
    if (!::android::media::audiofx::BassBoost::_class) ::android::media::audiofx::BassBoost::_class = java::fetch_class("android/media/audiofx/BassBoost");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProperties", "(Landroid/media/audiofx/BassBoost$Settings;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::audiofx::Virtualizer::Virtualizer(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::media::audiofx::AudioEffect((jobject)0) {
    if (!::android::media::audiofx::Virtualizer::_class) ::android::media::audiofx::Virtualizer::_class = java::fetch_class("android/media/audiofx/Virtualizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool android::media::audiofx::Virtualizer::getStrengthSupported() const {
    if (!::android::media::audiofx::Virtualizer::_class) ::android::media::audiofx::Virtualizer::_class = java::fetch_class("android/media/audiofx/Virtualizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStrengthSupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::media::audiofx::Virtualizer::setStrength(int16_t arg0) const {
    if (!::android::media::audiofx::Virtualizer::_class) ::android::media::audiofx::Virtualizer::_class = java::fetch_class("android/media/audiofx/Virtualizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStrength", "(S)V");
    int16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int16_t android::media::audiofx::Virtualizer::getRoundedStrength() const {
    if (!::android::media::audiofx::Virtualizer::_class) ::android::media::audiofx::Virtualizer::_class = java::fetch_class("android/media/audiofx/Virtualizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRoundedStrength", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

void android::media::audiofx::Virtualizer::setParameterListener(const ::android::media::audiofx::Virtualizer_OnParameterChangeListener& arg0) const {
    if (!::android::media::audiofx::Virtualizer::_class) ::android::media::audiofx::Virtualizer::_class = java::fetch_class("android/media/audiofx/Virtualizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParameterListener", "(Landroid/media/audiofx/Virtualizer$OnParameterChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::media::audiofx::Virtualizer_Settings android::media::audiofx::Virtualizer::getProperties() const {
    if (!::android::media::audiofx::Virtualizer::_class) ::android::media::audiofx::Virtualizer::_class = java::fetch_class("android/media/audiofx/Virtualizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProperties", "()Landroid/media/audiofx/Virtualizer$Settings;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::media::audiofx::Virtualizer_Settings _ret(ret);
    return _ret;
}

void android::media::audiofx::Virtualizer::setProperties(const ::android::media::audiofx::Virtualizer_Settings& arg0) const {
    if (!::android::media::audiofx::Virtualizer::_class) ::android::media::audiofx::Virtualizer::_class = java::fetch_class("android/media/audiofx/Virtualizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProperties", "(Landroid/media/audiofx/Virtualizer$Settings;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::audiofx::PresetReverb::PresetReverb(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::media::audiofx::AudioEffect((jobject)0) {
    if (!::android::media::audiofx::PresetReverb::_class) ::android::media::audiofx::PresetReverb::_class = java::fetch_class("android/media/audiofx/PresetReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::media::audiofx::PresetReverb::setPreset(int16_t arg0) const {
    if (!::android::media::audiofx::PresetReverb::_class) ::android::media::audiofx::PresetReverb::_class = java::fetch_class("android/media/audiofx/PresetReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPreset", "(S)V");
    int16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int16_t android::media::audiofx::PresetReverb::getPreset() const {
    if (!::android::media::audiofx::PresetReverb::_class) ::android::media::audiofx::PresetReverb::_class = java::fetch_class("android/media/audiofx/PresetReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPreset", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

void android::media::audiofx::PresetReverb::setParameterListener(const ::android::media::audiofx::PresetReverb_OnParameterChangeListener& arg0) const {
    if (!::android::media::audiofx::PresetReverb::_class) ::android::media::audiofx::PresetReverb::_class = java::fetch_class("android/media/audiofx/PresetReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParameterListener", "(Landroid/media/audiofx/PresetReverb$OnParameterChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::media::audiofx::PresetReverb_Settings android::media::audiofx::PresetReverb::getProperties() const {
    if (!::android::media::audiofx::PresetReverb::_class) ::android::media::audiofx::PresetReverb::_class = java::fetch_class("android/media/audiofx/PresetReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProperties", "()Landroid/media/audiofx/PresetReverb$Settings;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::media::audiofx::PresetReverb_Settings _ret(ret);
    return _ret;
}

void android::media::audiofx::PresetReverb::setProperties(const ::android::media::audiofx::PresetReverb_Settings& arg0) const {
    if (!::android::media::audiofx::PresetReverb::_class) ::android::media::audiofx::PresetReverb::_class = java::fetch_class("android/media/audiofx/PresetReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProperties", "(Landroid/media/audiofx/PresetReverb$Settings;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::audiofx::AudioEffect_OnControlStatusChangeListener::onControlStatusChange(const ::android::media::audiofx::AudioEffect& arg0, bool arg1) const {
    if (!::android::media::audiofx::AudioEffect_OnControlStatusChangeListener::_class) ::android::media::audiofx::AudioEffect_OnControlStatusChangeListener::_class = java::fetch_class("android/media/audiofx/AudioEffect$OnControlStatusChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onControlStatusChange", "(Landroid/media/audiofx/AudioEffect;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::media::audiofx::Virtualizer_OnParameterChangeListener::onParameterChange(const ::android::media::audiofx::Virtualizer& arg0, int32_t arg1, int32_t arg2, int16_t arg3) const {
    if (!::android::media::audiofx::Virtualizer_OnParameterChangeListener::_class) ::android::media::audiofx::Virtualizer_OnParameterChangeListener::_class = java::fetch_class("android/media/audiofx/Virtualizer$OnParameterChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onParameterChange", "(Landroid/media/audiofx/Virtualizer;IIS)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int16_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::media::audiofx::BassBoost_OnParameterChangeListener::onParameterChange(const ::android::media::audiofx::BassBoost& arg0, int32_t arg1, int32_t arg2, int16_t arg3) const {
    if (!::android::media::audiofx::BassBoost_OnParameterChangeListener::_class) ::android::media::audiofx::BassBoost_OnParameterChangeListener::_class = java::fetch_class("android/media/audiofx/BassBoost$OnParameterChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onParameterChange", "(Landroid/media/audiofx/BassBoost;IIS)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int16_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::audiofx::BassBoost_Settings::BassBoost_Settings() : ::java::lang::Object((jobject)0) {
    if (!::android::media::audiofx::BassBoost_Settings::_class) ::android::media::audiofx::BassBoost_Settings::_class = java::fetch_class("android/media/audiofx/BassBoost$Settings");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::audiofx::BassBoost_Settings::BassBoost_Settings(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::media::audiofx::BassBoost_Settings::_class) ::android::media::audiofx::BassBoost_Settings::_class = java::fetch_class("android/media/audiofx/BassBoost$Settings");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String android::media::audiofx::BassBoost_Settings::toString() const {
    if (!::android::media::audiofx::BassBoost_Settings::_class) ::android::media::audiofx::BassBoost_Settings::_class = java::fetch_class("android/media/audiofx/BassBoost$Settings");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::audiofx::EnvironmentalReverb_Settings::EnvironmentalReverb_Settings() : ::java::lang::Object((jobject)0) {
    if (!::android::media::audiofx::EnvironmentalReverb_Settings::_class) ::android::media::audiofx::EnvironmentalReverb_Settings::_class = java::fetch_class("android/media/audiofx/EnvironmentalReverb$Settings");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::audiofx::EnvironmentalReverb_Settings::EnvironmentalReverb_Settings(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::media::audiofx::EnvironmentalReverb_Settings::_class) ::android::media::audiofx::EnvironmentalReverb_Settings::_class = java::fetch_class("android/media/audiofx/EnvironmentalReverb$Settings");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String android::media::audiofx::EnvironmentalReverb_Settings::toString() const {
    if (!::android::media::audiofx::EnvironmentalReverb_Settings::_class) ::android::media::audiofx::EnvironmentalReverb_Settings::_class = java::fetch_class("android/media/audiofx/EnvironmentalReverb$Settings");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::audiofx::Virtualizer_Settings::Virtualizer_Settings() : ::java::lang::Object((jobject)0) {
    if (!::android::media::audiofx::Virtualizer_Settings::_class) ::android::media::audiofx::Virtualizer_Settings::_class = java::fetch_class("android/media/audiofx/Virtualizer$Settings");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::audiofx::Virtualizer_Settings::Virtualizer_Settings(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::media::audiofx::Virtualizer_Settings::_class) ::android::media::audiofx::Virtualizer_Settings::_class = java::fetch_class("android/media/audiofx/Virtualizer$Settings");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String android::media::audiofx::Virtualizer_Settings::toString() const {
    if (!::android::media::audiofx::Virtualizer_Settings::_class) ::android::media::audiofx::Virtualizer_Settings::_class = java::fetch_class("android/media/audiofx/Virtualizer$Settings");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::audiofx::EnvironmentalReverb::EnvironmentalReverb(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::media::audiofx::AudioEffect((jobject)0) {
    if (!::android::media::audiofx::EnvironmentalReverb::_class) ::android::media::audiofx::EnvironmentalReverb::_class = java::fetch_class("android/media/audiofx/EnvironmentalReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::media::audiofx::EnvironmentalReverb::setRoomLevel(int16_t arg0) const {
    if (!::android::media::audiofx::EnvironmentalReverb::_class) ::android::media::audiofx::EnvironmentalReverb::_class = java::fetch_class("android/media/audiofx/EnvironmentalReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRoomLevel", "(S)V");
    int16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int16_t android::media::audiofx::EnvironmentalReverb::getRoomLevel() const {
    if (!::android::media::audiofx::EnvironmentalReverb::_class) ::android::media::audiofx::EnvironmentalReverb::_class = java::fetch_class("android/media/audiofx/EnvironmentalReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRoomLevel", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

void android::media::audiofx::EnvironmentalReverb::setRoomHFLevel(int16_t arg0) const {
    if (!::android::media::audiofx::EnvironmentalReverb::_class) ::android::media::audiofx::EnvironmentalReverb::_class = java::fetch_class("android/media/audiofx/EnvironmentalReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRoomHFLevel", "(S)V");
    int16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int16_t android::media::audiofx::EnvironmentalReverb::getRoomHFLevel() const {
    if (!::android::media::audiofx::EnvironmentalReverb::_class) ::android::media::audiofx::EnvironmentalReverb::_class = java::fetch_class("android/media/audiofx/EnvironmentalReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRoomHFLevel", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

void android::media::audiofx::EnvironmentalReverb::setDecayTime(int32_t arg0) const {
    if (!::android::media::audiofx::EnvironmentalReverb::_class) ::android::media::audiofx::EnvironmentalReverb::_class = java::fetch_class("android/media/audiofx/EnvironmentalReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDecayTime", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::media::audiofx::EnvironmentalReverb::getDecayTime() const {
    if (!::android::media::audiofx::EnvironmentalReverb::_class) ::android::media::audiofx::EnvironmentalReverb::_class = java::fetch_class("android/media/audiofx/EnvironmentalReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDecayTime", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::media::audiofx::EnvironmentalReverb::setDecayHFRatio(int16_t arg0) const {
    if (!::android::media::audiofx::EnvironmentalReverb::_class) ::android::media::audiofx::EnvironmentalReverb::_class = java::fetch_class("android/media/audiofx/EnvironmentalReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDecayHFRatio", "(S)V");
    int16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int16_t android::media::audiofx::EnvironmentalReverb::getDecayHFRatio() const {
    if (!::android::media::audiofx::EnvironmentalReverb::_class) ::android::media::audiofx::EnvironmentalReverb::_class = java::fetch_class("android/media/audiofx/EnvironmentalReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDecayHFRatio", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

void android::media::audiofx::EnvironmentalReverb::setReflectionsLevel(int16_t arg0) const {
    if (!::android::media::audiofx::EnvironmentalReverb::_class) ::android::media::audiofx::EnvironmentalReverb::_class = java::fetch_class("android/media/audiofx/EnvironmentalReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReflectionsLevel", "(S)V");
    int16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int16_t android::media::audiofx::EnvironmentalReverb::getReflectionsLevel() const {
    if (!::android::media::audiofx::EnvironmentalReverb::_class) ::android::media::audiofx::EnvironmentalReverb::_class = java::fetch_class("android/media/audiofx/EnvironmentalReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReflectionsLevel", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

void android::media::audiofx::EnvironmentalReverb::setReflectionsDelay(int32_t arg0) const {
    if (!::android::media::audiofx::EnvironmentalReverb::_class) ::android::media::audiofx::EnvironmentalReverb::_class = java::fetch_class("android/media/audiofx/EnvironmentalReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReflectionsDelay", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::media::audiofx::EnvironmentalReverb::getReflectionsDelay() const {
    if (!::android::media::audiofx::EnvironmentalReverb::_class) ::android::media::audiofx::EnvironmentalReverb::_class = java::fetch_class("android/media/audiofx/EnvironmentalReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReflectionsDelay", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::media::audiofx::EnvironmentalReverb::setReverbLevel(int16_t arg0) const {
    if (!::android::media::audiofx::EnvironmentalReverb::_class) ::android::media::audiofx::EnvironmentalReverb::_class = java::fetch_class("android/media/audiofx/EnvironmentalReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReverbLevel", "(S)V");
    int16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int16_t android::media::audiofx::EnvironmentalReverb::getReverbLevel() const {
    if (!::android::media::audiofx::EnvironmentalReverb::_class) ::android::media::audiofx::EnvironmentalReverb::_class = java::fetch_class("android/media/audiofx/EnvironmentalReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReverbLevel", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

void android::media::audiofx::EnvironmentalReverb::setReverbDelay(int32_t arg0) const {
    if (!::android::media::audiofx::EnvironmentalReverb::_class) ::android::media::audiofx::EnvironmentalReverb::_class = java::fetch_class("android/media/audiofx/EnvironmentalReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReverbDelay", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::media::audiofx::EnvironmentalReverb::getReverbDelay() const {
    if (!::android::media::audiofx::EnvironmentalReverb::_class) ::android::media::audiofx::EnvironmentalReverb::_class = java::fetch_class("android/media/audiofx/EnvironmentalReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReverbDelay", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::media::audiofx::EnvironmentalReverb::setDiffusion(int16_t arg0) const {
    if (!::android::media::audiofx::EnvironmentalReverb::_class) ::android::media::audiofx::EnvironmentalReverb::_class = java::fetch_class("android/media/audiofx/EnvironmentalReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDiffusion", "(S)V");
    int16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int16_t android::media::audiofx::EnvironmentalReverb::getDiffusion() const {
    if (!::android::media::audiofx::EnvironmentalReverb::_class) ::android::media::audiofx::EnvironmentalReverb::_class = java::fetch_class("android/media/audiofx/EnvironmentalReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDiffusion", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

void android::media::audiofx::EnvironmentalReverb::setDensity(int16_t arg0) const {
    if (!::android::media::audiofx::EnvironmentalReverb::_class) ::android::media::audiofx::EnvironmentalReverb::_class = java::fetch_class("android/media/audiofx/EnvironmentalReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDensity", "(S)V");
    int16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int16_t android::media::audiofx::EnvironmentalReverb::getDensity() const {
    if (!::android::media::audiofx::EnvironmentalReverb::_class) ::android::media::audiofx::EnvironmentalReverb::_class = java::fetch_class("android/media/audiofx/EnvironmentalReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDensity", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

void android::media::audiofx::EnvironmentalReverb::setParameterListener(const ::android::media::audiofx::EnvironmentalReverb_OnParameterChangeListener& arg0) const {
    if (!::android::media::audiofx::EnvironmentalReverb::_class) ::android::media::audiofx::EnvironmentalReverb::_class = java::fetch_class("android/media/audiofx/EnvironmentalReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParameterListener", "(Landroid/media/audiofx/EnvironmentalReverb$OnParameterChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::media::audiofx::EnvironmentalReverb_Settings android::media::audiofx::EnvironmentalReverb::getProperties() const {
    if (!::android::media::audiofx::EnvironmentalReverb::_class) ::android::media::audiofx::EnvironmentalReverb::_class = java::fetch_class("android/media/audiofx/EnvironmentalReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProperties", "()Landroid/media/audiofx/EnvironmentalReverb$Settings;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::media::audiofx::EnvironmentalReverb_Settings _ret(ret);
    return _ret;
}

void android::media::audiofx::EnvironmentalReverb::setProperties(const ::android::media::audiofx::EnvironmentalReverb_Settings& arg0) const {
    if (!::android::media::audiofx::EnvironmentalReverb::_class) ::android::media::audiofx::EnvironmentalReverb::_class = java::fetch_class("android/media/audiofx/EnvironmentalReverb");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProperties", "(Landroid/media/audiofx/EnvironmentalReverb$Settings;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::audiofx::AudioEffect_OnEnableStatusChangeListener::onEnableStatusChange(const ::android::media::audiofx::AudioEffect& arg0, bool arg1) const {
    if (!::android::media::audiofx::AudioEffect_OnEnableStatusChangeListener::_class) ::android::media::audiofx::AudioEffect_OnEnableStatusChangeListener::_class = java::fetch_class("android/media/audiofx/AudioEffect$OnEnableStatusChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onEnableStatusChange", "(Landroid/media/audiofx/AudioEffect;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::media::audiofx::Equalizer_OnParameterChangeListener::onParameterChange(const ::android::media::audiofx::Equalizer& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::media::audiofx::Equalizer_OnParameterChangeListener::_class) ::android::media::audiofx::Equalizer_OnParameterChangeListener::_class = java::fetch_class("android/media/audiofx/Equalizer$OnParameterChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onParameterChange", "(Landroid/media/audiofx/Equalizer;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::media::audiofx::AudioEffect::release() const {
    if (!::android::media::audiofx::AudioEffect::_class) ::android::media::audiofx::AudioEffect::_class = java::fetch_class("android/media/audiofx/AudioEffect");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::media::audiofx::AudioEffect_Descriptor android::media::audiofx::AudioEffect::getDescriptor() const {
    if (!::android::media::audiofx::AudioEffect::_class) ::android::media::audiofx::AudioEffect::_class = java::fetch_class("android/media/audiofx/AudioEffect");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDescriptor", "()Landroid/media/audiofx/AudioEffect$Descriptor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::media::audiofx::AudioEffect_Descriptor _ret(ret);
    return _ret;
}

std::vector< ::android::media::audiofx::AudioEffect_Descriptor> android::media::audiofx::AudioEffect::queryEffects(){
    if (!::android::media::audiofx::AudioEffect::_class) ::android::media::audiofx::AudioEffect::_class = java::fetch_class("android/media/audiofx/AudioEffect");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "queryEffects", "()[Landroid/media/audiofx/AudioEffect$Descriptor;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::media::audiofx::AudioEffect_Descriptor> _ret(rets, ::android::media::audiofx::AudioEffect_Descriptor((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::media::audiofx::AudioEffect_Descriptor retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

int32_t android::media::audiofx::AudioEffect::setEnabled(bool arg0) const {
    if (!::android::media::audiofx::AudioEffect::_class) ::android::media::audiofx::AudioEffect::_class = java::fetch_class("android/media/audiofx/AudioEffect");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabled", "(Z)I");
    bool _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::media::audiofx::AudioEffect::getId() const {
    if (!::android::media::audiofx::AudioEffect::_class) ::android::media::audiofx::AudioEffect::_class = java::fetch_class("android/media/audiofx/AudioEffect");
    static jmethodID mid = java::jni->GetMethodID(_class, "getId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::media::audiofx::AudioEffect::getEnabled() const {
    if (!::android::media::audiofx::AudioEffect::_class) ::android::media::audiofx::AudioEffect::_class = java::fetch_class("android/media/audiofx/AudioEffect");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::media::audiofx::AudioEffect::hasControl() const {
    if (!::android::media::audiofx::AudioEffect::_class) ::android::media::audiofx::AudioEffect::_class = java::fetch_class("android/media/audiofx/AudioEffect");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasControl", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::media::audiofx::AudioEffect::setEnableStatusListener(const ::android::media::audiofx::AudioEffect_OnEnableStatusChangeListener& arg0) const {
    if (!::android::media::audiofx::AudioEffect::_class) ::android::media::audiofx::AudioEffect::_class = java::fetch_class("android/media/audiofx/AudioEffect");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnableStatusListener", "(Landroid/media/audiofx/AudioEffect$OnEnableStatusChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::audiofx::AudioEffect::setControlStatusListener(const ::android::media::audiofx::AudioEffect_OnControlStatusChangeListener& arg0) const {
    if (!::android::media::audiofx::AudioEffect::_class) ::android::media::audiofx::AudioEffect::_class = java::fetch_class("android/media/audiofx/AudioEffect");
    static jmethodID mid = java::jni->GetMethodID(_class, "setControlStatusListener", "(Landroid/media/audiofx/AudioEffect$OnControlStatusChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::audiofx::AudioEffect_Descriptor::AudioEffect_Descriptor() : ::java::lang::Object((jobject)0) {
    if (!::android::media::audiofx::AudioEffect_Descriptor::_class) ::android::media::audiofx::AudioEffect_Descriptor::_class = java::fetch_class("android/media/audiofx/AudioEffect$Descriptor");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::audiofx::AudioEffect_Descriptor::AudioEffect_Descriptor(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4) : ::java::lang::Object((jobject)0) {
    if (!::android::media::audiofx::AudioEffect_Descriptor::_class) ::android::media::audiofx::AudioEffect_Descriptor::_class = java::fetch_class("android/media/audiofx/AudioEffect$Descriptor");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::audiofx::PresetReverb_Settings::PresetReverb_Settings() : ::java::lang::Object((jobject)0) {
    if (!::android::media::audiofx::PresetReverb_Settings::_class) ::android::media::audiofx::PresetReverb_Settings::_class = java::fetch_class("android/media/audiofx/PresetReverb$Settings");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::audiofx::PresetReverb_Settings::PresetReverb_Settings(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::media::audiofx::PresetReverb_Settings::_class) ::android::media::audiofx::PresetReverb_Settings::_class = java::fetch_class("android/media/audiofx/PresetReverb$Settings");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String android::media::audiofx::PresetReverb_Settings::toString() const {
    if (!::android::media::audiofx::PresetReverb_Settings::_class) ::android::media::audiofx::PresetReverb_Settings::_class = java::fetch_class("android/media/audiofx/PresetReverb$Settings");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::audiofx::Equalizer::Equalizer(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::media::audiofx::AudioEffect((jobject)0) {
    if (!::android::media::audiofx::Equalizer::_class) ::android::media::audiofx::Equalizer::_class = java::fetch_class("android/media/audiofx/Equalizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int16_t android::media::audiofx::Equalizer::getNumberOfBands() const {
    if (!::android::media::audiofx::Equalizer::_class) ::android::media::audiofx::Equalizer::_class = java::fetch_class("android/media/audiofx/Equalizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNumberOfBands", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

std::vector< int16_t> android::media::audiofx::Equalizer::getBandLevelRange() const {
    if (!::android::media::audiofx::Equalizer::_class) ::android::media::audiofx::Equalizer::_class = java::fetch_class("android/media/audiofx/Equalizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBandLevelRange", "()[S");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jshort* reta = java::jni->GetShortArrayElements((jshortArray)ret, nullptr);
    std::vector< int16_t> _ret(reta, reta+rets);
    java::jni->ReleaseShortArrayElements((jshortArray)ret, reta, JNI_ABORT);
    return _ret;
}

void android::media::audiofx::Equalizer::setBandLevel(int16_t arg0, int16_t arg1) const {
    if (!::android::media::audiofx::Equalizer::_class) ::android::media::audiofx::Equalizer::_class = java::fetch_class("android/media/audiofx/Equalizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBandLevel", "(SS)V");
    int16_t _arg0 = arg0;
    int16_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int16_t android::media::audiofx::Equalizer::getBandLevel(int16_t arg0) const {
    if (!::android::media::audiofx::Equalizer::_class) ::android::media::audiofx::Equalizer::_class = java::fetch_class("android/media/audiofx/Equalizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBandLevel", "(S)S");
    int16_t _arg0 = arg0;
    return java::jni->CallShortMethod(obj, mid, _arg0);
}

int32_t android::media::audiofx::Equalizer::getCenterFreq(int16_t arg0) const {
    if (!::android::media::audiofx::Equalizer::_class) ::android::media::audiofx::Equalizer::_class = java::fetch_class("android/media/audiofx/Equalizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCenterFreq", "(S)I");
    int16_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

std::vector< int32_t> android::media::audiofx::Equalizer::getBandFreqRange(int16_t arg0) const {
    if (!::android::media::audiofx::Equalizer::_class) ::android::media::audiofx::Equalizer::_class = java::fetch_class("android/media/audiofx/Equalizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBandFreqRange", "(S)[I");
    int16_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

int16_t android::media::audiofx::Equalizer::getBand(int32_t arg0) const {
    if (!::android::media::audiofx::Equalizer::_class) ::android::media::audiofx::Equalizer::_class = java::fetch_class("android/media/audiofx/Equalizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBand", "(I)S");
    int32_t _arg0 = arg0;
    return java::jni->CallShortMethod(obj, mid, _arg0);
}

int16_t android::media::audiofx::Equalizer::getCurrentPreset() const {
    if (!::android::media::audiofx::Equalizer::_class) ::android::media::audiofx::Equalizer::_class = java::fetch_class("android/media/audiofx/Equalizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentPreset", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

void android::media::audiofx::Equalizer::usePreset(int16_t arg0) const {
    if (!::android::media::audiofx::Equalizer::_class) ::android::media::audiofx::Equalizer::_class = java::fetch_class("android/media/audiofx/Equalizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "usePreset", "(S)V");
    int16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int16_t android::media::audiofx::Equalizer::getNumberOfPresets() const {
    if (!::android::media::audiofx::Equalizer::_class) ::android::media::audiofx::Equalizer::_class = java::fetch_class("android/media/audiofx/Equalizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNumberOfPresets", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

::java::lang::String android::media::audiofx::Equalizer::getPresetName(int16_t arg0) const {
    if (!::android::media::audiofx::Equalizer::_class) ::android::media::audiofx::Equalizer::_class = java::fetch_class("android/media/audiofx/Equalizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPresetName", "(S)Ljava/lang/String;");
    int16_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::media::audiofx::Equalizer::setParameterListener(const ::android::media::audiofx::Equalizer_OnParameterChangeListener& arg0) const {
    if (!::android::media::audiofx::Equalizer::_class) ::android::media::audiofx::Equalizer::_class = java::fetch_class("android/media/audiofx/Equalizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParameterListener", "(Landroid/media/audiofx/Equalizer$OnParameterChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::media::audiofx::Equalizer_Settings android::media::audiofx::Equalizer::getProperties() const {
    if (!::android::media::audiofx::Equalizer::_class) ::android::media::audiofx::Equalizer::_class = java::fetch_class("android/media/audiofx/Equalizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProperties", "()Landroid/media/audiofx/Equalizer$Settings;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::media::audiofx::Equalizer_Settings _ret(ret);
    return _ret;
}

void android::media::audiofx::Equalizer::setProperties(const ::android::media::audiofx::Equalizer_Settings& arg0) const {
    if (!::android::media::audiofx::Equalizer::_class) ::android::media::audiofx::Equalizer::_class = java::fetch_class("android/media/audiofx/Equalizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProperties", "(Landroid/media/audiofx/Equalizer$Settings;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::audiofx::Equalizer_Settings::Equalizer_Settings() : ::java::lang::Object((jobject)0) {
    if (!::android::media::audiofx::Equalizer_Settings::_class) ::android::media::audiofx::Equalizer_Settings::_class = java::fetch_class("android/media/audiofx/Equalizer$Settings");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::audiofx::Equalizer_Settings::Equalizer_Settings(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::media::audiofx::Equalizer_Settings::_class) ::android::media::audiofx::Equalizer_Settings::_class = java::fetch_class("android/media/audiofx/Equalizer$Settings");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String android::media::audiofx::Equalizer_Settings::toString() const {
    if (!::android::media::audiofx::Equalizer_Settings::_class) ::android::media::audiofx::Equalizer_Settings::_class = java::fetch_class("android/media/audiofx/Equalizer$Settings");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

