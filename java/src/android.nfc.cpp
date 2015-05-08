#include "java-core.hpp"
#include <memory>
#include "android.app.Activity.hpp"
#include "android.app.PendingIntent.hpp"
#include "android.content.Context.hpp"
#include "android.content.IntentFilter.hpp"
#include "android.net.Uri.hpp"
#include "android.nfc.FormatException.hpp"
#include "android.nfc.NdefMessage.hpp"
#include "android.nfc.NdefRecord.hpp"
#include "android.nfc.NfcAdapter.hpp"
#include "android.nfc.NfcEvent.hpp"
#include "android.nfc.NfcManager.hpp"
#include "android.nfc.Tag.hpp"
#include "android.nfc.TagLostException.hpp"
#include "android.os.Parcel.hpp"
#include "java.lang.String.hpp"

jclass android::nfc::NfcManager::_class = nullptr;
jclass android::nfc::TagLostException::_class = nullptr;
jclass android::nfc::NfcEvent::_class = nullptr;
jclass android::nfc::NfcAdapter_OnNdefPushCompleteCallback::_class = nullptr;
jclass android::nfc::NdefRecord::_class = nullptr;
jclass android::nfc::FormatException::_class = nullptr;
jclass android::nfc::NfcAdapter_CreateNdefMessageCallback::_class = nullptr;
jclass android::nfc::NfcAdapter::_class = nullptr;
jclass android::nfc::NdefMessage::_class = nullptr;
jclass android::nfc::Tag::_class = nullptr;

::android::nfc::NfcAdapter android::nfc::NfcManager::getDefaultAdapter() const {
    if (!::android::nfc::NfcManager::_class) ::android::nfc::NfcManager::_class = java::fetch_class("android/nfc/NfcManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaultAdapter", "()Landroid/nfc/NfcAdapter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::nfc::NfcAdapter _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::nfc::TagLostException::TagLostException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::nfc::TagLostException::_class) ::android::nfc::TagLostException::_class = java::fetch_class("android/nfc/TagLostException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::nfc::TagLostException::TagLostException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::nfc::TagLostException::_class) ::android::nfc::TagLostException::_class = java::fetch_class("android/nfc/TagLostException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::nfc::NfcAdapter_OnNdefPushCompleteCallback::onNdefPushComplete(const ::android::nfc::NfcEvent& arg0) const {
    if (!::android::nfc::NfcAdapter_OnNdefPushCompleteCallback::_class) ::android::nfc::NfcAdapter_OnNdefPushCompleteCallback::_class = java::fetch_class("android/nfc/NfcAdapter$OnNdefPushCompleteCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onNdefPushComplete", "(Landroid/nfc/NfcEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::nfc::NdefRecord::NdefRecord(int16_t arg0, const std::vector< int8_t>& arg1, const std::vector< int8_t>& arg2, const std::vector< int8_t>& arg3) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::nfc::NdefRecord::_class) ::android::nfc::NdefRecord::_class = java::fetch_class("android/nfc/NdefRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(S[B[B[B)V");
    int16_t _arg0 = arg0;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jbyteArray _arg2 = java::jni->NewByteArray(arg2.size());
    java::jni->SetByteArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    jbyteArray _arg3 = java::jni->NewByteArray(arg3.size());
    java::jni->SetByteArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::nfc::NdefRecord::NdefRecord(const std::vector< int8_t>& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::nfc::NdefRecord::_class) ::android::nfc::NdefRecord::_class = java::fetch_class("android/nfc/NdefRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int16_t android::nfc::NdefRecord::getTnf() const {
    if (!::android::nfc::NdefRecord::_class) ::android::nfc::NdefRecord::_class = java::fetch_class("android/nfc/NdefRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTnf", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

std::vector< int8_t> android::nfc::NdefRecord::getType() const {
    if (!::android::nfc::NdefRecord::_class) ::android::nfc::NdefRecord::_class = java::fetch_class("android/nfc/NdefRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> android::nfc::NdefRecord::getId() const {
    if (!::android::nfc::NdefRecord::_class) ::android::nfc::NdefRecord::_class = java::fetch_class("android/nfc/NdefRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getId", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> android::nfc::NdefRecord::getPayload() const {
    if (!::android::nfc::NdefRecord::_class) ::android::nfc::NdefRecord::_class = java::fetch_class("android/nfc/NdefRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPayload", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::android::nfc::NdefRecord android::nfc::NdefRecord::createApplicationRecord(const ::java::lang::String& arg0){
    if (!::android::nfc::NdefRecord::_class) ::android::nfc::NdefRecord::_class = java::fetch_class("android/nfc/NdefRecord");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createApplicationRecord", "(Ljava/lang/String;)Landroid/nfc/NdefRecord;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::nfc::NdefRecord _ret(ret);
    return _ret;
}

::android::nfc::NdefRecord android::nfc::NdefRecord::createUri(const ::android::net::Uri& arg0){
    if (!::android::nfc::NdefRecord::_class) ::android::nfc::NdefRecord::_class = java::fetch_class("android/nfc/NdefRecord");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createUri", "(Landroid/net/Uri;)Landroid/nfc/NdefRecord;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::nfc::NdefRecord _ret(ret);
    return _ret;
}

::android::nfc::NdefRecord android::nfc::NdefRecord::createUri(const ::java::lang::String& arg0){
    if (!::android::nfc::NdefRecord::_class) ::android::nfc::NdefRecord::_class = java::fetch_class("android/nfc/NdefRecord");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createUri", "(Ljava/lang/String;)Landroid/nfc/NdefRecord;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::nfc::NdefRecord _ret(ret);
    return _ret;
}

std::vector< int8_t> android::nfc::NdefRecord::toByteArray() const {
    if (!::android::nfc::NdefRecord::_class) ::android::nfc::NdefRecord::_class = java::fetch_class("android/nfc/NdefRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "toByteArray", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t android::nfc::NdefRecord::describeContents() const {
    if (!::android::nfc::NdefRecord::_class) ::android::nfc::NdefRecord::_class = java::fetch_class("android/nfc/NdefRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::nfc::NdefRecord::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::nfc::NdefRecord::_class) ::android::nfc::NdefRecord::_class = java::fetch_class("android/nfc/NdefRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::nfc::FormatException::FormatException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::nfc::FormatException::_class) ::android::nfc::FormatException::_class = java::fetch_class("android/nfc/FormatException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::nfc::FormatException::FormatException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::nfc::FormatException::_class) ::android::nfc::FormatException::_class = java::fetch_class("android/nfc/FormatException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::nfc::NdefMessage android::nfc::NfcAdapter_CreateNdefMessageCallback::createNdefMessage(const ::android::nfc::NfcEvent& arg0) const {
    if (!::android::nfc::NfcAdapter_CreateNdefMessageCallback::_class) ::android::nfc::NfcAdapter_CreateNdefMessageCallback::_class = java::fetch_class("android/nfc/NfcAdapter$CreateNdefMessageCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "createNdefMessage", "(Landroid/nfc/NfcEvent;)Landroid/nfc/NdefMessage;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::nfc::NdefMessage _ret(ret);
    return _ret;
}

::android::nfc::NfcAdapter android::nfc::NfcAdapter::getDefaultAdapter(const ::android::content::Context& arg0){
    if (!::android::nfc::NfcAdapter::_class) ::android::nfc::NfcAdapter::_class = java::fetch_class("android/nfc/NfcAdapter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefaultAdapter", "(Landroid/content/Context;)Landroid/nfc/NfcAdapter;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::nfc::NfcAdapter _ret(ret);
    return _ret;
}

::android::nfc::NfcAdapter android::nfc::NfcAdapter::getDefaultAdapter(){
    if (!::android::nfc::NfcAdapter::_class) ::android::nfc::NfcAdapter::_class = java::fetch_class("android/nfc/NfcAdapter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefaultAdapter", "()Landroid/nfc/NfcAdapter;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::nfc::NfcAdapter _ret(ret);
    return _ret;
}

bool android::nfc::NfcAdapter::isEnabled() const {
    if (!::android::nfc::NfcAdapter::_class) ::android::nfc::NfcAdapter::_class = java::fetch_class("android/nfc/NfcAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::nfc::NfcAdapter::setNdefPushMessage(const ::android::nfc::NdefMessage& arg0, const ::android::app::Activity& arg1, const std::vector< ::android::app::Activity>& arg2) const {
    if (!::android::nfc::NfcAdapter::_class) ::android::nfc::NfcAdapter::_class = java::fetch_class("android/nfc/NfcAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNdefPushMessage", "(Landroid/nfc/NdefMessage;Landroid/app/Activity;[Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::android::app::Activity::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::android::app::Activity& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::nfc::NfcAdapter::setNdefPushMessageCallback(const ::android::nfc::NfcAdapter_CreateNdefMessageCallback& arg0, const ::android::app::Activity& arg1, const std::vector< ::android::app::Activity>& arg2) const {
    if (!::android::nfc::NfcAdapter::_class) ::android::nfc::NfcAdapter::_class = java::fetch_class("android/nfc/NfcAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNdefPushMessageCallback", "(Landroid/nfc/NfcAdapter$CreateNdefMessageCallback;Landroid/app/Activity;[Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::android::app::Activity::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::android::app::Activity& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::nfc::NfcAdapter::setOnNdefPushCompleteCallback(const ::android::nfc::NfcAdapter_OnNdefPushCompleteCallback& arg0, const ::android::app::Activity& arg1, const std::vector< ::android::app::Activity>& arg2) const {
    if (!::android::nfc::NfcAdapter::_class) ::android::nfc::NfcAdapter::_class = java::fetch_class("android/nfc/NfcAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnNdefPushCompleteCallback", "(Landroid/nfc/NfcAdapter$OnNdefPushCompleteCallback;Landroid/app/Activity;[Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::android::app::Activity::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::android::app::Activity& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::nfc::NfcAdapter::enableForegroundDispatch(const ::android::app::Activity& arg0, const ::android::app::PendingIntent& arg1, const std::vector< ::android::content::IntentFilter>& arg2, const std::vector< ::java::lang::String>& arg3) const {
    if (!::android::nfc::NfcAdapter::_class) ::android::nfc::NfcAdapter::_class = java::fetch_class("android/nfc/NfcAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "enableForegroundDispatch", "(Landroid/app/Activity;Landroid/app/PendingIntent;[Landroid/content/IntentFilter;[Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::android::content::IntentFilter::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::android::content::IntentFilter& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    unsigned arg3s = arg3.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::String::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::String& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::nfc::NfcAdapter::disableForegroundDispatch(const ::android::app::Activity& arg0) const {
    if (!::android::nfc::NfcAdapter::_class) ::android::nfc::NfcAdapter::_class = java::fetch_class("android/nfc/NfcAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "disableForegroundDispatch", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::nfc::NfcAdapter::enableForegroundNdefPush(const ::android::app::Activity& arg0, const ::android::nfc::NdefMessage& arg1) const {
    if (!::android::nfc::NfcAdapter::_class) ::android::nfc::NfcAdapter::_class = java::fetch_class("android/nfc/NfcAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "enableForegroundNdefPush", "(Landroid/app/Activity;Landroid/nfc/NdefMessage;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::nfc::NfcAdapter::disableForegroundNdefPush(const ::android::app::Activity& arg0) const {
    if (!::android::nfc::NfcAdapter::_class) ::android::nfc::NfcAdapter::_class = java::fetch_class("android/nfc/NfcAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "disableForegroundNdefPush", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::nfc::NdefMessage::NdefMessage(const std::vector< int8_t>& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::nfc::NdefMessage::_class) ::android::nfc::NdefMessage::_class = java::fetch_class("android/nfc/NdefMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::nfc::NdefMessage::NdefMessage(const std::vector< ::android::nfc::NdefRecord>& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::nfc::NdefMessage::_class) ::android::nfc::NdefMessage::_class = java::fetch_class("android/nfc/NdefMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([Landroid/nfc/NdefRecord;)V");
    unsigned arg0s = arg0.size();
    if (!::android::nfc::NdefRecord::_class) ::android::nfc::NdefRecord::_class = java::fetch_class("android/nfc/NdefRecord");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::nfc::NdefRecord::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::nfc::NdefRecord& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

std::vector< ::android::nfc::NdefRecord> android::nfc::NdefMessage::getRecords() const {
    if (!::android::nfc::NdefMessage::_class) ::android::nfc::NdefMessage::_class = java::fetch_class("android/nfc/NdefMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRecords", "()[Landroid/nfc/NdefRecord;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::nfc::NdefRecord> _ret(rets, ::android::nfc::NdefRecord((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::nfc::NdefRecord retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< int8_t> android::nfc::NdefMessage::toByteArray() const {
    if (!::android::nfc::NdefMessage::_class) ::android::nfc::NdefMessage::_class = java::fetch_class("android/nfc/NdefMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "toByteArray", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t android::nfc::NdefMessage::describeContents() const {
    if (!::android::nfc::NdefMessage::_class) ::android::nfc::NdefMessage::_class = java::fetch_class("android/nfc/NdefMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::nfc::NdefMessage::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::nfc::NdefMessage::_class) ::android::nfc::NdefMessage::_class = java::fetch_class("android/nfc/NdefMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

std::vector< int8_t> android::nfc::Tag::getId() const {
    if (!::android::nfc::Tag::_class) ::android::nfc::Tag::_class = java::fetch_class("android/nfc/Tag");
    static jmethodID mid = java::jni->GetMethodID(_class, "getId", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< ::java::lang::String> android::nfc::Tag::getTechList() const {
    if (!::android::nfc::Tag::_class) ::android::nfc::Tag::_class = java::fetch_class("android/nfc/Tag");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTechList", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::String android::nfc::Tag::toString() const {
    if (!::android::nfc::Tag::_class) ::android::nfc::Tag::_class = java::fetch_class("android/nfc/Tag");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::nfc::Tag::describeContents() const {
    if (!::android::nfc::Tag::_class) ::android::nfc::Tag::_class = java::fetch_class("android/nfc/Tag");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::nfc::Tag::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::nfc::Tag::_class) ::android::nfc::Tag::_class = java::fetch_class("android/nfc/Tag");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

