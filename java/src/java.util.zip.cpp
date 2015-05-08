#include "java-core.hpp"
#include <memory>
#include "java.io.File.hpp"
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.Enumeration.hpp"
#include "java.util.zip.Adler32.hpp"
#include "java.util.zip.CRC32.hpp"
#include "java.util.zip.CheckedInputStream.hpp"
#include "java.util.zip.CheckedOutputStream.hpp"
#include "java.util.zip.Checksum.hpp"
#include "java.util.zip.DataFormatException.hpp"
#include "java.util.zip.Deflater.hpp"
#include "java.util.zip.DeflaterInputStream.hpp"
#include "java.util.zip.DeflaterOutputStream.hpp"
#include "java.util.zip.GZIPInputStream.hpp"
#include "java.util.zip.GZIPOutputStream.hpp"
#include "java.util.zip.Inflater.hpp"
#include "java.util.zip.InflaterInputStream.hpp"
#include "java.util.zip.InflaterOutputStream.hpp"
#include "java.util.zip.ZipEntry.hpp"
#include "java.util.zip.ZipError.hpp"
#include "java.util.zip.ZipException.hpp"
#include "java.util.zip.ZipFile.hpp"
#include "java.util.zip.ZipInputStream.hpp"
#include "java.util.zip.ZipOutputStream.hpp"

jclass java::util::zip::GZIPOutputStream::_class = nullptr;
jclass java::util::zip::ZipError::_class = nullptr;
jclass java::util::zip::ZipOutputStream::_class = nullptr;
jclass java::util::zip::Inflater::_class = nullptr;
jclass java::util::zip::DeflaterOutputStream::_class = nullptr;
jclass java::util::zip::Checksum::_class = nullptr;
jclass java::util::zip::Deflater::_class = nullptr;
jclass java::util::zip::InflaterOutputStream::_class = nullptr;
jclass java::util::zip::CheckedOutputStream::_class = nullptr;
jclass java::util::zip::GZIPInputStream::_class = nullptr;
jclass java::util::zip::ZipInputStream::_class = nullptr;
jclass java::util::zip::ZipEntry::_class = nullptr;
jclass java::util::zip::ZipFile::_class = nullptr;
jclass java::util::zip::ZipException::_class = nullptr;
jclass java::util::zip::DeflaterInputStream::_class = nullptr;
jclass java::util::zip::CRC32::_class = nullptr;
jclass java::util::zip::DataFormatException::_class = nullptr;
jclass java::util::zip::Adler32::_class = nullptr;
jclass java::util::zip::CheckedInputStream::_class = nullptr;
jclass java::util::zip::InflaterInputStream::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::GZIPOutputStream::GZIPOutputStream(const ::java::io::OutputStream& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0), ::java::util::zip::DeflaterOutputStream((jobject)0) {
    if (!::java::util::zip::GZIPOutputStream::_class) ::java::util::zip::GZIPOutputStream::_class = java::fetch_class("java/util/zip/GZIPOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::GZIPOutputStream::GZIPOutputStream(const ::java::io::OutputStream& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0), ::java::util::zip::DeflaterOutputStream((jobject)0) {
    if (!::java::util::zip::GZIPOutputStream::_class) ::java::util::zip::GZIPOutputStream::_class = java::fetch_class("java/util/zip/GZIPOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void java::util::zip::GZIPOutputStream::finish() const {
    if (!::java::util::zip::GZIPOutputStream::_class) ::java::util::zip::GZIPOutputStream::_class = java::fetch_class("java/util/zip/GZIPOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "finish", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::zip::GZIPOutputStream::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::util::zip::GZIPOutputStream::_class) ::java::util::zip::GZIPOutputStream::_class = java::fetch_class("java/util/zip/GZIPOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::ZipError::ZipError(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::InternalError((jobject)0), ::java::lang::Throwable((jobject)0), ::java::lang::VirtualMachineError((jobject)0) {
    if (!::java::util::zip::ZipError::_class) ::java::util::zip::ZipError::_class = java::fetch_class("java/util/zip/ZipError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::ZipOutputStream::ZipOutputStream(const ::java::io::OutputStream& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0), ::java::util::zip::DeflaterOutputStream((jobject)0) {
    if (!::java::util::zip::ZipOutputStream::_class) ::java::util::zip::ZipOutputStream::_class = java::fetch_class("java/util/zip/ZipOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::util::zip::ZipOutputStream::close() const {
    if (!::java::util::zip::ZipOutputStream::_class) ::java::util::zip::ZipOutputStream::_class = java::fetch_class("java/util/zip/ZipOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::zip::ZipOutputStream::closeEntry() const {
    if (!::java::util::zip::ZipOutputStream::_class) ::java::util::zip::ZipOutputStream::_class = java::fetch_class("java/util/zip/ZipOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "closeEntry", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::zip::ZipOutputStream::finish() const {
    if (!::java::util::zip::ZipOutputStream::_class) ::java::util::zip::ZipOutputStream::_class = java::fetch_class("java/util/zip/ZipOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "finish", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::zip::ZipOutputStream::putNextEntry(const ::java::util::zip::ZipEntry& arg0) const {
    if (!::java::util::zip::ZipOutputStream::_class) ::java::util::zip::ZipOutputStream::_class = java::fetch_class("java/util/zip/ZipOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "putNextEntry", "(Ljava/util/zip/ZipEntry;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::zip::ZipOutputStream::setComment(const ::java::lang::String& arg0) const {
    if (!::java::util::zip::ZipOutputStream::_class) ::java::util::zip::ZipOutputStream::_class = java::fetch_class("java/util/zip/ZipOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "setComment", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::zip::ZipOutputStream::setLevel(int32_t arg0) const {
    if (!::java::util::zip::ZipOutputStream::_class) ::java::util::zip::ZipOutputStream::_class = java::fetch_class("java/util/zip/ZipOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLevel", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::zip::ZipOutputStream::setMethod(int32_t arg0) const {
    if (!::java::util::zip::ZipOutputStream::_class) ::java::util::zip::ZipOutputStream::_class = java::fetch_class("java/util/zip/ZipOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMethod", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::zip::ZipOutputStream::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::util::zip::ZipOutputStream::_class) ::java::util::zip::ZipOutputStream::_class = java::fetch_class("java/util/zip/ZipOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::Inflater::Inflater() : ::java::lang::Object((jobject)0) {
    if (!::java::util::zip::Inflater::_class) ::java::util::zip::Inflater::_class = java::fetch_class("java/util/zip/Inflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::Inflater::Inflater(bool arg0) : ::java::lang::Object((jobject)0) {
    if (!::java::util::zip::Inflater::_class) ::java::util::zip::Inflater::_class = java::fetch_class("java/util/zip/Inflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Z)V");
    bool _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::util::zip::Inflater::end() const {
    if (!::java::util::zip::Inflater::_class) ::java::util::zip::Inflater::_class = java::fetch_class("java/util/zip/Inflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "end", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::util::zip::Inflater::finished() const {
    if (!::java::util::zip::Inflater::_class) ::java::util::zip::Inflater::_class = java::fetch_class("java/util/zip/Inflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "finished", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::util::zip::Inflater::getAdler() const {
    if (!::java::util::zip::Inflater::_class) ::java::util::zip::Inflater::_class = java::fetch_class("java/util/zip/Inflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAdler", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t java::util::zip::Inflater::getBytesRead() const {
    if (!::java::util::zip::Inflater::_class) ::java::util::zip::Inflater::_class = java::fetch_class("java/util/zip/Inflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBytesRead", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t java::util::zip::Inflater::getBytesWritten() const {
    if (!::java::util::zip::Inflater::_class) ::java::util::zip::Inflater::_class = java::fetch_class("java/util/zip/Inflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBytesWritten", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int32_t java::util::zip::Inflater::getRemaining() const {
    if (!::java::util::zip::Inflater::_class) ::java::util::zip::Inflater::_class = java::fetch_class("java/util/zip/Inflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRemaining", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::zip::Inflater::getTotalIn() const {
    if (!::java::util::zip::Inflater::_class) ::java::util::zip::Inflater::_class = java::fetch_class("java/util/zip/Inflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTotalIn", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::zip::Inflater::getTotalOut() const {
    if (!::java::util::zip::Inflater::_class) ::java::util::zip::Inflater::_class = java::fetch_class("java/util/zip/Inflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTotalOut", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::zip::Inflater::inflate(const std::vector< int8_t>& arg0) const {
    if (!::java::util::zip::Inflater::_class) ::java::util::zip::Inflater::_class = java::fetch_class("java/util/zip/Inflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "inflate", "([B)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::zip::Inflater::inflate(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::util::zip::Inflater::_class) ::java::util::zip::Inflater::_class = java::fetch_class("java/util/zip/Inflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "inflate", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool java::util::zip::Inflater::needsDictionary() const {
    if (!::java::util::zip::Inflater::_class) ::java::util::zip::Inflater::_class = java::fetch_class("java/util/zip/Inflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "needsDictionary", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::zip::Inflater::needsInput() const {
    if (!::java::util::zip::Inflater::_class) ::java::util::zip::Inflater::_class = java::fetch_class("java/util/zip/Inflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "needsInput", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::util::zip::Inflater::reset() const {
    if (!::java::util::zip::Inflater::_class) ::java::util::zip::Inflater::_class = java::fetch_class("java/util/zip/Inflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::zip::Inflater::setDictionary(const std::vector< int8_t>& arg0) const {
    if (!::java::util::zip::Inflater::_class) ::java::util::zip::Inflater::_class = java::fetch_class("java/util/zip/Inflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDictionary", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::zip::Inflater::setDictionary(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::util::zip::Inflater::_class) ::java::util::zip::Inflater::_class = java::fetch_class("java/util/zip/Inflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDictionary", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::util::zip::Inflater::setInput(const std::vector< int8_t>& arg0) const {
    if (!::java::util::zip::Inflater::_class) ::java::util::zip::Inflater::_class = java::fetch_class("java/util/zip/Inflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInput", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::zip::Inflater::setInput(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::util::zip::Inflater::_class) ::java::util::zip::Inflater::_class = java::fetch_class("java/util/zip/Inflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInput", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::DeflaterOutputStream::DeflaterOutputStream(const ::java::io::OutputStream& arg0, const ::java::util::zip::Deflater& arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::java::util::zip::DeflaterOutputStream::_class) ::java::util::zip::DeflaterOutputStream::_class = java::fetch_class("java/util/zip/DeflaterOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;Ljava/util/zip/Deflater;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::DeflaterOutputStream::DeflaterOutputStream(const ::java::io::OutputStream& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::java::util::zip::DeflaterOutputStream::_class) ::java::util::zip::DeflaterOutputStream::_class = java::fetch_class("java/util/zip/DeflaterOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::DeflaterOutputStream::DeflaterOutputStream(const ::java::io::OutputStream& arg0, const ::java::util::zip::Deflater& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::java::util::zip::DeflaterOutputStream::_class) ::java::util::zip::DeflaterOutputStream::_class = java::fetch_class("java/util/zip/DeflaterOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;Ljava/util/zip/Deflater;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void java::util::zip::DeflaterOutputStream::close() const {
    if (!::java::util::zip::DeflaterOutputStream::_class) ::java::util::zip::DeflaterOutputStream::_class = java::fetch_class("java/util/zip/DeflaterOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::zip::DeflaterOutputStream::finish() const {
    if (!::java::util::zip::DeflaterOutputStream::_class) ::java::util::zip::DeflaterOutputStream::_class = java::fetch_class("java/util/zip/DeflaterOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "finish", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::zip::DeflaterOutputStream::write(int32_t arg0) const {
    if (!::java::util::zip::DeflaterOutputStream::_class) ::java::util::zip::DeflaterOutputStream::_class = java::fetch_class("java/util/zip/DeflaterOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::zip::DeflaterOutputStream::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::util::zip::DeflaterOutputStream::_class) ::java::util::zip::DeflaterOutputStream::_class = java::fetch_class("java/util/zip/DeflaterOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::util::zip::DeflaterOutputStream::flush() const {
    if (!::java::util::zip::DeflaterOutputStream::_class) ::java::util::zip::DeflaterOutputStream::_class = java::fetch_class("java/util/zip/DeflaterOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int64_t java::util::zip::Checksum::getValue() const {
    if (!::java::util::zip::Checksum::_class) ::java::util::zip::Checksum::_class = java::fetch_class("java/util/zip/Checksum");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void java::util::zip::Checksum::reset() const {
    if (!::java::util::zip::Checksum::_class) ::java::util::zip::Checksum::_class = java::fetch_class("java/util/zip/Checksum");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::zip::Checksum::update(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::util::zip::Checksum::_class) ::java::util::zip::Checksum::_class = java::fetch_class("java/util/zip/Checksum");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::util::zip::Checksum::update(int32_t arg0) const {
    if (!::java::util::zip::Checksum::_class) ::java::util::zip::Checksum::_class = java::fetch_class("java/util/zip/Checksum");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::Deflater::Deflater() : ::java::lang::Object((jobject)0) {
    if (!::java::util::zip::Deflater::_class) ::java::util::zip::Deflater::_class = java::fetch_class("java/util/zip/Deflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::Deflater::Deflater(int32_t arg0) : ::java::lang::Object((jobject)0) {
    if (!::java::util::zip::Deflater::_class) ::java::util::zip::Deflater::_class = java::fetch_class("java/util/zip/Deflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::Deflater::Deflater(int32_t arg0, bool arg1) : ::java::lang::Object((jobject)0) {
    if (!::java::util::zip::Deflater::_class) ::java::util::zip::Deflater::_class = java::fetch_class("java/util/zip/Deflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int32_t java::util::zip::Deflater::deflate(const std::vector< int8_t>& arg0) const {
    if (!::java::util::zip::Deflater::_class) ::java::util::zip::Deflater::_class = java::fetch_class("java/util/zip/Deflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "deflate", "([B)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::zip::Deflater::deflate(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::util::zip::Deflater::_class) ::java::util::zip::Deflater::_class = java::fetch_class("java/util/zip/Deflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "deflate", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::util::zip::Deflater::end() const {
    if (!::java::util::zip::Deflater::_class) ::java::util::zip::Deflater::_class = java::fetch_class("java/util/zip/Deflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "end", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::zip::Deflater::finish() const {
    if (!::java::util::zip::Deflater::_class) ::java::util::zip::Deflater::_class = java::fetch_class("java/util/zip/Deflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "finish", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::util::zip::Deflater::finished() const {
    if (!::java::util::zip::Deflater::_class) ::java::util::zip::Deflater::_class = java::fetch_class("java/util/zip/Deflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "finished", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::util::zip::Deflater::getAdler() const {
    if (!::java::util::zip::Deflater::_class) ::java::util::zip::Deflater::_class = java::fetch_class("java/util/zip/Deflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAdler", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::zip::Deflater::getTotalIn() const {
    if (!::java::util::zip::Deflater::_class) ::java::util::zip::Deflater::_class = java::fetch_class("java/util/zip/Deflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTotalIn", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::zip::Deflater::getTotalOut() const {
    if (!::java::util::zip::Deflater::_class) ::java::util::zip::Deflater::_class = java::fetch_class("java/util/zip/Deflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTotalOut", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::zip::Deflater::needsInput() const {
    if (!::java::util::zip::Deflater::_class) ::java::util::zip::Deflater::_class = java::fetch_class("java/util/zip/Deflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "needsInput", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::util::zip::Deflater::reset() const {
    if (!::java::util::zip::Deflater::_class) ::java::util::zip::Deflater::_class = java::fetch_class("java/util/zip/Deflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::zip::Deflater::setDictionary(const std::vector< int8_t>& arg0) const {
    if (!::java::util::zip::Deflater::_class) ::java::util::zip::Deflater::_class = java::fetch_class("java/util/zip/Deflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDictionary", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::zip::Deflater::setDictionary(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::util::zip::Deflater::_class) ::java::util::zip::Deflater::_class = java::fetch_class("java/util/zip/Deflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDictionary", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::util::zip::Deflater::setInput(const std::vector< int8_t>& arg0) const {
    if (!::java::util::zip::Deflater::_class) ::java::util::zip::Deflater::_class = java::fetch_class("java/util/zip/Deflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInput", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::zip::Deflater::setInput(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::util::zip::Deflater::_class) ::java::util::zip::Deflater::_class = java::fetch_class("java/util/zip/Deflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInput", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::util::zip::Deflater::setLevel(int32_t arg0) const {
    if (!::java::util::zip::Deflater::_class) ::java::util::zip::Deflater::_class = java::fetch_class("java/util/zip/Deflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLevel", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::zip::Deflater::setStrategy(int32_t arg0) const {
    if (!::java::util::zip::Deflater::_class) ::java::util::zip::Deflater::_class = java::fetch_class("java/util/zip/Deflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStrategy", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t java::util::zip::Deflater::getBytesRead() const {
    if (!::java::util::zip::Deflater::_class) ::java::util::zip::Deflater::_class = java::fetch_class("java/util/zip/Deflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBytesRead", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t java::util::zip::Deflater::getBytesWritten() const {
    if (!::java::util::zip::Deflater::_class) ::java::util::zip::Deflater::_class = java::fetch_class("java/util/zip/Deflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBytesWritten", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::InflaterOutputStream::InflaterOutputStream(const ::java::io::OutputStream& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::java::util::zip::InflaterOutputStream::_class) ::java::util::zip::InflaterOutputStream::_class = java::fetch_class("java/util/zip/InflaterOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::InflaterOutputStream::InflaterOutputStream(const ::java::io::OutputStream& arg0, const ::java::util::zip::Inflater& arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::java::util::zip::InflaterOutputStream::_class) ::java::util::zip::InflaterOutputStream::_class = java::fetch_class("java/util/zip/InflaterOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;Ljava/util/zip/Inflater;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::InflaterOutputStream::InflaterOutputStream(const ::java::io::OutputStream& arg0, const ::java::util::zip::Inflater& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::java::util::zip::InflaterOutputStream::_class) ::java::util::zip::InflaterOutputStream::_class = java::fetch_class("java/util/zip/InflaterOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;Ljava/util/zip/Inflater;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void java::util::zip::InflaterOutputStream::close() const {
    if (!::java::util::zip::InflaterOutputStream::_class) ::java::util::zip::InflaterOutputStream::_class = java::fetch_class("java/util/zip/InflaterOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::zip::InflaterOutputStream::flush() const {
    if (!::java::util::zip::InflaterOutputStream::_class) ::java::util::zip::InflaterOutputStream::_class = java::fetch_class("java/util/zip/InflaterOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::zip::InflaterOutputStream::finish() const {
    if (!::java::util::zip::InflaterOutputStream::_class) ::java::util::zip::InflaterOutputStream::_class = java::fetch_class("java/util/zip/InflaterOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "finish", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::zip::InflaterOutputStream::write(int32_t arg0) const {
    if (!::java::util::zip::InflaterOutputStream::_class) ::java::util::zip::InflaterOutputStream::_class = java::fetch_class("java/util/zip/InflaterOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::zip::InflaterOutputStream::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::util::zip::InflaterOutputStream::_class) ::java::util::zip::InflaterOutputStream::_class = java::fetch_class("java/util/zip/InflaterOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::CheckedOutputStream::CheckedOutputStream(const ::java::io::OutputStream& arg0, const ::java::util::zip::Checksum& arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::java::util::zip::CheckedOutputStream::_class) ::java::util::zip::CheckedOutputStream::_class = java::fetch_class("java/util/zip/CheckedOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;Ljava/util/zip/Checksum;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::util::zip::Checksum java::util::zip::CheckedOutputStream::getChecksum() const {
    if (!::java::util::zip::CheckedOutputStream::_class) ::java::util::zip::CheckedOutputStream::_class = java::fetch_class("java/util/zip/CheckedOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChecksum", "()Ljava/util/zip/Checksum;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::zip::Checksum _ret(ret);
    return _ret;
}

void java::util::zip::CheckedOutputStream::write(int32_t arg0) const {
    if (!::java::util::zip::CheckedOutputStream::_class) ::java::util::zip::CheckedOutputStream::_class = java::fetch_class("java/util/zip/CheckedOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::zip::CheckedOutputStream::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::util::zip::CheckedOutputStream::_class) ::java::util::zip::CheckedOutputStream::_class = java::fetch_class("java/util/zip/CheckedOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::GZIPInputStream::GZIPInputStream(const ::java::io::InputStream& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0), ::java::util::zip::InflaterInputStream((jobject)0) {
    if (!::java::util::zip::GZIPInputStream::_class) ::java::util::zip::GZIPInputStream::_class = java::fetch_class("java/util/zip/GZIPInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::GZIPInputStream::GZIPInputStream(const ::java::io::InputStream& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0), ::java::util::zip::InflaterInputStream((jobject)0) {
    if (!::java::util::zip::GZIPInputStream::_class) ::java::util::zip::GZIPInputStream::_class = java::fetch_class("java/util/zip/GZIPInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void java::util::zip::GZIPInputStream::close() const {
    if (!::java::util::zip::GZIPInputStream::_class) ::java::util::zip::GZIPInputStream::_class = java::fetch_class("java/util/zip/GZIPInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t java::util::zip::GZIPInputStream::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::util::zip::GZIPInputStream::_class) ::java::util::zip::GZIPInputStream::_class = java::fetch_class("java/util/zip/GZIPInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::ZipInputStream::ZipInputStream(const ::java::io::InputStream& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0), ::java::util::zip::InflaterInputStream((jobject)0) {
    if (!::java::util::zip::ZipInputStream::_class) ::java::util::zip::ZipInputStream::_class = java::fetch_class("java/util/zip/ZipInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::util::zip::ZipInputStream::close() const {
    if (!::java::util::zip::ZipInputStream::_class) ::java::util::zip::ZipInputStream::_class = java::fetch_class("java/util/zip/ZipInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::zip::ZipInputStream::closeEntry() const {
    if (!::java::util::zip::ZipInputStream::_class) ::java::util::zip::ZipInputStream::_class = java::fetch_class("java/util/zip/ZipInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "closeEntry", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::util::zip::ZipEntry java::util::zip::ZipInputStream::getNextEntry() const {
    if (!::java::util::zip::ZipInputStream::_class) ::java::util::zip::ZipInputStream::_class = java::fetch_class("java/util/zip/ZipInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNextEntry", "()Ljava/util/zip/ZipEntry;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::zip::ZipEntry _ret(ret);
    return _ret;
}

int32_t java::util::zip::ZipInputStream::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::util::zip::ZipInputStream::_class) ::java::util::zip::ZipInputStream::_class = java::fetch_class("java/util/zip/ZipInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t java::util::zip::ZipInputStream::available() const {
    if (!::java::util::zip::ZipInputStream::_class) ::java::util::zip::ZipInputStream::_class = java::fetch_class("java/util/zip/ZipInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "available", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::ZipEntry::ZipEntry(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::java::util::zip::ZipEntry::_class) ::java::util::zip::ZipEntry::_class = java::fetch_class("java/util/zip/ZipEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String java::util::zip::ZipEntry::getComment() const {
    if (!::java::util::zip::ZipEntry::_class) ::java::util::zip::ZipEntry::_class = java::fetch_class("java/util/zip/ZipEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getComment", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int64_t java::util::zip::ZipEntry::getCompressedSize() const {
    if (!::java::util::zip::ZipEntry::_class) ::java::util::zip::ZipEntry::_class = java::fetch_class("java/util/zip/ZipEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCompressedSize", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t java::util::zip::ZipEntry::getCrc() const {
    if (!::java::util::zip::ZipEntry::_class) ::java::util::zip::ZipEntry::_class = java::fetch_class("java/util/zip/ZipEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCrc", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

std::vector< int8_t> java::util::zip::ZipEntry::getExtra() const {
    if (!::java::util::zip::ZipEntry::_class) ::java::util::zip::ZipEntry::_class = java::fetch_class("java/util/zip/ZipEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtra", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t java::util::zip::ZipEntry::getMethod() const {
    if (!::java::util::zip::ZipEntry::_class) ::java::util::zip::ZipEntry::_class = java::fetch_class("java/util/zip/ZipEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMethod", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::util::zip::ZipEntry::getName() const {
    if (!::java::util::zip::ZipEntry::_class) ::java::util::zip::ZipEntry::_class = java::fetch_class("java/util/zip/ZipEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int64_t java::util::zip::ZipEntry::getSize() const {
    if (!::java::util::zip::ZipEntry::_class) ::java::util::zip::ZipEntry::_class = java::fetch_class("java/util/zip/ZipEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSize", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t java::util::zip::ZipEntry::getTime() const {
    if (!::java::util::zip::ZipEntry::_class) ::java::util::zip::ZipEntry::_class = java::fetch_class("java/util/zip/ZipEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTime", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

bool java::util::zip::ZipEntry::isDirectory() const {
    if (!::java::util::zip::ZipEntry::_class) ::java::util::zip::ZipEntry::_class = java::fetch_class("java/util/zip/ZipEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDirectory", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::util::zip::ZipEntry::setComment(const ::java::lang::String& arg0) const {
    if (!::java::util::zip::ZipEntry::_class) ::java::util::zip::ZipEntry::_class = java::fetch_class("java/util/zip/ZipEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "setComment", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::zip::ZipEntry::setCompressedSize(int64_t arg0) const {
    if (!::java::util::zip::ZipEntry::_class) ::java::util::zip::ZipEntry::_class = java::fetch_class("java/util/zip/ZipEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCompressedSize", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::zip::ZipEntry::setCrc(int64_t arg0) const {
    if (!::java::util::zip::ZipEntry::_class) ::java::util::zip::ZipEntry::_class = java::fetch_class("java/util/zip/ZipEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCrc", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::zip::ZipEntry::setExtra(const std::vector< int8_t>& arg0) const {
    if (!::java::util::zip::ZipEntry::_class) ::java::util::zip::ZipEntry::_class = java::fetch_class("java/util/zip/ZipEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExtra", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::zip::ZipEntry::setMethod(int32_t arg0) const {
    if (!::java::util::zip::ZipEntry::_class) ::java::util::zip::ZipEntry::_class = java::fetch_class("java/util/zip/ZipEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMethod", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::zip::ZipEntry::setSize(int64_t arg0) const {
    if (!::java::util::zip::ZipEntry::_class) ::java::util::zip::ZipEntry::_class = java::fetch_class("java/util/zip/ZipEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSize", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::zip::ZipEntry::setTime(int64_t arg0) const {
    if (!::java::util::zip::ZipEntry::_class) ::java::util::zip::ZipEntry::_class = java::fetch_class("java/util/zip/ZipEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTime", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::util::zip::ZipEntry::toString() const {
    if (!::java::util::zip::ZipEntry::_class) ::java::util::zip::ZipEntry::_class = java::fetch_class("java/util/zip/ZipEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object java::util::zip::ZipEntry::clone() const {
    if (!::java::util::zip::ZipEntry::_class) ::java::util::zip::ZipEntry::_class = java::fetch_class("java/util/zip/ZipEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::zip::ZipEntry::hashCode() const {
    if (!::java::util::zip::ZipEntry::_class) ::java::util::zip::ZipEntry::_class = java::fetch_class("java/util/zip/ZipEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::ZipFile::ZipFile(const ::java::io::File& arg0) : ::java::lang::Object((jobject)0) {
    if (!::java::util::zip::ZipFile::_class) ::java::util::zip::ZipFile::_class = java::fetch_class("java/util/zip/ZipFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/File;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::ZipFile::ZipFile(const ::java::io::File& arg0, int32_t arg1) : ::java::lang::Object((jobject)0) {
    if (!::java::util::zip::ZipFile::_class) ::java::util::zip::ZipFile::_class = java::fetch_class("java/util/zip/ZipFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/File;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::ZipFile::ZipFile(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0) {
    if (!::java::util::zip::ZipFile::_class) ::java::util::zip::ZipFile::_class = java::fetch_class("java/util/zip/ZipFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::util::zip::ZipFile::close() const {
    if (!::java::util::zip::ZipFile::_class) ::java::util::zip::ZipFile::_class = java::fetch_class("java/util/zip/ZipFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::util::Enumeration java::util::zip::ZipFile::entries() const {
    if (!::java::util::zip::ZipFile::_class) ::java::util::zip::ZipFile::_class = java::fetch_class("java/util/zip/ZipFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "entries", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

::java::util::zip::ZipEntry java::util::zip::ZipFile::getEntry(const ::java::lang::String& arg0) const {
    if (!::java::util::zip::ZipFile::_class) ::java::util::zip::ZipFile::_class = java::fetch_class("java/util/zip/ZipFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEntry", "(Ljava/lang/String;)Ljava/util/zip/ZipEntry;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::zip::ZipEntry _ret(ret);
    return _ret;
}

::java::io::InputStream java::util::zip::ZipFile::getInputStream(const ::java::util::zip::ZipEntry& arg0) const {
    if (!::java::util::zip::ZipFile::_class) ::java::util::zip::ZipFile::_class = java::fetch_class("java/util/zip/ZipFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputStream", "(Ljava/util/zip/ZipEntry;)Ljava/io/InputStream;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::lang::String java::util::zip::ZipFile::getName() const {
    if (!::java::util::zip::ZipFile::_class) ::java::util::zip::ZipFile::_class = java::fetch_class("java/util/zip/ZipFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::util::zip::ZipFile::size() const {
    if (!::java::util::zip::ZipFile::_class) ::java::util::zip::ZipFile::_class = java::fetch_class("java/util/zip/ZipFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::ZipException::ZipException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::zip::ZipException::_class) ::java::util::zip::ZipException::_class = java::fetch_class("java/util/zip/ZipException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::ZipException::ZipException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::zip::ZipException::_class) ::java::util::zip::ZipException::_class = java::fetch_class("java/util/zip/ZipException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::DeflaterInputStream::DeflaterInputStream(const ::java::io::InputStream& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::java::util::zip::DeflaterInputStream::_class) ::java::util::zip::DeflaterInputStream::_class = java::fetch_class("java/util/zip/DeflaterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::DeflaterInputStream::DeflaterInputStream(const ::java::io::InputStream& arg0, const ::java::util::zip::Deflater& arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::java::util::zip::DeflaterInputStream::_class) ::java::util::zip::DeflaterInputStream::_class = java::fetch_class("java/util/zip/DeflaterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;Ljava/util/zip/Deflater;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::DeflaterInputStream::DeflaterInputStream(const ::java::io::InputStream& arg0, const ::java::util::zip::Deflater& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::java::util::zip::DeflaterInputStream::_class) ::java::util::zip::DeflaterInputStream::_class = java::fetch_class("java/util/zip/DeflaterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;Ljava/util/zip/Deflater;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void java::util::zip::DeflaterInputStream::close() const {
    if (!::java::util::zip::DeflaterInputStream::_class) ::java::util::zip::DeflaterInputStream::_class = java::fetch_class("java/util/zip/DeflaterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t java::util::zip::DeflaterInputStream::read() const {
    if (!::java::util::zip::DeflaterInputStream::_class) ::java::util::zip::DeflaterInputStream::_class = java::fetch_class("java/util/zip/DeflaterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::zip::DeflaterInputStream::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::util::zip::DeflaterInputStream::_class) ::java::util::zip::DeflaterInputStream::_class = java::fetch_class("java/util/zip/DeflaterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int64_t java::util::zip::DeflaterInputStream::skip(int64_t arg0) const {
    if (!::java::util::zip::DeflaterInputStream::_class) ::java::util::zip::DeflaterInputStream::_class = java::fetch_class("java/util/zip/DeflaterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "skip", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int32_t java::util::zip::DeflaterInputStream::available() const {
    if (!::java::util::zip::DeflaterInputStream::_class) ::java::util::zip::DeflaterInputStream::_class = java::fetch_class("java/util/zip/DeflaterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "available", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::zip::DeflaterInputStream::markSupported() const {
    if (!::java::util::zip::DeflaterInputStream::_class) ::java::util::zip::DeflaterInputStream::_class = java::fetch_class("java/util/zip/DeflaterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "markSupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::util::zip::DeflaterInputStream::mark(int32_t arg0) const {
    if (!::java::util::zip::DeflaterInputStream::_class) ::java::util::zip::DeflaterInputStream::_class = java::fetch_class("java/util/zip/DeflaterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "mark", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::zip::DeflaterInputStream::reset() const {
    if (!::java::util::zip::DeflaterInputStream::_class) ::java::util::zip::DeflaterInputStream::_class = java::fetch_class("java/util/zip/DeflaterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::CRC32::CRC32() : ::java::lang::Object((jobject)0), ::java::util::zip::Checksum((jobject)0) {
    if (!::java::util::zip::CRC32::_class) ::java::util::zip::CRC32::_class = java::fetch_class("java/util/zip/CRC32");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int64_t java::util::zip::CRC32::getValue() const {
    if (!::java::util::zip::CRC32::_class) ::java::util::zip::CRC32::_class = java::fetch_class("java/util/zip/CRC32");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void java::util::zip::CRC32::reset() const {
    if (!::java::util::zip::CRC32::_class) ::java::util::zip::CRC32::_class = java::fetch_class("java/util/zip/CRC32");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::zip::CRC32::update(int32_t arg0) const {
    if (!::java::util::zip::CRC32::_class) ::java::util::zip::CRC32::_class = java::fetch_class("java/util/zip/CRC32");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::zip::CRC32::update(const std::vector< int8_t>& arg0) const {
    if (!::java::util::zip::CRC32::_class) ::java::util::zip::CRC32::_class = java::fetch_class("java/util/zip/CRC32");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::zip::CRC32::update(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::util::zip::CRC32::_class) ::java::util::zip::CRC32::_class = java::fetch_class("java/util/zip/CRC32");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::DataFormatException::DataFormatException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::zip::DataFormatException::_class) ::java::util::zip::DataFormatException::_class = java::fetch_class("java/util/zip/DataFormatException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::DataFormatException::DataFormatException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::zip::DataFormatException::_class) ::java::util::zip::DataFormatException::_class = java::fetch_class("java/util/zip/DataFormatException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::Adler32::Adler32() : ::java::lang::Object((jobject)0), ::java::util::zip::Checksum((jobject)0) {
    if (!::java::util::zip::Adler32::_class) ::java::util::zip::Adler32::_class = java::fetch_class("java/util/zip/Adler32");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int64_t java::util::zip::Adler32::getValue() const {
    if (!::java::util::zip::Adler32::_class) ::java::util::zip::Adler32::_class = java::fetch_class("java/util/zip/Adler32");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void java::util::zip::Adler32::reset() const {
    if (!::java::util::zip::Adler32::_class) ::java::util::zip::Adler32::_class = java::fetch_class("java/util/zip/Adler32");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::zip::Adler32::update(int32_t arg0) const {
    if (!::java::util::zip::Adler32::_class) ::java::util::zip::Adler32::_class = java::fetch_class("java/util/zip/Adler32");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::zip::Adler32::update(const std::vector< int8_t>& arg0) const {
    if (!::java::util::zip::Adler32::_class) ::java::util::zip::Adler32::_class = java::fetch_class("java/util/zip/Adler32");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::zip::Adler32::update(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::util::zip::Adler32::_class) ::java::util::zip::Adler32::_class = java::fetch_class("java/util/zip/Adler32");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::CheckedInputStream::CheckedInputStream(const ::java::io::InputStream& arg0, const ::java::util::zip::Checksum& arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::java::util::zip::CheckedInputStream::_class) ::java::util::zip::CheckedInputStream::_class = java::fetch_class("java/util/zip/CheckedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;Ljava/util/zip/Checksum;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int32_t java::util::zip::CheckedInputStream::read() const {
    if (!::java::util::zip::CheckedInputStream::_class) ::java::util::zip::CheckedInputStream::_class = java::fetch_class("java/util/zip/CheckedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::zip::CheckedInputStream::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::util::zip::CheckedInputStream::_class) ::java::util::zip::CheckedInputStream::_class = java::fetch_class("java/util/zip/CheckedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::util::zip::Checksum java::util::zip::CheckedInputStream::getChecksum() const {
    if (!::java::util::zip::CheckedInputStream::_class) ::java::util::zip::CheckedInputStream::_class = java::fetch_class("java/util/zip/CheckedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChecksum", "()Ljava/util/zip/Checksum;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::zip::Checksum _ret(ret);
    return _ret;
}

int64_t java::util::zip::CheckedInputStream::skip(int64_t arg0) const {
    if (!::java::util::zip::CheckedInputStream::_class) ::java::util::zip::CheckedInputStream::_class = java::fetch_class("java/util/zip/CheckedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "skip", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::InflaterInputStream::InflaterInputStream(const ::java::io::InputStream& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::java::util::zip::InflaterInputStream::_class) ::java::util::zip::InflaterInputStream::_class = java::fetch_class("java/util/zip/InflaterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::InflaterInputStream::InflaterInputStream(const ::java::io::InputStream& arg0, const ::java::util::zip::Inflater& arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::java::util::zip::InflaterInputStream::_class) ::java::util::zip::InflaterInputStream::_class = java::fetch_class("java/util/zip/InflaterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;Ljava/util/zip/Inflater;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::zip::InflaterInputStream::InflaterInputStream(const ::java::io::InputStream& arg0, const ::java::util::zip::Inflater& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::java::util::zip::InflaterInputStream::_class) ::java::util::zip::InflaterInputStream::_class = java::fetch_class("java/util/zip/InflaterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;Ljava/util/zip/Inflater;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

int32_t java::util::zip::InflaterInputStream::read() const {
    if (!::java::util::zip::InflaterInputStream::_class) ::java::util::zip::InflaterInputStream::_class = java::fetch_class("java/util/zip/InflaterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::zip::InflaterInputStream::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::util::zip::InflaterInputStream::_class) ::java::util::zip::InflaterInputStream::_class = java::fetch_class("java/util/zip/InflaterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int64_t java::util::zip::InflaterInputStream::skip(int64_t arg0) const {
    if (!::java::util::zip::InflaterInputStream::_class) ::java::util::zip::InflaterInputStream::_class = java::fetch_class("java/util/zip/InflaterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "skip", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int32_t java::util::zip::InflaterInputStream::available() const {
    if (!::java::util::zip::InflaterInputStream::_class) ::java::util::zip::InflaterInputStream::_class = java::fetch_class("java/util/zip/InflaterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "available", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::util::zip::InflaterInputStream::close() const {
    if (!::java::util::zip::InflaterInputStream::_class) ::java::util::zip::InflaterInputStream::_class = java::fetch_class("java/util/zip/InflaterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::zip::InflaterInputStream::mark(int32_t arg0) const {
    if (!::java::util::zip::InflaterInputStream::_class) ::java::util::zip::InflaterInputStream::_class = java::fetch_class("java/util/zip/InflaterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "mark", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::zip::InflaterInputStream::reset() const {
    if (!::java::util::zip::InflaterInputStream::_class) ::java::util::zip::InflaterInputStream::_class = java::fetch_class("java/util/zip/InflaterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::util::zip::InflaterInputStream::markSupported() const {
    if (!::java::util::zip::InflaterInputStream::_class) ::java::util::zip::InflaterInputStream::_class = java::fetch_class("java/util/zip/InflaterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "markSupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

