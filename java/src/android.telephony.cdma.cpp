#include "java-core.hpp"
#include <memory>
#include "android.os.Bundle.hpp"
#include "android.telephony.cdma.CdmaCellLocation.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"

jclass android::telephony::cdma::CdmaCellLocation::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::telephony::cdma::CdmaCellLocation::CdmaCellLocation() : ::java::lang::Object((jobject)0), ::android::telephony::CellLocation((jobject)0) {
    if (!::android::telephony::cdma::CdmaCellLocation::_class) ::android::telephony::cdma::CdmaCellLocation::_class = java::fetch_class("android/telephony/cdma/CdmaCellLocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::telephony::cdma::CdmaCellLocation::CdmaCellLocation(const ::android::os::Bundle& arg0) : ::java::lang::Object((jobject)0), ::android::telephony::CellLocation((jobject)0) {
    if (!::android::telephony::cdma::CdmaCellLocation::_class) ::android::telephony::cdma::CdmaCellLocation::_class = java::fetch_class("android/telephony/cdma/CdmaCellLocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::telephony::cdma::CdmaCellLocation::getBaseStationId() const {
    if (!::android::telephony::cdma::CdmaCellLocation::_class) ::android::telephony::cdma::CdmaCellLocation::_class = java::fetch_class("android/telephony/cdma/CdmaCellLocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBaseStationId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::telephony::cdma::CdmaCellLocation::getBaseStationLatitude() const {
    if (!::android::telephony::cdma::CdmaCellLocation::_class) ::android::telephony::cdma::CdmaCellLocation::_class = java::fetch_class("android/telephony/cdma/CdmaCellLocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBaseStationLatitude", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::telephony::cdma::CdmaCellLocation::getBaseStationLongitude() const {
    if (!::android::telephony::cdma::CdmaCellLocation::_class) ::android::telephony::cdma::CdmaCellLocation::_class = java::fetch_class("android/telephony/cdma/CdmaCellLocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBaseStationLongitude", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::telephony::cdma::CdmaCellLocation::getSystemId() const {
    if (!::android::telephony::cdma::CdmaCellLocation::_class) ::android::telephony::cdma::CdmaCellLocation::_class = java::fetch_class("android/telephony/cdma/CdmaCellLocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::telephony::cdma::CdmaCellLocation::getNetworkId() const {
    if (!::android::telephony::cdma::CdmaCellLocation::_class) ::android::telephony::cdma::CdmaCellLocation::_class = java::fetch_class("android/telephony/cdma/CdmaCellLocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNetworkId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::telephony::cdma::CdmaCellLocation::setStateInvalid() const {
    if (!::android::telephony::cdma::CdmaCellLocation::_class) ::android::telephony::cdma::CdmaCellLocation::_class = java::fetch_class("android/telephony/cdma/CdmaCellLocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStateInvalid", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::telephony::cdma::CdmaCellLocation::setCellLocationData(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::telephony::cdma::CdmaCellLocation::_class) ::android::telephony::cdma::CdmaCellLocation::_class = java::fetch_class("android/telephony/cdma/CdmaCellLocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCellLocationData", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::telephony::cdma::CdmaCellLocation::setCellLocationData(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::telephony::cdma::CdmaCellLocation::_class) ::android::telephony::cdma::CdmaCellLocation::_class = java::fetch_class("android/telephony/cdma/CdmaCellLocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCellLocationData", "(IIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

int32_t android::telephony::cdma::CdmaCellLocation::hashCode() const {
    if (!::android::telephony::cdma::CdmaCellLocation::_class) ::android::telephony::cdma::CdmaCellLocation::_class = java::fetch_class("android/telephony/cdma/CdmaCellLocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::telephony::cdma::CdmaCellLocation::equals(const ::java::lang::Object& arg0) const {
    if (!::android::telephony::cdma::CdmaCellLocation::_class) ::android::telephony::cdma::CdmaCellLocation::_class = java::fetch_class("android/telephony/cdma/CdmaCellLocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::telephony::cdma::CdmaCellLocation::toString() const {
    if (!::android::telephony::cdma::CdmaCellLocation::_class) ::android::telephony::cdma::CdmaCellLocation::_class = java::fetch_class("android/telephony/cdma/CdmaCellLocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::telephony::cdma::CdmaCellLocation::fillInNotifierBundle(const ::android::os::Bundle& arg0) const {
    if (!::android::telephony::cdma::CdmaCellLocation::_class) ::android::telephony::cdma::CdmaCellLocation::_class = java::fetch_class("android/telephony/cdma/CdmaCellLocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "fillInNotifierBundle", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

