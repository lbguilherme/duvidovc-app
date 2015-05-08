#include "java-core.hpp"
#include <memory>
#include "android.app.PendingIntent.hpp"
#include "android.content.Context.hpp"
#include "android.content.Intent.hpp"
#include "android.os.Parcel.hpp"
#include "android.telephony.CellLocation.hpp"
#include "android.telephony.NeighboringCellInfo.hpp"
#include "android.telephony.PhoneNumberFormattingTextWatcher.hpp"
#include "android.telephony.PhoneNumberUtils.hpp"
#include "android.telephony.PhoneStateListener.hpp"
#include "android.telephony.ServiceState.hpp"
#include "android.telephony.SignalStrength.hpp"
#include "android.telephony.SmsManager.hpp"
#include "android.telephony.SmsMessage.hpp"
#include "android.telephony.TelephonyManager.hpp"
#include "android.text.Editable.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.ArrayList.hpp"
#include "java.util.List.hpp"
#include "java.util.Locale.hpp"

jclass android::telephony::PhoneNumberUtils::_class = nullptr;
jclass android::telephony::ServiceState::_class = nullptr;
jclass android::telephony::SignalStrength::_class = nullptr;
jclass android::telephony::SmsManager::_class = nullptr;
jclass android::telephony::TelephonyManager::_class = nullptr;
jclass android::telephony::PhoneNumberFormattingTextWatcher::_class = nullptr;
jclass android::telephony::SmsMessage::_class = nullptr;
jclass android::telephony::SmsMessage_SubmitPdu::_class = nullptr;
jclass android::telephony::PhoneStateListener::_class = nullptr;
jclass android::telephony::NeighboringCellInfo::_class = nullptr;
jclass android::telephony::SmsMessage_MessageClass::_class = nullptr;
jclass android::telephony::CellLocation::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::telephony::PhoneNumberUtils::PhoneNumberUtils() : ::java::lang::Object((jobject)0) {
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::telephony::PhoneNumberUtils::isISODigit(uint16_t arg0){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isISODigit", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::telephony::PhoneNumberUtils::is12Key(uint16_t arg0){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "is12Key", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::telephony::PhoneNumberUtils::isDialable(uint16_t arg0){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isDialable", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::telephony::PhoneNumberUtils::isReallyDialable(uint16_t arg0){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isReallyDialable", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::telephony::PhoneNumberUtils::isNonSeparator(uint16_t arg0){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isNonSeparator", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::telephony::PhoneNumberUtils::isStartsPostDial(uint16_t arg0){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isStartsPostDial", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

::java::lang::String android::telephony::PhoneNumberUtils::getNumberFromIntent(const ::android::content::Intent& arg0, const ::android::content::Context& arg1){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getNumberFromIntent", "(Landroid/content/Intent;Landroid/content/Context;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::PhoneNumberUtils::extractNetworkPortion(const ::java::lang::String& arg0){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "extractNetworkPortion", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::PhoneNumberUtils::stripSeparators(const ::java::lang::String& arg0){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "stripSeparators", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::PhoneNumberUtils::extractPostDialPortion(const ::java::lang::String& arg0){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "extractPostDialPortion", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::telephony::PhoneNumberUtils::compare(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "compare", "(Ljava/lang/String;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool android::telephony::PhoneNumberUtils::compare(const ::android::content::Context& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "compare", "(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2);
}

::java::lang::String android::telephony::PhoneNumberUtils::toCallerIDMinMatch(const ::java::lang::String& arg0){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toCallerIDMinMatch", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::PhoneNumberUtils::getStrippedReversed(const ::java::lang::String& arg0){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getStrippedReversed", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::PhoneNumberUtils::stringFromStringAndTOA(const ::java::lang::String& arg0, int32_t arg1){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "stringFromStringAndTOA", "(Ljava/lang/String;I)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::telephony::PhoneNumberUtils::toaFromString(const ::java::lang::String& arg0){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toaFromString", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

::java::lang::String android::telephony::PhoneNumberUtils::calledPartyBCDToString(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "calledPartyBCDToString", "([BII)Ljava/lang/String;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::PhoneNumberUtils::calledPartyBCDFragmentToString(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "calledPartyBCDFragmentToString", "([BII)Ljava/lang/String;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::telephony::PhoneNumberUtils::isWellFormedSmsAddress(const ::java::lang::String& arg0){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isWellFormedSmsAddress", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::telephony::PhoneNumberUtils::isGlobalPhoneNumber(const ::java::lang::String& arg0){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isGlobalPhoneNumber", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

std::vector< int8_t> android::telephony::PhoneNumberUtils::networkPortionToCalledPartyBCD(const ::java::lang::String& arg0){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "networkPortionToCalledPartyBCD", "(Ljava/lang/String;)[B");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> android::telephony::PhoneNumberUtils::networkPortionToCalledPartyBCDWithLength(const ::java::lang::String& arg0){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "networkPortionToCalledPartyBCDWithLength", "(Ljava/lang/String;)[B");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> android::telephony::PhoneNumberUtils::numberToCalledPartyBCD(const ::java::lang::String& arg0){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "numberToCalledPartyBCD", "(Ljava/lang/String;)[B");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String android::telephony::PhoneNumberUtils::formatNumber(const ::java::lang::String& arg0){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatNumber", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::telephony::PhoneNumberUtils::getFormatTypeForLocale(const ::java::util::Locale& arg0){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getFormatTypeForLocale", "(Ljava/util/Locale;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void android::telephony::PhoneNumberUtils::formatNumber(const ::android::text::Editable& arg0, int32_t arg1){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatNumber", "(Landroid/text/Editable;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::telephony::PhoneNumberUtils::formatNanpNumber(const ::android::text::Editable& arg0){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatNanpNumber", "(Landroid/text/Editable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::telephony::PhoneNumberUtils::formatJapaneseNumber(const ::android::text::Editable& arg0){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatJapaneseNumber", "(Landroid/text/Editable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

bool android::telephony::PhoneNumberUtils::isEmergencyNumber(const ::java::lang::String& arg0){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isEmergencyNumber", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

::java::lang::String android::telephony::PhoneNumberUtils::convertKeypadLettersToDigits(const ::java::lang::String& arg0){
    if (!::android::telephony::PhoneNumberUtils::_class) ::android::telephony::PhoneNumberUtils::_class = java::fetch_class("android/telephony/PhoneNumberUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "convertKeypadLettersToDigits", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::telephony::ServiceState::ServiceState() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::telephony::ServiceState::_class) ::android::telephony::ServiceState::_class = java::fetch_class("android/telephony/ServiceState");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::telephony::ServiceState::ServiceState(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::telephony::ServiceState::_class) ::android::telephony::ServiceState::_class = java::fetch_class("android/telephony/ServiceState");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::telephony::ServiceState::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::telephony::ServiceState::_class) ::android::telephony::ServiceState::_class = java::fetch_class("android/telephony/ServiceState");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::telephony::ServiceState::describeContents() const {
    if (!::android::telephony::ServiceState::_class) ::android::telephony::ServiceState::_class = java::fetch_class("android/telephony/ServiceState");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::telephony::ServiceState::getState() const {
    if (!::android::telephony::ServiceState::_class) ::android::telephony::ServiceState::_class = java::fetch_class("android/telephony/ServiceState");
    static jmethodID mid = java::jni->GetMethodID(_class, "getState", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::telephony::ServiceState::getRoaming() const {
    if (!::android::telephony::ServiceState::_class) ::android::telephony::ServiceState::_class = java::fetch_class("android/telephony/ServiceState");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRoaming", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String android::telephony::ServiceState::getOperatorAlphaLong() const {
    if (!::android::telephony::ServiceState::_class) ::android::telephony::ServiceState::_class = java::fetch_class("android/telephony/ServiceState");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOperatorAlphaLong", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::ServiceState::getOperatorAlphaShort() const {
    if (!::android::telephony::ServiceState::_class) ::android::telephony::ServiceState::_class = java::fetch_class("android/telephony/ServiceState");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOperatorAlphaShort", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::ServiceState::getOperatorNumeric() const {
    if (!::android::telephony::ServiceState::_class) ::android::telephony::ServiceState::_class = java::fetch_class("android/telephony/ServiceState");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOperatorNumeric", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::telephony::ServiceState::getIsManualSelection() const {
    if (!::android::telephony::ServiceState::_class) ::android::telephony::ServiceState::_class = java::fetch_class("android/telephony/ServiceState");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIsManualSelection", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::telephony::ServiceState::hashCode() const {
    if (!::android::telephony::ServiceState::_class) ::android::telephony::ServiceState::_class = java::fetch_class("android/telephony/ServiceState");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::telephony::ServiceState::equals(const ::java::lang::Object& arg0) const {
    if (!::android::telephony::ServiceState::_class) ::android::telephony::ServiceState::_class = java::fetch_class("android/telephony/ServiceState");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::telephony::ServiceState::toString() const {
    if (!::android::telephony::ServiceState::_class) ::android::telephony::ServiceState::_class = java::fetch_class("android/telephony/ServiceState");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::telephony::ServiceState::setStateOutOfService() const {
    if (!::android::telephony::ServiceState::_class) ::android::telephony::ServiceState::_class = java::fetch_class("android/telephony/ServiceState");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStateOutOfService", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::telephony::ServiceState::setStateOff() const {
    if (!::android::telephony::ServiceState::_class) ::android::telephony::ServiceState::_class = java::fetch_class("android/telephony/ServiceState");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStateOff", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::telephony::ServiceState::setState(int32_t arg0) const {
    if (!::android::telephony::ServiceState::_class) ::android::telephony::ServiceState::_class = java::fetch_class("android/telephony/ServiceState");
    static jmethodID mid = java::jni->GetMethodID(_class, "setState", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::telephony::ServiceState::setRoaming(bool arg0) const {
    if (!::android::telephony::ServiceState::_class) ::android::telephony::ServiceState::_class = java::fetch_class("android/telephony/ServiceState");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRoaming", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::telephony::ServiceState::setOperatorName(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::android::telephony::ServiceState::_class) ::android::telephony::ServiceState::_class = java::fetch_class("android/telephony/ServiceState");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOperatorName", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::telephony::ServiceState::setIsManualSelection(bool arg0) const {
    if (!::android::telephony::ServiceState::_class) ::android::telephony::ServiceState::_class = java::fetch_class("android/telephony/ServiceState");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIsManualSelection", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::telephony::SignalStrength::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::telephony::SignalStrength::_class) ::android::telephony::SignalStrength::_class = java::fetch_class("android/telephony/SignalStrength");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::telephony::SignalStrength::describeContents() const {
    if (!::android::telephony::SignalStrength::_class) ::android::telephony::SignalStrength::_class = java::fetch_class("android/telephony/SignalStrength");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::telephony::SignalStrength::getGsmSignalStrength() const {
    if (!::android::telephony::SignalStrength::_class) ::android::telephony::SignalStrength::_class = java::fetch_class("android/telephony/SignalStrength");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGsmSignalStrength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::telephony::SignalStrength::getGsmBitErrorRate() const {
    if (!::android::telephony::SignalStrength::_class) ::android::telephony::SignalStrength::_class = java::fetch_class("android/telephony/SignalStrength");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGsmBitErrorRate", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::telephony::SignalStrength::getCdmaDbm() const {
    if (!::android::telephony::SignalStrength::_class) ::android::telephony::SignalStrength::_class = java::fetch_class("android/telephony/SignalStrength");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCdmaDbm", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::telephony::SignalStrength::getCdmaEcio() const {
    if (!::android::telephony::SignalStrength::_class) ::android::telephony::SignalStrength::_class = java::fetch_class("android/telephony/SignalStrength");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCdmaEcio", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::telephony::SignalStrength::getEvdoDbm() const {
    if (!::android::telephony::SignalStrength::_class) ::android::telephony::SignalStrength::_class = java::fetch_class("android/telephony/SignalStrength");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEvdoDbm", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::telephony::SignalStrength::getEvdoEcio() const {
    if (!::android::telephony::SignalStrength::_class) ::android::telephony::SignalStrength::_class = java::fetch_class("android/telephony/SignalStrength");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEvdoEcio", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::telephony::SignalStrength::getEvdoSnr() const {
    if (!::android::telephony::SignalStrength::_class) ::android::telephony::SignalStrength::_class = java::fetch_class("android/telephony/SignalStrength");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEvdoSnr", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::telephony::SignalStrength::isGsm() const {
    if (!::android::telephony::SignalStrength::_class) ::android::telephony::SignalStrength::_class = java::fetch_class("android/telephony/SignalStrength");
    static jmethodID mid = java::jni->GetMethodID(_class, "isGsm", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::telephony::SignalStrength::hashCode() const {
    if (!::android::telephony::SignalStrength::_class) ::android::telephony::SignalStrength::_class = java::fetch_class("android/telephony/SignalStrength");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::telephony::SignalStrength::equals(const ::java::lang::Object& arg0) const {
    if (!::android::telephony::SignalStrength::_class) ::android::telephony::SignalStrength::_class = java::fetch_class("android/telephony/SignalStrength");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::telephony::SignalStrength::toString() const {
    if (!::android::telephony::SignalStrength::_class) ::android::telephony::SignalStrength::_class = java::fetch_class("android/telephony/SignalStrength");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::telephony::SmsManager::sendTextMessage(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::android::app::PendingIntent& arg3, const ::android::app::PendingIntent& arg4) const {
    if (!::android::telephony::SmsManager::_class) ::android::telephony::SmsManager::_class = java::fetch_class("android/telephony/SmsManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendTextMessage", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/app/PendingIntent;Landroid/app/PendingIntent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

::java::util::ArrayList android::telephony::SmsManager::divideMessage(const ::java::lang::String& arg0) const {
    if (!::android::telephony::SmsManager::_class) ::android::telephony::SmsManager::_class = java::fetch_class("android/telephony/SmsManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "divideMessage", "(Ljava/lang/String;)Ljava/util/ArrayList;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

void android::telephony::SmsManager::sendMultipartTextMessage(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::util::ArrayList& arg2, const ::java::util::ArrayList& arg3, const ::java::util::ArrayList& arg4) const {
    if (!::android::telephony::SmsManager::_class) ::android::telephony::SmsManager::_class = java::fetch_class("android/telephony/SmsManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendMultipartTextMessage", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/ArrayList;Ljava/util/ArrayList;Ljava/util/ArrayList;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::telephony::SmsManager::sendDataMessage(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int16_t arg2, const std::vector< int8_t>& arg3, const ::android::app::PendingIntent& arg4, const ::android::app::PendingIntent& arg5) const {
    if (!::android::telephony::SmsManager::_class) ::android::telephony::SmsManager::_class = java::fetch_class("android/telephony/SmsManager");
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

::android::telephony::SmsManager android::telephony::SmsManager::getDefault(){
    if (!::android::telephony::SmsManager::_class) ::android::telephony::SmsManager::_class = java::fetch_class("android/telephony/SmsManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefault", "()Landroid/telephony/SmsManager;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::telephony::SmsManager _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::TelephonyManager::getDeviceSoftwareVersion() const {
    if (!::android::telephony::TelephonyManager::_class) ::android::telephony::TelephonyManager::_class = java::fetch_class("android/telephony/TelephonyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeviceSoftwareVersion", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::TelephonyManager::getDeviceId() const {
    if (!::android::telephony::TelephonyManager::_class) ::android::telephony::TelephonyManager::_class = java::fetch_class("android/telephony/TelephonyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeviceId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::telephony::CellLocation android::telephony::TelephonyManager::getCellLocation() const {
    if (!::android::telephony::TelephonyManager::_class) ::android::telephony::TelephonyManager::_class = java::fetch_class("android/telephony/TelephonyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCellLocation", "()Landroid/telephony/CellLocation;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::telephony::CellLocation _ret(ret);
    return _ret;
}

::java::util::List android::telephony::TelephonyManager::getNeighboringCellInfo() const {
    if (!::android::telephony::TelephonyManager::_class) ::android::telephony::TelephonyManager::_class = java::fetch_class("android/telephony/TelephonyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNeighboringCellInfo", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

int32_t android::telephony::TelephonyManager::getPhoneType() const {
    if (!::android::telephony::TelephonyManager::_class) ::android::telephony::TelephonyManager::_class = java::fetch_class("android/telephony/TelephonyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPhoneType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::telephony::TelephonyManager::getNetworkOperatorName() const {
    if (!::android::telephony::TelephonyManager::_class) ::android::telephony::TelephonyManager::_class = java::fetch_class("android/telephony/TelephonyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNetworkOperatorName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::TelephonyManager::getNetworkOperator() const {
    if (!::android::telephony::TelephonyManager::_class) ::android::telephony::TelephonyManager::_class = java::fetch_class("android/telephony/TelephonyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNetworkOperator", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::telephony::TelephonyManager::isNetworkRoaming() const {
    if (!::android::telephony::TelephonyManager::_class) ::android::telephony::TelephonyManager::_class = java::fetch_class("android/telephony/TelephonyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "isNetworkRoaming", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String android::telephony::TelephonyManager::getNetworkCountryIso() const {
    if (!::android::telephony::TelephonyManager::_class) ::android::telephony::TelephonyManager::_class = java::fetch_class("android/telephony/TelephonyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNetworkCountryIso", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::telephony::TelephonyManager::getNetworkType() const {
    if (!::android::telephony::TelephonyManager::_class) ::android::telephony::TelephonyManager::_class = java::fetch_class("android/telephony/TelephonyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNetworkType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::telephony::TelephonyManager::hasIccCard() const {
    if (!::android::telephony::TelephonyManager::_class) ::android::telephony::TelephonyManager::_class = java::fetch_class("android/telephony/TelephonyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasIccCard", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::telephony::TelephonyManager::getSimState() const {
    if (!::android::telephony::TelephonyManager::_class) ::android::telephony::TelephonyManager::_class = java::fetch_class("android/telephony/TelephonyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSimState", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::telephony::TelephonyManager::getSimOperator() const {
    if (!::android::telephony::TelephonyManager::_class) ::android::telephony::TelephonyManager::_class = java::fetch_class("android/telephony/TelephonyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSimOperator", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::TelephonyManager::getSimOperatorName() const {
    if (!::android::telephony::TelephonyManager::_class) ::android::telephony::TelephonyManager::_class = java::fetch_class("android/telephony/TelephonyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSimOperatorName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::TelephonyManager::getSimCountryIso() const {
    if (!::android::telephony::TelephonyManager::_class) ::android::telephony::TelephonyManager::_class = java::fetch_class("android/telephony/TelephonyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSimCountryIso", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::TelephonyManager::getSimSerialNumber() const {
    if (!::android::telephony::TelephonyManager::_class) ::android::telephony::TelephonyManager::_class = java::fetch_class("android/telephony/TelephonyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSimSerialNumber", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::TelephonyManager::getSubscriberId() const {
    if (!::android::telephony::TelephonyManager::_class) ::android::telephony::TelephonyManager::_class = java::fetch_class("android/telephony/TelephonyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubscriberId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::TelephonyManager::getLine1Number() const {
    if (!::android::telephony::TelephonyManager::_class) ::android::telephony::TelephonyManager::_class = java::fetch_class("android/telephony/TelephonyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLine1Number", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::TelephonyManager::getVoiceMailNumber() const {
    if (!::android::telephony::TelephonyManager::_class) ::android::telephony::TelephonyManager::_class = java::fetch_class("android/telephony/TelephonyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVoiceMailNumber", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::TelephonyManager::getVoiceMailAlphaTag() const {
    if (!::android::telephony::TelephonyManager::_class) ::android::telephony::TelephonyManager::_class = java::fetch_class("android/telephony/TelephonyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVoiceMailAlphaTag", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::telephony::TelephonyManager::getCallState() const {
    if (!::android::telephony::TelephonyManager::_class) ::android::telephony::TelephonyManager::_class = java::fetch_class("android/telephony/TelephonyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCallState", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::telephony::TelephonyManager::getDataActivity() const {
    if (!::android::telephony::TelephonyManager::_class) ::android::telephony::TelephonyManager::_class = java::fetch_class("android/telephony/TelephonyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDataActivity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::telephony::TelephonyManager::getDataState() const {
    if (!::android::telephony::TelephonyManager::_class) ::android::telephony::TelephonyManager::_class = java::fetch_class("android/telephony/TelephonyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDataState", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::telephony::TelephonyManager::listen(const ::android::telephony::PhoneStateListener& arg0, int32_t arg1) const {
    if (!::android::telephony::TelephonyManager::_class) ::android::telephony::TelephonyManager::_class = java::fetch_class("android/telephony/TelephonyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "listen", "(Landroid/telephony/PhoneStateListener;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::telephony::PhoneNumberFormattingTextWatcher::PhoneNumberFormattingTextWatcher() : ::java::lang::Object((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::TextWatcher((jobject)0) {
    if (!::android::telephony::PhoneNumberFormattingTextWatcher::_class) ::android::telephony::PhoneNumberFormattingTextWatcher::_class = java::fetch_class("android/telephony/PhoneNumberFormattingTextWatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::telephony::PhoneNumberFormattingTextWatcher::beforeTextChanged(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::telephony::PhoneNumberFormattingTextWatcher::_class) ::android::telephony::PhoneNumberFormattingTextWatcher::_class = java::fetch_class("android/telephony/PhoneNumberFormattingTextWatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "beforeTextChanged", "(Ljava/lang/CharSequence;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::telephony::PhoneNumberFormattingTextWatcher::onTextChanged(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::telephony::PhoneNumberFormattingTextWatcher::_class) ::android::telephony::PhoneNumberFormattingTextWatcher::_class = java::fetch_class("android/telephony/PhoneNumberFormattingTextWatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTextChanged", "(Ljava/lang/CharSequence;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::telephony::PhoneNumberFormattingTextWatcher::afterTextChanged(const ::android::text::Editable& arg0) const {
    if (!::android::telephony::PhoneNumberFormattingTextWatcher::_class) ::android::telephony::PhoneNumberFormattingTextWatcher::_class = java::fetch_class("android/telephony/PhoneNumberFormattingTextWatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "afterTextChanged", "(Landroid/text/Editable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::telephony::SmsMessage android::telephony::SmsMessage::createFromPdu(const std::vector< int8_t>& arg0){
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromPdu", "([B)Landroid/telephony/SmsMessage;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::telephony::SmsMessage _ret(ret);
    return _ret;
}

int32_t android::telephony::SmsMessage::getTPLayerLengthForPDU(const ::java::lang::String& arg0){
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTPLayerLengthForPDU", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

std::vector< int32_t> android::telephony::SmsMessage::calculateLength(const ::java::lang::CharSequence& arg0, bool arg1){
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
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

std::vector< int32_t> android::telephony::SmsMessage::calculateLength(const ::java::lang::String& arg0, bool arg1){
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
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

::android::telephony::SmsMessage_SubmitPdu android::telephony::SmsMessage::getSubmitPdu(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, bool arg3){
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSubmitPdu", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Landroid/telephony/SmsMessage$SubmitPdu;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    bool _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::telephony::SmsMessage_SubmitPdu _ret(ret);
    return _ret;
}

::android::telephony::SmsMessage_SubmitPdu android::telephony::SmsMessage::getSubmitPdu(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int16_t arg2, const std::vector< int8_t>& arg3, bool arg4){
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSubmitPdu", "(Ljava/lang/String;Ljava/lang/String;S[BZ)Landroid/telephony/SmsMessage$SubmitPdu;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int16_t _arg2 = arg2;
    jbyteArray _arg3 = java::jni->NewByteArray(arg3.size());
    java::jni->SetByteArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    bool _arg4 = arg4;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::telephony::SmsMessage_SubmitPdu _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::SmsMessage::getServiceCenterAddress() const {
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getServiceCenterAddress", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::SmsMessage::getOriginatingAddress() const {
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOriginatingAddress", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::SmsMessage::getDisplayOriginatingAddress() const {
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayOriginatingAddress", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::SmsMessage::getMessageBody() const {
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessageBody", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::telephony::SmsMessage_MessageClass android::telephony::SmsMessage::getMessageClass() const {
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessageClass", "()Landroid/telephony/SmsMessage$MessageClass;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::telephony::SmsMessage_MessageClass _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::SmsMessage::getDisplayMessageBody() const {
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayMessageBody", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::SmsMessage::getPseudoSubject() const {
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPseudoSubject", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int64_t android::telephony::SmsMessage::getTimestampMillis() const {
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimestampMillis", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

bool android::telephony::SmsMessage::isEmail() const {
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmail", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String android::telephony::SmsMessage::getEmailBody() const {
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEmailBody", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::telephony::SmsMessage::getEmailFrom() const {
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEmailFrom", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::telephony::SmsMessage::getProtocolIdentifier() const {
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProtocolIdentifier", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::telephony::SmsMessage::isReplace() const {
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "isReplace", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::telephony::SmsMessage::isCphsMwiMessage() const {
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCphsMwiMessage", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::telephony::SmsMessage::isMWIClearMessage() const {
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMWIClearMessage", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::telephony::SmsMessage::isMWISetMessage() const {
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMWISetMessage", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::telephony::SmsMessage::isMwiDontStore() const {
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMwiDontStore", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

std::vector< int8_t> android::telephony::SmsMessage::getUserData() const {
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUserData", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> android::telephony::SmsMessage::getPdu() const {
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPdu", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t android::telephony::SmsMessage::getStatusOnSim() const {
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStatusOnSim", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::telephony::SmsMessage::getStatusOnIcc() const {
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStatusOnIcc", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::telephony::SmsMessage::getIndexOnSim() const {
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIndexOnSim", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::telephony::SmsMessage::getIndexOnIcc() const {
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIndexOnIcc", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::telephony::SmsMessage::getStatus() const {
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStatus", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::telephony::SmsMessage::isStatusReportMessage() const {
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStatusReportMessage", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::telephony::SmsMessage::isReplyPathPresent() const {
    if (!::android::telephony::SmsMessage::_class) ::android::telephony::SmsMessage::_class = java::fetch_class("android/telephony/SmsMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "isReplyPathPresent", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String android::telephony::SmsMessage_SubmitPdu::toString() const {
    if (!::android::telephony::SmsMessage_SubmitPdu::_class) ::android::telephony::SmsMessage_SubmitPdu::_class = java::fetch_class("android/telephony/SmsMessage$SubmitPdu");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::telephony::PhoneStateListener::PhoneStateListener() : ::java::lang::Object((jobject)0) {
    if (!::android::telephony::PhoneStateListener::_class) ::android::telephony::PhoneStateListener::_class = java::fetch_class("android/telephony/PhoneStateListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::telephony::PhoneStateListener::onServiceStateChanged(const ::android::telephony::ServiceState& arg0) const {
    if (!::android::telephony::PhoneStateListener::_class) ::android::telephony::PhoneStateListener::_class = java::fetch_class("android/telephony/PhoneStateListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onServiceStateChanged", "(Landroid/telephony/ServiceState;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::telephony::PhoneStateListener::onSignalStrengthChanged(int32_t arg0) const {
    if (!::android::telephony::PhoneStateListener::_class) ::android::telephony::PhoneStateListener::_class = java::fetch_class("android/telephony/PhoneStateListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSignalStrengthChanged", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::telephony::PhoneStateListener::onMessageWaitingIndicatorChanged(bool arg0) const {
    if (!::android::telephony::PhoneStateListener::_class) ::android::telephony::PhoneStateListener::_class = java::fetch_class("android/telephony/PhoneStateListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMessageWaitingIndicatorChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::telephony::PhoneStateListener::onCallForwardingIndicatorChanged(bool arg0) const {
    if (!::android::telephony::PhoneStateListener::_class) ::android::telephony::PhoneStateListener::_class = java::fetch_class("android/telephony/PhoneStateListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCallForwardingIndicatorChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::telephony::PhoneStateListener::onCellLocationChanged(const ::android::telephony::CellLocation& arg0) const {
    if (!::android::telephony::PhoneStateListener::_class) ::android::telephony::PhoneStateListener::_class = java::fetch_class("android/telephony/PhoneStateListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCellLocationChanged", "(Landroid/telephony/CellLocation;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::telephony::PhoneStateListener::onCallStateChanged(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::android::telephony::PhoneStateListener::_class) ::android::telephony::PhoneStateListener::_class = java::fetch_class("android/telephony/PhoneStateListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCallStateChanged", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::telephony::PhoneStateListener::onDataConnectionStateChanged(int32_t arg0) const {
    if (!::android::telephony::PhoneStateListener::_class) ::android::telephony::PhoneStateListener::_class = java::fetch_class("android/telephony/PhoneStateListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDataConnectionStateChanged", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::telephony::PhoneStateListener::onDataConnectionStateChanged(int32_t arg0, int32_t arg1) const {
    if (!::android::telephony::PhoneStateListener::_class) ::android::telephony::PhoneStateListener::_class = java::fetch_class("android/telephony/PhoneStateListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDataConnectionStateChanged", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::telephony::PhoneStateListener::onDataActivity(int32_t arg0) const {
    if (!::android::telephony::PhoneStateListener::_class) ::android::telephony::PhoneStateListener::_class = java::fetch_class("android/telephony/PhoneStateListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDataActivity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::telephony::PhoneStateListener::onSignalStrengthsChanged(const ::android::telephony::SignalStrength& arg0) const {
    if (!::android::telephony::PhoneStateListener::_class) ::android::telephony::PhoneStateListener::_class = java::fetch_class("android/telephony/PhoneStateListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSignalStrengthsChanged", "(Landroid/telephony/SignalStrength;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::telephony::NeighboringCellInfo::NeighboringCellInfo() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::telephony::NeighboringCellInfo::_class) ::android::telephony::NeighboringCellInfo::_class = java::fetch_class("android/telephony/NeighboringCellInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::telephony::NeighboringCellInfo::NeighboringCellInfo(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::telephony::NeighboringCellInfo::_class) ::android::telephony::NeighboringCellInfo::_class = java::fetch_class("android/telephony/NeighboringCellInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::telephony::NeighboringCellInfo::NeighboringCellInfo(int32_t arg0, const ::java::lang::String& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::telephony::NeighboringCellInfo::_class) ::android::telephony::NeighboringCellInfo::_class = java::fetch_class("android/telephony/NeighboringCellInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/lang/String;I)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::telephony::NeighboringCellInfo::NeighboringCellInfo(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::telephony::NeighboringCellInfo::_class) ::android::telephony::NeighboringCellInfo::_class = java::fetch_class("android/telephony/NeighboringCellInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::telephony::NeighboringCellInfo::getRssi() const {
    if (!::android::telephony::NeighboringCellInfo::_class) ::android::telephony::NeighboringCellInfo::_class = java::fetch_class("android/telephony/NeighboringCellInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRssi", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::telephony::NeighboringCellInfo::getLac() const {
    if (!::android::telephony::NeighboringCellInfo::_class) ::android::telephony::NeighboringCellInfo::_class = java::fetch_class("android/telephony/NeighboringCellInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLac", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::telephony::NeighboringCellInfo::getCid() const {
    if (!::android::telephony::NeighboringCellInfo::_class) ::android::telephony::NeighboringCellInfo::_class = java::fetch_class("android/telephony/NeighboringCellInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCid", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::telephony::NeighboringCellInfo::getPsc() const {
    if (!::android::telephony::NeighboringCellInfo::_class) ::android::telephony::NeighboringCellInfo::_class = java::fetch_class("android/telephony/NeighboringCellInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPsc", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::telephony::NeighboringCellInfo::getNetworkType() const {
    if (!::android::telephony::NeighboringCellInfo::_class) ::android::telephony::NeighboringCellInfo::_class = java::fetch_class("android/telephony/NeighboringCellInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNetworkType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::telephony::NeighboringCellInfo::setCid(int32_t arg0) const {
    if (!::android::telephony::NeighboringCellInfo::_class) ::android::telephony::NeighboringCellInfo::_class = java::fetch_class("android/telephony/NeighboringCellInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCid", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::telephony::NeighboringCellInfo::setRssi(int32_t arg0) const {
    if (!::android::telephony::NeighboringCellInfo::_class) ::android::telephony::NeighboringCellInfo::_class = java::fetch_class("android/telephony/NeighboringCellInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRssi", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::telephony::NeighboringCellInfo::toString() const {
    if (!::android::telephony::NeighboringCellInfo::_class) ::android::telephony::NeighboringCellInfo::_class = java::fetch_class("android/telephony/NeighboringCellInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::telephony::NeighboringCellInfo::describeContents() const {
    if (!::android::telephony::NeighboringCellInfo::_class) ::android::telephony::NeighboringCellInfo::_class = java::fetch_class("android/telephony/NeighboringCellInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::telephony::NeighboringCellInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::telephony::NeighboringCellInfo::_class) ::android::telephony::NeighboringCellInfo::_class = java::fetch_class("android/telephony/NeighboringCellInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

std::vector< ::android::telephony::SmsMessage_MessageClass> android::telephony::SmsMessage_MessageClass::values(){
    if (!::android::telephony::SmsMessage_MessageClass::_class) ::android::telephony::SmsMessage_MessageClass::_class = java::fetch_class("android/telephony/SmsMessage$MessageClass");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/telephony/SmsMessage$MessageClass;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::telephony::SmsMessage_MessageClass> _ret(rets, ::android::telephony::SmsMessage_MessageClass((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::telephony::SmsMessage_MessageClass retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::telephony::SmsMessage_MessageClass android::telephony::SmsMessage_MessageClass::valueOf(const ::java::lang::String& arg0){
    if (!::android::telephony::SmsMessage_MessageClass::_class) ::android::telephony::SmsMessage_MessageClass::_class = java::fetch_class("android/telephony/SmsMessage$MessageClass");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/telephony/SmsMessage$MessageClass;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::telephony::SmsMessage_MessageClass _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::telephony::CellLocation::CellLocation() : ::java::lang::Object((jobject)0) {
    if (!::android::telephony::CellLocation::_class) ::android::telephony::CellLocation::_class = java::fetch_class("android/telephony/CellLocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::telephony::CellLocation::requestLocationUpdate(){
    if (!::android::telephony::CellLocation::_class) ::android::telephony::CellLocation::_class = java::fetch_class("android/telephony/CellLocation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "requestLocationUpdate", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

::android::telephony::CellLocation android::telephony::CellLocation::getEmpty(){
    if (!::android::telephony::CellLocation::_class) ::android::telephony::CellLocation::_class = java::fetch_class("android/telephony/CellLocation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getEmpty", "()Landroid/telephony/CellLocation;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::telephony::CellLocation _ret(ret);
    return _ret;
}

