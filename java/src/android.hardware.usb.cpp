#include "java-core.hpp"
#include <memory>
#include "android.app.PendingIntent.hpp"
#include "android.hardware.usb.UsbAccessory.hpp"
#include "android.hardware.usb.UsbConstants.hpp"
#include "android.hardware.usb.UsbDevice.hpp"
#include "android.hardware.usb.UsbDeviceConnection.hpp"
#include "android.hardware.usb.UsbEndpoint.hpp"
#include "android.hardware.usb.UsbInterface.hpp"
#include "android.hardware.usb.UsbManager.hpp"
#include "android.hardware.usb.UsbRequest.hpp"
#include "android.os.Parcel.hpp"
#include "android.os.ParcelFileDescriptor.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.nio.ByteBuffer.hpp"
#include "java.util.HashMap.hpp"

jclass android::hardware::usb::UsbRequest::_class = nullptr;
jclass android::hardware::usb::UsbDeviceConnection::_class = nullptr;
jclass android::hardware::usb::UsbAccessory::_class = nullptr;
jclass android::hardware::usb::UsbDevice::_class = nullptr;
jclass android::hardware::usb::UsbConstants::_class = nullptr;
jclass android::hardware::usb::UsbEndpoint::_class = nullptr;
jclass android::hardware::usb::UsbInterface::_class = nullptr;
jclass android::hardware::usb::UsbManager::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::hardware::usb::UsbRequest::UsbRequest() : ::java::lang::Object((jobject)0) {
    if (!::android::hardware::usb::UsbRequest::_class) ::android::hardware::usb::UsbRequest::_class = java::fetch_class("android/hardware/usb/UsbRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::hardware::usb::UsbRequest::initialize(const ::android::hardware::usb::UsbDeviceConnection& arg0, const ::android::hardware::usb::UsbEndpoint& arg1) const {
    if (!::android::hardware::usb::UsbRequest::_class) ::android::hardware::usb::UsbRequest::_class = java::fetch_class("android/hardware/usb/UsbRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "initialize", "(Landroid/hardware/usb/UsbDeviceConnection;Landroid/hardware/usb/UsbEndpoint;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::hardware::usb::UsbRequest::close() const {
    if (!::android::hardware::usb::UsbRequest::_class) ::android::hardware::usb::UsbRequest::_class = java::fetch_class("android/hardware/usb/UsbRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::hardware::usb::UsbEndpoint android::hardware::usb::UsbRequest::getEndpoint() const {
    if (!::android::hardware::usb::UsbRequest::_class) ::android::hardware::usb::UsbRequest::_class = java::fetch_class("android/hardware/usb/UsbRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEndpoint", "()Landroid/hardware/usb/UsbEndpoint;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::hardware::usb::UsbEndpoint _ret(ret);
    return _ret;
}

::java::lang::Object android::hardware::usb::UsbRequest::getClientData() const {
    if (!::android::hardware::usb::UsbRequest::_class) ::android::hardware::usb::UsbRequest::_class = java::fetch_class("android/hardware/usb/UsbRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClientData", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::hardware::usb::UsbRequest::setClientData(const ::java::lang::Object& arg0) const {
    if (!::android::hardware::usb::UsbRequest::_class) ::android::hardware::usb::UsbRequest::_class = java::fetch_class("android/hardware/usb/UsbRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClientData", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::hardware::usb::UsbRequest::queue(const ::java::nio::ByteBuffer& arg0, int32_t arg1) const {
    if (!::android::hardware::usb::UsbRequest::_class) ::android::hardware::usb::UsbRequest::_class = java::fetch_class("android/hardware/usb/UsbRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "queue", "(Ljava/nio/ByteBuffer;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::hardware::usb::UsbRequest::cancel() const {
    if (!::android::hardware::usb::UsbRequest::_class) ::android::hardware::usb::UsbRequest::_class = java::fetch_class("android/hardware/usb/UsbRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::hardware::usb::UsbDeviceConnection::close() const {
    if (!::android::hardware::usb::UsbDeviceConnection::_class) ::android::hardware::usb::UsbDeviceConnection::_class = java::fetch_class("android/hardware/usb/UsbDeviceConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::hardware::usb::UsbDeviceConnection::getFileDescriptor() const {
    if (!::android::hardware::usb::UsbDeviceConnection::_class) ::android::hardware::usb::UsbDeviceConnection::_class = java::fetch_class("android/hardware/usb/UsbDeviceConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFileDescriptor", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< int8_t> android::hardware::usb::UsbDeviceConnection::getRawDescriptors() const {
    if (!::android::hardware::usb::UsbDeviceConnection::_class) ::android::hardware::usb::UsbDeviceConnection::_class = java::fetch_class("android/hardware/usb/UsbDeviceConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRawDescriptors", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

bool android::hardware::usb::UsbDeviceConnection::claimInterface(const ::android::hardware::usb::UsbInterface& arg0, bool arg1) const {
    if (!::android::hardware::usb::UsbDeviceConnection::_class) ::android::hardware::usb::UsbDeviceConnection::_class = java::fetch_class("android/hardware/usb/UsbDeviceConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "claimInterface", "(Landroid/hardware/usb/UsbInterface;Z)Z");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::hardware::usb::UsbDeviceConnection::releaseInterface(const ::android::hardware::usb::UsbInterface& arg0) const {
    if (!::android::hardware::usb::UsbDeviceConnection::_class) ::android::hardware::usb::UsbDeviceConnection::_class = java::fetch_class("android/hardware/usb/UsbDeviceConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "releaseInterface", "(Landroid/hardware/usb/UsbInterface;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::hardware::usb::UsbDeviceConnection::controlTransfer(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, const std::vector< int8_t>& arg4, int32_t arg5, int32_t arg6) const {
    if (!::android::hardware::usb::UsbDeviceConnection::_class) ::android::hardware::usb::UsbDeviceConnection::_class = java::fetch_class("android/hardware/usb/UsbDeviceConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "controlTransfer", "(IIII[BII)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jbyteArray _arg4 = java::jni->NewByteArray(arg4.size());
    java::jni->SetByteArrayRegion(_arg4, 0, arg4.size(), arg4.data());
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}

int32_t android::hardware::usb::UsbDeviceConnection::bulkTransfer(const ::android::hardware::usb::UsbEndpoint& arg0, const std::vector< int8_t>& arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::hardware::usb::UsbDeviceConnection::_class) ::android::hardware::usb::UsbDeviceConnection::_class = java::fetch_class("android/hardware/usb/UsbDeviceConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "bulkTransfer", "(Landroid/hardware/usb/UsbEndpoint;[BII)I");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

::android::hardware::usb::UsbRequest android::hardware::usb::UsbDeviceConnection::requestWait() const {
    if (!::android::hardware::usb::UsbDeviceConnection::_class) ::android::hardware::usb::UsbDeviceConnection::_class = java::fetch_class("android/hardware/usb/UsbDeviceConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestWait", "()Landroid/hardware/usb/UsbRequest;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::hardware::usb::UsbRequest _ret(ret);
    return _ret;
}

::java::lang::String android::hardware::usb::UsbDeviceConnection::getSerial() const {
    if (!::android::hardware::usb::UsbDeviceConnection::_class) ::android::hardware::usb::UsbDeviceConnection::_class = java::fetch_class("android/hardware/usb/UsbDeviceConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSerial", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::hardware::usb::UsbAccessory::getManufacturer() const {
    if (!::android::hardware::usb::UsbAccessory::_class) ::android::hardware::usb::UsbAccessory::_class = java::fetch_class("android/hardware/usb/UsbAccessory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getManufacturer", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::hardware::usb::UsbAccessory::getModel() const {
    if (!::android::hardware::usb::UsbAccessory::_class) ::android::hardware::usb::UsbAccessory::_class = java::fetch_class("android/hardware/usb/UsbAccessory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getModel", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::hardware::usb::UsbAccessory::getDescription() const {
    if (!::android::hardware::usb::UsbAccessory::_class) ::android::hardware::usb::UsbAccessory::_class = java::fetch_class("android/hardware/usb/UsbAccessory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDescription", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::hardware::usb::UsbAccessory::getVersion() const {
    if (!::android::hardware::usb::UsbAccessory::_class) ::android::hardware::usb::UsbAccessory::_class = java::fetch_class("android/hardware/usb/UsbAccessory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVersion", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::hardware::usb::UsbAccessory::getUri() const {
    if (!::android::hardware::usb::UsbAccessory::_class) ::android::hardware::usb::UsbAccessory::_class = java::fetch_class("android/hardware/usb/UsbAccessory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUri", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::hardware::usb::UsbAccessory::getSerial() const {
    if (!::android::hardware::usb::UsbAccessory::_class) ::android::hardware::usb::UsbAccessory::_class = java::fetch_class("android/hardware/usb/UsbAccessory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSerial", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::hardware::usb::UsbAccessory::equals(const ::java::lang::Object& arg0) const {
    if (!::android::hardware::usb::UsbAccessory::_class) ::android::hardware::usb::UsbAccessory::_class = java::fetch_class("android/hardware/usb/UsbAccessory");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::hardware::usb::UsbAccessory::hashCode() const {
    if (!::android::hardware::usb::UsbAccessory::_class) ::android::hardware::usb::UsbAccessory::_class = java::fetch_class("android/hardware/usb/UsbAccessory");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::hardware::usb::UsbAccessory::toString() const {
    if (!::android::hardware::usb::UsbAccessory::_class) ::android::hardware::usb::UsbAccessory::_class = java::fetch_class("android/hardware/usb/UsbAccessory");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::hardware::usb::UsbAccessory::describeContents() const {
    if (!::android::hardware::usb::UsbAccessory::_class) ::android::hardware::usb::UsbAccessory::_class = java::fetch_class("android/hardware/usb/UsbAccessory");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::hardware::usb::UsbAccessory::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::hardware::usb::UsbAccessory::_class) ::android::hardware::usb::UsbAccessory::_class = java::fetch_class("android/hardware/usb/UsbAccessory");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::hardware::usb::UsbDevice::getDeviceName() const {
    if (!::android::hardware::usb::UsbDevice::_class) ::android::hardware::usb::UsbDevice::_class = java::fetch_class("android/hardware/usb/UsbDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeviceName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::hardware::usb::UsbDevice::getDeviceId() const {
    if (!::android::hardware::usb::UsbDevice::_class) ::android::hardware::usb::UsbDevice::_class = java::fetch_class("android/hardware/usb/UsbDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeviceId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::hardware::usb::UsbDevice::getVendorId() const {
    if (!::android::hardware::usb::UsbDevice::_class) ::android::hardware::usb::UsbDevice::_class = java::fetch_class("android/hardware/usb/UsbDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVendorId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::hardware::usb::UsbDevice::getProductId() const {
    if (!::android::hardware::usb::UsbDevice::_class) ::android::hardware::usb::UsbDevice::_class = java::fetch_class("android/hardware/usb/UsbDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProductId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::hardware::usb::UsbDevice::getDeviceClass() const {
    if (!::android::hardware::usb::UsbDevice::_class) ::android::hardware::usb::UsbDevice::_class = java::fetch_class("android/hardware/usb/UsbDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeviceClass", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::hardware::usb::UsbDevice::getDeviceSubclass() const {
    if (!::android::hardware::usb::UsbDevice::_class) ::android::hardware::usb::UsbDevice::_class = java::fetch_class("android/hardware/usb/UsbDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeviceSubclass", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::hardware::usb::UsbDevice::getDeviceProtocol() const {
    if (!::android::hardware::usb::UsbDevice::_class) ::android::hardware::usb::UsbDevice::_class = java::fetch_class("android/hardware/usb/UsbDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeviceProtocol", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::hardware::usb::UsbDevice::getInterfaceCount() const {
    if (!::android::hardware::usb::UsbDevice::_class) ::android::hardware::usb::UsbDevice::_class = java::fetch_class("android/hardware/usb/UsbDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterfaceCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::hardware::usb::UsbInterface android::hardware::usb::UsbDevice::getInterface(int32_t arg0) const {
    if (!::android::hardware::usb::UsbDevice::_class) ::android::hardware::usb::UsbDevice::_class = java::fetch_class("android/hardware/usb/UsbDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterface", "(I)Landroid/hardware/usb/UsbInterface;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::hardware::usb::UsbInterface _ret(ret);
    return _ret;
}

bool android::hardware::usb::UsbDevice::equals(const ::java::lang::Object& arg0) const {
    if (!::android::hardware::usb::UsbDevice::_class) ::android::hardware::usb::UsbDevice::_class = java::fetch_class("android/hardware/usb/UsbDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::hardware::usb::UsbDevice::hashCode() const {
    if (!::android::hardware::usb::UsbDevice::_class) ::android::hardware::usb::UsbDevice::_class = java::fetch_class("android/hardware/usb/UsbDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::hardware::usb::UsbDevice::toString() const {
    if (!::android::hardware::usb::UsbDevice::_class) ::android::hardware::usb::UsbDevice::_class = java::fetch_class("android/hardware/usb/UsbDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::hardware::usb::UsbDevice::describeContents() const {
    if (!::android::hardware::usb::UsbDevice::_class) ::android::hardware::usb::UsbDevice::_class = java::fetch_class("android/hardware/usb/UsbDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::hardware::usb::UsbDevice::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::hardware::usb::UsbDevice::_class) ::android::hardware::usb::UsbDevice::_class = java::fetch_class("android/hardware/usb/UsbDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::hardware::usb::UsbDevice::getDeviceId(const ::java::lang::String& arg0){
    if (!::android::hardware::usb::UsbDevice::_class) ::android::hardware::usb::UsbDevice::_class = java::fetch_class("android/hardware/usb/UsbDevice");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDeviceId", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

::java::lang::String android::hardware::usb::UsbDevice::getDeviceName(int32_t arg0){
    if (!::android::hardware::usb::UsbDevice::_class) ::android::hardware::usb::UsbDevice::_class = java::fetch_class("android/hardware/usb/UsbDevice");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDeviceName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::hardware::usb::UsbConstants::UsbConstants() : ::java::lang::Object((jobject)0) {
    if (!::android::hardware::usb::UsbConstants::_class) ::android::hardware::usb::UsbConstants::_class = java::fetch_class("android/hardware/usb/UsbConstants");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::hardware::usb::UsbEndpoint::getAddress() const {
    if (!::android::hardware::usb::UsbEndpoint::_class) ::android::hardware::usb::UsbEndpoint::_class = java::fetch_class("android/hardware/usb/UsbEndpoint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAddress", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::hardware::usb::UsbEndpoint::getEndpointNumber() const {
    if (!::android::hardware::usb::UsbEndpoint::_class) ::android::hardware::usb::UsbEndpoint::_class = java::fetch_class("android/hardware/usb/UsbEndpoint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEndpointNumber", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::hardware::usb::UsbEndpoint::getDirection() const {
    if (!::android::hardware::usb::UsbEndpoint::_class) ::android::hardware::usb::UsbEndpoint::_class = java::fetch_class("android/hardware/usb/UsbEndpoint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDirection", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::hardware::usb::UsbEndpoint::getAttributes() const {
    if (!::android::hardware::usb::UsbEndpoint::_class) ::android::hardware::usb::UsbEndpoint::_class = java::fetch_class("android/hardware/usb/UsbEndpoint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributes", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::hardware::usb::UsbEndpoint::getType() const {
    if (!::android::hardware::usb::UsbEndpoint::_class) ::android::hardware::usb::UsbEndpoint::_class = java::fetch_class("android/hardware/usb/UsbEndpoint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::hardware::usb::UsbEndpoint::getMaxPacketSize() const {
    if (!::android::hardware::usb::UsbEndpoint::_class) ::android::hardware::usb::UsbEndpoint::_class = java::fetch_class("android/hardware/usb/UsbEndpoint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxPacketSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::hardware::usb::UsbEndpoint::getInterval() const {
    if (!::android::hardware::usb::UsbEndpoint::_class) ::android::hardware::usb::UsbEndpoint::_class = java::fetch_class("android/hardware/usb/UsbEndpoint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterval", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::hardware::usb::UsbEndpoint::toString() const {
    if (!::android::hardware::usb::UsbEndpoint::_class) ::android::hardware::usb::UsbEndpoint::_class = java::fetch_class("android/hardware/usb/UsbEndpoint");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::hardware::usb::UsbEndpoint::describeContents() const {
    if (!::android::hardware::usb::UsbEndpoint::_class) ::android::hardware::usb::UsbEndpoint::_class = java::fetch_class("android/hardware/usb/UsbEndpoint");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::hardware::usb::UsbEndpoint::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::hardware::usb::UsbEndpoint::_class) ::android::hardware::usb::UsbEndpoint::_class = java::fetch_class("android/hardware/usb/UsbEndpoint");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::hardware::usb::UsbInterface::getId() const {
    if (!::android::hardware::usb::UsbInterface::_class) ::android::hardware::usb::UsbInterface::_class = java::fetch_class("android/hardware/usb/UsbInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "getId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::hardware::usb::UsbInterface::getInterfaceClass() const {
    if (!::android::hardware::usb::UsbInterface::_class) ::android::hardware::usb::UsbInterface::_class = java::fetch_class("android/hardware/usb/UsbInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterfaceClass", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::hardware::usb::UsbInterface::getInterfaceSubclass() const {
    if (!::android::hardware::usb::UsbInterface::_class) ::android::hardware::usb::UsbInterface::_class = java::fetch_class("android/hardware/usb/UsbInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterfaceSubclass", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::hardware::usb::UsbInterface::getInterfaceProtocol() const {
    if (!::android::hardware::usb::UsbInterface::_class) ::android::hardware::usb::UsbInterface::_class = java::fetch_class("android/hardware/usb/UsbInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterfaceProtocol", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::hardware::usb::UsbInterface::getEndpointCount() const {
    if (!::android::hardware::usb::UsbInterface::_class) ::android::hardware::usb::UsbInterface::_class = java::fetch_class("android/hardware/usb/UsbInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEndpointCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::hardware::usb::UsbEndpoint android::hardware::usb::UsbInterface::getEndpoint(int32_t arg0) const {
    if (!::android::hardware::usb::UsbInterface::_class) ::android::hardware::usb::UsbInterface::_class = java::fetch_class("android/hardware/usb/UsbInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEndpoint", "(I)Landroid/hardware/usb/UsbEndpoint;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::hardware::usb::UsbEndpoint _ret(ret);
    return _ret;
}

::java::lang::String android::hardware::usb::UsbInterface::toString() const {
    if (!::android::hardware::usb::UsbInterface::_class) ::android::hardware::usb::UsbInterface::_class = java::fetch_class("android/hardware/usb/UsbInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::hardware::usb::UsbInterface::describeContents() const {
    if (!::android::hardware::usb::UsbInterface::_class) ::android::hardware::usb::UsbInterface::_class = java::fetch_class("android/hardware/usb/UsbInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::hardware::usb::UsbInterface::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::hardware::usb::UsbInterface::_class) ::android::hardware::usb::UsbInterface::_class = java::fetch_class("android/hardware/usb/UsbInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::util::HashMap android::hardware::usb::UsbManager::getDeviceList() const {
    if (!::android::hardware::usb::UsbManager::_class) ::android::hardware::usb::UsbManager::_class = java::fetch_class("android/hardware/usb/UsbManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeviceList", "()Ljava/util/HashMap;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::HashMap _ret(ret);
    return _ret;
}

::android::hardware::usb::UsbDeviceConnection android::hardware::usb::UsbManager::openDevice(const ::android::hardware::usb::UsbDevice& arg0) const {
    if (!::android::hardware::usb::UsbManager::_class) ::android::hardware::usb::UsbManager::_class = java::fetch_class("android/hardware/usb/UsbManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "openDevice", "(Landroid/hardware/usb/UsbDevice;)Landroid/hardware/usb/UsbDeviceConnection;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::hardware::usb::UsbDeviceConnection _ret(ret);
    return _ret;
}

std::vector< ::android::hardware::usb::UsbAccessory> android::hardware::usb::UsbManager::getAccessoryList() const {
    if (!::android::hardware::usb::UsbManager::_class) ::android::hardware::usb::UsbManager::_class = java::fetch_class("android/hardware/usb/UsbManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccessoryList", "()[Landroid/hardware/usb/UsbAccessory;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::hardware::usb::UsbAccessory> _ret(rets, ::android::hardware::usb::UsbAccessory((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::hardware::usb::UsbAccessory retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::os::ParcelFileDescriptor android::hardware::usb::UsbManager::openAccessory(const ::android::hardware::usb::UsbAccessory& arg0) const {
    if (!::android::hardware::usb::UsbManager::_class) ::android::hardware::usb::UsbManager::_class = java::fetch_class("android/hardware/usb/UsbManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "openAccessory", "(Landroid/hardware/usb/UsbAccessory;)Landroid/os/ParcelFileDescriptor;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::ParcelFileDescriptor _ret(ret);
    return _ret;
}

bool android::hardware::usb::UsbManager::hasPermission(const ::android::hardware::usb::UsbDevice& arg0) const {
    if (!::android::hardware::usb::UsbManager::_class) ::android::hardware::usb::UsbManager::_class = java::fetch_class("android/hardware/usb/UsbManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasPermission", "(Landroid/hardware/usb/UsbDevice;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::hardware::usb::UsbManager::hasPermission(const ::android::hardware::usb::UsbAccessory& arg0) const {
    if (!::android::hardware::usb::UsbManager::_class) ::android::hardware::usb::UsbManager::_class = java::fetch_class("android/hardware/usb/UsbManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasPermission", "(Landroid/hardware/usb/UsbAccessory;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::hardware::usb::UsbManager::requestPermission(const ::android::hardware::usb::UsbDevice& arg0, const ::android::app::PendingIntent& arg1) const {
    if (!::android::hardware::usb::UsbManager::_class) ::android::hardware::usb::UsbManager::_class = java::fetch_class("android/hardware/usb/UsbManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestPermission", "(Landroid/hardware/usb/UsbDevice;Landroid/app/PendingIntent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::hardware::usb::UsbManager::requestPermission(const ::android::hardware::usb::UsbAccessory& arg0, const ::android::app::PendingIntent& arg1) const {
    if (!::android::hardware::usb::UsbManager::_class) ::android::hardware::usb::UsbManager::_class = java::fetch_class("android/hardware/usb/UsbManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestPermission", "(Landroid/hardware/usb/UsbAccessory;Landroid/app/PendingIntent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

