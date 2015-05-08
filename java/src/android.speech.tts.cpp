#include "java-core.hpp"
#include <memory>
#include "android.content.Context.hpp"
#include "android.content.Intent.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.IBinder.hpp"
#include "android.speech.tts.SynthesisCallback.hpp"
#include "android.speech.tts.SynthesisRequest.hpp"
#include "android.speech.tts.TextToSpeech.hpp"
#include "android.speech.tts.TextToSpeechService.hpp"
#include "android.speech.tts.UtteranceProgressListener.hpp"
#include "java.lang.String.hpp"
#include "java.util.HashMap.hpp"
#include "java.util.List.hpp"
#include "java.util.Locale.hpp"
#include "java.util.Set.hpp"

jclass android::speech::tts::TextToSpeech_OnUtteranceCompletedListener::_class = nullptr;
jclass android::speech::tts::SynthesisRequest::_class = nullptr;
jclass android::speech::tts::SynthesisCallback::_class = nullptr;
jclass android::speech::tts::TextToSpeechService::_class = nullptr;
jclass android::speech::tts::TextToSpeech_Engine::_class = nullptr;
jclass android::speech::tts::TextToSpeech_EngineInfo::_class = nullptr;
jclass android::speech::tts::UtteranceProgressListener::_class = nullptr;
jclass android::speech::tts::TextToSpeech::_class = nullptr;
jclass android::speech::tts::TextToSpeech_OnInitListener::_class = nullptr;

void android::speech::tts::TextToSpeech_OnUtteranceCompletedListener::onUtteranceCompleted(const ::java::lang::String& arg0) const {
    if (!::android::speech::tts::TextToSpeech_OnUtteranceCompletedListener::_class) ::android::speech::tts::TextToSpeech_OnUtteranceCompletedListener::_class = java::fetch_class("android/speech/tts/TextToSpeech$OnUtteranceCompletedListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onUtteranceCompleted", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::speech::tts::SynthesisRequest::SynthesisRequest(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::speech::tts::SynthesisRequest::_class) ::android::speech::tts::SynthesisRequest::_class = java::fetch_class("android/speech/tts/SynthesisRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String android::speech::tts::SynthesisRequest::getText() const {
    if (!::android::speech::tts::SynthesisRequest::_class) ::android::speech::tts::SynthesisRequest::_class = java::fetch_class("android/speech/tts/SynthesisRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::speech::tts::SynthesisRequest::getLanguage() const {
    if (!::android::speech::tts::SynthesisRequest::_class) ::android::speech::tts::SynthesisRequest::_class = java::fetch_class("android/speech/tts/SynthesisRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLanguage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::speech::tts::SynthesisRequest::getCountry() const {
    if (!::android::speech::tts::SynthesisRequest::_class) ::android::speech::tts::SynthesisRequest::_class = java::fetch_class("android/speech/tts/SynthesisRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCountry", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::speech::tts::SynthesisRequest::getVariant() const {
    if (!::android::speech::tts::SynthesisRequest::_class) ::android::speech::tts::SynthesisRequest::_class = java::fetch_class("android/speech/tts/SynthesisRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVariant", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::speech::tts::SynthesisRequest::getSpeechRate() const {
    if (!::android::speech::tts::SynthesisRequest::_class) ::android::speech::tts::SynthesisRequest::_class = java::fetch_class("android/speech/tts/SynthesisRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpeechRate", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::speech::tts::SynthesisRequest::getPitch() const {
    if (!::android::speech::tts::SynthesisRequest::_class) ::android::speech::tts::SynthesisRequest::_class = java::fetch_class("android/speech/tts/SynthesisRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPitch", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::os::Bundle android::speech::tts::SynthesisRequest::getParams() const {
    if (!::android::speech::tts::SynthesisRequest::_class) ::android::speech::tts::SynthesisRequest::_class = java::fetch_class("android/speech/tts/SynthesisRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParams", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

int32_t android::speech::tts::SynthesisCallback::getMaxBufferSize() const {
    if (!::android::speech::tts::SynthesisCallback::_class) ::android::speech::tts::SynthesisCallback::_class = java::fetch_class("android/speech/tts/SynthesisCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxBufferSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::speech::tts::SynthesisCallback::start(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::speech::tts::SynthesisCallback::_class) ::android::speech::tts::SynthesisCallback::_class = java::fetch_class("android/speech/tts/SynthesisCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "(III)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::speech::tts::SynthesisCallback::audioAvailable(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::speech::tts::SynthesisCallback::_class) ::android::speech::tts::SynthesisCallback::_class = java::fetch_class("android/speech/tts/SynthesisCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "audioAvailable", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::speech::tts::SynthesisCallback::done() const {
    if (!::android::speech::tts::SynthesisCallback::_class) ::android::speech::tts::SynthesisCallback::_class = java::fetch_class("android/speech/tts/SynthesisCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "done", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::speech::tts::SynthesisCallback::error() const {
    if (!::android::speech::tts::SynthesisCallback::_class) ::android::speech::tts::SynthesisCallback::_class = java::fetch_class("android/speech/tts/SynthesisCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "error", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::speech::tts::TextToSpeechService::TextToSpeechService() : ::java::lang::Object((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {
    if (!::android::speech::tts::TextToSpeechService::_class) ::android::speech::tts::TextToSpeechService::_class = java::fetch_class("android/speech/tts/TextToSpeechService");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::speech::tts::TextToSpeechService::onCreate() const {
    if (!::android::speech::tts::TextToSpeechService::_class) ::android::speech::tts::TextToSpeechService::_class = java::fetch_class("android/speech/tts/TextToSpeechService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::speech::tts::TextToSpeechService::onDestroy() const {
    if (!::android::speech::tts::TextToSpeechService::_class) ::android::speech::tts::TextToSpeechService::_class = java::fetch_class("android/speech/tts/TextToSpeechService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDestroy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::os::IBinder android::speech::tts::TextToSpeechService::onBind(const ::android::content::Intent& arg0) const {
    if (!::android::speech::tts::TextToSpeechService::_class) ::android::speech::tts::TextToSpeechService::_class = java::fetch_class("android/speech/tts/TextToSpeechService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBind", "(Landroid/content/Intent;)Landroid/os/IBinder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::speech::tts::TextToSpeech_Engine::TextToSpeech_Engine(const ::android::speech::tts::TextToSpeech& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::speech::tts::TextToSpeech_Engine::_class) ::android::speech::tts::TextToSpeech_Engine::_class = java::fetch_class("android/speech/tts/TextToSpeech$Engine");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/speech/tts/TextToSpeech;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::speech::tts::TextToSpeech_EngineInfo::TextToSpeech_EngineInfo() : ::java::lang::Object((jobject)0) {
    if (!::android::speech::tts::TextToSpeech_EngineInfo::_class) ::android::speech::tts::TextToSpeech_EngineInfo::_class = java::fetch_class("android/speech/tts/TextToSpeech$EngineInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::speech::tts::TextToSpeech_EngineInfo::toString() const {
    if (!::android::speech::tts::TextToSpeech_EngineInfo::_class) ::android::speech::tts::TextToSpeech_EngineInfo::_class = java::fetch_class("android/speech/tts/TextToSpeech$EngineInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::speech::tts::UtteranceProgressListener::UtteranceProgressListener() : ::java::lang::Object((jobject)0) {
    if (!::android::speech::tts::UtteranceProgressListener::_class) ::android::speech::tts::UtteranceProgressListener::_class = java::fetch_class("android/speech/tts/UtteranceProgressListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::speech::tts::UtteranceProgressListener::onStart(const ::java::lang::String& arg0) const {
    if (!::android::speech::tts::UtteranceProgressListener::_class) ::android::speech::tts::UtteranceProgressListener::_class = java::fetch_class("android/speech/tts/UtteranceProgressListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStart", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::speech::tts::UtteranceProgressListener::onDone(const ::java::lang::String& arg0) const {
    if (!::android::speech::tts::UtteranceProgressListener::_class) ::android::speech::tts::UtteranceProgressListener::_class = java::fetch_class("android/speech/tts/UtteranceProgressListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDone", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::speech::tts::UtteranceProgressListener::onError(const ::java::lang::String& arg0) const {
    if (!::android::speech::tts::UtteranceProgressListener::_class) ::android::speech::tts::UtteranceProgressListener::_class = java::fetch_class("android/speech/tts/UtteranceProgressListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onError", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::speech::tts::TextToSpeech::TextToSpeech(const ::android::content::Context& arg0, const ::android::speech::tts::TextToSpeech_OnInitListener& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::speech::tts::TextToSpeech::_class) ::android::speech::tts::TextToSpeech::_class = java::fetch_class("android/speech/tts/TextToSpeech");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/speech/tts/TextToSpeech$OnInitListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::speech::tts::TextToSpeech::TextToSpeech(const ::android::content::Context& arg0, const ::android::speech::tts::TextToSpeech_OnInitListener& arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::speech::tts::TextToSpeech::_class) ::android::speech::tts::TextToSpeech::_class = java::fetch_class("android/speech/tts/TextToSpeech");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/speech/tts/TextToSpeech$OnInitListener;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::speech::tts::TextToSpeech::shutdown() const {
    if (!::android::speech::tts::TextToSpeech::_class) ::android::speech::tts::TextToSpeech::_class = java::fetch_class("android/speech/tts/TextToSpeech");
    static jmethodID mid = java::jni->GetMethodID(_class, "shutdown", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::speech::tts::TextToSpeech::addSpeech(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2) const {
    if (!::android::speech::tts::TextToSpeech::_class) ::android::speech::tts::TextToSpeech::_class = java::fetch_class("android/speech/tts/TextToSpeech");
    static jmethodID mid = java::jni->GetMethodID(_class, "addSpeech", "(Ljava/lang/String;Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::speech::tts::TextToSpeech::addSpeech(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::speech::tts::TextToSpeech::_class) ::android::speech::tts::TextToSpeech::_class = java::fetch_class("android/speech/tts/TextToSpeech");
    static jmethodID mid = java::jni->GetMethodID(_class, "addSpeech", "(Ljava/lang/String;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::speech::tts::TextToSpeech::addEarcon(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2) const {
    if (!::android::speech::tts::TextToSpeech::_class) ::android::speech::tts::TextToSpeech::_class = java::fetch_class("android/speech/tts/TextToSpeech");
    static jmethodID mid = java::jni->GetMethodID(_class, "addEarcon", "(Ljava/lang/String;Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::speech::tts::TextToSpeech::addEarcon(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::speech::tts::TextToSpeech::_class) ::android::speech::tts::TextToSpeech::_class = java::fetch_class("android/speech/tts/TextToSpeech");
    static jmethodID mid = java::jni->GetMethodID(_class, "addEarcon", "(Ljava/lang/String;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::speech::tts::TextToSpeech::speak(const ::java::lang::String& arg0, int32_t arg1, const ::java::util::HashMap& arg2) const {
    if (!::android::speech::tts::TextToSpeech::_class) ::android::speech::tts::TextToSpeech::_class = java::fetch_class("android/speech/tts/TextToSpeech");
    static jmethodID mid = java::jni->GetMethodID(_class, "speak", "(Ljava/lang/String;ILjava/util/HashMap;)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::speech::tts::TextToSpeech::playEarcon(const ::java::lang::String& arg0, int32_t arg1, const ::java::util::HashMap& arg2) const {
    if (!::android::speech::tts::TextToSpeech::_class) ::android::speech::tts::TextToSpeech::_class = java::fetch_class("android/speech/tts/TextToSpeech");
    static jmethodID mid = java::jni->GetMethodID(_class, "playEarcon", "(Ljava/lang/String;ILjava/util/HashMap;)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::speech::tts::TextToSpeech::playSilence(int64_t arg0, int32_t arg1, const ::java::util::HashMap& arg2) const {
    if (!::android::speech::tts::TextToSpeech::_class) ::android::speech::tts::TextToSpeech::_class = java::fetch_class("android/speech/tts/TextToSpeech");
    static jmethodID mid = java::jni->GetMethodID(_class, "playSilence", "(JILjava/util/HashMap;)I");
    int64_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::util::Set android::speech::tts::TextToSpeech::getFeatures(const ::java::util::Locale& arg0) const {
    if (!::android::speech::tts::TextToSpeech::_class) ::android::speech::tts::TextToSpeech::_class = java::fetch_class("android/speech/tts/TextToSpeech");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFeatures", "(Ljava/util/Locale;)Ljava/util/Set;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Set _ret(ret);
    return _ret;
}

bool android::speech::tts::TextToSpeech::isSpeaking() const {
    if (!::android::speech::tts::TextToSpeech::_class) ::android::speech::tts::TextToSpeech::_class = java::fetch_class("android/speech/tts/TextToSpeech");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSpeaking", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::speech::tts::TextToSpeech::stop() const {
    if (!::android::speech::tts::TextToSpeech::_class) ::android::speech::tts::TextToSpeech::_class = java::fetch_class("android/speech/tts/TextToSpeech");
    static jmethodID mid = java::jni->GetMethodID(_class, "stop", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::speech::tts::TextToSpeech::setSpeechRate(float arg0) const {
    if (!::android::speech::tts::TextToSpeech::_class) ::android::speech::tts::TextToSpeech::_class = java::fetch_class("android/speech/tts/TextToSpeech");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSpeechRate", "(F)I");
    float _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::speech::tts::TextToSpeech::setPitch(float arg0) const {
    if (!::android::speech::tts::TextToSpeech::_class) ::android::speech::tts::TextToSpeech::_class = java::fetch_class("android/speech/tts/TextToSpeech");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPitch", "(F)I");
    float _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::speech::tts::TextToSpeech::setLanguage(const ::java::util::Locale& arg0) const {
    if (!::android::speech::tts::TextToSpeech::_class) ::android::speech::tts::TextToSpeech::_class = java::fetch_class("android/speech/tts/TextToSpeech");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLanguage", "(Ljava/util/Locale;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::util::Locale android::speech::tts::TextToSpeech::getLanguage() const {
    if (!::android::speech::tts::TextToSpeech::_class) ::android::speech::tts::TextToSpeech::_class = java::fetch_class("android/speech/tts/TextToSpeech");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLanguage", "()Ljava/util/Locale;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Locale _ret(ret);
    return _ret;
}

int32_t android::speech::tts::TextToSpeech::isLanguageAvailable(const ::java::util::Locale& arg0) const {
    if (!::android::speech::tts::TextToSpeech::_class) ::android::speech::tts::TextToSpeech::_class = java::fetch_class("android/speech/tts/TextToSpeech");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLanguageAvailable", "(Ljava/util/Locale;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::speech::tts::TextToSpeech::synthesizeToFile(const ::java::lang::String& arg0, const ::java::util::HashMap& arg1, const ::java::lang::String& arg2) const {
    if (!::android::speech::tts::TextToSpeech::_class) ::android::speech::tts::TextToSpeech::_class = java::fetch_class("android/speech/tts/TextToSpeech");
    static jmethodID mid = java::jni->GetMethodID(_class, "synthesizeToFile", "(Ljava/lang/String;Ljava/util/HashMap;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::speech::tts::TextToSpeech::setOnUtteranceCompletedListener(const ::android::speech::tts::TextToSpeech_OnUtteranceCompletedListener& arg0) const {
    if (!::android::speech::tts::TextToSpeech::_class) ::android::speech::tts::TextToSpeech::_class = java::fetch_class("android/speech/tts/TextToSpeech");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnUtteranceCompletedListener", "(Landroid/speech/tts/TextToSpeech$OnUtteranceCompletedListener;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::speech::tts::TextToSpeech::setOnUtteranceProgressListener(const ::android::speech::tts::UtteranceProgressListener& arg0) const {
    if (!::android::speech::tts::TextToSpeech::_class) ::android::speech::tts::TextToSpeech::_class = java::fetch_class("android/speech/tts/TextToSpeech");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnUtteranceProgressListener", "(Landroid/speech/tts/UtteranceProgressListener;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::speech::tts::TextToSpeech::setEngineByPackageName(const ::java::lang::String& arg0) const {
    if (!::android::speech::tts::TextToSpeech::_class) ::android::speech::tts::TextToSpeech::_class = java::fetch_class("android/speech/tts/TextToSpeech");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEngineByPackageName", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String android::speech::tts::TextToSpeech::getDefaultEngine() const {
    if (!::android::speech::tts::TextToSpeech::_class) ::android::speech::tts::TextToSpeech::_class = java::fetch_class("android/speech/tts/TextToSpeech");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaultEngine", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::speech::tts::TextToSpeech::areDefaultsEnforced() const {
    if (!::android::speech::tts::TextToSpeech::_class) ::android::speech::tts::TextToSpeech::_class = java::fetch_class("android/speech/tts/TextToSpeech");
    static jmethodID mid = java::jni->GetMethodID(_class, "areDefaultsEnforced", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::util::List android::speech::tts::TextToSpeech::getEngines() const {
    if (!::android::speech::tts::TextToSpeech::_class) ::android::speech::tts::TextToSpeech::_class = java::fetch_class("android/speech/tts/TextToSpeech");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEngines", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

void android::speech::tts::TextToSpeech_OnInitListener::onInit(int32_t arg0) const {
    if (!::android::speech::tts::TextToSpeech_OnInitListener::_class) ::android::speech::tts::TextToSpeech_OnInitListener::_class = java::fetch_class("android/speech/tts/TextToSpeech$OnInitListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInit", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

