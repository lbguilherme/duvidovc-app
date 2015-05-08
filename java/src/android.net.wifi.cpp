#include "java-core.hpp"
#include <memory>
#include "android.net.DhcpInfo.hpp"
#include "android.net.NetworkInfo.hpp"
#include "android.net.wifi.ScanResult.hpp"
#include "android.net.wifi.SupplicantState.hpp"
#include "android.net.wifi.WifiConfiguration.hpp"
#include "android.net.wifi.WifiInfo.hpp"
#include "android.net.wifi.WifiManager.hpp"
#include "android.net.wifi.WpsInfo.hpp"
#include "android.os.Parcel.hpp"
#include "android.os.WorkSource.hpp"
#include "java.lang.String.hpp"
#include "java.util.List.hpp"

jclass android::net::wifi::WifiManager_MulticastLock::_class = nullptr;
jclass android::net::wifi::WifiManager_WifiLock::_class = nullptr;
jclass android::net::wifi::ScanResult::_class = nullptr;
jclass android::net::wifi::WifiConfiguration_PairwiseCipher::_class = nullptr;
jclass android::net::wifi::WifiConfiguration_AuthAlgorithm::_class = nullptr;
jclass android::net::wifi::WifiConfiguration_GroupCipher::_class = nullptr;
jclass android::net::wifi::WifiConfiguration_Protocol::_class = nullptr;
jclass android::net::wifi::WifiInfo::_class = nullptr;
jclass android::net::wifi::WifiManager::_class = nullptr;
jclass android::net::wifi::WifiConfiguration::_class = nullptr;
jclass android::net::wifi::WpsInfo::_class = nullptr;
jclass android::net::wifi::WifiConfiguration_Status::_class = nullptr;
jclass android::net::wifi::WifiConfiguration_KeyMgmt::_class = nullptr;
jclass android::net::wifi::SupplicantState::_class = nullptr;

void android::net::wifi::WifiManager_MulticastLock::acquire() const {
    if (!::android::net::wifi::WifiManager_MulticastLock::_class) ::android::net::wifi::WifiManager_MulticastLock::_class = java::fetch_class("android/net/wifi/WifiManager$MulticastLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "acquire", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::net::wifi::WifiManager_MulticastLock::release() const {
    if (!::android::net::wifi::WifiManager_MulticastLock::_class) ::android::net::wifi::WifiManager_MulticastLock::_class = java::fetch_class("android/net/wifi/WifiManager$MulticastLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::net::wifi::WifiManager_MulticastLock::setReferenceCounted(bool arg0) const {
    if (!::android::net::wifi::WifiManager_MulticastLock::_class) ::android::net::wifi::WifiManager_MulticastLock::_class = java::fetch_class("android/net/wifi/WifiManager$MulticastLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReferenceCounted", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::net::wifi::WifiManager_MulticastLock::isHeld() const {
    if (!::android::net::wifi::WifiManager_MulticastLock::_class) ::android::net::wifi::WifiManager_MulticastLock::_class = java::fetch_class("android/net/wifi/WifiManager$MulticastLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "isHeld", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String android::net::wifi::WifiManager_MulticastLock::toString() const {
    if (!::android::net::wifi::WifiManager_MulticastLock::_class) ::android::net::wifi::WifiManager_MulticastLock::_class = java::fetch_class("android/net/wifi/WifiManager$MulticastLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::net::wifi::WifiManager_WifiLock::acquire() const {
    if (!::android::net::wifi::WifiManager_WifiLock::_class) ::android::net::wifi::WifiManager_WifiLock::_class = java::fetch_class("android/net/wifi/WifiManager$WifiLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "acquire", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::net::wifi::WifiManager_WifiLock::release() const {
    if (!::android::net::wifi::WifiManager_WifiLock::_class) ::android::net::wifi::WifiManager_WifiLock::_class = java::fetch_class("android/net/wifi/WifiManager$WifiLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::net::wifi::WifiManager_WifiLock::setReferenceCounted(bool arg0) const {
    if (!::android::net::wifi::WifiManager_WifiLock::_class) ::android::net::wifi::WifiManager_WifiLock::_class = java::fetch_class("android/net/wifi/WifiManager$WifiLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReferenceCounted", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::net::wifi::WifiManager_WifiLock::isHeld() const {
    if (!::android::net::wifi::WifiManager_WifiLock::_class) ::android::net::wifi::WifiManager_WifiLock::_class = java::fetch_class("android/net/wifi/WifiManager$WifiLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "isHeld", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::net::wifi::WifiManager_WifiLock::setWorkSource(const ::android::os::WorkSource& arg0) const {
    if (!::android::net::wifi::WifiManager_WifiLock::_class) ::android::net::wifi::WifiManager_WifiLock::_class = java::fetch_class("android/net/wifi/WifiManager$WifiLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWorkSource", "(Landroid/os/WorkSource;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::net::wifi::WifiManager_WifiLock::toString() const {
    if (!::android::net::wifi::WifiManager_WifiLock::_class) ::android::net::wifi::WifiManager_WifiLock::_class = java::fetch_class("android/net/wifi/WifiManager$WifiLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::wifi::ScanResult::toString() const {
    if (!::android::net::wifi::ScanResult::_class) ::android::net::wifi::ScanResult::_class = java::fetch_class("android/net/wifi/ScanResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::net::wifi::ScanResult::describeContents() const {
    if (!::android::net::wifi::ScanResult::_class) ::android::net::wifi::ScanResult::_class = java::fetch_class("android/net/wifi/ScanResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::net::wifi::ScanResult::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::net::wifi::ScanResult::_class) ::android::net::wifi::ScanResult::_class = java::fetch_class("android/net/wifi/ScanResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::net::wifi::WifiInfo::getSSID() const {
    if (!::android::net::wifi::WifiInfo::_class) ::android::net::wifi::WifiInfo::_class = java::fetch_class("android/net/wifi/WifiInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSSID", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::wifi::WifiInfo::getBSSID() const {
    if (!::android::net::wifi::WifiInfo::_class) ::android::net::wifi::WifiInfo::_class = java::fetch_class("android/net/wifi/WifiInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBSSID", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::net::wifi::WifiInfo::getRssi() const {
    if (!::android::net::wifi::WifiInfo::_class) ::android::net::wifi::WifiInfo::_class = java::fetch_class("android/net/wifi/WifiInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRssi", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::net::wifi::WifiInfo::getLinkSpeed() const {
    if (!::android::net::wifi::WifiInfo::_class) ::android::net::wifi::WifiInfo::_class = java::fetch_class("android/net/wifi/WifiInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLinkSpeed", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::net::wifi::WifiInfo::getMacAddress() const {
    if (!::android::net::wifi::WifiInfo::_class) ::android::net::wifi::WifiInfo::_class = java::fetch_class("android/net/wifi/WifiInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMacAddress", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::net::wifi::WifiInfo::getNetworkId() const {
    if (!::android::net::wifi::WifiInfo::_class) ::android::net::wifi::WifiInfo::_class = java::fetch_class("android/net/wifi/WifiInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNetworkId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::net::wifi::SupplicantState android::net::wifi::WifiInfo::getSupplicantState() const {
    if (!::android::net::wifi::WifiInfo::_class) ::android::net::wifi::WifiInfo::_class = java::fetch_class("android/net/wifi/WifiInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupplicantState", "()Landroid/net/wifi/SupplicantState;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::wifi::SupplicantState _ret(ret);
    return _ret;
}

int32_t android::net::wifi::WifiInfo::getIpAddress() const {
    if (!::android::net::wifi::WifiInfo::_class) ::android::net::wifi::WifiInfo::_class = java::fetch_class("android/net/wifi/WifiInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIpAddress", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::net::wifi::WifiInfo::getHiddenSSID() const {
    if (!::android::net::wifi::WifiInfo::_class) ::android::net::wifi::WifiInfo::_class = java::fetch_class("android/net/wifi/WifiInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHiddenSSID", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::net::NetworkInfo_DetailedState android::net::wifi::WifiInfo::getDetailedStateOf(const ::android::net::wifi::SupplicantState& arg0){
    if (!::android::net::wifi::WifiInfo::_class) ::android::net::wifi::WifiInfo::_class = java::fetch_class("android/net/wifi/WifiInfo");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDetailedStateOf", "(Landroid/net/wifi/SupplicantState;)Landroid/net/NetworkInfo$DetailedState;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::net::NetworkInfo_DetailedState _ret(ret);
    return _ret;
}

::java::lang::String android::net::wifi::WifiInfo::toString() const {
    if (!::android::net::wifi::WifiInfo::_class) ::android::net::wifi::WifiInfo::_class = java::fetch_class("android/net/wifi/WifiInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::net::wifi::WifiInfo::describeContents() const {
    if (!::android::net::wifi::WifiInfo::_class) ::android::net::wifi::WifiInfo::_class = java::fetch_class("android/net/wifi/WifiInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::net::wifi::WifiInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::net::wifi::WifiInfo::_class) ::android::net::wifi::WifiInfo::_class = java::fetch_class("android/net/wifi/WifiInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::util::List android::net::wifi::WifiManager::getConfiguredNetworks() const {
    if (!::android::net::wifi::WifiManager::_class) ::android::net::wifi::WifiManager::_class = java::fetch_class("android/net/wifi/WifiManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConfiguredNetworks", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

int32_t android::net::wifi::WifiManager::addNetwork(const ::android::net::wifi::WifiConfiguration& arg0) const {
    if (!::android::net::wifi::WifiManager::_class) ::android::net::wifi::WifiManager::_class = java::fetch_class("android/net/wifi/WifiManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addNetwork", "(Landroid/net/wifi/WifiConfiguration;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::net::wifi::WifiManager::updateNetwork(const ::android::net::wifi::WifiConfiguration& arg0) const {
    if (!::android::net::wifi::WifiManager::_class) ::android::net::wifi::WifiManager::_class = java::fetch_class("android/net/wifi/WifiManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateNetwork", "(Landroid/net/wifi/WifiConfiguration;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::net::wifi::WifiManager::removeNetwork(int32_t arg0) const {
    if (!::android::net::wifi::WifiManager::_class) ::android::net::wifi::WifiManager::_class = java::fetch_class("android/net/wifi/WifiManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeNetwork", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::net::wifi::WifiManager::enableNetwork(int32_t arg0, bool arg1) const {
    if (!::android::net::wifi::WifiManager::_class) ::android::net::wifi::WifiManager::_class = java::fetch_class("android/net/wifi/WifiManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "enableNetwork", "(IZ)Z");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::net::wifi::WifiManager::disableNetwork(int32_t arg0) const {
    if (!::android::net::wifi::WifiManager::_class) ::android::net::wifi::WifiManager::_class = java::fetch_class("android/net/wifi/WifiManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "disableNetwork", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::net::wifi::WifiManager::disconnect() const {
    if (!::android::net::wifi::WifiManager::_class) ::android::net::wifi::WifiManager::_class = java::fetch_class("android/net/wifi/WifiManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "disconnect", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::net::wifi::WifiManager::reconnect() const {
    if (!::android::net::wifi::WifiManager::_class) ::android::net::wifi::WifiManager::_class = java::fetch_class("android/net/wifi/WifiManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "reconnect", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::net::wifi::WifiManager::reassociate() const {
    if (!::android::net::wifi::WifiManager::_class) ::android::net::wifi::WifiManager::_class = java::fetch_class("android/net/wifi/WifiManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "reassociate", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::net::wifi::WifiManager::pingSupplicant() const {
    if (!::android::net::wifi::WifiManager::_class) ::android::net::wifi::WifiManager::_class = java::fetch_class("android/net/wifi/WifiManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "pingSupplicant", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::net::wifi::WifiManager::startScan() const {
    if (!::android::net::wifi::WifiManager::_class) ::android::net::wifi::WifiManager::_class = java::fetch_class("android/net/wifi/WifiManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "startScan", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::net::wifi::WifiInfo android::net::wifi::WifiManager::getConnectionInfo() const {
    if (!::android::net::wifi::WifiManager::_class) ::android::net::wifi::WifiManager::_class = java::fetch_class("android/net/wifi/WifiManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnectionInfo", "()Landroid/net/wifi/WifiInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::wifi::WifiInfo _ret(ret);
    return _ret;
}

::java::util::List android::net::wifi::WifiManager::getScanResults() const {
    if (!::android::net::wifi::WifiManager::_class) ::android::net::wifi::WifiManager::_class = java::fetch_class("android/net/wifi/WifiManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScanResults", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

bool android::net::wifi::WifiManager::saveConfiguration() const {
    if (!::android::net::wifi::WifiManager::_class) ::android::net::wifi::WifiManager::_class = java::fetch_class("android/net/wifi/WifiManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "saveConfiguration", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::net::DhcpInfo android::net::wifi::WifiManager::getDhcpInfo() const {
    if (!::android::net::wifi::WifiManager::_class) ::android::net::wifi::WifiManager::_class = java::fetch_class("android/net/wifi/WifiManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDhcpInfo", "()Landroid/net/DhcpInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::DhcpInfo _ret(ret);
    return _ret;
}

bool android::net::wifi::WifiManager::setWifiEnabled(bool arg0) const {
    if (!::android::net::wifi::WifiManager::_class) ::android::net::wifi::WifiManager::_class = java::fetch_class("android/net/wifi/WifiManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWifiEnabled", "(Z)Z");
    bool _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::net::wifi::WifiManager::getWifiState() const {
    if (!::android::net::wifi::WifiManager::_class) ::android::net::wifi::WifiManager::_class = java::fetch_class("android/net/wifi/WifiManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWifiState", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::net::wifi::WifiManager::isWifiEnabled() const {
    if (!::android::net::wifi::WifiManager::_class) ::android::net::wifi::WifiManager::_class = java::fetch_class("android/net/wifi/WifiManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "isWifiEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::net::wifi::WifiManager::calculateSignalLevel(int32_t arg0, int32_t arg1){
    if (!::android::net::wifi::WifiManager::_class) ::android::net::wifi::WifiManager::_class = java::fetch_class("android/net/wifi/WifiManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "calculateSignalLevel", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t android::net::wifi::WifiManager::compareSignalLevel(int32_t arg0, int32_t arg1){
    if (!::android::net::wifi::WifiManager::_class) ::android::net::wifi::WifiManager::_class = java::fetch_class("android/net/wifi/WifiManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "compareSignalLevel", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

::android::net::wifi::WifiManager_WifiLock android::net::wifi::WifiManager::createWifiLock(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::android::net::wifi::WifiManager::_class) ::android::net::wifi::WifiManager::_class = java::fetch_class("android/net/wifi/WifiManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "createWifiLock", "(ILjava/lang/String;)Landroid/net/wifi/WifiManager$WifiLock;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::net::wifi::WifiManager_WifiLock _ret(ret);
    return _ret;
}

::android::net::wifi::WifiManager_WifiLock android::net::wifi::WifiManager::createWifiLock(const ::java::lang::String& arg0) const {
    if (!::android::net::wifi::WifiManager::_class) ::android::net::wifi::WifiManager::_class = java::fetch_class("android/net/wifi/WifiManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "createWifiLock", "(Ljava/lang/String;)Landroid/net/wifi/WifiManager$WifiLock;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::wifi::WifiManager_WifiLock _ret(ret);
    return _ret;
}

::android::net::wifi::WifiManager_MulticastLock android::net::wifi::WifiManager::createMulticastLock(const ::java::lang::String& arg0) const {
    if (!::android::net::wifi::WifiManager::_class) ::android::net::wifi::WifiManager::_class = java::fetch_class("android/net/wifi/WifiManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "createMulticastLock", "(Ljava/lang/String;)Landroid/net/wifi/WifiManager$MulticastLock;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::wifi::WifiManager_MulticastLock _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::wifi::WifiConfiguration::WifiConfiguration() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::net::wifi::WifiConfiguration::_class) ::android::net::wifi::WifiConfiguration::_class = java::fetch_class("android/net/wifi/WifiConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::net::wifi::WifiConfiguration::toString() const {
    if (!::android::net::wifi::WifiConfiguration::_class) ::android::net::wifi::WifiConfiguration::_class = java::fetch_class("android/net/wifi/WifiConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::net::wifi::WifiConfiguration::describeContents() const {
    if (!::android::net::wifi::WifiConfiguration::_class) ::android::net::wifi::WifiConfiguration::_class = java::fetch_class("android/net/wifi/WifiConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::net::wifi::WifiConfiguration::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::net::wifi::WifiConfiguration::_class) ::android::net::wifi::WifiConfiguration::_class = java::fetch_class("android/net/wifi/WifiConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::wifi::WpsInfo::WpsInfo() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::net::wifi::WpsInfo::_class) ::android::net::wifi::WpsInfo::_class = java::fetch_class("android/net/wifi/WpsInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::net::wifi::WpsInfo::toString() const {
    if (!::android::net::wifi::WpsInfo::_class) ::android::net::wifi::WpsInfo::_class = java::fetch_class("android/net/wifi/WpsInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::net::wifi::WpsInfo::describeContents() const {
    if (!::android::net::wifi::WpsInfo::_class) ::android::net::wifi::WpsInfo::_class = java::fetch_class("android/net/wifi/WpsInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::net::wifi::WpsInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::net::wifi::WpsInfo::_class) ::android::net::wifi::WpsInfo::_class = java::fetch_class("android/net/wifi/WpsInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

std::vector< ::android::net::wifi::SupplicantState> android::net::wifi::SupplicantState::values(){
    if (!::android::net::wifi::SupplicantState::_class) ::android::net::wifi::SupplicantState::_class = java::fetch_class("android/net/wifi/SupplicantState");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/net/wifi/SupplicantState;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::net::wifi::SupplicantState> _ret(rets, ::android::net::wifi::SupplicantState((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::net::wifi::SupplicantState retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::net::wifi::SupplicantState android::net::wifi::SupplicantState::valueOf(const ::java::lang::String& arg0){
    if (!::android::net::wifi::SupplicantState::_class) ::android::net::wifi::SupplicantState::_class = java::fetch_class("android/net/wifi/SupplicantState");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/net/wifi/SupplicantState;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::net::wifi::SupplicantState _ret(ret);
    return _ret;
}

bool android::net::wifi::SupplicantState::isValidState(const ::android::net::wifi::SupplicantState& arg0){
    if (!::android::net::wifi::SupplicantState::_class) ::android::net::wifi::SupplicantState::_class = java::fetch_class("android/net/wifi/SupplicantState");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isValidState", "(Landroid/net/wifi/SupplicantState;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

int32_t android::net::wifi::SupplicantState::describeContents() const {
    if (!::android::net::wifi::SupplicantState::_class) ::android::net::wifi::SupplicantState::_class = java::fetch_class("android/net/wifi/SupplicantState");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::net::wifi::SupplicantState::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::net::wifi::SupplicantState::_class) ::android::net::wifi::SupplicantState::_class = java::fetch_class("android/net/wifi/SupplicantState");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

