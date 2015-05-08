#include "java-core.hpp"
#include <memory>
#include "android.content.ComponentName.hpp"
#include "android.content.Context.hpp"
#include "android.content.Intent.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.IBinder.hpp"
#include "android.speech.RecognitionListener.hpp"
#include "android.speech.RecognitionService.hpp"
#include "android.speech.RecognizerIntent.hpp"
#include "android.speech.RecognizerResultsIntent.hpp"
#include "android.speech.SpeechRecognizer.hpp"

jclass android::speech::RecognizerIntent::_class = nullptr;
jclass android::speech::RecognitionListener::_class = nullptr;
jclass android::speech::RecognitionService_Callback::_class = nullptr;
jclass android::speech::RecognizerResultsIntent::_class = nullptr;
jclass android::speech::SpeechRecognizer::_class = nullptr;
jclass android::speech::RecognitionService::_class = nullptr;

::android::content::Intent android::speech::RecognizerIntent::getVoiceDetailsIntent(const ::android::content::Context& arg0){
    if (!::android::speech::RecognizerIntent::_class) ::android::speech::RecognizerIntent::_class = java::fetch_class("android/speech/RecognizerIntent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getVoiceDetailsIntent", "(Landroid/content/Context;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

void android::speech::RecognitionListener::onReadyForSpeech(const ::android::os::Bundle& arg0) const {
    if (!::android::speech::RecognitionListener::_class) ::android::speech::RecognitionListener::_class = java::fetch_class("android/speech/RecognitionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onReadyForSpeech", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::speech::RecognitionListener::onBeginningOfSpeech() const {
    if (!::android::speech::RecognitionListener::_class) ::android::speech::RecognitionListener::_class = java::fetch_class("android/speech/RecognitionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBeginningOfSpeech", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::speech::RecognitionListener::onRmsChanged(float arg0) const {
    if (!::android::speech::RecognitionListener::_class) ::android::speech::RecognitionListener::_class = java::fetch_class("android/speech/RecognitionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRmsChanged", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::speech::RecognitionListener::onBufferReceived(const std::vector< int8_t>& arg0) const {
    if (!::android::speech::RecognitionListener::_class) ::android::speech::RecognitionListener::_class = java::fetch_class("android/speech/RecognitionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBufferReceived", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::speech::RecognitionListener::onEndOfSpeech() const {
    if (!::android::speech::RecognitionListener::_class) ::android::speech::RecognitionListener::_class = java::fetch_class("android/speech/RecognitionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onEndOfSpeech", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::speech::RecognitionListener::onError(int32_t arg0) const {
    if (!::android::speech::RecognitionListener::_class) ::android::speech::RecognitionListener::_class = java::fetch_class("android/speech/RecognitionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onError", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::speech::RecognitionListener::onResults(const ::android::os::Bundle& arg0) const {
    if (!::android::speech::RecognitionListener::_class) ::android::speech::RecognitionListener::_class = java::fetch_class("android/speech/RecognitionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onResults", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::speech::RecognitionListener::onPartialResults(const ::android::os::Bundle& arg0) const {
    if (!::android::speech::RecognitionListener::_class) ::android::speech::RecognitionListener::_class = java::fetch_class("android/speech/RecognitionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPartialResults", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::speech::RecognitionListener::onEvent(int32_t arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::speech::RecognitionListener::_class) ::android::speech::RecognitionListener::_class = java::fetch_class("android/speech/RecognitionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onEvent", "(ILandroid/os/Bundle;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::speech::RecognitionService_Callback::beginningOfSpeech() const {
    if (!::android::speech::RecognitionService_Callback::_class) ::android::speech::RecognitionService_Callback::_class = java::fetch_class("android/speech/RecognitionService$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "beginningOfSpeech", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::speech::RecognitionService_Callback::bufferReceived(const std::vector< int8_t>& arg0) const {
    if (!::android::speech::RecognitionService_Callback::_class) ::android::speech::RecognitionService_Callback::_class = java::fetch_class("android/speech/RecognitionService$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "bufferReceived", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::speech::RecognitionService_Callback::endOfSpeech() const {
    if (!::android::speech::RecognitionService_Callback::_class) ::android::speech::RecognitionService_Callback::_class = java::fetch_class("android/speech/RecognitionService$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "endOfSpeech", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::speech::RecognitionService_Callback::error(int32_t arg0) const {
    if (!::android::speech::RecognitionService_Callback::_class) ::android::speech::RecognitionService_Callback::_class = java::fetch_class("android/speech/RecognitionService$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "error", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::speech::RecognitionService_Callback::partialResults(const ::android::os::Bundle& arg0) const {
    if (!::android::speech::RecognitionService_Callback::_class) ::android::speech::RecognitionService_Callback::_class = java::fetch_class("android/speech/RecognitionService$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "partialResults", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::speech::RecognitionService_Callback::readyForSpeech(const ::android::os::Bundle& arg0) const {
    if (!::android::speech::RecognitionService_Callback::_class) ::android::speech::RecognitionService_Callback::_class = java::fetch_class("android/speech/RecognitionService$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "readyForSpeech", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::speech::RecognitionService_Callback::results(const ::android::os::Bundle& arg0) const {
    if (!::android::speech::RecognitionService_Callback::_class) ::android::speech::RecognitionService_Callback::_class = java::fetch_class("android/speech/RecognitionService$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "results", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::speech::RecognitionService_Callback::rmsChanged(float arg0) const {
    if (!::android::speech::RecognitionService_Callback::_class) ::android::speech::RecognitionService_Callback::_class = java::fetch_class("android/speech/RecognitionService$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "rmsChanged", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::speech::SpeechRecognizer::isRecognitionAvailable(const ::android::content::Context& arg0){
    if (!::android::speech::SpeechRecognizer::_class) ::android::speech::SpeechRecognizer::_class = java::fetch_class("android/speech/SpeechRecognizer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isRecognitionAvailable", "(Landroid/content/Context;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

::android::speech::SpeechRecognizer android::speech::SpeechRecognizer::createSpeechRecognizer(const ::android::content::Context& arg0){
    if (!::android::speech::SpeechRecognizer::_class) ::android::speech::SpeechRecognizer::_class = java::fetch_class("android/speech/SpeechRecognizer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createSpeechRecognizer", "(Landroid/content/Context;)Landroid/speech/SpeechRecognizer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::speech::SpeechRecognizer _ret(ret);
    return _ret;
}

::android::speech::SpeechRecognizer android::speech::SpeechRecognizer::createSpeechRecognizer(const ::android::content::Context& arg0, const ::android::content::ComponentName& arg1){
    if (!::android::speech::SpeechRecognizer::_class) ::android::speech::SpeechRecognizer::_class = java::fetch_class("android/speech/SpeechRecognizer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createSpeechRecognizer", "(Landroid/content/Context;Landroid/content/ComponentName;)Landroid/speech/SpeechRecognizer;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::speech::SpeechRecognizer _ret(ret);
    return _ret;
}

void android::speech::SpeechRecognizer::setRecognitionListener(const ::android::speech::RecognitionListener& arg0) const {
    if (!::android::speech::SpeechRecognizer::_class) ::android::speech::SpeechRecognizer::_class = java::fetch_class("android/speech/SpeechRecognizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRecognitionListener", "(Landroid/speech/RecognitionListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::speech::SpeechRecognizer::startListening(const ::android::content::Intent& arg0) const {
    if (!::android::speech::SpeechRecognizer::_class) ::android::speech::SpeechRecognizer::_class = java::fetch_class("android/speech/SpeechRecognizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "startListening", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::speech::SpeechRecognizer::stopListening() const {
    if (!::android::speech::SpeechRecognizer::_class) ::android::speech::SpeechRecognizer::_class = java::fetch_class("android/speech/SpeechRecognizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopListening", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::speech::SpeechRecognizer::cancel() const {
    if (!::android::speech::SpeechRecognizer::_class) ::android::speech::SpeechRecognizer::_class = java::fetch_class("android/speech/SpeechRecognizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::speech::SpeechRecognizer::destroy() const {
    if (!::android::speech::SpeechRecognizer::_class) ::android::speech::SpeechRecognizer::_class = java::fetch_class("android/speech/SpeechRecognizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "destroy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::speech::RecognitionService::RecognitionService() : ::java::lang::Object((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {
    if (!::android::speech::RecognitionService::_class) ::android::speech::RecognitionService::_class = java::fetch_class("android/speech/RecognitionService");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::os::IBinder android::speech::RecognitionService::onBind(const ::android::content::Intent& arg0) const {
    if (!::android::speech::RecognitionService::_class) ::android::speech::RecognitionService::_class = java::fetch_class("android/speech/RecognitionService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBind", "(Landroid/content/Intent;)Landroid/os/IBinder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

void android::speech::RecognitionService::onDestroy() const {
    if (!::android::speech::RecognitionService::_class) ::android::speech::RecognitionService::_class = java::fetch_class("android/speech/RecognitionService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDestroy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

