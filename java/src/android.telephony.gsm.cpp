#include "java-core.hpp"
#include <memory>
#include "android.app.PendingIntent.hpp"
#include "android.os.Bundle.hpp"
#include "android.telephony.gsm.GsmCellLocation.hpp"
#include "android.telephony.gsm.SmsManager.hpp"
#include "android.telephony.gsm.SmsMessage.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.ArrayList.hpp"

jclass android::telephony::gsm::SmsManager::_class = nullptr;
jclass android::telephony::gsm::SmsMessage::_class = nullptr;
jclass android::telephony::gsm::SmsMessage_SubmitPdu::_class = nullptr;
jclass android::telephony::gsm::GsmCellLocation::_class = nullptr;
jclass android::telephony::gsm::SmsMessage_MessageClass::_class = nullptr;

::android::telephony::gsm::SmsManager android::telephony::gsm::SmsManager::getDefault(){
    if (!::android::telephony::gsm::SmsManager::_class) ::android::telephony::gsm::SmsManager::_class = java::fetch_class("android/telephony/gsm/SmsManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefault", "()Landroid/telephony/gsm/SmsManager;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::telephony::gsm::SmsManager _ret(ret);
    return _ret;
}

void android::telephony::gsm::SmsManager::sendTextMessage(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::android::app::PendingIntent& arg3, const ::android::app::PendingIntent& arg4) const {
    if (!::android::telephony::gsm::SmsManager::_class) ::android::telephony::gsm::SmsManager::_class = java::fetch_class("android/telephony/gsm/SmsManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendTextMessage", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/app/PendingIntent;Landroid/app/PendingIntent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

::java::util::ArrayList android::telephony::gsm::SmsManager::divideMessage(const ::java::lang::String& arg0) const {
    if (!::android::telephony::gsm::SmsManager::_class) ::android::telephony::gsm::SmsManager::_class = java::fetch_class("android/telephony/gsm/SmsManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "divideMessage", "(Ljava/lang/String;)Ljava/util/ArrayList;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

void android::telephony::gsm::SmsManager::sendMultipartTextMessage(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::util::ArrayList& arg2, const ::java::util::ArrayList& arg3, const ::java::util::ArrayList& arg4) const {
    if (!::android::telephony::gsm::SmsManager::_class) ::android::telephony::gsm::SmsManager::_class = java::fetch_class("android/telephony/gsm/SmsManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendMultipartTextMessage", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/ArrayList;Ljava/util/ArrayList;Ljava/util/ArrayList;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::telephony::gsm::SmsManager::sendDataMessage(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int16_t arg2, const std::vector< int8_t>& arg3, const ::android::app::PendingIntent& arg4, const ::android::app::PendingIntent& arg5) const {
    if (!::android::telephony::gsm::SmsManager::_class) ::android::telephony::gsm::SmsManager::_class = java::fetch_class("android/telephony/gsm/SmsManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendDataMessage", "(Ljava/lang/String;Ljava/lang/String;S[BLandroid/app/PendingIntent;Landroid/app/PendingIntent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int16_t _arg2 = arg2;
    jbyteArray _arg3 = java::jni->NewByteArray(arg3.size());
    java::jni->SetByteArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::telephony::gsm::SmsMessage::SmsMessage() : ::java::lang::Object((jobject)0) {
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::telephony::gsm::SmsMessage android::telephony::gsm::SmsMessage::createFromPdu(const std::vector< int8_t>& arg0){
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromPdu", "([B)Landroid/telephony/gsm/SmsMessage;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::telephony::gsm::SmsMessage _ret(ret);
    return _ret;
}

int32_t android::telephony::gsm::SmsMessage::getTPLayerLengthForPDU(const ::java::lang::String& arg0){
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTPLayerLengthForPDU", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

std::vector< int32_t> android::telephony::gsm::SmsMessage::calculateLength(const ::java::lang::CharSequence& arg0, bool arg1){
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "calculateLength", "(Ljava/lang/CharSequence;Z)[I");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int32_t> android::telephony::gsm::SmsMessage::calculateLength(const ::java::lang::String& arg0, bool arg1){
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "calculateLength", "(Ljava/lang/String;Z)[I");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

::android::telephony::gsm::SmsMessage_SubmitPdu android::telephony::gsm::SmsMessage::getSubmitPdu(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, bool arg3){
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSubmitPdu", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Landroid/telephony/gsm/SmsMessage$SubmitPdu;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    bool _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::telephony::gsm::SmsMessage_SubmitPdu _ret(ret);
    return _ret;
}

::android::telephony::gsm::SmsMessage_SubmitPdu android::telephony::gsm::SmsMessage::getSubmitPdu(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int16_t arg2, const std::vector< int8_t>& arg3, bool arg4){
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSubmitPdu", "(Ljava/lang/String;Ljava/lang/String;S[BZ)Landroid/telephony/gsm/SmsMessage$SubmitPdu;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int16_t _arg2 = arg2;
    jbyteArray _arg3 = java::jni->NewByteArray(arg3.size());
    java::jni->SetByteArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    bool _arg4 = arg4;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::telephony::gsm::SmsMessage_SubmitPdu _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::gsm::SmsMessage::getServiceCenterAddress() const {
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getServiceCenterAddress", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::gsm::SmsMessage::getOriginatingAddress() const {
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOriginatingAddress", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::gsm::SmsMessage::getDisplayOriginatingAddress() const {
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayOriginatingAddress", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::gsm::SmsMessage::getMessageBody() const {
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessageBody", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::telephony::gsm::SmsMessage_MessageClass android::telephony::gsm::SmsMessage::getMessageClass() const {
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessageClass", "()Landroid/telephony/gsm/SmsMessage$MessageClass;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::telephony::gsm::SmsMessage_MessageClass _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::gsm::SmsMessage::getDisplayMessageBody() const {
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayMessageBody", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::gsm::SmsMessage::getPseudoSubject() const {
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPseudoSubject", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int64_t android::telephony::gsm::SmsMessage::getTimestampMillis() const {
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimestampMillis", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

bool android::telephony::gsm::SmsMessage::isEmail() const {
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmail", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String android::telephony::gsm::SmsMessage::getEmailBody() const {
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEmailBody", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::gsm::SmsMessage::getEmailFrom() const {
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEmailFrom", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::telephony::gsm::SmsMessage::getProtocolIdentifier() const {
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProtocolIdentifier", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::telephony::gsm::SmsMessage::isReplace() const {
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "isReplace", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::telephony::gsm::SmsMessage::isCphsMwiMessage() const {
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCphsMwiMessage", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::telephony::gsm::SmsMessage::isMWIClearMessage() const {
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMWIClearMessage", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::telephony::gsm::SmsMessage::isMWISetMessage() const {
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMWISetMessage", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::telephony::gsm::SmsMessage::isMwiDontStore() const {
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMwiDontStore", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

std::vector< int8_t> android::telephony::gsm::SmsMessage::getUserData() const {
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUserData", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> android::telephony::gsm::SmsMessage::getPdu() const {
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPdu", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t android::telephony::gsm::SmsMessage::getStatusOnSim() const {
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStatusOnSim", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::telephony::gsm::SmsMessage::getIndexOnSim() const {
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIndexOnSim", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::telephony::gsm::SmsMessage::getStatus() const {
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStatus", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::telephony::gsm::SmsMessage::isStatusReportMessage() const {
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStatusReportMessage", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::telephony::gsm::SmsMessage::isReplyPathPresent() const {
    if (!::android::telephony::gsm::SmsMessage::_class) ::android::telephony::gsm::SmsMessage::_class = java::fetch_class("android/telephony/gsm/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "isReplyPathPresent", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::telephony::gsm::SmsMessage_SubmitPdu::SmsMessage_SubmitPdu() : ::java::lang::Object((jobject)0) {
    if (!::android::telephony::gsm::SmsMessage_SubmitPdu::_class) ::android::telephony::gsm::SmsMessage_SubmitPdu::_class = java::fetch_class("android/telephony/gsm/SmsMessage$SubmitPdu");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::telephony::gsm::SmsMessage_SubmitPdu::toString() const {
    if (!::android::telephony::gsm::SmsMessage_SubmitPdu::_class) ::android::telephony::gsm::SmsMessage_SubmitPdu::_class = java::fetch_class("android/telephony/gsm/SmsMessage$SubmitPdu");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::telephony::gsm::GsmCellLocation::GsmCellLocation() : ::java::lang::Object((jobject)0), ::android::telephony::CellLocation((jobject)0) {
    if (!::android::telephony::gsm::GsmCellLocation::_class) ::android::telephony::gsm::GsmCellLocation::_class = java::fetch_class("android/telephony/gsm/GsmCellLocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::telephony::gsm::GsmCellLocation::GsmCellLocation(const ::android::os::Bundle& arg0) : ::java::lang::Object((jobject)0), ::android::telephony::CellLocation((jobject)0) {
    if (!::android::telephony::gsm::GsmCellLocation::_class) ::android::telephony::gsm::GsmCellLocation::_class = java::fetch_class("android/telephony/gsm/GsmCellLocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::telephony::gsm::GsmCellLocation::getLac() const {
    if (!::android::telephony::gsm::GsmCellLocation::_class) ::android::telephony::gsm::GsmCellLocation::_class = java::fetch_class("android/telephony/gsm/GsmCellLocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLac", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::telephony::gsm::GsmCellLocation::getCid() const {
    if (!::android::telephony::gsm::GsmCellLocation::_class) ::android::telephony::gsm::GsmCellLocation::_class = java::fetch_class("android/telephony/gsm/GsmCellLocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCid", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::telephony::gsm::GsmCellLocation::getPsc() const {
    if (!::android::telephony::gsm::GsmCellLocation::_class) ::android::telephony::gsm::GsmCellLocation::_class = java::fetch_class("android/telephony/gsm/GsmCellLocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPsc", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::telephony::gsm::GsmCellLocation::setStateInvalid() const {
    if (!::android::telephony::gsm::GsmCellLocation::_class) ::android::telephony::gsm::GsmCellLocation::_class = java::fetch_class("android/telephony/gsm/GsmCellLocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStateInvalid", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::telephony::gsm::GsmCellLocation::setLacAndCid(int32_t arg0, int32_t arg1) const {
    if (!::android::telephony::gsm::GsmCellLocation::_class) ::android::telephony::gsm::GsmCellLocation::_class = java::fetch_class("android/telephony/gsm/GsmCellLocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLacAndCid", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::telephony::gsm::GsmCellLocation::hashCode() const {
    if (!::android::telephony::gsm::GsmCellLocation::_class) ::android::telephony::gsm::GsmCellLocation::_class = java::fetch_class("android/telephony/gsm/GsmCellLocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::telephony::gsm::GsmCellLocation::equals(const ::java::lang::Object& arg0) const {
    if (!::android::telephony::gsm::GsmCellLocation::_class) ::android::telephony::gsm::GsmCellLocation::_class = java::fetch_class("android/telephony/gsm/GsmCellLocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::telephony::gsm::GsmCellLocation::toString() const {
    if (!::android::telephony::gsm::GsmCellLocation::_class) ::android::telephony::gsm::GsmCellLocation::_class = java::fetch_class("android/telephony/gsm/GsmCellLocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::telephony::gsm::GsmCellLocation::fillInNotifierBundle(const ::android::os::Bundle& arg0) const {
    if (!::android::telephony::gsm::GsmCellLocation::_class) ::android::telephony::gsm::GsmCellLocation::_class = java::fetch_class("android/telephony/gsm/GsmCellLocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "fillInNotifierBundle", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::android::telephony::gsm::SmsMessage_MessageClass> android::telephony::gsm::SmsMessage_MessageClass::values(){
    if (!::android::telephony::gsm::SmsMessage_MessageClass::_class) ::android::telephony::gsm::SmsMessage_MessageClass::_class = java::fetch_class("android/telephony/gsm/SmsMessage$MessageClass");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/telephony/gsm/SmsMessage$MessageClass;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::telephony::gsm::SmsMessage_MessageClass> _ret(rets, ::android::telephony::gsm::SmsMessage_MessageClass((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::telephony::gsm::SmsMessage_MessageClass retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::telephony::gsm::SmsMessage_MessageClass android::telephony::gsm::SmsMessage_MessageClass::valueOf(const ::java::lang::String& arg0){
    if (!::android::telephony::gsm::SmsMessage_MessageClass::_class) ::android::telephony::gsm::SmsMessage_MessageClass::_class = java::fetch_class("android/telephony/gsm/SmsMessage$MessageClass");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/telephony/gsm/SmsMessage$MessageClass;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::telephony::gsm::SmsMessage_MessageClass _ret(ret);
    return _ret;
}

