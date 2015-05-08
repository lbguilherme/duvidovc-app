#include "java-core.hpp"
#include <memory>
#include "android.bluetooth.BluetoothA2dp.hpp"
#include "android.bluetooth.BluetoothAdapter.hpp"
#include "android.bluetooth.BluetoothAssignedNumbers.hpp"
#include "android.bluetooth.BluetoothClass.hpp"
#include "android.bluetooth.BluetoothDevice.hpp"
#include "android.bluetooth.BluetoothHeadset.hpp"
#include "android.bluetooth.BluetoothHealth.hpp"
#include "android.bluetooth.BluetoothHealthAppConfiguration.hpp"
#include "android.bluetooth.BluetoothHealthCallback.hpp"
#include "android.bluetooth.BluetoothProfile.hpp"
#include "android.bluetooth.BluetoothServerSocket.hpp"
#include "android.bluetooth.BluetoothSocket.hpp"
#include "android.content.Context.hpp"
#include "android.os.Parcel.hpp"
#include "android.os.ParcelFileDescriptor.hpp"
#include "android.os.ParcelUuid.hpp"
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.List.hpp"
#include "java.util.Set.hpp"
#include "java.util.UUID.hpp"

jclass android::bluetooth::BluetoothHeadset::_class = nullptr;
jclass android::bluetooth::BluetoothProfile_ServiceListener::_class = nullptr;
jclass android::bluetooth::BluetoothDevice::_class = nullptr;
jclass android::bluetooth::BluetoothClass_Service::_class = nullptr;
jclass android::bluetooth::BluetoothAssignedNumbers::_class = nullptr;
jclass android::bluetooth::BluetoothClass_Device_Major::_class = nullptr;
jclass android::bluetooth::BluetoothServerSocket::_class = nullptr;
jclass android::bluetooth::BluetoothProfile::_class = nullptr;
jclass android::bluetooth::BluetoothA2dp::_class = nullptr;
jclass android::bluetooth::BluetoothHealth::_class = nullptr;
jclass android::bluetooth::BluetoothSocket::_class = nullptr;
jclass android::bluetooth::BluetoothClass_Device::_class = nullptr;
jclass android::bluetooth::BluetoothHealthAppConfiguration::_class = nullptr;
jclass android::bluetooth::BluetoothAdapter::_class = nullptr;
jclass android::bluetooth::BluetoothHealthCallback::_class = nullptr;
jclass android::bluetooth::BluetoothClass::_class = nullptr;

::java::util::List android::bluetooth::BluetoothHeadset::getConnectedDevices() const {
    if (!::android::bluetooth::BluetoothHeadset::_class) ::android::bluetooth::BluetoothHeadset::_class = java::fetch_class("android/bluetooth/BluetoothHeadset");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnectedDevices", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List android::bluetooth::BluetoothHeadset::getDevicesMatchingConnectionStates(const std::vector< int32_t>& arg0) const {
    if (!::android::bluetooth::BluetoothHeadset::_class) ::android::bluetooth::BluetoothHeadset::_class = java::fetch_class("android/bluetooth/BluetoothHeadset");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDevicesMatchingConnectionStates", "([I)Ljava/util/List;");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

int32_t android::bluetooth::BluetoothHeadset::getConnectionState(const ::android::bluetooth::BluetoothDevice& arg0) const {
    if (!::android::bluetooth::BluetoothHeadset::_class) ::android::bluetooth::BluetoothHeadset::_class = java::fetch_class("android/bluetooth/BluetoothHeadset");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnectionState", "(Landroid/bluetooth/BluetoothDevice;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::bluetooth::BluetoothHeadset::startVoiceRecognition(const ::android::bluetooth::BluetoothDevice& arg0) const {
    if (!::android::bluetooth::BluetoothHeadset::_class) ::android::bluetooth::BluetoothHeadset::_class = java::fetch_class("android/bluetooth/BluetoothHeadset");
    static jmethodID mid = java::jni->GetMethodID(_class, "startVoiceRecognition", "(Landroid/bluetooth/BluetoothDevice;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::bluetooth::BluetoothHeadset::stopVoiceRecognition(const ::android::bluetooth::BluetoothDevice& arg0) const {
    if (!::android::bluetooth::BluetoothHeadset::_class) ::android::bluetooth::BluetoothHeadset::_class = java::fetch_class("android/bluetooth/BluetoothHeadset");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopVoiceRecognition", "(Landroid/bluetooth/BluetoothDevice;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::bluetooth::BluetoothHeadset::isAudioConnected(const ::android::bluetooth::BluetoothDevice& arg0) const {
    if (!::android::bluetooth::BluetoothHeadset::_class) ::android::bluetooth::BluetoothHeadset::_class = java::fetch_class("android/bluetooth/BluetoothHeadset");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAudioConnected", "(Landroid/bluetooth/BluetoothDevice;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::bluetooth::BluetoothProfile_ServiceListener::onServiceConnected(int32_t arg0, const ::android::bluetooth::BluetoothProfile& arg1) const {
    if (!::android::bluetooth::BluetoothProfile_ServiceListener::_class) ::android::bluetooth::BluetoothProfile_ServiceListener::_class = java::fetch_class("android/bluetooth/BluetoothProfile$ServiceListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onServiceConnected", "(ILandroid/bluetooth/BluetoothProfile;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::bluetooth::BluetoothProfile_ServiceListener::onServiceDisconnected(int32_t arg0) const {
    if (!::android::bluetooth::BluetoothProfile_ServiceListener::_class) ::android::bluetooth::BluetoothProfile_ServiceListener::_class = java::fetch_class("android/bluetooth/BluetoothProfile$ServiceListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onServiceDisconnected", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::bluetooth::BluetoothDevice::equals(const ::java::lang::Object& arg0) const {
    if (!::android::bluetooth::BluetoothDevice::_class) ::android::bluetooth::BluetoothDevice::_class = java::fetch_class("android/bluetooth/BluetoothDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::bluetooth::BluetoothDevice::hashCode() const {
    if (!::android::bluetooth::BluetoothDevice::_class) ::android::bluetooth::BluetoothDevice::_class = java::fetch_class("android/bluetooth/BluetoothDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::bluetooth::BluetoothDevice::toString() const {
    if (!::android::bluetooth::BluetoothDevice::_class) ::android::bluetooth::BluetoothDevice::_class = java::fetch_class("android/bluetooth/BluetoothDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::bluetooth::BluetoothDevice::describeContents() const {
    if (!::android::bluetooth::BluetoothDevice::_class) ::android::bluetooth::BluetoothDevice::_class = java::fetch_class("android/bluetooth/BluetoothDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::bluetooth::BluetoothDevice::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::bluetooth::BluetoothDevice::_class) ::android::bluetooth::BluetoothDevice::_class = java::fetch_class("android/bluetooth/BluetoothDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::bluetooth::BluetoothDevice::getAddress() const {
    if (!::android::bluetooth::BluetoothDevice::_class) ::android::bluetooth::BluetoothDevice::_class = java::fetch_class("android/bluetooth/BluetoothDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAddress", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::bluetooth::BluetoothDevice::getName() const {
    if (!::android::bluetooth::BluetoothDevice::_class) ::android::bluetooth::BluetoothDevice::_class = java::fetch_class("android/bluetooth/BluetoothDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::bluetooth::BluetoothDevice::getBondState() const {
    if (!::android::bluetooth::BluetoothDevice::_class) ::android::bluetooth::BluetoothDevice::_class = java::fetch_class("android/bluetooth/BluetoothDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBondState", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::bluetooth::BluetoothClass android::bluetooth::BluetoothDevice::getBluetoothClass() const {
    if (!::android::bluetooth::BluetoothDevice::_class) ::android::bluetooth::BluetoothDevice::_class = java::fetch_class("android/bluetooth/BluetoothDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBluetoothClass", "()Landroid/bluetooth/BluetoothClass;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::bluetooth::BluetoothClass _ret(ret);
    return _ret;
}

std::vector< ::android::os::ParcelUuid> android::bluetooth::BluetoothDevice::getUuids() const {
    if (!::android::bluetooth::BluetoothDevice::_class) ::android::bluetooth::BluetoothDevice::_class = java::fetch_class("android/bluetooth/BluetoothDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUuids", "()[Landroid/os/ParcelUuid;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::os::ParcelUuid> _ret(rets, ::android::os::ParcelUuid((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::os::ParcelUuid retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool android::bluetooth::BluetoothDevice::fetchUuidsWithSdp() const {
    if (!::android::bluetooth::BluetoothDevice::_class) ::android::bluetooth::BluetoothDevice::_class = java::fetch_class("android/bluetooth/BluetoothDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "fetchUuidsWithSdp", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::bluetooth::BluetoothSocket android::bluetooth::BluetoothDevice::createRfcommSocketToServiceRecord(const ::java::util::UUID& arg0) const {
    if (!::android::bluetooth::BluetoothDevice::_class) ::android::bluetooth::BluetoothDevice::_class = java::fetch_class("android/bluetooth/BluetoothDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "createRfcommSocketToServiceRecord", "(Ljava/util/UUID;)Landroid/bluetooth/BluetoothSocket;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::bluetooth::BluetoothSocket _ret(ret);
    return _ret;
}

::android::bluetooth::BluetoothSocket android::bluetooth::BluetoothDevice::createInsecureRfcommSocketToServiceRecord(const ::java::util::UUID& arg0) const {
    if (!::android::bluetooth::BluetoothDevice::_class) ::android::bluetooth::BluetoothDevice::_class = java::fetch_class("android/bluetooth/BluetoothDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "createInsecureRfcommSocketToServiceRecord", "(Ljava/util/UUID;)Landroid/bluetooth/BluetoothSocket;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::bluetooth::BluetoothSocket _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::bluetooth::BluetoothClass_Service::BluetoothClass_Service() : ::java::lang::Object((jobject)0) {
    if (!::android::bluetooth::BluetoothClass_Service::_class) ::android::bluetooth::BluetoothClass_Service::_class = java::fetch_class("android/bluetooth/BluetoothClass$Service");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::bluetooth::BluetoothClass_Device_Major::BluetoothClass_Device_Major() : ::java::lang::Object((jobject)0) {
    if (!::android::bluetooth::BluetoothClass_Device_Major::_class) ::android::bluetooth::BluetoothClass_Device_Major::_class = java::fetch_class("android/bluetooth/BluetoothClass$Device$Major");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::bluetooth::BluetoothSocket android::bluetooth::BluetoothServerSocket::accept() const {
    if (!::android::bluetooth::BluetoothServerSocket::_class) ::android::bluetooth::BluetoothServerSocket::_class = java::fetch_class("android/bluetooth/BluetoothServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "accept", "()Landroid/bluetooth/BluetoothSocket;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::bluetooth::BluetoothSocket _ret(ret);
    return _ret;
}

::android::bluetooth::BluetoothSocket android::bluetooth::BluetoothServerSocket::accept(int32_t arg0) const {
    if (!::android::bluetooth::BluetoothServerSocket::_class) ::android::bluetooth::BluetoothServerSocket::_class = java::fetch_class("android/bluetooth/BluetoothServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "accept", "(I)Landroid/bluetooth/BluetoothSocket;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::bluetooth::BluetoothSocket _ret(ret);
    return _ret;
}

void android::bluetooth::BluetoothServerSocket::close() const {
    if (!::android::bluetooth::BluetoothServerSocket::_class) ::android::bluetooth::BluetoothServerSocket::_class = java::fetch_class("android/bluetooth/BluetoothServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::util::List android::bluetooth::BluetoothProfile::getConnectedDevices() const {
    if (!::android::bluetooth::BluetoothProfile::_class) ::android::bluetooth::BluetoothProfile::_class = java::fetch_class("android/bluetooth/BluetoothProfile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnectedDevices", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List android::bluetooth::BluetoothProfile::getDevicesMatchingConnectionStates(const std::vector< int32_t>& arg0) const {
    if (!::android::bluetooth::BluetoothProfile::_class) ::android::bluetooth::BluetoothProfile::_class = java::fetch_class("android/bluetooth/BluetoothProfile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDevicesMatchingConnectionStates", "([I)Ljava/util/List;");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

int32_t android::bluetooth::BluetoothProfile::getConnectionState(const ::android::bluetooth::BluetoothDevice& arg0) const {
    if (!::android::bluetooth::BluetoothProfile::_class) ::android::bluetooth::BluetoothProfile::_class = java::fetch_class("android/bluetooth/BluetoothProfile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnectionState", "(Landroid/bluetooth/BluetoothDevice;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::util::List android::bluetooth::BluetoothA2dp::getConnectedDevices() const {
    if (!::android::bluetooth::BluetoothA2dp::_class) ::android::bluetooth::BluetoothA2dp::_class = java::fetch_class("android/bluetooth/BluetoothA2dp");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnectedDevices", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List android::bluetooth::BluetoothA2dp::getDevicesMatchingConnectionStates(const std::vector< int32_t>& arg0) const {
    if (!::android::bluetooth::BluetoothA2dp::_class) ::android::bluetooth::BluetoothA2dp::_class = java::fetch_class("android/bluetooth/BluetoothA2dp");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDevicesMatchingConnectionStates", "([I)Ljava/util/List;");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

int32_t android::bluetooth::BluetoothA2dp::getConnectionState(const ::android::bluetooth::BluetoothDevice& arg0) const {
    if (!::android::bluetooth::BluetoothA2dp::_class) ::android::bluetooth::BluetoothA2dp::_class = java::fetch_class("android/bluetooth/BluetoothA2dp");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnectionState", "(Landroid/bluetooth/BluetoothDevice;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::bluetooth::BluetoothA2dp::isA2dpPlaying(const ::android::bluetooth::BluetoothDevice& arg0) const {
    if (!::android::bluetooth::BluetoothA2dp::_class) ::android::bluetooth::BluetoothA2dp::_class = java::fetch_class("android/bluetooth/BluetoothA2dp");
    static jmethodID mid = java::jni->GetMethodID(_class, "isA2dpPlaying", "(Landroid/bluetooth/BluetoothDevice;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::bluetooth::BluetoothHealth::registerSinkAppConfiguration(const ::java::lang::String& arg0, int32_t arg1, const ::android::bluetooth::BluetoothHealthCallback& arg2) const {
    if (!::android::bluetooth::BluetoothHealth::_class) ::android::bluetooth::BluetoothHealth::_class = java::fetch_class("android/bluetooth/BluetoothHealth");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerSinkAppConfiguration", "(Ljava/lang/String;ILandroid/bluetooth/BluetoothHealthCallback;)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::bluetooth::BluetoothHealth::unregisterAppConfiguration(const ::android::bluetooth::BluetoothHealthAppConfiguration& arg0) const {
    if (!::android::bluetooth::BluetoothHealth::_class) ::android::bluetooth::BluetoothHealth::_class = java::fetch_class("android/bluetooth/BluetoothHealth");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterAppConfiguration", "(Landroid/bluetooth/BluetoothHealthAppConfiguration;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::bluetooth::BluetoothHealth::connectChannelToSource(const ::android::bluetooth::BluetoothDevice& arg0, const ::android::bluetooth::BluetoothHealthAppConfiguration& arg1) const {
    if (!::android::bluetooth::BluetoothHealth::_class) ::android::bluetooth::BluetoothHealth::_class = java::fetch_class("android/bluetooth/BluetoothHealth");
    static jmethodID mid = java::jni->GetMethodID(_class, "connectChannelToSource", "(Landroid/bluetooth/BluetoothDevice;Landroid/bluetooth/BluetoothHealthAppConfiguration;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::bluetooth::BluetoothHealth::disconnectChannel(const ::android::bluetooth::BluetoothDevice& arg0, const ::android::bluetooth::BluetoothHealthAppConfiguration& arg1, int32_t arg2) const {
    if (!::android::bluetooth::BluetoothHealth::_class) ::android::bluetooth::BluetoothHealth::_class = java::fetch_class("android/bluetooth/BluetoothHealth");
    static jmethodID mid = java::jni->GetMethodID(_class, "disconnectChannel", "(Landroid/bluetooth/BluetoothDevice;Landroid/bluetooth/BluetoothHealthAppConfiguration;I)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::os::ParcelFileDescriptor android::bluetooth::BluetoothHealth::getMainChannelFd(const ::android::bluetooth::BluetoothDevice& arg0, const ::android::bluetooth::BluetoothHealthAppConfiguration& arg1) const {
    if (!::android::bluetooth::BluetoothHealth::_class) ::android::bluetooth::BluetoothHealth::_class = java::fetch_class("android/bluetooth/BluetoothHealth");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMainChannelFd", "(Landroid/bluetooth/BluetoothDevice;Landroid/bluetooth/BluetoothHealthAppConfiguration;)Landroid/os/ParcelFileDescriptor;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::os::ParcelFileDescriptor _ret(ret);
    return _ret;
}

int32_t android::bluetooth::BluetoothHealth::getConnectionState(const ::android::bluetooth::BluetoothDevice& arg0) const {
    if (!::android::bluetooth::BluetoothHealth::_class) ::android::bluetooth::BluetoothHealth::_class = java::fetch_class("android/bluetooth/BluetoothHealth");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnectionState", "(Landroid/bluetooth/BluetoothDevice;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::util::List android::bluetooth::BluetoothHealth::getConnectedDevices() const {
    if (!::android::bluetooth::BluetoothHealth::_class) ::android::bluetooth::BluetoothHealth::_class = java::fetch_class("android/bluetooth/BluetoothHealth");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnectedDevices", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List android::bluetooth::BluetoothHealth::getDevicesMatchingConnectionStates(const std::vector< int32_t>& arg0) const {
    if (!::android::bluetooth::BluetoothHealth::_class) ::android::bluetooth::BluetoothHealth::_class = java::fetch_class("android/bluetooth/BluetoothHealth");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDevicesMatchingConnectionStates", "([I)Ljava/util/List;");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

void android::bluetooth::BluetoothSocket::connect() const {
    if (!::android::bluetooth::BluetoothSocket::_class) ::android::bluetooth::BluetoothSocket::_class = java::fetch_class("android/bluetooth/BluetoothSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "connect", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::bluetooth::BluetoothSocket::close() const {
    if (!::android::bluetooth::BluetoothSocket::_class) ::android::bluetooth::BluetoothSocket::_class = java::fetch_class("android/bluetooth/BluetoothSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::bluetooth::BluetoothDevice android::bluetooth::BluetoothSocket::getRemoteDevice() const {
    if (!::android::bluetooth::BluetoothSocket::_class) ::android::bluetooth::BluetoothSocket::_class = java::fetch_class("android/bluetooth/BluetoothSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRemoteDevice", "()Landroid/bluetooth/BluetoothDevice;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::bluetooth::BluetoothDevice _ret(ret);
    return _ret;
}

::java::io::InputStream android::bluetooth::BluetoothSocket::getInputStream() const {
    if (!::android::bluetooth::BluetoothSocket::_class) ::android::bluetooth::BluetoothSocket::_class = java::fetch_class("android/bluetooth/BluetoothSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputStream", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::io::OutputStream android::bluetooth::BluetoothSocket::getOutputStream() const {
    if (!::android::bluetooth::BluetoothSocket::_class) ::android::bluetooth::BluetoothSocket::_class = java::fetch_class("android/bluetooth/BluetoothSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOutputStream", "()Ljava/io/OutputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::OutputStream _ret(ret);
    return _ret;
}

bool android::bluetooth::BluetoothSocket::isConnected() const {
    if (!::android::bluetooth::BluetoothSocket::_class) ::android::bluetooth::BluetoothSocket::_class = java::fetch_class("android/bluetooth/BluetoothSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "isConnected", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::bluetooth::BluetoothClass_Device::BluetoothClass_Device() : ::java::lang::Object((jobject)0) {
    if (!::android::bluetooth::BluetoothClass_Device::_class) ::android::bluetooth::BluetoothClass_Device::_class = java::fetch_class("android/bluetooth/BluetoothClass$Device");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::bluetooth::BluetoothHealthAppConfiguration::equals(const ::java::lang::Object& arg0) const {
    if (!::android::bluetooth::BluetoothHealthAppConfiguration::_class) ::android::bluetooth::BluetoothHealthAppConfiguration::_class = java::fetch_class("android/bluetooth/BluetoothHealthAppConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::bluetooth::BluetoothHealthAppConfiguration::hashCode() const {
    if (!::android::bluetooth::BluetoothHealthAppConfiguration::_class) ::android::bluetooth::BluetoothHealthAppConfiguration::_class = java::fetch_class("android/bluetooth/BluetoothHealthAppConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::bluetooth::BluetoothHealthAppConfiguration::toString() const {
    if (!::android::bluetooth::BluetoothHealthAppConfiguration::_class) ::android::bluetooth::BluetoothHealthAppConfiguration::_class = java::fetch_class("android/bluetooth/BluetoothHealthAppConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::bluetooth::BluetoothHealthAppConfiguration::describeContents() const {
    if (!::android::bluetooth::BluetoothHealthAppConfiguration::_class) ::android::bluetooth::BluetoothHealthAppConfiguration::_class = java::fetch_class("android/bluetooth/BluetoothHealthAppConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::bluetooth::BluetoothHealthAppConfiguration::getDataType() const {
    if (!::android::bluetooth::BluetoothHealthAppConfiguration::_class) ::android::bluetooth::BluetoothHealthAppConfiguration::_class = java::fetch_class("android/bluetooth/BluetoothHealthAppConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDataType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::bluetooth::BluetoothHealthAppConfiguration::getName() const {
    if (!::android::bluetooth::BluetoothHealthAppConfiguration::_class) ::android::bluetooth::BluetoothHealthAppConfiguration::_class = java::fetch_class("android/bluetooth/BluetoothHealthAppConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::bluetooth::BluetoothHealthAppConfiguration::getRole() const {
    if (!::android::bluetooth::BluetoothHealthAppConfiguration::_class) ::android::bluetooth::BluetoothHealthAppConfiguration::_class = java::fetch_class("android/bluetooth/BluetoothHealthAppConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRole", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::bluetooth::BluetoothHealthAppConfiguration::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::bluetooth::BluetoothHealthAppConfiguration::_class) ::android::bluetooth::BluetoothHealthAppConfiguration::_class = java::fetch_class("android/bluetooth/BluetoothHealthAppConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::bluetooth::BluetoothAdapter android::bluetooth::BluetoothAdapter::getDefaultAdapter(){
    if (!::android::bluetooth::BluetoothAdapter::_class) ::android::bluetooth::BluetoothAdapter::_class = java::fetch_class("android/bluetooth/BluetoothAdapter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefaultAdapter", "()Landroid/bluetooth/BluetoothAdapter;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::bluetooth::BluetoothAdapter _ret(ret);
    return _ret;
}

::android::bluetooth::BluetoothDevice android::bluetooth::BluetoothAdapter::getRemoteDevice(const ::java::lang::String& arg0) const {
    if (!::android::bluetooth::BluetoothAdapter::_class) ::android::bluetooth::BluetoothAdapter::_class = java::fetch_class("android/bluetooth/BluetoothAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRemoteDevice", "(Ljava/lang/String;)Landroid/bluetooth/BluetoothDevice;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::bluetooth::BluetoothDevice _ret(ret);
    return _ret;
}

bool android::bluetooth::BluetoothAdapter::isEnabled() const {
    if (!::android::bluetooth::BluetoothAdapter::_class) ::android::bluetooth::BluetoothAdapter::_class = java::fetch_class("android/bluetooth/BluetoothAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::bluetooth::BluetoothAdapter::getState() const {
    if (!::android::bluetooth::BluetoothAdapter::_class) ::android::bluetooth::BluetoothAdapter::_class = java::fetch_class("android/bluetooth/BluetoothAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getState", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::bluetooth::BluetoothAdapter::enable() const {
    if (!::android::bluetooth::BluetoothAdapter::_class) ::android::bluetooth::BluetoothAdapter::_class = java::fetch_class("android/bluetooth/BluetoothAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "enable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::bluetooth::BluetoothAdapter::disable() const {
    if (!::android::bluetooth::BluetoothAdapter::_class) ::android::bluetooth::BluetoothAdapter::_class = java::fetch_class("android/bluetooth/BluetoothAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "disable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String android::bluetooth::BluetoothAdapter::getAddress() const {
    if (!::android::bluetooth::BluetoothAdapter::_class) ::android::bluetooth::BluetoothAdapter::_class = java::fetch_class("android/bluetooth/BluetoothAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAddress", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::bluetooth::BluetoothAdapter::getName() const {
    if (!::android::bluetooth::BluetoothAdapter::_class) ::android::bluetooth::BluetoothAdapter::_class = java::fetch_class("android/bluetooth/BluetoothAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::bluetooth::BluetoothAdapter::setName(const ::java::lang::String& arg0) const {
    if (!::android::bluetooth::BluetoothAdapter::_class) ::android::bluetooth::BluetoothAdapter::_class = java::fetch_class("android/bluetooth/BluetoothAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setName", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::bluetooth::BluetoothAdapter::getScanMode() const {
    if (!::android::bluetooth::BluetoothAdapter::_class) ::android::bluetooth::BluetoothAdapter::_class = java::fetch_class("android/bluetooth/BluetoothAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScanMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::bluetooth::BluetoothAdapter::startDiscovery() const {
    if (!::android::bluetooth::BluetoothAdapter::_class) ::android::bluetooth::BluetoothAdapter::_class = java::fetch_class("android/bluetooth/BluetoothAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "startDiscovery", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::bluetooth::BluetoothAdapter::cancelDiscovery() const {
    if (!::android::bluetooth::BluetoothAdapter::_class) ::android::bluetooth::BluetoothAdapter::_class = java::fetch_class("android/bluetooth/BluetoothAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancelDiscovery", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::bluetooth::BluetoothAdapter::isDiscovering() const {
    if (!::android::bluetooth::BluetoothAdapter::_class) ::android::bluetooth::BluetoothAdapter::_class = java::fetch_class("android/bluetooth/BluetoothAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDiscovering", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::util::Set android::bluetooth::BluetoothAdapter::getBondedDevices() const {
    if (!::android::bluetooth::BluetoothAdapter::_class) ::android::bluetooth::BluetoothAdapter::_class = java::fetch_class("android/bluetooth/BluetoothAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBondedDevices", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

int32_t android::bluetooth::BluetoothAdapter::getProfileConnectionState(int32_t arg0) const {
    if (!::android::bluetooth::BluetoothAdapter::_class) ::android::bluetooth::BluetoothAdapter::_class = java::fetch_class("android/bluetooth/BluetoothAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProfileConnectionState", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::bluetooth::BluetoothServerSocket android::bluetooth::BluetoothAdapter::listenUsingRfcommWithServiceRecord(const ::java::lang::String& arg0, const ::java::util::UUID& arg1) const {
    if (!::android::bluetooth::BluetoothAdapter::_class) ::android::bluetooth::BluetoothAdapter::_class = java::fetch_class("android/bluetooth/BluetoothAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "listenUsingRfcommWithServiceRecord", "(Ljava/lang/String;Ljava/util/UUID;)Landroid/bluetooth/BluetoothServerSocket;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::bluetooth::BluetoothServerSocket _ret(ret);
    return _ret;
}

::android::bluetooth::BluetoothServerSocket android::bluetooth::BluetoothAdapter::listenUsingInsecureRfcommWithServiceRecord(const ::java::lang::String& arg0, const ::java::util::UUID& arg1) const {
    if (!::android::bluetooth::BluetoothAdapter::_class) ::android::bluetooth::BluetoothAdapter::_class = java::fetch_class("android/bluetooth/BluetoothAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "listenUsingInsecureRfcommWithServiceRecord", "(Ljava/lang/String;Ljava/util/UUID;)Landroid/bluetooth/BluetoothServerSocket;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::bluetooth::BluetoothServerSocket _ret(ret);
    return _ret;
}

bool android::bluetooth::BluetoothAdapter::getProfileProxy(const ::android::content::Context& arg0, const ::android::bluetooth::BluetoothProfile_ServiceListener& arg1, int32_t arg2) const {
    if (!::android::bluetooth::BluetoothAdapter::_class) ::android::bluetooth::BluetoothAdapter::_class = java::fetch_class("android/bluetooth/BluetoothAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProfileProxy", "(Landroid/content/Context;Landroid/bluetooth/BluetoothProfile$ServiceListener;I)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::bluetooth::BluetoothAdapter::closeProfileProxy(int32_t arg0, const ::android::bluetooth::BluetoothProfile& arg1) const {
    if (!::android::bluetooth::BluetoothAdapter::_class) ::android::bluetooth::BluetoothAdapter::_class = java::fetch_class("android/bluetooth/BluetoothAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "closeProfileProxy", "(ILandroid/bluetooth/BluetoothProfile;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::bluetooth::BluetoothAdapter::checkBluetoothAddress(const ::java::lang::String& arg0){
    if (!::android::bluetooth::BluetoothAdapter::_class) ::android::bluetooth::BluetoothAdapter::_class = java::fetch_class("android/bluetooth/BluetoothAdapter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "checkBluetoothAddress", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::bluetooth::BluetoothHealthCallback::BluetoothHealthCallback() : ::java::lang::Object((jobject)0) {
    if (!::android::bluetooth::BluetoothHealthCallback::_class) ::android::bluetooth::BluetoothHealthCallback::_class = java::fetch_class("android/bluetooth/BluetoothHealthCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::bluetooth::BluetoothHealthCallback::onHealthAppConfigurationStatusChange(const ::android::bluetooth::BluetoothHealthAppConfiguration& arg0, int32_t arg1) const {
    if (!::android::bluetooth::BluetoothHealthCallback::_class) ::android::bluetooth::BluetoothHealthCallback::_class = java::fetch_class("android/bluetooth/BluetoothHealthCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onHealthAppConfigurationStatusChange", "(Landroid/bluetooth/BluetoothHealthAppConfiguration;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::bluetooth::BluetoothHealthCallback::onHealthChannelStateChange(const ::android::bluetooth::BluetoothHealthAppConfiguration& arg0, const ::android::bluetooth::BluetoothDevice& arg1, int32_t arg2, int32_t arg3, const ::android::os::ParcelFileDescriptor& arg4, int32_t arg5) const {
    if (!::android::bluetooth::BluetoothHealthCallback::_class) ::android::bluetooth::BluetoothHealthCallback::_class = java::fetch_class("android/bluetooth/BluetoothHealthCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onHealthChannelStateChange", "(Landroid/bluetooth/BluetoothHealthAppConfiguration;Landroid/bluetooth/BluetoothDevice;IILandroid/os/ParcelFileDescriptor;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    int32_t _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

bool android::bluetooth::BluetoothClass::equals(const ::java::lang::Object& arg0) const {
    if (!::android::bluetooth::BluetoothClass::_class) ::android::bluetooth::BluetoothClass::_class = java::fetch_class("android/bluetooth/BluetoothClass");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::bluetooth::BluetoothClass::hashCode() const {
    if (!::android::bluetooth::BluetoothClass::_class) ::android::bluetooth::BluetoothClass::_class = java::fetch_class("android/bluetooth/BluetoothClass");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::bluetooth::BluetoothClass::toString() const {
    if (!::android::bluetooth::BluetoothClass::_class) ::android::bluetooth::BluetoothClass::_class = java::fetch_class("android/bluetooth/BluetoothClass");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::bluetooth::BluetoothClass::describeContents() const {
    if (!::android::bluetooth::BluetoothClass::_class) ::android::bluetooth::BluetoothClass::_class = java::fetch_class("android/bluetooth/BluetoothClass");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::bluetooth::BluetoothClass::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::bluetooth::BluetoothClass::_class) ::android::bluetooth::BluetoothClass::_class = java::fetch_class("android/bluetooth/BluetoothClass");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::bluetooth::BluetoothClass::hasService(int32_t arg0) const {
    if (!::android::bluetooth::BluetoothClass::_class) ::android::bluetooth::BluetoothClass::_class = java::fetch_class("android/bluetooth/BluetoothClass");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasService", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::bluetooth::BluetoothClass::getMajorDeviceClass() const {
    if (!::android::bluetooth::BluetoothClass::_class) ::android::bluetooth::BluetoothClass::_class = java::fetch_class("android/bluetooth/BluetoothClass");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMajorDeviceClass", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::bluetooth::BluetoothClass::getDeviceClass() const {
    if (!::android::bluetooth::BluetoothClass::_class) ::android::bluetooth::BluetoothClass::_class = java::fetch_class("android/bluetooth/BluetoothClass");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeviceClass", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

