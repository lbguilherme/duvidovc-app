#include "java-core.hpp"
#include <memory>
#include "android.content.ContentValues.hpp"
#include "android.content.Context.hpp"
#include "android.drm.DrmConvertedStatus.hpp"
#include "android.drm.DrmErrorEvent.hpp"
#include "android.drm.DrmEvent.hpp"
#include "android.drm.DrmInfo.hpp"
#include "android.drm.DrmInfoEvent.hpp"
#include "android.drm.DrmInfoRequest.hpp"
#include "android.drm.DrmInfoStatus.hpp"
#include "android.drm.DrmManagerClient.hpp"
#include "android.drm.DrmRights.hpp"
#include "android.drm.DrmStore.hpp"
#include "android.drm.DrmSupportInfo.hpp"
#include "android.drm.DrmUtils.hpp"
#include "android.drm.ProcessedData.hpp"
#include "android.net.Uri.hpp"
#include "java.io.File.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.HashMap.hpp"
#include "java.util.Iterator.hpp"

jclass android::drm::DrmUtils::_class = nullptr;
jclass android::drm::DrmEvent::_class = nullptr;
jclass android::drm::DrmStore::_class = nullptr;
jclass android::drm::DrmInfo::_class = nullptr;
jclass android::drm::DrmConvertedStatus::_class = nullptr;
jclass android::drm::DrmErrorEvent::_class = nullptr;
jclass android::drm::DrmInfoRequest::_class = nullptr;
jclass android::drm::DrmStore_Action::_class = nullptr;
jclass android::drm::DrmRights::_class = nullptr;
jclass android::drm::DrmManagerClient_OnErrorListener::_class = nullptr;
jclass android::drm::DrmStore_RightsStatus::_class = nullptr;
jclass android::drm::DrmStore_Playback::_class = nullptr;
jclass android::drm::DrmManagerClient_OnEventListener::_class = nullptr;
jclass android::drm::DrmManagerClient_OnInfoListener::_class = nullptr;
jclass android::drm::DrmStore_ConstraintsColumns::_class = nullptr;
jclass android::drm::DrmManagerClient::_class = nullptr;
jclass android::drm::DrmStore_DrmObjectType::_class = nullptr;
jclass android::drm::DrmInfoEvent::_class = nullptr;
jclass android::drm::ProcessedData::_class = nullptr;
jclass android::drm::DrmSupportInfo::_class = nullptr;
jclass android::drm::DrmInfoStatus::_class = nullptr;
jclass android::drm::DrmUtils_ExtendedMetadataParser::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::drm::DrmUtils::DrmUtils() : ::java::lang::Object((jobject)0) {
    if (!::android::drm::DrmUtils::_class) ::android::drm::DrmUtils::_class = java::fetch_class("android/drm/DrmUtils");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::drm::DrmUtils_ExtendedMetadataParser android::drm::DrmUtils::getExtendedMetadataParser(const std::vector< int8_t>& arg0){
    if (!::android::drm::DrmUtils::_class) ::android::drm::DrmUtils::_class = java::fetch_class("android/drm/DrmUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getExtendedMetadataParser", "([B)Landroid/drm/DrmUtils$ExtendedMetadataParser;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::drm::DrmUtils_ExtendedMetadataParser _ret(ret);
    return _ret;
}

int32_t android::drm::DrmEvent::getUniqueId() const {
    if (!::android::drm::DrmEvent::_class) ::android::drm::DrmEvent::_class = java::fetch_class("android/drm/DrmEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUniqueId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::drm::DrmEvent::getType() const {
    if (!::android::drm::DrmEvent::_class) ::android::drm::DrmEvent::_class = java::fetch_class("android/drm/DrmEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::drm::DrmEvent::getMessage() const {
    if (!::android::drm::DrmEvent::_class) ::android::drm::DrmEvent::_class = java::fetch_class("android/drm/DrmEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object android::drm::DrmEvent::getAttribute(const ::java::lang::String& arg0) const {
    if (!::android::drm::DrmEvent::_class) ::android::drm::DrmEvent::_class = java::fetch_class("android/drm/DrmEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::drm::DrmStore::DrmStore() : ::java::lang::Object((jobject)0) {
    if (!::android::drm::DrmStore::_class) ::android::drm::DrmStore::_class = java::fetch_class("android/drm/DrmStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::drm::DrmInfo::DrmInfo(int32_t arg0, const std::vector< int8_t>& arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::drm::DrmInfo::_class) ::android::drm::DrmInfo::_class = java::fetch_class("android/drm/DrmInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I[BLjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::drm::DrmInfo::DrmInfo(int32_t arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::drm::DrmInfo::_class) ::android::drm::DrmInfo::_class = java::fetch_class("android/drm/DrmInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/lang/String;Ljava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::drm::DrmInfo::put(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::drm::DrmInfo::_class) ::android::drm::DrmInfo::_class = java::fetch_class("android/drm/DrmInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object android::drm::DrmInfo::get(const ::java::lang::String& arg0) const {
    if (!::android::drm::DrmInfo::_class) ::android::drm::DrmInfo::_class = java::fetch_class("android/drm/DrmInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Iterator android::drm::DrmInfo::keyIterator() const {
    if (!::android::drm::DrmInfo::_class) ::android::drm::DrmInfo::_class = java::fetch_class("android/drm/DrmInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "keyIterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

::java::util::Iterator android::drm::DrmInfo::iterator() const {
    if (!::android::drm::DrmInfo::_class) ::android::drm::DrmInfo::_class = java::fetch_class("android/drm/DrmInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

std::vector< int8_t> android::drm::DrmInfo::getData() const {
    if (!::android::drm::DrmInfo::_class) ::android::drm::DrmInfo::_class = java::fetch_class("android/drm/DrmInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getData", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String android::drm::DrmInfo::getMimeType() const {
    if (!::android::drm::DrmInfo::_class) ::android::drm::DrmInfo::_class = java::fetch_class("android/drm/DrmInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMimeType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::drm::DrmInfo::getInfoType() const {
    if (!::android::drm::DrmInfo::_class) ::android::drm::DrmInfo::_class = java::fetch_class("android/drm/DrmInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInfoType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::drm::DrmConvertedStatus::DrmConvertedStatus(int32_t arg0, const std::vector< int8_t>& arg1, int32_t arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::drm::DrmConvertedStatus::_class) ::android::drm::DrmConvertedStatus::_class = java::fetch_class("android/drm/DrmConvertedStatus");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I[BI)V");
    int32_t _arg0 = arg0;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::drm::DrmErrorEvent::DrmErrorEvent(int32_t arg0, int32_t arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0), ::android::drm::DrmEvent((jobject)0) {
    if (!::android::drm::DrmErrorEvent::_class) ::android::drm::DrmErrorEvent::_class = java::fetch_class("android/drm/DrmErrorEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::drm::DrmErrorEvent::DrmErrorEvent(int32_t arg0, int32_t arg1, const ::java::lang::String& arg2, const ::java::util::HashMap& arg3) : ::java::lang::Object((jobject)0), ::android::drm::DrmEvent((jobject)0) {
    if (!::android::drm::DrmErrorEvent::_class) ::android::drm::DrmErrorEvent::_class = java::fetch_class("android/drm/DrmErrorEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IILjava/lang/String;Ljava/util/HashMap;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::drm::DrmInfoRequest::DrmInfoRequest(int32_t arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::drm::DrmInfoRequest::_class) ::android::drm::DrmInfoRequest::_class = java::fetch_class("android/drm/DrmInfoRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String android::drm::DrmInfoRequest::getMimeType() const {
    if (!::android::drm::DrmInfoRequest::_class) ::android::drm::DrmInfoRequest::_class = java::fetch_class("android/drm/DrmInfoRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMimeType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::drm::DrmInfoRequest::getInfoType() const {
    if (!::android::drm::DrmInfoRequest::_class) ::android::drm::DrmInfoRequest::_class = java::fetch_class("android/drm/DrmInfoRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInfoType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::drm::DrmInfoRequest::put(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::drm::DrmInfoRequest::_class) ::android::drm::DrmInfoRequest::_class = java::fetch_class("android/drm/DrmInfoRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object android::drm::DrmInfoRequest::get(const ::java::lang::String& arg0) const {
    if (!::android::drm::DrmInfoRequest::_class) ::android::drm::DrmInfoRequest::_class = java::fetch_class("android/drm/DrmInfoRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Iterator android::drm::DrmInfoRequest::keyIterator() const {
    if (!::android::drm::DrmInfoRequest::_class) ::android::drm::DrmInfoRequest::_class = java::fetch_class("android/drm/DrmInfoRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "keyIterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

::java::util::Iterator android::drm::DrmInfoRequest::iterator() const {
    if (!::android::drm::DrmInfoRequest::_class) ::android::drm::DrmInfoRequest::_class = java::fetch_class("android/drm/DrmInfoRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::drm::DrmStore_Action::DrmStore_Action() : ::java::lang::Object((jobject)0) {
    if (!::android::drm::DrmStore_Action::_class) ::android::drm::DrmStore_Action::_class = java::fetch_class("android/drm/DrmStore$Action");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::drm::DrmRights::DrmRights(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::drm::DrmRights::_class) ::android::drm::DrmRights::_class = java::fetch_class("android/drm/DrmRights");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::drm::DrmRights::DrmRights(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::drm::DrmRights::_class) ::android::drm::DrmRights::_class = java::fetch_class("android/drm/DrmRights");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::drm::DrmRights::DrmRights(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3) : ::java::lang::Object((jobject)0) {
    if (!::android::drm::DrmRights::_class) ::android::drm::DrmRights::_class = java::fetch_class("android/drm/DrmRights");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::drm::DrmRights::DrmRights(const ::java::io::File& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::drm::DrmRights::_class) ::android::drm::DrmRights::_class = java::fetch_class("android/drm/DrmRights");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/File;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::drm::DrmRights::DrmRights(const ::android::drm::ProcessedData& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::drm::DrmRights::_class) ::android::drm::DrmRights::_class = java::fetch_class("android/drm/DrmRights");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/drm/ProcessedData;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

std::vector< int8_t> android::drm::DrmRights::getData() const {
    if (!::android::drm::DrmRights::_class) ::android::drm::DrmRights::_class = java::fetch_class("android/drm/DrmRights");
    static jmethodID mid = java::jni->GetMethodID(_class, "getData", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String android::drm::DrmRights::getMimeType() const {
    if (!::android::drm::DrmRights::_class) ::android::drm::DrmRights::_class = java::fetch_class("android/drm/DrmRights");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMimeType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::drm::DrmRights::getAccountId() const {
    if (!::android::drm::DrmRights::_class) ::android::drm::DrmRights::_class = java::fetch_class("android/drm/DrmRights");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccountId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::drm::DrmRights::getSubscriptionId() const {
    if (!::android::drm::DrmRights::_class) ::android::drm::DrmRights::_class = java::fetch_class("android/drm/DrmRights");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubscriptionId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::drm::DrmManagerClient_OnErrorListener::onError(const ::android::drm::DrmManagerClient& arg0, const ::android::drm::DrmErrorEvent& arg1) const {
    if (!::android::drm::DrmManagerClient_OnErrorListener::_class) ::android::drm::DrmManagerClient_OnErrorListener::_class = java::fetch_class("android/drm/DrmManagerClient$OnErrorListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onError", "(Landroid/drm/DrmManagerClient;Landroid/drm/DrmErrorEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::drm::DrmStore_RightsStatus::DrmStore_RightsStatus() : ::java::lang::Object((jobject)0) {
    if (!::android::drm::DrmStore_RightsStatus::_class) ::android::drm::DrmStore_RightsStatus::_class = java::fetch_class("android/drm/DrmStore$RightsStatus");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::drm::DrmStore_Playback::DrmStore_Playback() : ::java::lang::Object((jobject)0) {
    if (!::android::drm::DrmStore_Playback::_class) ::android::drm::DrmStore_Playback::_class = java::fetch_class("android/drm/DrmStore$Playback");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::drm::DrmManagerClient_OnEventListener::onEvent(const ::android::drm::DrmManagerClient& arg0, const ::android::drm::DrmEvent& arg1) const {
    if (!::android::drm::DrmManagerClient_OnEventListener::_class) ::android::drm::DrmManagerClient_OnEventListener::_class = java::fetch_class("android/drm/DrmManagerClient$OnEventListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onEvent", "(Landroid/drm/DrmManagerClient;Landroid/drm/DrmEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::drm::DrmManagerClient_OnInfoListener::onInfo(const ::android::drm::DrmManagerClient& arg0, const ::android::drm::DrmInfoEvent& arg1) const {
    if (!::android::drm::DrmManagerClient_OnInfoListener::_class) ::android::drm::DrmManagerClient_OnInfoListener::_class = java::fetch_class("android/drm/DrmManagerClient$OnInfoListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInfo", "(Landroid/drm/DrmManagerClient;Landroid/drm/DrmInfoEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::drm::DrmManagerClient::DrmManagerClient(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::drm::DrmManagerClient::_class) ::android::drm::DrmManagerClient::_class = java::fetch_class("android/drm/DrmManagerClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::drm::DrmManagerClient::setOnInfoListener(const ::android::drm::DrmManagerClient_OnInfoListener& arg0) const {
    if (!::android::drm::DrmManagerClient::_class) ::android::drm::DrmManagerClient::_class = java::fetch_class("android/drm/DrmManagerClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnInfoListener", "(Landroid/drm/DrmManagerClient$OnInfoListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::drm::DrmManagerClient::setOnEventListener(const ::android::drm::DrmManagerClient_OnEventListener& arg0) const {
    if (!::android::drm::DrmManagerClient::_class) ::android::drm::DrmManagerClient::_class = java::fetch_class("android/drm/DrmManagerClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnEventListener", "(Landroid/drm/DrmManagerClient$OnEventListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::drm::DrmManagerClient::setOnErrorListener(const ::android::drm::DrmManagerClient_OnErrorListener& arg0) const {
    if (!::android::drm::DrmManagerClient::_class) ::android::drm::DrmManagerClient::_class = java::fetch_class("android/drm/DrmManagerClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnErrorListener", "(Landroid/drm/DrmManagerClient$OnErrorListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::String> android::drm::DrmManagerClient::getAvailableDrmEngines() const {
    if (!::android::drm::DrmManagerClient::_class) ::android::drm::DrmManagerClient::_class = java::fetch_class("android/drm/DrmManagerClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAvailableDrmEngines", "()[Ljava/lang/String;");
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

::android::content::ContentValues android::drm::DrmManagerClient::getConstraints(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::drm::DrmManagerClient::_class) ::android::drm::DrmManagerClient::_class = java::fetch_class("android/drm/DrmManagerClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConstraints", "(Ljava/lang/String;I)Landroid/content/ContentValues;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::ContentValues _ret(ret);
    return _ret;
}

::android::content::ContentValues android::drm::DrmManagerClient::getMetadata(const ::java::lang::String& arg0) const {
    if (!::android::drm::DrmManagerClient::_class) ::android::drm::DrmManagerClient::_class = java::fetch_class("android/drm/DrmManagerClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMetadata", "(Ljava/lang/String;)Landroid/content/ContentValues;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::ContentValues _ret(ret);
    return _ret;
}

::android::content::ContentValues android::drm::DrmManagerClient::getConstraints(const ::android::net::Uri& arg0, int32_t arg1) const {
    if (!::android::drm::DrmManagerClient::_class) ::android::drm::DrmManagerClient::_class = java::fetch_class("android/drm/DrmManagerClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConstraints", "(Landroid/net/Uri;I)Landroid/content/ContentValues;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::ContentValues _ret(ret);
    return _ret;
}

::android::content::ContentValues android::drm::DrmManagerClient::getMetadata(const ::android::net::Uri& arg0) const {
    if (!::android::drm::DrmManagerClient::_class) ::android::drm::DrmManagerClient::_class = java::fetch_class("android/drm/DrmManagerClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMetadata", "(Landroid/net/Uri;)Landroid/content/ContentValues;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::ContentValues _ret(ret);
    return _ret;
}

int32_t android::drm::DrmManagerClient::saveRights(const ::android::drm::DrmRights& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::android::drm::DrmManagerClient::_class) ::android::drm::DrmManagerClient::_class = java::fetch_class("android/drm/DrmManagerClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "saveRights", "(Landroid/drm/DrmRights;Ljava/lang/String;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::drm::DrmManagerClient::canHandle(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::drm::DrmManagerClient::_class) ::android::drm::DrmManagerClient::_class = java::fetch_class("android/drm/DrmManagerClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "canHandle", "(Ljava/lang/String;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::drm::DrmManagerClient::canHandle(const ::android::net::Uri& arg0, const ::java::lang::String& arg1) const {
    if (!::android::drm::DrmManagerClient::_class) ::android::drm::DrmManagerClient::_class = java::fetch_class("android/drm/DrmManagerClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "canHandle", "(Landroid/net/Uri;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

int32_t android::drm::DrmManagerClient::processDrmInfo(const ::android::drm::DrmInfo& arg0) const {
    if (!::android::drm::DrmManagerClient::_class) ::android::drm::DrmManagerClient::_class = java::fetch_class("android/drm/DrmManagerClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "processDrmInfo", "(Landroid/drm/DrmInfo;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::drm::DrmInfo android::drm::DrmManagerClient::acquireDrmInfo(const ::android::drm::DrmInfoRequest& arg0) const {
    if (!::android::drm::DrmManagerClient::_class) ::android::drm::DrmManagerClient::_class = java::fetch_class("android/drm/DrmManagerClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "acquireDrmInfo", "(Landroid/drm/DrmInfoRequest;)Landroid/drm/DrmInfo;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::drm::DrmInfo _ret(ret);
    return _ret;
}

int32_t android::drm::DrmManagerClient::acquireRights(const ::android::drm::DrmInfoRequest& arg0) const {
    if (!::android::drm::DrmManagerClient::_class) ::android::drm::DrmManagerClient::_class = java::fetch_class("android/drm/DrmManagerClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "acquireRights", "(Landroid/drm/DrmInfoRequest;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::drm::DrmManagerClient::getDrmObjectType(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::drm::DrmManagerClient::_class) ::android::drm::DrmManagerClient::_class = java::fetch_class("android/drm/DrmManagerClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDrmObjectType", "(Ljava/lang/String;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::drm::DrmManagerClient::getDrmObjectType(const ::android::net::Uri& arg0, const ::java::lang::String& arg1) const {
    if (!::android::drm::DrmManagerClient::_class) ::android::drm::DrmManagerClient::_class = java::fetch_class("android/drm/DrmManagerClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDrmObjectType", "(Landroid/net/Uri;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::drm::DrmManagerClient::getOriginalMimeType(const ::java::lang::String& arg0) const {
    if (!::android::drm::DrmManagerClient::_class) ::android::drm::DrmManagerClient::_class = java::fetch_class("android/drm/DrmManagerClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOriginalMimeType", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::drm::DrmManagerClient::getOriginalMimeType(const ::android::net::Uri& arg0) const {
    if (!::android::drm::DrmManagerClient::_class) ::android::drm::DrmManagerClient::_class = java::fetch_class("android/drm/DrmManagerClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOriginalMimeType", "(Landroid/net/Uri;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::drm::DrmManagerClient::checkRightsStatus(const ::java::lang::String& arg0) const {
    if (!::android::drm::DrmManagerClient::_class) ::android::drm::DrmManagerClient::_class = java::fetch_class("android/drm/DrmManagerClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkRightsStatus", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::drm::DrmManagerClient::checkRightsStatus(const ::android::net::Uri& arg0) const {
    if (!::android::drm::DrmManagerClient::_class) ::android::drm::DrmManagerClient::_class = java::fetch_class("android/drm/DrmManagerClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkRightsStatus", "(Landroid/net/Uri;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::drm::DrmManagerClient::checkRightsStatus(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::drm::DrmManagerClient::_class) ::android::drm::DrmManagerClient::_class = java::fetch_class("android/drm/DrmManagerClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkRightsStatus", "(Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::drm::DrmManagerClient::checkRightsStatus(const ::android::net::Uri& arg0, int32_t arg1) const {
    if (!::android::drm::DrmManagerClient::_class) ::android::drm::DrmManagerClient::_class = java::fetch_class("android/drm/DrmManagerClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkRightsStatus", "(Landroid/net/Uri;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::drm::DrmManagerClient::removeRights(const ::java::lang::String& arg0) const {
    if (!::android::drm::DrmManagerClient::_class) ::android::drm::DrmManagerClient::_class = java::fetch_class("android/drm/DrmManagerClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeRights", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::drm::DrmManagerClient::removeRights(const ::android::net::Uri& arg0) const {
    if (!::android::drm::DrmManagerClient::_class) ::android::drm::DrmManagerClient::_class = java::fetch_class("android/drm/DrmManagerClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeRights", "(Landroid/net/Uri;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::drm::DrmManagerClient::removeAllRights() const {
    if (!::android::drm::DrmManagerClient::_class) ::android::drm::DrmManagerClient::_class = java::fetch_class("android/drm/DrmManagerClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAllRights", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::drm::DrmManagerClient::openConvertSession(const ::java::lang::String& arg0) const {
    if (!::android::drm::DrmManagerClient::_class) ::android::drm::DrmManagerClient::_class = java::fetch_class("android/drm/DrmManagerClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "openConvertSession", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::drm::DrmConvertedStatus android::drm::DrmManagerClient::convertData(int32_t arg0, const std::vector< int8_t>& arg1) const {
    if (!::android::drm::DrmManagerClient::_class) ::android::drm::DrmManagerClient::_class = java::fetch_class("android/drm/DrmManagerClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "convertData", "(I[B)Landroid/drm/DrmConvertedStatus;");
    int32_t _arg0 = arg0;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::drm::DrmConvertedStatus _ret(ret);
    return _ret;
}

::android::drm::DrmConvertedStatus android::drm::DrmManagerClient::closeConvertSession(int32_t arg0) const {
    if (!::android::drm::DrmManagerClient::_class) ::android::drm::DrmManagerClient::_class = java::fetch_class("android/drm/DrmManagerClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "closeConvertSession", "(I)Landroid/drm/DrmConvertedStatus;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::drm::DrmConvertedStatus _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::drm::DrmStore_DrmObjectType::DrmStore_DrmObjectType() : ::java::lang::Object((jobject)0) {
    if (!::android::drm::DrmStore_DrmObjectType::_class) ::android::drm::DrmStore_DrmObjectType::_class = java::fetch_class("android/drm/DrmStore$DrmObjectType");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::drm::DrmInfoEvent::DrmInfoEvent(int32_t arg0, int32_t arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0), ::android::drm::DrmEvent((jobject)0) {
    if (!::android::drm::DrmInfoEvent::_class) ::android::drm::DrmInfoEvent::_class = java::fetch_class("android/drm/DrmInfoEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::drm::DrmInfoEvent::DrmInfoEvent(int32_t arg0, int32_t arg1, const ::java::lang::String& arg2, const ::java::util::HashMap& arg3) : ::java::lang::Object((jobject)0), ::android::drm::DrmEvent((jobject)0) {
    if (!::android::drm::DrmInfoEvent::_class) ::android::drm::DrmInfoEvent::_class = java::fetch_class("android/drm/DrmInfoEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IILjava/lang/String;Ljava/util/HashMap;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

std::vector< int8_t> android::drm::ProcessedData::getData() const {
    if (!::android::drm::ProcessedData::_class) ::android::drm::ProcessedData::_class = java::fetch_class("android/drm/ProcessedData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getData", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String android::drm::ProcessedData::getAccountId() const {
    if (!::android::drm::ProcessedData::_class) ::android::drm::ProcessedData::_class = java::fetch_class("android/drm/ProcessedData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccountId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::drm::ProcessedData::getSubscriptionId() const {
    if (!::android::drm::ProcessedData::_class) ::android::drm::ProcessedData::_class = java::fetch_class("android/drm/ProcessedData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubscriptionId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::drm::DrmSupportInfo::DrmSupportInfo() : ::java::lang::Object((jobject)0) {
    if (!::android::drm::DrmSupportInfo::_class) ::android::drm::DrmSupportInfo::_class = java::fetch_class("android/drm/DrmSupportInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::drm::DrmSupportInfo::addMimeType(const ::java::lang::String& arg0) const {
    if (!::android::drm::DrmSupportInfo::_class) ::android::drm::DrmSupportInfo::_class = java::fetch_class("android/drm/DrmSupportInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "addMimeType", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::drm::DrmSupportInfo::addFileSuffix(const ::java::lang::String& arg0) const {
    if (!::android::drm::DrmSupportInfo::_class) ::android::drm::DrmSupportInfo::_class = java::fetch_class("android/drm/DrmSupportInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "addFileSuffix", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::Iterator android::drm::DrmSupportInfo::getMimeTypeIterator() const {
    if (!::android::drm::DrmSupportInfo::_class) ::android::drm::DrmSupportInfo::_class = java::fetch_class("android/drm/DrmSupportInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMimeTypeIterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

::java::util::Iterator android::drm::DrmSupportInfo::getFileSuffixIterator() const {
    if (!::android::drm::DrmSupportInfo::_class) ::android::drm::DrmSupportInfo::_class = java::fetch_class("android/drm/DrmSupportInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFileSuffixIterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

void android::drm::DrmSupportInfo::setDescription(const ::java::lang::String& arg0) const {
    if (!::android::drm::DrmSupportInfo::_class) ::android::drm::DrmSupportInfo::_class = java::fetch_class("android/drm/DrmSupportInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDescription", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::drm::DrmSupportInfo::getDescriprition() const {
    if (!::android::drm::DrmSupportInfo::_class) ::android::drm::DrmSupportInfo::_class = java::fetch_class("android/drm/DrmSupportInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDescriprition", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::drm::DrmSupportInfo::hashCode() const {
    if (!::android::drm::DrmSupportInfo::_class) ::android::drm::DrmSupportInfo::_class = java::fetch_class("android/drm/DrmSupportInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::drm::DrmSupportInfo::equals(const ::java::lang::Object& arg0) const {
    if (!::android::drm::DrmSupportInfo::_class) ::android::drm::DrmSupportInfo::_class = java::fetch_class("android/drm/DrmSupportInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::drm::DrmInfoStatus::DrmInfoStatus(int32_t arg0, int32_t arg1, const ::android::drm::ProcessedData& arg2, const ::java::lang::String& arg3) : ::java::lang::Object((jobject)0) {
    if (!::android::drm::DrmInfoStatus::_class) ::android::drm::DrmInfoStatus::_class = java::fetch_class("android/drm/DrmInfoStatus");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IILandroid/drm/ProcessedData;Ljava/lang/String;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::java::util::Iterator android::drm::DrmUtils_ExtendedMetadataParser::iterator() const {
    if (!::android::drm::DrmUtils_ExtendedMetadataParser::_class) ::android::drm::DrmUtils_ExtendedMetadataParser::_class = java::fetch_class("android/drm/DrmUtils$ExtendedMetadataParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

::java::util::Iterator android::drm::DrmUtils_ExtendedMetadataParser::keyIterator() const {
    if (!::android::drm::DrmUtils_ExtendedMetadataParser::_class) ::android::drm::DrmUtils_ExtendedMetadataParser::_class = java::fetch_class("android/drm/DrmUtils$ExtendedMetadataParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "keyIterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

::java::lang::String android::drm::DrmUtils_ExtendedMetadataParser::get(const ::java::lang::String& arg0) const {
    if (!::android::drm::DrmUtils_ExtendedMetadataParser::_class) ::android::drm::DrmUtils_ExtendedMetadataParser::_class = java::fetch_class("android/drm/DrmUtils$ExtendedMetadataParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

