#include "java-core.hpp"
#include <memory>
#include "android.content.Context.hpp"
#include "android.net.wifi.p2p.WifiP2pConfig.hpp"
#include "android.net.wifi.p2p.WifiP2pDevice.hpp"
#include "android.net.wifi.p2p.WifiP2pDeviceList.hpp"
#include "android.net.wifi.p2p.WifiP2pGroup.hpp"
#include "android.net.wifi.p2p.WifiP2pInfo.hpp"
#include "android.net.wifi.p2p.WifiP2pManager.hpp"
#include "android.os.Looper.hpp"
#include "android.os.Parcel.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.Collection.hpp"

jclass android::net::wifi::p2p::WifiP2pManager_GroupInfoListener::_class = nullptr;
jclass android::net::wifi::p2p::WifiP2pDeviceList::_class = nullptr;
jclass android::net::wifi::p2p::WifiP2pGroup::_class = nullptr;
jclass android::net::wifi::p2p::WifiP2pManager_ActionListener::_class = nullptr;
jclass android::net::wifi::p2p::WifiP2pManager::_class = nullptr;
jclass android::net::wifi::p2p::WifiP2pManager_PeerListListener::_class = nullptr;
jclass android::net::wifi::p2p::WifiP2pManager_Channel::_class = nullptr;
jclass android::net::wifi::p2p::WifiP2pConfig::_class = nullptr;
jclass android::net::wifi::p2p::WifiP2pDevice::_class = nullptr;
jclass android::net::wifi::p2p::WifiP2pInfo::_class = nullptr;
jclass android::net::wifi::p2p::WifiP2pManager_ChannelListener::_class = nullptr;
jclass android::net::wifi::p2p::WifiP2pManager_ConnectionInfoListener::_class = nullptr;

void android::net::wifi::p2p::WifiP2pManager_GroupInfoListener::onGroupInfoAvailable(const ::android::net::wifi::p2p::WifiP2pGroup& arg0) const {
    if (!::android::net::wifi::p2p::WifiP2pManager_GroupInfoListener::_class) ::android::net::wifi::p2p::WifiP2pManager_GroupInfoListener::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pManager$GroupInfoListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGroupInfoAvailable", "(Landroid/net/wifi/p2p/WifiP2pGroup;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::wifi::p2p::WifiP2pDeviceList::WifiP2pDeviceList() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::net::wifi::p2p::WifiP2pDeviceList::_class) ::android::net::wifi::p2p::WifiP2pDeviceList::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pDeviceList");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::util::Collection android::net::wifi::p2p::WifiP2pDeviceList::getDeviceList() const {
    if (!::android::net::wifi::p2p::WifiP2pDeviceList::_class) ::android::net::wifi::p2p::WifiP2pDeviceList::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pDeviceList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeviceList", "()Ljava/util/Collection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::lang::String android::net::wifi::p2p::WifiP2pDeviceList::toString() const {
    if (!::android::net::wifi::p2p::WifiP2pDeviceList::_class) ::android::net::wifi::p2p::WifiP2pDeviceList::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pDeviceList");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::net::wifi::p2p::WifiP2pDeviceList::describeContents() const {
    if (!::android::net::wifi::p2p::WifiP2pDeviceList::_class) ::android::net::wifi::p2p::WifiP2pDeviceList::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pDeviceList");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::net::wifi::p2p::WifiP2pDeviceList::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::net::wifi::p2p::WifiP2pDeviceList::_class) ::android::net::wifi::p2p::WifiP2pDeviceList::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pDeviceList");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::wifi::p2p::WifiP2pGroup::WifiP2pGroup() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::net::wifi::p2p::WifiP2pGroup::_class) ::android::net::wifi::p2p::WifiP2pGroup::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::net::wifi::p2p::WifiP2pGroup::getNetworkName() const {
    if (!::android::net::wifi::p2p::WifiP2pGroup::_class) ::android::net::wifi::p2p::WifiP2pGroup::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNetworkName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::net::wifi::p2p::WifiP2pGroup::isGroupOwner() const {
    if (!::android::net::wifi::p2p::WifiP2pGroup::_class) ::android::net::wifi::p2p::WifiP2pGroup::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "isGroupOwner", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::net::wifi::p2p::WifiP2pDevice android::net::wifi::p2p::WifiP2pGroup::getOwner() const {
    if (!::android::net::wifi::p2p::WifiP2pGroup::_class) ::android::net::wifi::p2p::WifiP2pGroup::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOwner", "()Landroid/net/wifi/p2p/WifiP2pDevice;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::wifi::p2p::WifiP2pDevice _ret(ret);
    return _ret;
}

::java::util::Collection android::net::wifi::p2p::WifiP2pGroup::getClientList() const {
    if (!::android::net::wifi::p2p::WifiP2pGroup::_class) ::android::net::wifi::p2p::WifiP2pGroup::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClientList", "()Ljava/util/Collection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::lang::String android::net::wifi::p2p::WifiP2pGroup::getPassphrase() const {
    if (!::android::net::wifi::p2p::WifiP2pGroup::_class) ::android::net::wifi::p2p::WifiP2pGroup::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPassphrase", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::wifi::p2p::WifiP2pGroup::getInterface() const {
    if (!::android::net::wifi::p2p::WifiP2pGroup::_class) ::android::net::wifi::p2p::WifiP2pGroup::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterface", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::wifi::p2p::WifiP2pGroup::toString() const {
    if (!::android::net::wifi::p2p::WifiP2pGroup::_class) ::android::net::wifi::p2p::WifiP2pGroup::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::net::wifi::p2p::WifiP2pGroup::describeContents() const {
    if (!::android::net::wifi::p2p::WifiP2pGroup::_class) ::android::net::wifi::p2p::WifiP2pGroup::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::net::wifi::p2p::WifiP2pGroup::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::net::wifi::p2p::WifiP2pGroup::_class) ::android::net::wifi::p2p::WifiP2pGroup::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::net::wifi::p2p::WifiP2pManager_ActionListener::onSuccess() const {
    if (!::android::net::wifi::p2p::WifiP2pManager_ActionListener::_class) ::android::net::wifi::p2p::WifiP2pManager_ActionListener::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pManager$ActionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSuccess", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::net::wifi::p2p::WifiP2pManager_ActionListener::onFailure(int32_t arg0) const {
    if (!::android::net::wifi::p2p::WifiP2pManager_ActionListener::_class) ::android::net::wifi::p2p::WifiP2pManager_ActionListener::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pManager$ActionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFailure", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::net::wifi::p2p::WifiP2pManager_Channel android::net::wifi::p2p::WifiP2pManager::initialize(const ::android::content::Context& arg0, const ::android::os::Looper& arg1, const ::android::net::wifi::p2p::WifiP2pManager_ChannelListener& arg2) const {
    if (!::android::net::wifi::p2p::WifiP2pManager::_class) ::android::net::wifi::p2p::WifiP2pManager::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "initialize", "(Landroid/content/Context;Landroid/os/Looper;Landroid/net/wifi/p2p/WifiP2pManager$ChannelListener;)Landroid/net/wifi/p2p/WifiP2pManager$Channel;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::net::wifi::p2p::WifiP2pManager_Channel _ret(ret);
    return _ret;
}

void android::net::wifi::p2p::WifiP2pManager::discoverPeers(const ::android::net::wifi::p2p::WifiP2pManager_Channel& arg0, const ::android::net::wifi::p2p::WifiP2pManager_ActionListener& arg1) const {
    if (!::android::net::wifi::p2p::WifiP2pManager::_class) ::android::net::wifi::p2p::WifiP2pManager::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "discoverPeers", "(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::net::wifi::p2p::WifiP2pManager::connect(const ::android::net::wifi::p2p::WifiP2pManager_Channel& arg0, const ::android::net::wifi::p2p::WifiP2pConfig& arg1, const ::android::net::wifi::p2p::WifiP2pManager_ActionListener& arg2) const {
    if (!::android::net::wifi::p2p::WifiP2pManager::_class) ::android::net::wifi::p2p::WifiP2pManager::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "connect", "(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pConfig;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::net::wifi::p2p::WifiP2pManager::cancelConnect(const ::android::net::wifi::p2p::WifiP2pManager_Channel& arg0, const ::android::net::wifi::p2p::WifiP2pManager_ActionListener& arg1) const {
    if (!::android::net::wifi::p2p::WifiP2pManager::_class) ::android::net::wifi::p2p::WifiP2pManager::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancelConnect", "(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::net::wifi::p2p::WifiP2pManager::createGroup(const ::android::net::wifi::p2p::WifiP2pManager_Channel& arg0, const ::android::net::wifi::p2p::WifiP2pManager_ActionListener& arg1) const {
    if (!::android::net::wifi::p2p::WifiP2pManager::_class) ::android::net::wifi::p2p::WifiP2pManager::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "createGroup", "(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::net::wifi::p2p::WifiP2pManager::removeGroup(const ::android::net::wifi::p2p::WifiP2pManager_Channel& arg0, const ::android::net::wifi::p2p::WifiP2pManager_ActionListener& arg1) const {
    if (!::android::net::wifi::p2p::WifiP2pManager::_class) ::android::net::wifi::p2p::WifiP2pManager::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeGroup", "(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::net::wifi::p2p::WifiP2pManager::requestPeers(const ::android::net::wifi::p2p::WifiP2pManager_Channel& arg0, const ::android::net::wifi::p2p::WifiP2pManager_PeerListListener& arg1) const {
    if (!::android::net::wifi::p2p::WifiP2pManager::_class) ::android::net::wifi::p2p::WifiP2pManager::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestPeers", "(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$PeerListListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::net::wifi::p2p::WifiP2pManager::requestConnectionInfo(const ::android::net::wifi::p2p::WifiP2pManager_Channel& arg0, const ::android::net::wifi::p2p::WifiP2pManager_ConnectionInfoListener& arg1) const {
    if (!::android::net::wifi::p2p::WifiP2pManager::_class) ::android::net::wifi::p2p::WifiP2pManager::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestConnectionInfo", "(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ConnectionInfoListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::net::wifi::p2p::WifiP2pManager::requestGroupInfo(const ::android::net::wifi::p2p::WifiP2pManager_Channel& arg0, const ::android::net::wifi::p2p::WifiP2pManager_GroupInfoListener& arg1) const {
    if (!::android::net::wifi::p2p::WifiP2pManager::_class) ::android::net::wifi::p2p::WifiP2pManager::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestGroupInfo", "(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$GroupInfoListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::net::wifi::p2p::WifiP2pManager_PeerListListener::onPeersAvailable(const ::android::net::wifi::p2p::WifiP2pDeviceList& arg0) const {
    if (!::android::net::wifi::p2p::WifiP2pManager_PeerListListener::_class) ::android::net::wifi::p2p::WifiP2pManager_PeerListListener::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pManager$PeerListListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPeersAvailable", "(Landroid/net/wifi/p2p/WifiP2pDeviceList;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::wifi::p2p::WifiP2pConfig::WifiP2pConfig() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::net::wifi::p2p::WifiP2pConfig::_class) ::android::net::wifi::p2p::WifiP2pConfig::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pConfig");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::net::wifi::p2p::WifiP2pConfig::toString() const {
    if (!::android::net::wifi::p2p::WifiP2pConfig::_class) ::android::net::wifi::p2p::WifiP2pConfig::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pConfig");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::net::wifi::p2p::WifiP2pConfig::describeContents() const {
    if (!::android::net::wifi::p2p::WifiP2pConfig::_class) ::android::net::wifi::p2p::WifiP2pConfig::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pConfig");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::net::wifi::p2p::WifiP2pConfig::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::net::wifi::p2p::WifiP2pConfig::_class) ::android::net::wifi::p2p::WifiP2pConfig::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pConfig");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::wifi::p2p::WifiP2pDevice::WifiP2pDevice() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::net::wifi::p2p::WifiP2pDevice::_class) ::android::net::wifi::p2p::WifiP2pDevice::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::net::wifi::p2p::WifiP2pDevice::wpsPbcSupported() const {
    if (!::android::net::wifi::p2p::WifiP2pDevice::_class) ::android::net::wifi::p2p::WifiP2pDevice::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "wpsPbcSupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::net::wifi::p2p::WifiP2pDevice::wpsKeypadSupported() const {
    if (!::android::net::wifi::p2p::WifiP2pDevice::_class) ::android::net::wifi::p2p::WifiP2pDevice::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "wpsKeypadSupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::net::wifi::p2p::WifiP2pDevice::wpsDisplaySupported() const {
    if (!::android::net::wifi::p2p::WifiP2pDevice::_class) ::android::net::wifi::p2p::WifiP2pDevice::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "wpsDisplaySupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::net::wifi::p2p::WifiP2pDevice::isServiceDiscoveryCapable() const {
    if (!::android::net::wifi::p2p::WifiP2pDevice::_class) ::android::net::wifi::p2p::WifiP2pDevice::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "isServiceDiscoveryCapable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::net::wifi::p2p::WifiP2pDevice::isGroupOwner() const {
    if (!::android::net::wifi::p2p::WifiP2pDevice::_class) ::android::net::wifi::p2p::WifiP2pDevice::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "isGroupOwner", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::net::wifi::p2p::WifiP2pDevice::equals(const ::java::lang::Object& arg0) const {
    if (!::android::net::wifi::p2p::WifiP2pDevice::_class) ::android::net::wifi::p2p::WifiP2pDevice::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::net::wifi::p2p::WifiP2pDevice::toString() const {
    if (!::android::net::wifi::p2p::WifiP2pDevice::_class) ::android::net::wifi::p2p::WifiP2pDevice::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::net::wifi::p2p::WifiP2pDevice::describeContents() const {
    if (!::android::net::wifi::p2p::WifiP2pDevice::_class) ::android::net::wifi::p2p::WifiP2pDevice::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::net::wifi::p2p::WifiP2pDevice::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::net::wifi::p2p::WifiP2pDevice::_class) ::android::net::wifi::p2p::WifiP2pDevice::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::wifi::p2p::WifiP2pInfo::WifiP2pInfo() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::net::wifi::p2p::WifiP2pInfo::_class) ::android::net::wifi::p2p::WifiP2pInfo::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::net::wifi::p2p::WifiP2pInfo::toString() const {
    if (!::android::net::wifi::p2p::WifiP2pInfo::_class) ::android::net::wifi::p2p::WifiP2pInfo::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::net::wifi::p2p::WifiP2pInfo::describeContents() const {
    if (!::android::net::wifi::p2p::WifiP2pInfo::_class) ::android::net::wifi::p2p::WifiP2pInfo::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::net::wifi::p2p::WifiP2pInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::net::wifi::p2p::WifiP2pInfo::_class) ::android::net::wifi::p2p::WifiP2pInfo::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::net::wifi::p2p::WifiP2pManager_ChannelListener::onChannelDisconnected() const {
    if (!::android::net::wifi::p2p::WifiP2pManager_ChannelListener::_class) ::android::net::wifi::p2p::WifiP2pManager_ChannelListener::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pManager$ChannelListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onChannelDisconnected", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::net::wifi::p2p::WifiP2pManager_ConnectionInfoListener::onConnectionInfoAvailable(const ::android::net::wifi::p2p::WifiP2pInfo& arg0) const {
    if (!::android::net::wifi::p2p::WifiP2pManager_ConnectionInfoListener::_class) ::android::net::wifi::p2p::WifiP2pManager_ConnectionInfoListener::_class = java::fetch_class("android/net/wifi/p2p/WifiP2pManager$ConnectionInfoListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onConnectionInfoAvailable", "(Landroid/net/wifi/p2p/WifiP2pInfo;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

