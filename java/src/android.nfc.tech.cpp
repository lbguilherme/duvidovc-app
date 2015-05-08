#include "java-core.hpp"
#include <memory>
#include "android.nfc.NdefMessage.hpp"
#include "android.nfc.Tag.hpp"
#include "android.nfc.tech.BasicTagTechnology.hpp"
#include "android.nfc.tech.IsoDep.hpp"
#include "android.nfc.tech.MifareClassic.hpp"
#include "android.nfc.tech.MifareUltralight.hpp"
#include "android.nfc.tech.Ndef.hpp"
#include "android.nfc.tech.NdefFormatable.hpp"
#include "android.nfc.tech.NfcA.hpp"
#include "android.nfc.tech.NfcB.hpp"
#include "android.nfc.tech.NfcF.hpp"
#include "android.nfc.tech.NfcV.hpp"
#include "android.nfc.tech.TagTechnology.hpp"
#include "java.lang.String.hpp"

jclass android::nfc::tech::Ndef::_class = nullptr;
jclass android::nfc::tech::BasicTagTechnology::_class = nullptr;
jclass android::nfc::tech::MifareClassic::_class = nullptr;
jclass android::nfc::tech::NfcF::_class = nullptr;
jclass android::nfc::tech::MifareUltralight::_class = nullptr;
jclass android::nfc::tech::IsoDep::_class = nullptr;
jclass android::nfc::tech::NfcV::_class = nullptr;
jclass android::nfc::tech::TagTechnology::_class = nullptr;
jclass android::nfc::tech::NfcA::_class = nullptr;
jclass android::nfc::tech::NdefFormatable::_class = nullptr;
jclass android::nfc::tech::NfcB::_class = nullptr;

::android::nfc::tech::Ndef android::nfc::tech::Ndef::get(const ::android::nfc::Tag& arg0){
    if (!::android::nfc::tech::Ndef::_class) ::android::nfc::tech::Ndef::_class = java::fetch_class("android/nfc/tech/Ndef");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "get", "(Landroid/nfc/Tag;)Landroid/nfc/tech/Ndef;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::nfc::tech::Ndef _ret(ret);
    return _ret;
}

::android::nfc::NdefMessage android::nfc::tech::Ndef::getCachedNdefMessage() const {
    if (!::android::nfc::tech::Ndef::_class) ::android::nfc::tech::Ndef::_class = java::fetch_class("android/nfc/tech/Ndef");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCachedNdefMessage", "()Landroid/nfc/NdefMessage;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::nfc::NdefMessage _ret(ret);
    return _ret;
}

::java::lang::String android::nfc::tech::Ndef::getType() const {
    if (!::android::nfc::tech::Ndef::_class) ::android::nfc::tech::Ndef::_class = java::fetch_class("android/nfc/tech/Ndef");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::nfc::tech::Ndef::getMaxSize() const {
    if (!::android::nfc::tech::Ndef::_class) ::android::nfc::tech::Ndef::_class = java::fetch_class("android/nfc/tech/Ndef");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::nfc::tech::Ndef::isWritable() const {
    if (!::android::nfc::tech::Ndef::_class) ::android::nfc::tech::Ndef::_class = java::fetch_class("android/nfc/tech/Ndef");
    static jmethodID mid = java::jni->GetMethodID(_class, "isWritable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::nfc::NdefMessage android::nfc::tech::Ndef::getNdefMessage() const {
    if (!::android::nfc::tech::Ndef::_class) ::android::nfc::tech::Ndef::_class = java::fetch_class("android/nfc/tech/Ndef");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNdefMessage", "()Landroid/nfc/NdefMessage;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::nfc::NdefMessage _ret(ret);
    return _ret;
}

void android::nfc::tech::Ndef::writeNdefMessage(const ::android::nfc::NdefMessage& arg0) const {
    if (!::android::nfc::tech::Ndef::_class) ::android::nfc::tech::Ndef::_class = java::fetch_class("android/nfc/tech/Ndef");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeNdefMessage", "(Landroid/nfc/NdefMessage;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::nfc::tech::Ndef::canMakeReadOnly() const {
    if (!::android::nfc::tech::Ndef::_class) ::android::nfc::tech::Ndef::_class = java::fetch_class("android/nfc/tech/Ndef");
    static jmethodID mid = java::jni->GetMethodID(_class, "canMakeReadOnly", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::nfc::tech::Ndef::makeReadOnly() const {
    if (!::android::nfc::tech::Ndef::_class) ::android::nfc::tech::Ndef::_class = java::fetch_class("android/nfc/tech/Ndef");
    static jmethodID mid = java::jni->GetMethodID(_class, "makeReadOnly", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::nfc::tech::Ndef::close() const {
    if (!::android::nfc::tech::Ndef::_class) ::android::nfc::tech::Ndef::_class = java::fetch_class("android/nfc/tech/Ndef");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::nfc::tech::Ndef::connect() const {
    if (!::android::nfc::tech::Ndef::_class) ::android::nfc::tech::Ndef::_class = java::fetch_class("android/nfc/tech/Ndef");
    static jmethodID mid = java::jni->GetMethodID(_class, "connect", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::nfc::tech::Ndef::isConnected() const {
    if (!::android::nfc::tech::Ndef::_class) ::android::nfc::tech::Ndef::_class = java::fetch_class("android/nfc/tech/Ndef");
    static jmethodID mid = java::jni->GetMethodID(_class, "isConnected", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::nfc::Tag android::nfc::tech::Ndef::getTag() const {
    if (!::android::nfc::tech::Ndef::_class) ::android::nfc::tech::Ndef::_class = java::fetch_class("android/nfc/tech/Ndef");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTag", "()Landroid/nfc/Tag;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::nfc::Tag _ret(ret);
    return _ret;
}

::android::nfc::Tag android::nfc::tech::BasicTagTechnology::getTag() const {
    if (!::android::nfc::tech::BasicTagTechnology::_class) ::android::nfc::tech::BasicTagTechnology::_class = java::fetch_class("android/nfc/tech/BasicTagTechnology");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTag", "()Landroid/nfc/Tag;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::nfc::Tag _ret(ret);
    return _ret;
}

bool android::nfc::tech::BasicTagTechnology::isConnected() const {
    if (!::android::nfc::tech::BasicTagTechnology::_class) ::android::nfc::tech::BasicTagTechnology::_class = java::fetch_class("android/nfc/tech/BasicTagTechnology");
    static jmethodID mid = java::jni->GetMethodID(_class, "isConnected", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::nfc::tech::BasicTagTechnology::connect() const {
    if (!::android::nfc::tech::BasicTagTechnology::_class) ::android::nfc::tech::BasicTagTechnology::_class = java::fetch_class("android/nfc/tech/BasicTagTechnology");
    static jmethodID mid = java::jni->GetMethodID(_class, "connect", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::nfc::tech::BasicTagTechnology::close() const {
    if (!::android::nfc::tech::BasicTagTechnology::_class) ::android::nfc::tech::BasicTagTechnology::_class = java::fetch_class("android/nfc/tech/BasicTagTechnology");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::nfc::tech::MifareClassic android::nfc::tech::MifareClassic::get(const ::android::nfc::Tag& arg0){
    if (!::android::nfc::tech::MifareClassic::_class) ::android::nfc::tech::MifareClassic::_class = java::fetch_class("android/nfc/tech/MifareClassic");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "get", "(Landroid/nfc/Tag;)Landroid/nfc/tech/MifareClassic;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::nfc::tech::MifareClassic _ret(ret);
    return _ret;
}

int32_t android::nfc::tech::MifareClassic::getType() const {
    if (!::android::nfc::tech::MifareClassic::_class) ::android::nfc::tech::MifareClassic::_class = java::fetch_class("android/nfc/tech/MifareClassic");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::nfc::tech::MifareClassic::getSize() const {
    if (!::android::nfc::tech::MifareClassic::_class) ::android::nfc::tech::MifareClassic::_class = java::fetch_class("android/nfc/tech/MifareClassic");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::nfc::tech::MifareClassic::getSectorCount() const {
    if (!::android::nfc::tech::MifareClassic::_class) ::android::nfc::tech::MifareClassic::_class = java::fetch_class("android/nfc/tech/MifareClassic");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSectorCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::nfc::tech::MifareClassic::getBlockCount() const {
    if (!::android::nfc::tech::MifareClassic::_class) ::android::nfc::tech::MifareClassic::_class = java::fetch_class("android/nfc/tech/MifareClassic");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBlockCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::nfc::tech::MifareClassic::getBlockCountInSector(int32_t arg0) const {
    if (!::android::nfc::tech::MifareClassic::_class) ::android::nfc::tech::MifareClassic::_class = java::fetch_class("android/nfc/tech/MifareClassic");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBlockCountInSector", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::nfc::tech::MifareClassic::blockToSector(int32_t arg0) const {
    if (!::android::nfc::tech::MifareClassic::_class) ::android::nfc::tech::MifareClassic::_class = java::fetch_class("android/nfc/tech/MifareClassic");
    static jmethodID mid = java::jni->GetMethodID(_class, "blockToSector", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::nfc::tech::MifareClassic::sectorToBlock(int32_t arg0) const {
    if (!::android::nfc::tech::MifareClassic::_class) ::android::nfc::tech::MifareClassic::_class = java::fetch_class("android/nfc/tech/MifareClassic");
    static jmethodID mid = java::jni->GetMethodID(_class, "sectorToBlock", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::nfc::tech::MifareClassic::authenticateSectorWithKeyA(int32_t arg0, const std::vector< int8_t>& arg1) const {
    if (!::android::nfc::tech::MifareClassic::_class) ::android::nfc::tech::MifareClassic::_class = java::fetch_class("android/nfc/tech/MifareClassic");
    static jmethodID mid = java::jni->GetMethodID(_class, "authenticateSectorWithKeyA", "(I[B)Z");
    int32_t _arg0 = arg0;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::nfc::tech::MifareClassic::authenticateSectorWithKeyB(int32_t arg0, const std::vector< int8_t>& arg1) const {
    if (!::android::nfc::tech::MifareClassic::_class) ::android::nfc::tech::MifareClassic::_class = java::fetch_class("android/nfc/tech/MifareClassic");
    static jmethodID mid = java::jni->GetMethodID(_class, "authenticateSectorWithKeyB", "(I[B)Z");
    int32_t _arg0 = arg0;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

std::vector< int8_t> android::nfc::tech::MifareClassic::readBlock(int32_t arg0) const {
    if (!::android::nfc::tech::MifareClassic::_class) ::android::nfc::tech::MifareClassic::_class = java::fetch_class("android/nfc/tech/MifareClassic");
    static jmethodID mid = java::jni->GetMethodID(_class, "readBlock", "(I)[B");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

void android::nfc::tech::MifareClassic::writeBlock(int32_t arg0, const std::vector< int8_t>& arg1) const {
    if (!::android::nfc::tech::MifareClassic::_class) ::android::nfc::tech::MifareClassic::_class = java::fetch_class("android/nfc/tech/MifareClassic");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeBlock", "(I[B)V");
    int32_t _arg0 = arg0;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::nfc::tech::MifareClassic::increment(int32_t arg0, int32_t arg1) const {
    if (!::android::nfc::tech::MifareClassic::_class) ::android::nfc::tech::MifareClassic::_class = java::fetch_class("android/nfc/tech/MifareClassic");
    static jmethodID mid = java::jni->GetMethodID(_class, "increment", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::nfc::tech::MifareClassic::decrement(int32_t arg0, int32_t arg1) const {
    if (!::android::nfc::tech::MifareClassic::_class) ::android::nfc::tech::MifareClassic::_class = java::fetch_class("android/nfc/tech/MifareClassic");
    static jmethodID mid = java::jni->GetMethodID(_class, "decrement", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::nfc::tech::MifareClassic::transfer(int32_t arg0) const {
    if (!::android::nfc::tech::MifareClassic::_class) ::android::nfc::tech::MifareClassic::_class = java::fetch_class("android/nfc/tech/MifareClassic");
    static jmethodID mid = java::jni->GetMethodID(_class, "transfer", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::nfc::tech::MifareClassic::restore(int32_t arg0) const {
    if (!::android::nfc::tech::MifareClassic::_class) ::android::nfc::tech::MifareClassic::_class = java::fetch_class("android/nfc/tech/MifareClassic");
    static jmethodID mid = java::jni->GetMethodID(_class, "restore", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< int8_t> android::nfc::tech::MifareClassic::transceive(const std::vector< int8_t>& arg0) const {
    if (!::android::nfc::tech::MifareClassic::_class) ::android::nfc::tech::MifareClassic::_class = java::fetch_class("android/nfc/tech/MifareClassic");
    static jmethodID mid = java::jni->GetMethodID(_class, "transceive", "([B)[B");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t android::nfc::tech::MifareClassic::getMaxTransceiveLength() const {
    if (!::android::nfc::tech::MifareClassic::_class) ::android::nfc::tech::MifareClassic::_class = java::fetch_class("android/nfc/tech/MifareClassic");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxTransceiveLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::nfc::tech::MifareClassic::setTimeout(int32_t arg0) const {
    if (!::android::nfc::tech::MifareClassic::_class) ::android::nfc::tech::MifareClassic::_class = java::fetch_class("android/nfc/tech/MifareClassic");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTimeout", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::nfc::tech::MifareClassic::getTimeout() const {
    if (!::android::nfc::tech::MifareClassic::_class) ::android::nfc::tech::MifareClassic::_class = java::fetch_class("android/nfc/tech/MifareClassic");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimeout", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::nfc::tech::MifareClassic::close() const {
    if (!::android::nfc::tech::MifareClassic::_class) ::android::nfc::tech::MifareClassic::_class = java::fetch_class("android/nfc/tech/MifareClassic");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::nfc::tech::MifareClassic::connect() const {
    if (!::android::nfc::tech::MifareClassic::_class) ::android::nfc::tech::MifareClassic::_class = java::fetch_class("android/nfc/tech/MifareClassic");
    static jmethodID mid = java::jni->GetMethodID(_class, "connect", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::nfc::tech::MifareClassic::isConnected() const {
    if (!::android::nfc::tech::MifareClassic::_class) ::android::nfc::tech::MifareClassic::_class = java::fetch_class("android/nfc/tech/MifareClassic");
    static jmethodID mid = java::jni->GetMethodID(_class, "isConnected", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::nfc::Tag android::nfc::tech::MifareClassic::getTag() const {
    if (!::android::nfc::tech::MifareClassic::_class) ::android::nfc::tech::MifareClassic::_class = java::fetch_class("android/nfc/tech/MifareClassic");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTag", "()Landroid/nfc/Tag;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::nfc::Tag _ret(ret);
    return _ret;
}

::android::nfc::tech::NfcF android::nfc::tech::NfcF::get(const ::android::nfc::Tag& arg0){
    if (!::android::nfc::tech::NfcF::_class) ::android::nfc::tech::NfcF::_class = java::fetch_class("android/nfc/tech/NfcF");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "get", "(Landroid/nfc/Tag;)Landroid/nfc/tech/NfcF;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::nfc::tech::NfcF _ret(ret);
    return _ret;
}

std::vector< int8_t> android::nfc::tech::NfcF::getSystemCode() const {
    if (!::android::nfc::tech::NfcF::_class) ::android::nfc::tech::NfcF::_class = java::fetch_class("android/nfc/tech/NfcF");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemCode", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> android::nfc::tech::NfcF::getManufacturer() const {
    if (!::android::nfc::tech::NfcF::_class) ::android::nfc::tech::NfcF::_class = java::fetch_class("android/nfc/tech/NfcF");
    static jmethodID mid = java::jni->GetMethodID(_class, "getManufacturer", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> android::nfc::tech::NfcF::transceive(const std::vector< int8_t>& arg0) const {
    if (!::android::nfc::tech::NfcF::_class) ::android::nfc::tech::NfcF::_class = java::fetch_class("android/nfc/tech/NfcF");
    static jmethodID mid = java::jni->GetMethodID(_class, "transceive", "([B)[B");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t android::nfc::tech::NfcF::getMaxTransceiveLength() const {
    if (!::android::nfc::tech::NfcF::_class) ::android::nfc::tech::NfcF::_class = java::fetch_class("android/nfc/tech/NfcF");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxTransceiveLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::nfc::tech::NfcF::setTimeout(int32_t arg0) const {
    if (!::android::nfc::tech::NfcF::_class) ::android::nfc::tech::NfcF::_class = java::fetch_class("android/nfc/tech/NfcF");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTimeout", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::nfc::tech::NfcF::getTimeout() const {
    if (!::android::nfc::tech::NfcF::_class) ::android::nfc::tech::NfcF::_class = java::fetch_class("android/nfc/tech/NfcF");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimeout", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::nfc::tech::NfcF::close() const {
    if (!::android::nfc::tech::NfcF::_class) ::android::nfc::tech::NfcF::_class = java::fetch_class("android/nfc/tech/NfcF");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::nfc::tech::NfcF::connect() const {
    if (!::android::nfc::tech::NfcF::_class) ::android::nfc::tech::NfcF::_class = java::fetch_class("android/nfc/tech/NfcF");
    static jmethodID mid = java::jni->GetMethodID(_class, "connect", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::nfc::tech::NfcF::isConnected() const {
    if (!::android::nfc::tech::NfcF::_class) ::android::nfc::tech::NfcF::_class = java::fetch_class("android/nfc/tech/NfcF");
    static jmethodID mid = java::jni->GetMethodID(_class, "isConnected", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::nfc::Tag android::nfc::tech::NfcF::getTag() const {
    if (!::android::nfc::tech::NfcF::_class) ::android::nfc::tech::NfcF::_class = java::fetch_class("android/nfc/tech/NfcF");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTag", "()Landroid/nfc/Tag;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::nfc::Tag _ret(ret);
    return _ret;
}

::android::nfc::tech::MifareUltralight android::nfc::tech::MifareUltralight::get(const ::android::nfc::Tag& arg0){
    if (!::android::nfc::tech::MifareUltralight::_class) ::android::nfc::tech::MifareUltralight::_class = java::fetch_class("android/nfc/tech/MifareUltralight");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "get", "(Landroid/nfc/Tag;)Landroid/nfc/tech/MifareUltralight;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::nfc::tech::MifareUltralight _ret(ret);
    return _ret;
}

int32_t android::nfc::tech::MifareUltralight::getType() const {
    if (!::android::nfc::tech::MifareUltralight::_class) ::android::nfc::tech::MifareUltralight::_class = java::fetch_class("android/nfc/tech/MifareUltralight");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< int8_t> android::nfc::tech::MifareUltralight::readPages(int32_t arg0) const {
    if (!::android::nfc::tech::MifareUltralight::_class) ::android::nfc::tech::MifareUltralight::_class = java::fetch_class("android/nfc/tech/MifareUltralight");
    static jmethodID mid = java::jni->GetMethodID(_class, "readPages", "(I)[B");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

void android::nfc::tech::MifareUltralight::writePage(int32_t arg0, const std::vector< int8_t>& arg1) const {
    if (!::android::nfc::tech::MifareUltralight::_class) ::android::nfc::tech::MifareUltralight::_class = java::fetch_class("android/nfc/tech/MifareUltralight");
    static jmethodID mid = java::jni->GetMethodID(_class, "writePage", "(I[B)V");
    int32_t _arg0 = arg0;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

std::vector< int8_t> android::nfc::tech::MifareUltralight::transceive(const std::vector< int8_t>& arg0) const {
    if (!::android::nfc::tech::MifareUltralight::_class) ::android::nfc::tech::MifareUltralight::_class = java::fetch_class("android/nfc/tech/MifareUltralight");
    static jmethodID mid = java::jni->GetMethodID(_class, "transceive", "([B)[B");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t android::nfc::tech::MifareUltralight::getMaxTransceiveLength() const {
    if (!::android::nfc::tech::MifareUltralight::_class) ::android::nfc::tech::MifareUltralight::_class = java::fetch_class("android/nfc/tech/MifareUltralight");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxTransceiveLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::nfc::tech::MifareUltralight::setTimeout(int32_t arg0) const {
    if (!::android::nfc::tech::MifareUltralight::_class) ::android::nfc::tech::MifareUltralight::_class = java::fetch_class("android/nfc/tech/MifareUltralight");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTimeout", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::nfc::tech::MifareUltralight::getTimeout() const {
    if (!::android::nfc::tech::MifareUltralight::_class) ::android::nfc::tech::MifareUltralight::_class = java::fetch_class("android/nfc/tech/MifareUltralight");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimeout", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::nfc::tech::MifareUltralight::close() const {
    if (!::android::nfc::tech::MifareUltralight::_class) ::android::nfc::tech::MifareUltralight::_class = java::fetch_class("android/nfc/tech/MifareUltralight");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::nfc::tech::MifareUltralight::connect() const {
    if (!::android::nfc::tech::MifareUltralight::_class) ::android::nfc::tech::MifareUltralight::_class = java::fetch_class("android/nfc/tech/MifareUltralight");
    static jmethodID mid = java::jni->GetMethodID(_class, "connect", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::nfc::tech::MifareUltralight::isConnected() const {
    if (!::android::nfc::tech::MifareUltralight::_class) ::android::nfc::tech::MifareUltralight::_class = java::fetch_class("android/nfc/tech/MifareUltralight");
    static jmethodID mid = java::jni->GetMethodID(_class, "isConnected", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::nfc::Tag android::nfc::tech::MifareUltralight::getTag() const {
    if (!::android::nfc::tech::MifareUltralight::_class) ::android::nfc::tech::MifareUltralight::_class = java::fetch_class("android/nfc/tech/MifareUltralight");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTag", "()Landroid/nfc/Tag;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::nfc::Tag _ret(ret);
    return _ret;
}

::android::nfc::tech::IsoDep android::nfc::tech::IsoDep::get(const ::android::nfc::Tag& arg0){
    if (!::android::nfc::tech::IsoDep::_class) ::android::nfc::tech::IsoDep::_class = java::fetch_class("android/nfc/tech/IsoDep");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "get", "(Landroid/nfc/Tag;)Landroid/nfc/tech/IsoDep;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::nfc::tech::IsoDep _ret(ret);
    return _ret;
}

void android::nfc::tech::IsoDep::setTimeout(int32_t arg0) const {
    if (!::android::nfc::tech::IsoDep::_class) ::android::nfc::tech::IsoDep::_class = java::fetch_class("android/nfc/tech/IsoDep");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTimeout", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::nfc::tech::IsoDep::getTimeout() const {
    if (!::android::nfc::tech::IsoDep::_class) ::android::nfc::tech::IsoDep::_class = java::fetch_class("android/nfc/tech/IsoDep");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimeout", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< int8_t> android::nfc::tech::IsoDep::getHistoricalBytes() const {
    if (!::android::nfc::tech::IsoDep::_class) ::android::nfc::tech::IsoDep::_class = java::fetch_class("android/nfc/tech/IsoDep");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHistoricalBytes", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> android::nfc::tech::IsoDep::getHiLayerResponse() const {
    if (!::android::nfc::tech::IsoDep::_class) ::android::nfc::tech::IsoDep::_class = java::fetch_class("android/nfc/tech/IsoDep");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHiLayerResponse", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> android::nfc::tech::IsoDep::transceive(const std::vector< int8_t>& arg0) const {
    if (!::android::nfc::tech::IsoDep::_class) ::android::nfc::tech::IsoDep::_class = java::fetch_class("android/nfc/tech/IsoDep");
    static jmethodID mid = java::jni->GetMethodID(_class, "transceive", "([B)[B");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t android::nfc::tech::IsoDep::getMaxTransceiveLength() const {
    if (!::android::nfc::tech::IsoDep::_class) ::android::nfc::tech::IsoDep::_class = java::fetch_class("android/nfc/tech/IsoDep");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxTransceiveLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::nfc::tech::IsoDep::close() const {
    if (!::android::nfc::tech::IsoDep::_class) ::android::nfc::tech::IsoDep::_class = java::fetch_class("android/nfc/tech/IsoDep");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::nfc::tech::IsoDep::connect() const {
    if (!::android::nfc::tech::IsoDep::_class) ::android::nfc::tech::IsoDep::_class = java::fetch_class("android/nfc/tech/IsoDep");
    static jmethodID mid = java::jni->GetMethodID(_class, "connect", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::nfc::tech::IsoDep::isConnected() const {
    if (!::android::nfc::tech::IsoDep::_class) ::android::nfc::tech::IsoDep::_class = java::fetch_class("android/nfc/tech/IsoDep");
    static jmethodID mid = java::jni->GetMethodID(_class, "isConnected", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::nfc::Tag android::nfc::tech::IsoDep::getTag() const {
    if (!::android::nfc::tech::IsoDep::_class) ::android::nfc::tech::IsoDep::_class = java::fetch_class("android/nfc/tech/IsoDep");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTag", "()Landroid/nfc/Tag;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::nfc::Tag _ret(ret);
    return _ret;
}

::android::nfc::tech::NfcV android::nfc::tech::NfcV::get(const ::android::nfc::Tag& arg0){
    if (!::android::nfc::tech::NfcV::_class) ::android::nfc::tech::NfcV::_class = java::fetch_class("android/nfc/tech/NfcV");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "get", "(Landroid/nfc/Tag;)Landroid/nfc/tech/NfcV;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::nfc::tech::NfcV _ret(ret);
    return _ret;
}

int8_t android::nfc::tech::NfcV::getResponseFlags() const {
    if (!::android::nfc::tech::NfcV::_class) ::android::nfc::tech::NfcV::_class = java::fetch_class("android/nfc/tech/NfcV");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResponseFlags", "()B");
    return java::jni->CallByteMethod(obj, mid);
}

int8_t android::nfc::tech::NfcV::getDsfId() const {
    if (!::android::nfc::tech::NfcV::_class) ::android::nfc::tech::NfcV::_class = java::fetch_class("android/nfc/tech/NfcV");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDsfId", "()B");
    return java::jni->CallByteMethod(obj, mid);
}

std::vector< int8_t> android::nfc::tech::NfcV::transceive(const std::vector< int8_t>& arg0) const {
    if (!::android::nfc::tech::NfcV::_class) ::android::nfc::tech::NfcV::_class = java::fetch_class("android/nfc/tech/NfcV");
    static jmethodID mid = java::jni->GetMethodID(_class, "transceive", "([B)[B");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t android::nfc::tech::NfcV::getMaxTransceiveLength() const {
    if (!::android::nfc::tech::NfcV::_class) ::android::nfc::tech::NfcV::_class = java::fetch_class("android/nfc/tech/NfcV");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxTransceiveLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::nfc::tech::NfcV::close() const {
    if (!::android::nfc::tech::NfcV::_class) ::android::nfc::tech::NfcV::_class = java::fetch_class("android/nfc/tech/NfcV");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::nfc::tech::NfcV::connect() const {
    if (!::android::nfc::tech::NfcV::_class) ::android::nfc::tech::NfcV::_class = java::fetch_class("android/nfc/tech/NfcV");
    static jmethodID mid = java::jni->GetMethodID(_class, "connect", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::nfc::tech::NfcV::isConnected() const {
    if (!::android::nfc::tech::NfcV::_class) ::android::nfc::tech::NfcV::_class = java::fetch_class("android/nfc/tech/NfcV");
    static jmethodID mid = java::jni->GetMethodID(_class, "isConnected", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::nfc::Tag android::nfc::tech::NfcV::getTag() const {
    if (!::android::nfc::tech::NfcV::_class) ::android::nfc::tech::NfcV::_class = java::fetch_class("android/nfc/tech/NfcV");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTag", "()Landroid/nfc/Tag;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::nfc::Tag _ret(ret);
    return _ret;
}

::android::nfc::Tag android::nfc::tech::TagTechnology::getTag() const {
    if (!::android::nfc::tech::TagTechnology::_class) ::android::nfc::tech::TagTechnology::_class = java::fetch_class("android/nfc/tech/TagTechnology");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTag", "()Landroid/nfc/Tag;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::nfc::Tag _ret(ret);
    return _ret;
}

void android::nfc::tech::TagTechnology::connect() const {
    if (!::android::nfc::tech::TagTechnology::_class) ::android::nfc::tech::TagTechnology::_class = java::fetch_class("android/nfc/tech/TagTechnology");
    static jmethodID mid = java::jni->GetMethodID(_class, "connect", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::nfc::tech::TagTechnology::close() const {
    if (!::android::nfc::tech::TagTechnology::_class) ::android::nfc::tech::TagTechnology::_class = java::fetch_class("android/nfc/tech/TagTechnology");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::nfc::tech::TagTechnology::isConnected() const {
    if (!::android::nfc::tech::TagTechnology::_class) ::android::nfc::tech::TagTechnology::_class = java::fetch_class("android/nfc/tech/TagTechnology");
    static jmethodID mid = java::jni->GetMethodID(_class, "isConnected", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::nfc::tech::NfcA android::nfc::tech::NfcA::get(const ::android::nfc::Tag& arg0){
    if (!::android::nfc::tech::NfcA::_class) ::android::nfc::tech::NfcA::_class = java::fetch_class("android/nfc/tech/NfcA");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "get", "(Landroid/nfc/Tag;)Landroid/nfc/tech/NfcA;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::nfc::tech::NfcA _ret(ret);
    return _ret;
}

std::vector< int8_t> android::nfc::tech::NfcA::getAtqa() const {
    if (!::android::nfc::tech::NfcA::_class) ::android::nfc::tech::NfcA::_class = java::fetch_class("android/nfc/tech/NfcA");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAtqa", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int16_t android::nfc::tech::NfcA::getSak() const {
    if (!::android::nfc::tech::NfcA::_class) ::android::nfc::tech::NfcA::_class = java::fetch_class("android/nfc/tech/NfcA");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSak", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

std::vector< int8_t> android::nfc::tech::NfcA::transceive(const std::vector< int8_t>& arg0) const {
    if (!::android::nfc::tech::NfcA::_class) ::android::nfc::tech::NfcA::_class = java::fetch_class("android/nfc/tech/NfcA");
    static jmethodID mid = java::jni->GetMethodID(_class, "transceive", "([B)[B");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t android::nfc::tech::NfcA::getMaxTransceiveLength() const {
    if (!::android::nfc::tech::NfcA::_class) ::android::nfc::tech::NfcA::_class = java::fetch_class("android/nfc/tech/NfcA");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxTransceiveLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::nfc::tech::NfcA::setTimeout(int32_t arg0) const {
    if (!::android::nfc::tech::NfcA::_class) ::android::nfc::tech::NfcA::_class = java::fetch_class("android/nfc/tech/NfcA");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTimeout", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::nfc::tech::NfcA::getTimeout() const {
    if (!::android::nfc::tech::NfcA::_class) ::android::nfc::tech::NfcA::_class = java::fetch_class("android/nfc/tech/NfcA");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimeout", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::nfc::tech::NfcA::close() const {
    if (!::android::nfc::tech::NfcA::_class) ::android::nfc::tech::NfcA::_class = java::fetch_class("android/nfc/tech/NfcA");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::nfc::tech::NfcA::connect() const {
    if (!::android::nfc::tech::NfcA::_class) ::android::nfc::tech::NfcA::_class = java::fetch_class("android/nfc/tech/NfcA");
    static jmethodID mid = java::jni->GetMethodID(_class, "connect", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::nfc::tech::NfcA::isConnected() const {
    if (!::android::nfc::tech::NfcA::_class) ::android::nfc::tech::NfcA::_class = java::fetch_class("android/nfc/tech/NfcA");
    static jmethodID mid = java::jni->GetMethodID(_class, "isConnected", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::nfc::Tag android::nfc::tech::NfcA::getTag() const {
    if (!::android::nfc::tech::NfcA::_class) ::android::nfc::tech::NfcA::_class = java::fetch_class("android/nfc/tech/NfcA");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTag", "()Landroid/nfc/Tag;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::nfc::Tag _ret(ret);
    return _ret;
}

::android::nfc::tech::NdefFormatable android::nfc::tech::NdefFormatable::get(const ::android::nfc::Tag& arg0){
    if (!::android::nfc::tech::NdefFormatable::_class) ::android::nfc::tech::NdefFormatable::_class = java::fetch_class("android/nfc/tech/NdefFormatable");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "get", "(Landroid/nfc/Tag;)Landroid/nfc/tech/NdefFormatable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::nfc::tech::NdefFormatable _ret(ret);
    return _ret;
}

void android::nfc::tech::NdefFormatable::format(const ::android::nfc::NdefMessage& arg0) const {
    if (!::android::nfc::tech::NdefFormatable::_class) ::android::nfc::tech::NdefFormatable::_class = java::fetch_class("android/nfc/tech/NdefFormatable");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(Landroid/nfc/NdefMessage;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::nfc::tech::NdefFormatable::formatReadOnly(const ::android::nfc::NdefMessage& arg0) const {
    if (!::android::nfc::tech::NdefFormatable::_class) ::android::nfc::tech::NdefFormatable::_class = java::fetch_class("android/nfc/tech/NdefFormatable");
    static jmethodID mid = java::jni->GetMethodID(_class, "formatReadOnly", "(Landroid/nfc/NdefMessage;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::nfc::tech::NdefFormatable::close() const {
    if (!::android::nfc::tech::NdefFormatable::_class) ::android::nfc::tech::NdefFormatable::_class = java::fetch_class("android/nfc/tech/NdefFormatable");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::nfc::tech::NdefFormatable::connect() const {
    if (!::android::nfc::tech::NdefFormatable::_class) ::android::nfc::tech::NdefFormatable::_class = java::fetch_class("android/nfc/tech/NdefFormatable");
    static jmethodID mid = java::jni->GetMethodID(_class, "connect", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::nfc::tech::NdefFormatable::isConnected() const {
    if (!::android::nfc::tech::NdefFormatable::_class) ::android::nfc::tech::NdefFormatable::_class = java::fetch_class("android/nfc/tech/NdefFormatable");
    static jmethodID mid = java::jni->GetMethodID(_class, "isConnected", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::nfc::Tag android::nfc::tech::NdefFormatable::getTag() const {
    if (!::android::nfc::tech::NdefFormatable::_class) ::android::nfc::tech::NdefFormatable::_class = java::fetch_class("android/nfc/tech/NdefFormatable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTag", "()Landroid/nfc/Tag;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::nfc::Tag _ret(ret);
    return _ret;
}

::android::nfc::tech::NfcB android::nfc::tech::NfcB::get(const ::android::nfc::Tag& arg0){
    if (!::android::nfc::tech::NfcB::_class) ::android::nfc::tech::NfcB::_class = java::fetch_class("android/nfc/tech/NfcB");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "get", "(Landroid/nfc/Tag;)Landroid/nfc/tech/NfcB;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::nfc::tech::NfcB _ret(ret);
    return _ret;
}

std::vector< int8_t> android::nfc::tech::NfcB::getApplicationData() const {
    if (!::android::nfc::tech::NfcB::_class) ::android::nfc::tech::NfcB::_class = java::fetch_class("android/nfc/tech/NfcB");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplicationData", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> android::nfc::tech::NfcB::getProtocolInfo() const {
    if (!::android::nfc::tech::NfcB::_class) ::android::nfc::tech::NfcB::_class = java::fetch_class("android/nfc/tech/NfcB");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProtocolInfo", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> android::nfc::tech::NfcB::transceive(const std::vector< int8_t>& arg0) const {
    if (!::android::nfc::tech::NfcB::_class) ::android::nfc::tech::NfcB::_class = java::fetch_class("android/nfc/tech/NfcB");
    static jmethodID mid = java::jni->GetMethodID(_class, "transceive", "([B)[B");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t android::nfc::tech::NfcB::getMaxTransceiveLength() const {
    if (!::android::nfc::tech::NfcB::_class) ::android::nfc::tech::NfcB::_class = java::fetch_class("android/nfc/tech/NfcB");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxTransceiveLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::nfc::tech::NfcB::close() const {
    if (!::android::nfc::tech::NfcB::_class) ::android::nfc::tech::NfcB::_class = java::fetch_class("android/nfc/tech/NfcB");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::nfc::tech::NfcB::connect() const {
    if (!::android::nfc::tech::NfcB::_class) ::android::nfc::tech::NfcB::_class = java::fetch_class("android/nfc/tech/NfcB");
    static jmethodID mid = java::jni->GetMethodID(_class, "connect", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::nfc::tech::NfcB::isConnected() const {
    if (!::android::nfc::tech::NfcB::_class) ::android::nfc::tech::NfcB::_class = java::fetch_class("android/nfc/tech/NfcB");
    static jmethodID mid = java::jni->GetMethodID(_class, "isConnected", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::nfc::Tag android::nfc::tech::NfcB::getTag() const {
    if (!::android::nfc::tech::NfcB::_class) ::android::nfc::tech::NfcB::_class = java::fetch_class("android/nfc/tech/NfcB");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTag", "()Landroid/nfc/Tag;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::nfc::Tag _ret(ret);
    return _ret;
}

