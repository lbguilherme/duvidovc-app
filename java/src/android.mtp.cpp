#include "java-core.hpp"
#include <memory>
#include "android.hardware.usb.UsbDevice.hpp"
#include "android.hardware.usb.UsbDeviceConnection.hpp"
#include "android.mtp.MtpConstants.hpp"
#include "android.mtp.MtpDevice.hpp"
#include "android.mtp.MtpDeviceInfo.hpp"
#include "android.mtp.MtpObjectInfo.hpp"
#include "android.mtp.MtpStorageInfo.hpp"
#include "java.lang.String.hpp"

jclass android::mtp::MtpConstants::_class = nullptr;
jclass android::mtp::MtpDeviceInfo::_class = nullptr;
jclass android::mtp::MtpObjectInfo::_class = nullptr;
jclass android::mtp::MtpDevice::_class = nullptr;
jclass android::mtp::MtpStorageInfo::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::mtp::MtpConstants::MtpConstants() : ::java::lang::Object((jobject)0) {
    if (!::android::mtp::MtpConstants::_class) ::android::mtp::MtpConstants::_class = java::fetch_class("android/mtp/MtpConstants");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::mtp::MtpConstants::isAbstractObject(int32_t arg0){
    if (!::android::mtp::MtpConstants::_class) ::android::mtp::MtpConstants::_class = java::fetch_class("android/mtp/MtpConstants");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isAbstractObject", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

::java::lang::String android::mtp::MtpDeviceInfo::getManufacturer() const {
    if (!::android::mtp::MtpDeviceInfo::_class) ::android::mtp::MtpDeviceInfo::_class = java::fetch_class("android/mtp/MtpDeviceInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getManufacturer", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::mtp::MtpDeviceInfo::getModel() const {
    if (!::android::mtp::MtpDeviceInfo::_class) ::android::mtp::MtpDeviceInfo::_class = java::fetch_class("android/mtp/MtpDeviceInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getModel", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::mtp::MtpDeviceInfo::getVersion() const {
    if (!::android::mtp::MtpDeviceInfo::_class) ::android::mtp::MtpDeviceInfo::_class = java::fetch_class("android/mtp/MtpDeviceInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVersion", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::mtp::MtpDeviceInfo::getSerialNumber() const {
    if (!::android::mtp::MtpDeviceInfo::_class) ::android::mtp::MtpDeviceInfo::_class = java::fetch_class("android/mtp/MtpDeviceInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSerialNumber", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::mtp::MtpObjectInfo::getObjectHandle() const {
    if (!::android::mtp::MtpObjectInfo::_class) ::android::mtp::MtpObjectInfo::_class = java::fetch_class("android/mtp/MtpObjectInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObjectHandle", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::mtp::MtpObjectInfo::getStorageId() const {
    if (!::android::mtp::MtpObjectInfo::_class) ::android::mtp::MtpObjectInfo::_class = java::fetch_class("android/mtp/MtpObjectInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStorageId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::mtp::MtpObjectInfo::getFormat() const {
    if (!::android::mtp::MtpObjectInfo::_class) ::android::mtp::MtpObjectInfo::_class = java::fetch_class("android/mtp/MtpObjectInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFormat", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::mtp::MtpObjectInfo::getProtectionStatus() const {
    if (!::android::mtp::MtpObjectInfo::_class) ::android::mtp::MtpObjectInfo::_class = java::fetch_class("android/mtp/MtpObjectInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProtectionStatus", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::mtp::MtpObjectInfo::getCompressedSize() const {
    if (!::android::mtp::MtpObjectInfo::_class) ::android::mtp::MtpObjectInfo::_class = java::fetch_class("android/mtp/MtpObjectInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCompressedSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::mtp::MtpObjectInfo::getThumbFormat() const {
    if (!::android::mtp::MtpObjectInfo::_class) ::android::mtp::MtpObjectInfo::_class = java::fetch_class("android/mtp/MtpObjectInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getThumbFormat", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::mtp::MtpObjectInfo::getThumbCompressedSize() const {
    if (!::android::mtp::MtpObjectInfo::_class) ::android::mtp::MtpObjectInfo::_class = java::fetch_class("android/mtp/MtpObjectInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getThumbCompressedSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::mtp::MtpObjectInfo::getThumbPixWidth() const {
    if (!::android::mtp::MtpObjectInfo::_class) ::android::mtp::MtpObjectInfo::_class = java::fetch_class("android/mtp/MtpObjectInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getThumbPixWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::mtp::MtpObjectInfo::getThumbPixHeight() const {
    if (!::android::mtp::MtpObjectInfo::_class) ::android::mtp::MtpObjectInfo::_class = java::fetch_class("android/mtp/MtpObjectInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getThumbPixHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::mtp::MtpObjectInfo::getImagePixWidth() const {
    if (!::android::mtp::MtpObjectInfo::_class) ::android::mtp::MtpObjectInfo::_class = java::fetch_class("android/mtp/MtpObjectInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getImagePixWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::mtp::MtpObjectInfo::getImagePixHeight() const {
    if (!::android::mtp::MtpObjectInfo::_class) ::android::mtp::MtpObjectInfo::_class = java::fetch_class("android/mtp/MtpObjectInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getImagePixHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::mtp::MtpObjectInfo::getImagePixDepth() const {
    if (!::android::mtp::MtpObjectInfo::_class) ::android::mtp::MtpObjectInfo::_class = java::fetch_class("android/mtp/MtpObjectInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getImagePixDepth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::mtp::MtpObjectInfo::getParent() const {
    if (!::android::mtp::MtpObjectInfo::_class) ::android::mtp::MtpObjectInfo::_class = java::fetch_class("android/mtp/MtpObjectInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParent", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::mtp::MtpObjectInfo::getAssociationType() const {
    if (!::android::mtp::MtpObjectInfo::_class) ::android::mtp::MtpObjectInfo::_class = java::fetch_class("android/mtp/MtpObjectInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAssociationType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::mtp::MtpObjectInfo::getAssociationDesc() const {
    if (!::android::mtp::MtpObjectInfo::_class) ::android::mtp::MtpObjectInfo::_class = java::fetch_class("android/mtp/MtpObjectInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAssociationDesc", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::mtp::MtpObjectInfo::getSequenceNumber() const {
    if (!::android::mtp::MtpObjectInfo::_class) ::android::mtp::MtpObjectInfo::_class = java::fetch_class("android/mtp/MtpObjectInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSequenceNumber", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::mtp::MtpObjectInfo::getName() const {
    if (!::android::mtp::MtpObjectInfo::_class) ::android::mtp::MtpObjectInfo::_class = java::fetch_class("android/mtp/MtpObjectInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int64_t android::mtp::MtpObjectInfo::getDateCreated() const {
    if (!::android::mtp::MtpObjectInfo::_class) ::android::mtp::MtpObjectInfo::_class = java::fetch_class("android/mtp/MtpObjectInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDateCreated", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t android::mtp::MtpObjectInfo::getDateModified() const {
    if (!::android::mtp::MtpObjectInfo::_class) ::android::mtp::MtpObjectInfo::_class = java::fetch_class("android/mtp/MtpObjectInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDateModified", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::java::lang::String android::mtp::MtpObjectInfo::getKeywords() const {
    if (!::android::mtp::MtpObjectInfo::_class) ::android::mtp::MtpObjectInfo::_class = java::fetch_class("android/mtp/MtpObjectInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeywords", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::mtp::MtpDevice::MtpDevice(const ::android::hardware::usb::UsbDevice& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::mtp::MtpDevice::_class) ::android::mtp::MtpDevice::_class = java::fetch_class("android/mtp/MtpDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/hardware/usb/UsbDevice;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool android::mtp::MtpDevice::open(const ::android::hardware::usb::UsbDeviceConnection& arg0) const {
    if (!::android::mtp::MtpDevice::_class) ::android::mtp::MtpDevice::_class = java::fetch_class("android/mtp/MtpDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "open", "(Landroid/hardware/usb/UsbDeviceConnection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::mtp::MtpDevice::close() const {
    if (!::android::mtp::MtpDevice::_class) ::android::mtp::MtpDevice::_class = java::fetch_class("android/mtp/MtpDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String android::mtp::MtpDevice::getDeviceName() const {
    if (!::android::mtp::MtpDevice::_class) ::android::mtp::MtpDevice::_class = java::fetch_class("android/mtp/MtpDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeviceName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::mtp::MtpDevice::getDeviceId() const {
    if (!::android::mtp::MtpDevice::_class) ::android::mtp::MtpDevice::_class = java::fetch_class("android/mtp/MtpDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeviceId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::mtp::MtpDevice::toString() const {
    if (!::android::mtp::MtpDevice::_class) ::android::mtp::MtpDevice::_class = java::fetch_class("android/mtp/MtpDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::mtp::MtpDeviceInfo android::mtp::MtpDevice::getDeviceInfo() const {
    if (!::android::mtp::MtpDevice::_class) ::android::mtp::MtpDevice::_class = java::fetch_class("android/mtp/MtpDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeviceInfo", "()Landroid/mtp/MtpDeviceInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::mtp::MtpDeviceInfo _ret(ret);
    return _ret;
}

std::vector< int32_t> android::mtp::MtpDevice::getStorageIds() const {
    if (!::android::mtp::MtpDevice::_class) ::android::mtp::MtpDevice::_class = java::fetch_class("android/mtp/MtpDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStorageIds", "()[I");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int32_t> android::mtp::MtpDevice::getObjectHandles(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::mtp::MtpDevice::_class) ::android::mtp::MtpDevice::_class = java::fetch_class("android/mtp/MtpDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObjectHandles", "(III)[I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> android::mtp::MtpDevice::getObject(int32_t arg0, int32_t arg1) const {
    if (!::android::mtp::MtpDevice::_class) ::android::mtp::MtpDevice::_class = java::fetch_class("android/mtp/MtpDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObject", "(II)[B");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> android::mtp::MtpDevice::getThumbnail(int32_t arg0) const {
    if (!::android::mtp::MtpDevice::_class) ::android::mtp::MtpDevice::_class = java::fetch_class("android/mtp/MtpDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getThumbnail", "(I)[B");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::android::mtp::MtpStorageInfo android::mtp::MtpDevice::getStorageInfo(int32_t arg0) const {
    if (!::android::mtp::MtpDevice::_class) ::android::mtp::MtpDevice::_class = java::fetch_class("android/mtp/MtpDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStorageInfo", "(I)Landroid/mtp/MtpStorageInfo;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::mtp::MtpStorageInfo _ret(ret);
    return _ret;
}

::android::mtp::MtpObjectInfo android::mtp::MtpDevice::getObjectInfo(int32_t arg0) const {
    if (!::android::mtp::MtpDevice::_class) ::android::mtp::MtpDevice::_class = java::fetch_class("android/mtp/MtpDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObjectInfo", "(I)Landroid/mtp/MtpObjectInfo;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::mtp::MtpObjectInfo _ret(ret);
    return _ret;
}

bool android::mtp::MtpDevice::deleteObject(int32_t arg0) const {
    if (!::android::mtp::MtpDevice::_class) ::android::mtp::MtpDevice::_class = java::fetch_class("android/mtp/MtpDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "deleteObject", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int64_t android::mtp::MtpDevice::getParent(int32_t arg0) const {
    if (!::android::mtp::MtpDevice::_class) ::android::mtp::MtpDevice::_class = java::fetch_class("android/mtp/MtpDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParent", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t android::mtp::MtpDevice::getStorageId(int32_t arg0) const {
    if (!::android::mtp::MtpDevice::_class) ::android::mtp::MtpDevice::_class = java::fetch_class("android/mtp/MtpDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStorageId", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

bool android::mtp::MtpDevice::importFile(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::android::mtp::MtpDevice::_class) ::android::mtp::MtpDevice::_class = java::fetch_class("android/mtp/MtpDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "importFile", "(ILjava/lang/String;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

int32_t android::mtp::MtpStorageInfo::getStorageId() const {
    if (!::android::mtp::MtpStorageInfo::_class) ::android::mtp::MtpStorageInfo::_class = java::fetch_class("android/mtp/MtpStorageInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStorageId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t android::mtp::MtpStorageInfo::getMaxCapacity() const {
    if (!::android::mtp::MtpStorageInfo::_class) ::android::mtp::MtpStorageInfo::_class = java::fetch_class("android/mtp/MtpStorageInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxCapacity", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t android::mtp::MtpStorageInfo::getFreeSpace() const {
    if (!::android::mtp::MtpStorageInfo::_class) ::android::mtp::MtpStorageInfo::_class = java::fetch_class("android/mtp/MtpStorageInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFreeSpace", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::java::lang::String android::mtp::MtpStorageInfo::getDescription() const {
    if (!::android::mtp::MtpStorageInfo::_class) ::android::mtp::MtpStorageInfo::_class = java::fetch_class("android/mtp/MtpStorageInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDescription", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::mtp::MtpStorageInfo::getVolumeIdentifier() const {
    if (!::android::mtp::MtpStorageInfo::_class) ::android::mtp::MtpStorageInfo::_class = java::fetch_class("android/mtp/MtpStorageInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVolumeIdentifier", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

