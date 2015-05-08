#include "java-core.hpp"
#include <memory>
#include "java.io.BufferedInputStream.hpp"
#include "java.io.BufferedOutputStream.hpp"
#include "java.io.BufferedReader.hpp"
#include "java.io.BufferedWriter.hpp"
#include "java.io.ByteArrayInputStream.hpp"
#include "java.io.ByteArrayOutputStream.hpp"
#include "java.io.CharArrayReader.hpp"
#include "java.io.CharArrayWriter.hpp"
#include "java.io.CharConversionException.hpp"
#include "java.io.Closeable.hpp"
#include "java.io.Console.hpp"
#include "java.io.DataInput.hpp"
#include "java.io.DataInputStream.hpp"
#include "java.io.DataOutput.hpp"
#include "java.io.DataOutputStream.hpp"
#include "java.io.EOFException.hpp"
#include "java.io.Externalizable.hpp"
#include "java.io.File.hpp"
#include "java.io.FileDescriptor.hpp"
#include "java.io.FileFilter.hpp"
#include "java.io.FileInputStream.hpp"
#include "java.io.FileNotFoundException.hpp"
#include "java.io.FileOutputStream.hpp"
#include "java.io.FilePermission.hpp"
#include "java.io.FileReader.hpp"
#include "java.io.FileWriter.hpp"
#include "java.io.FilenameFilter.hpp"
#include "java.io.FilterInputStream.hpp"
#include "java.io.FilterOutputStream.hpp"
#include "java.io.FilterReader.hpp"
#include "java.io.FilterWriter.hpp"
#include "java.io.Flushable.hpp"
#include "java.io.IOError.hpp"
#include "java.io.IOException.hpp"
#include "java.io.InputStream.hpp"
#include "java.io.InputStreamReader.hpp"
#include "java.io.InterruptedIOException.hpp"
#include "java.io.InvalidClassException.hpp"
#include "java.io.InvalidObjectException.hpp"
#include "java.io.LineNumberInputStream.hpp"
#include "java.io.LineNumberReader.hpp"
#include "java.io.NotActiveException.hpp"
#include "java.io.NotSerializableException.hpp"
#include "java.io.ObjectInput.hpp"
#include "java.io.ObjectInputStream.hpp"
#include "java.io.ObjectInputValidation.hpp"
#include "java.io.ObjectOutput.hpp"
#include "java.io.ObjectOutputStream.hpp"
#include "java.io.ObjectStreamClass.hpp"
#include "java.io.ObjectStreamConstants.hpp"
#include "java.io.ObjectStreamException.hpp"
#include "java.io.ObjectStreamField.hpp"
#include "java.io.OptionalDataException.hpp"
#include "java.io.OutputStream.hpp"
#include "java.io.OutputStreamWriter.hpp"
#include "java.io.PipedInputStream.hpp"
#include "java.io.PipedOutputStream.hpp"
#include "java.io.PipedReader.hpp"
#include "java.io.PipedWriter.hpp"
#include "java.io.PrintStream.hpp"
#include "java.io.PrintWriter.hpp"
#include "java.io.PushbackInputStream.hpp"
#include "java.io.PushbackReader.hpp"
#include "java.io.RandomAccessFile.hpp"
#include "java.io.Reader.hpp"
#include "java.io.SequenceInputStream.hpp"
#include "java.io.Serializable.hpp"
#include "java.io.SerializablePermission.hpp"
#include "java.io.StreamCorruptedException.hpp"
#include "java.io.StreamTokenizer.hpp"
#include "java.io.StringBufferInputStream.hpp"
#include "java.io.StringReader.hpp"
#include "java.io.StringWriter.hpp"
#include "java.io.SyncFailedException.hpp"
#include "java.io.UTFDataFormatException.hpp"
#include "java.io.UnsupportedEncodingException.hpp"
#include "java.io.WriteAbortedException.hpp"
#include "java.io.Writer.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Class.hpp"
#include "java.lang.Exception.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.lang.StringBuffer.hpp"
#include "java.lang.Throwable.hpp"
#include "java.net.URI.hpp"
#include "java.net.URL.hpp"
#include "java.nio.CharBuffer.hpp"
#include "java.nio.channels.FileChannel.hpp"
#include "java.nio.charset.Charset.hpp"
#include "java.nio.charset.CharsetDecoder.hpp"
#include "java.nio.charset.CharsetEncoder.hpp"
#include "java.security.Permission.hpp"
#include "java.util.Enumeration.hpp"
#include "java.util.Locale.hpp"

jclass java::io::FileInputStream::_class = nullptr;
jclass java::io::ObjectOutput::_class = nullptr;
jclass java::io::RandomAccessFile::_class = nullptr;
jclass java::io::StringReader::_class = nullptr;
jclass java::io::PrintStream::_class = nullptr;
jclass java::io::PipedWriter::_class = nullptr;
jclass java::io::PrintWriter::_class = nullptr;
jclass java::io::ByteArrayInputStream::_class = nullptr;
jclass java::io::ObjectStreamClass::_class = nullptr;
jclass java::io::NotSerializableException::_class = nullptr;
jclass java::io::ObjectInputStream_GetField::_class = nullptr;
jclass java::io::BufferedOutputStream::_class = nullptr;
jclass java::io::OutputStream::_class = nullptr;
jclass java::io::FileWriter::_class = nullptr;
jclass java::io::PushbackReader::_class = nullptr;
jclass java::io::CharConversionException::_class = nullptr;
jclass java::io::CharArrayReader::_class = nullptr;
jclass java::io::Externalizable::_class = nullptr;
jclass java::io::SyncFailedException::_class = nullptr;
jclass java::io::InputStreamReader::_class = nullptr;
jclass java::io::DataInputStream::_class = nullptr;
jclass java::io::UnsupportedEncodingException::_class = nullptr;
jclass java::io::InterruptedIOException::_class = nullptr;
jclass java::io::InvalidObjectException::_class = nullptr;
jclass java::io::ObjectInputValidation::_class = nullptr;
jclass java::io::FilterWriter::_class = nullptr;
jclass java::io::StringWriter::_class = nullptr;
jclass java::io::SequenceInputStream::_class = nullptr;
jclass java::io::StreamTokenizer::_class = nullptr;
jclass java::io::FilterOutputStream::_class = nullptr;
jclass java::io::IOError::_class = nullptr;
jclass java::io::EOFException::_class = nullptr;
jclass java::io::ObjectStreamField::_class = nullptr;
jclass java::io::PipedInputStream::_class = nullptr;
jclass java::io::Writer::_class = nullptr;
jclass java::io::ObjectInputStream::_class = nullptr;
jclass java::io::Closeable::_class = nullptr;
jclass java::io::InputStream::_class = nullptr;
jclass java::io::StringBufferInputStream::_class = nullptr;
jclass java::io::IOException::_class = nullptr;
jclass java::io::PipedReader::_class = nullptr;
jclass java::io::DataInput::_class = nullptr;
jclass java::io::FilterInputStream::_class = nullptr;
jclass java::io::FileNotFoundException::_class = nullptr;
jclass java::io::SerializablePermission::_class = nullptr;
jclass java::io::FilterReader::_class = nullptr;
jclass java::io::OptionalDataException::_class = nullptr;
jclass java::io::FileReader::_class = nullptr;
jclass java::io::CharArrayWriter::_class = nullptr;
jclass java::io::StreamCorruptedException::_class = nullptr;
jclass java::io::FilenameFilter::_class = nullptr;
jclass java::io::OutputStreamWriter::_class = nullptr;
jclass java::io::File::_class = nullptr;
jclass java::io::NotActiveException::_class = nullptr;
jclass java::io::DataOutput::_class = nullptr;
jclass java::io::BufferedInputStream::_class = nullptr;
jclass java::io::FileOutputStream::_class = nullptr;
jclass java::io::LineNumberReader::_class = nullptr;
jclass java::io::PushbackInputStream::_class = nullptr;
jclass java::io::PipedOutputStream::_class = nullptr;
jclass java::io::Reader::_class = nullptr;
jclass java::io::FilePermission::_class = nullptr;
jclass java::io::Serializable::_class = nullptr;
jclass java::io::BufferedWriter::_class = nullptr;
jclass java::io::FileFilter::_class = nullptr;
jclass java::io::FileDescriptor::_class = nullptr;
jclass java::io::BufferedReader::_class = nullptr;
jclass java::io::ByteArrayOutputStream::_class = nullptr;
jclass java::io::WriteAbortedException::_class = nullptr;
jclass java::io::ObjectInput::_class = nullptr;
jclass java::io::InvalidClassException::_class = nullptr;
jclass java::io::ObjectStreamConstants::_class = nullptr;
jclass java::io::LineNumberInputStream::_class = nullptr;
jclass java::io::ObjectOutputStream::_class = nullptr;
jclass java::io::UTFDataFormatException::_class = nullptr;
jclass java::io::Flushable::_class = nullptr;
jclass java::io::DataOutputStream::_class = nullptr;
jclass java::io::ObjectOutputStream_PutField::_class = nullptr;
jclass java::io::ObjectStreamException::_class = nullptr;
jclass java::io::Console::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::FileInputStream::FileInputStream(const ::java::io::File& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::java::io::FileInputStream::_class) ::java::io::FileInputStream::_class = java::fetch_class("java/io/FileInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/File;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::FileInputStream::FileInputStream(const ::java::io::FileDescriptor& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::java::io::FileInputStream::_class) ::java::io::FileInputStream::_class = java::fetch_class("java/io/FileInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/FileDescriptor;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::FileInputStream::FileInputStream(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::java::io::FileInputStream::_class) ::java::io::FileInputStream::_class = java::fetch_class("java/io/FileInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t java::io::FileInputStream::available() const {
    if (!::java::io::FileInputStream::_class) ::java::io::FileInputStream::_class = java::fetch_class("java/io/FileInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "available", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::io::FileInputStream::close() const {
    if (!::java::io::FileInputStream::_class) ::java::io::FileInputStream::_class = java::fetch_class("java/io/FileInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::nio::channels::FileChannel java::io::FileInputStream::getChannel() const {
    if (!::java::io::FileInputStream::_class) ::java::io::FileInputStream::_class = java::fetch_class("java/io/FileInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChannel", "()Ljava/nio/channels/FileChannel;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::channels::FileChannel _ret(ret);
    return _ret;
}

::java::io::FileDescriptor java::io::FileInputStream::getFD() const {
    if (!::java::io::FileInputStream::_class) ::java::io::FileInputStream::_class = java::fetch_class("java/io/FileInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFD", "()Ljava/io/FileDescriptor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::FileDescriptor _ret(ret);
    return _ret;
}

int32_t java::io::FileInputStream::read() const {
    if (!::java::io::FileInputStream::_class) ::java::io::FileInputStream::_class = java::fetch_class("java/io/FileInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::io::FileInputStream::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::FileInputStream::_class) ::java::io::FileInputStream::_class = java::fetch_class("java/io/FileInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int64_t java::io::FileInputStream::skip(int64_t arg0) const {
    if (!::java::io::FileInputStream::_class) ::java::io::FileInputStream::_class = java::fetch_class("java/io/FileInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "skip", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

void java::io::ObjectOutput::close() const {
    if (!::java::io::ObjectOutput::_class) ::java::io::ObjectOutput::_class = java::fetch_class("java/io/ObjectOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::ObjectOutput::flush() const {
    if (!::java::io::ObjectOutput::_class) ::java::io::ObjectOutput::_class = java::fetch_class("java/io/ObjectOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::ObjectOutput::write(const std::vector< int8_t>& arg0) const {
    if (!::java::io::ObjectOutput::_class) ::java::io::ObjectOutput::_class = java::fetch_class("java/io/ObjectOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::ObjectOutput::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::ObjectOutput::_class) ::java::io::ObjectOutput::_class = java::fetch_class("java/io/ObjectOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::ObjectOutput::write(int32_t arg0) const {
    if (!::java::io::ObjectOutput::_class) ::java::io::ObjectOutput::_class = java::fetch_class("java/io/ObjectOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::ObjectOutput::writeObject(const ::java::lang::Object& arg0) const {
    if (!::java::io::ObjectOutput::_class) ::java::io::ObjectOutput::_class = java::fetch_class("java/io/ObjectOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeObject", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::RandomAccessFile::RandomAccessFile(const ::java::io::File& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::DataInput((jobject)0), ::java::io::DataOutput((jobject)0) {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/File;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::RandomAccessFile::RandomAccessFile(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::DataInput((jobject)0), ::java::io::DataOutput((jobject)0) {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void java::io::RandomAccessFile::close() const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::nio::channels::FileChannel java::io::RandomAccessFile::getChannel() const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChannel", "()Ljava/nio/channels/FileChannel;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::channels::FileChannel _ret(ret);
    return _ret;
}

::java::io::FileDescriptor java::io::RandomAccessFile::getFD() const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFD", "()Ljava/io/FileDescriptor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::FileDescriptor _ret(ret);
    return _ret;
}

int64_t java::io::RandomAccessFile::getFilePointer() const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFilePointer", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t java::io::RandomAccessFile::length() const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int32_t java::io::RandomAccessFile::read() const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::io::RandomAccessFile::read(const std::vector< int8_t>& arg0) const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([B)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::io::RandomAccessFile::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool java::io::RandomAccessFile::readBoolean() const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "readBoolean", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int8_t java::io::RandomAccessFile::readByte() const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "readByte", "()B");
    return java::jni->CallByteMethod(obj, mid);
}

uint16_t java::io::RandomAccessFile::readChar() const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "readChar", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

double java::io::RandomAccessFile::readDouble() const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "readDouble", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

float java::io::RandomAccessFile::readFloat() const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFloat", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void java::io::RandomAccessFile::readFully(const std::vector< int8_t>& arg0) const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFully", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::RandomAccessFile::readFully(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFully", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t java::io::RandomAccessFile::readInt() const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "readInt", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::io::RandomAccessFile::readLine() const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "readLine", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int64_t java::io::RandomAccessFile::readLong() const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "readLong", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int16_t java::io::RandomAccessFile::readShort() const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "readShort", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

int32_t java::io::RandomAccessFile::readUnsignedByte() const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "readUnsignedByte", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::io::RandomAccessFile::readUnsignedShort() const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "readUnsignedShort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::io::RandomAccessFile::readUTF() const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "readUTF", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::io::RandomAccessFile::seek(int64_t arg0) const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "seek", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::RandomAccessFile::setLength(int64_t arg0) const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLength", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t java::io::RandomAccessFile::skipBytes(int32_t arg0) const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "skipBytes", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void java::io::RandomAccessFile::write(const std::vector< int8_t>& arg0) const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::RandomAccessFile::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::RandomAccessFile::write(int32_t arg0) const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::RandomAccessFile::writeBoolean(bool arg0) const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeBoolean", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::RandomAccessFile::writeByte(int32_t arg0) const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeByte", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::RandomAccessFile::writeBytes(const ::java::lang::String& arg0) const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeBytes", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::RandomAccessFile::writeChar(int32_t arg0) const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeChar", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::RandomAccessFile::writeChars(const ::java::lang::String& arg0) const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeChars", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::RandomAccessFile::writeDouble(double arg0) const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeDouble", "(D)V");
    double _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::RandomAccessFile::writeFloat(float arg0) const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeFloat", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::RandomAccessFile::writeInt(int32_t arg0) const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeInt", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::RandomAccessFile::writeLong(int64_t arg0) const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeLong", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::RandomAccessFile::writeShort(int32_t arg0) const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeShort", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::RandomAccessFile::writeUTF(const ::java::lang::String& arg0) const {
    if (!::java::io::RandomAccessFile::_class) ::java::io::RandomAccessFile::_class = java::fetch_class("java/io/RandomAccessFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeUTF", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::StringReader::StringReader(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {
    if (!::java::io::StringReader::_class) ::java::io::StringReader::_class = java::fetch_class("java/io/StringReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::io::StringReader::close() const {
    if (!::java::io::StringReader::_class) ::java::io::StringReader::_class = java::fetch_class("java/io/StringReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::StringReader::mark(int32_t arg0) const {
    if (!::java::io::StringReader::_class) ::java::io::StringReader::_class = java::fetch_class("java/io/StringReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "mark", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::io::StringReader::markSupported() const {
    if (!::java::io::StringReader::_class) ::java::io::StringReader::_class = java::fetch_class("java/io/StringReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "markSupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::io::StringReader::read() const {
    if (!::java::io::StringReader::_class) ::java::io::StringReader::_class = java::fetch_class("java/io/StringReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::io::StringReader::read(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::StringReader::_class) ::java::io::StringReader::_class = java::fetch_class("java/io/StringReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([CII)I");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool java::io::StringReader::ready() const {
    if (!::java::io::StringReader::_class) ::java::io::StringReader::_class = java::fetch_class("java/io/StringReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "ready", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::io::StringReader::reset() const {
    if (!::java::io::StringReader::_class) ::java::io::StringReader::_class = java::fetch_class("java/io/StringReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int64_t java::io::StringReader::skip(int64_t arg0) const {
    if (!::java::io::StringReader::_class) ::java::io::StringReader::_class = java::fetch_class("java/io/StringReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "skip", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PrintStream::PrintStream(const ::java::io::OutputStream& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PrintStream::PrintStream(const ::java::io::OutputStream& arg0, bool arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PrintStream::PrintStream(const ::java::io::OutputStream& arg0, bool arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;ZLjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PrintStream::PrintStream(const ::java::io::File& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/File;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PrintStream::PrintStream(const ::java::io::File& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/File;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PrintStream::PrintStream(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PrintStream::PrintStream(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool java::io::PrintStream::checkError() const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkError", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::io::PrintStream::close() const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::PrintStream::flush() const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::io::PrintStream java::io::PrintStream::format(const ::java::lang::String& arg0, const std::vector< ::java::lang::Object>& arg1) const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::io::PrintStream _ret(ret);
    return _ret;
}

::java::io::PrintStream java::io::PrintStream::format(const ::java::util::Locale& arg0, const ::java::lang::String& arg1, const std::vector< ::java::lang::Object>& arg2) const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::Object& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::io::PrintStream _ret(ret);
    return _ret;
}

::java::io::PrintStream java::io::PrintStream::printf(const ::java::lang::String& arg0, const std::vector< ::java::lang::Object>& arg1) const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "printf", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::io::PrintStream _ret(ret);
    return _ret;
}

::java::io::PrintStream java::io::PrintStream::printf(const ::java::util::Locale& arg0, const ::java::lang::String& arg1, const std::vector< ::java::lang::Object>& arg2) const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "printf", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::Object& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::io::PrintStream _ret(ret);
    return _ret;
}

void java::io::PrintStream::print(const std::vector< uint16_t>& arg0) const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "print", "([C)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintStream::print(uint16_t arg0) const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "print", "(C)V");
    uint16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintStream::print(double arg0) const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "print", "(D)V");
    double _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintStream::print(float arg0) const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "print", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintStream::print(int32_t arg0) const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "print", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintStream::print(int64_t arg0) const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "print", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintStream::print(const ::java::lang::Object& arg0) const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "print", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintStream::print(const ::java::lang::String& arg0) const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "print", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintStream::print(bool arg0) const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "print", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintStream::println() const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "println", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::PrintStream::println(const std::vector< uint16_t>& arg0) const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "println", "([C)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintStream::println(uint16_t arg0) const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "println", "(C)V");
    uint16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintStream::println(double arg0) const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "println", "(D)V");
    double _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintStream::println(float arg0) const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "println", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintStream::println(int32_t arg0) const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "println", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintStream::println(int64_t arg0) const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "println", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintStream::println(const ::java::lang::Object& arg0) const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "println", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintStream::println(const ::java::lang::String& arg0) const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "println", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintStream::println(bool arg0) const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "println", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintStream::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::PrintStream::write(int32_t arg0) const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::io::PrintStream java::io::PrintStream::append(uint16_t arg0) const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(C)Ljava/io/PrintStream;");
    uint16_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::PrintStream _ret(ret);
    return _ret;
}

::java::io::PrintStream java::io::PrintStream::append(const ::java::lang::CharSequence& arg0) const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/CharSequence;)Ljava/io/PrintStream;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::PrintStream _ret(ret);
    return _ret;
}

::java::io::PrintStream java::io::PrintStream::append(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::PrintStream::_class) ::java::io::PrintStream::_class = java::fetch_class("java/io/PrintStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/CharSequence;II)Ljava/io/PrintStream;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::io::PrintStream _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PipedWriter::PipedWriter() : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::PipedWriter::_class) ::java::io::PipedWriter::_class = java::fetch_class("java/io/PipedWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PipedWriter::PipedWriter(const ::java::io::PipedReader& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::PipedWriter::_class) ::java::io::PipedWriter::_class = java::fetch_class("java/io/PipedWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/PipedReader;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::io::PipedWriter::close() const {
    if (!::java::io::PipedWriter::_class) ::java::io::PipedWriter::_class = java::fetch_class("java/io/PipedWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::PipedWriter::connect(const ::java::io::PipedReader& arg0) const {
    if (!::java::io::PipedWriter::_class) ::java::io::PipedWriter::_class = java::fetch_class("java/io/PipedWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "connect", "(Ljava/io/PipedReader;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PipedWriter::flush() const {
    if (!::java::io::PipedWriter::_class) ::java::io::PipedWriter::_class = java::fetch_class("java/io/PipedWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::PipedWriter::write(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::PipedWriter::_class) ::java::io::PipedWriter::_class = java::fetch_class("java/io/PipedWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::PipedWriter::write(int32_t arg0) const {
    if (!::java::io::PipedWriter::_class) ::java::io::PipedWriter::_class = java::fetch_class("java/io/PipedWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PrintWriter::PrintWriter(const ::java::io::OutputStream& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PrintWriter::PrintWriter(const ::java::io::OutputStream& arg0, bool arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PrintWriter::PrintWriter(const ::java::io::Writer& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/Writer;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PrintWriter::PrintWriter(const ::java::io::Writer& arg0, bool arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/Writer;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PrintWriter::PrintWriter(const ::java::io::File& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/File;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PrintWriter::PrintWriter(const ::java::io::File& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/File;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PrintWriter::PrintWriter(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PrintWriter::PrintWriter(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool java::io::PrintWriter::checkError() const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkError", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::io::PrintWriter::close() const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::PrintWriter::flush() const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::io::PrintWriter java::io::PrintWriter::format(const ::java::lang::String& arg0, const std::vector< ::java::lang::Object>& arg1) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::io::PrintWriter _ret(ret);
    return _ret;
}

::java::io::PrintWriter java::io::PrintWriter::format(const ::java::util::Locale& arg0, const ::java::lang::String& arg1, const std::vector< ::java::lang::Object>& arg2) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::Object& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::io::PrintWriter _ret(ret);
    return _ret;
}

::java::io::PrintWriter java::io::PrintWriter::printf(const ::java::lang::String& arg0, const std::vector< ::java::lang::Object>& arg1) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "printf", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::io::PrintWriter _ret(ret);
    return _ret;
}

::java::io::PrintWriter java::io::PrintWriter::printf(const ::java::util::Locale& arg0, const ::java::lang::String& arg1, const std::vector< ::java::lang::Object>& arg2) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "printf", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::Object& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::io::PrintWriter _ret(ret);
    return _ret;
}

void java::io::PrintWriter::print(const std::vector< uint16_t>& arg0) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "print", "([C)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintWriter::print(uint16_t arg0) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "print", "(C)V");
    uint16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintWriter::print(double arg0) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "print", "(D)V");
    double _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintWriter::print(float arg0) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "print", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintWriter::print(int32_t arg0) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "print", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintWriter::print(int64_t arg0) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "print", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintWriter::print(const ::java::lang::Object& arg0) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "print", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintWriter::print(const ::java::lang::String& arg0) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "print", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintWriter::print(bool arg0) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "print", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintWriter::println() const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "println", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::PrintWriter::println(const std::vector< uint16_t>& arg0) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "println", "([C)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintWriter::println(uint16_t arg0) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "println", "(C)V");
    uint16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintWriter::println(double arg0) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "println", "(D)V");
    double _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintWriter::println(float arg0) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "println", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintWriter::println(int32_t arg0) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "println", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintWriter::println(int64_t arg0) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "println", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintWriter::println(const ::java::lang::Object& arg0) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "println", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintWriter::println(const ::java::lang::String& arg0) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "println", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintWriter::println(bool arg0) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "println", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintWriter::write(const std::vector< uint16_t>& arg0) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([C)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintWriter::write(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::PrintWriter::write(int32_t arg0) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintWriter::write(const ::java::lang::String& arg0) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PrintWriter::write(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(Ljava/lang/String;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::io::PrintWriter java::io::PrintWriter::append(uint16_t arg0) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(C)Ljava/io/PrintWriter;");
    uint16_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::PrintWriter _ret(ret);
    return _ret;
}

::java::io::PrintWriter java::io::PrintWriter::append(const ::java::lang::CharSequence& arg0) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/CharSequence;)Ljava/io/PrintWriter;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::PrintWriter _ret(ret);
    return _ret;
}

::java::io::PrintWriter java::io::PrintWriter::append(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::PrintWriter::_class) ::java::io::PrintWriter::_class = java::fetch_class("java/io/PrintWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/CharSequence;II)Ljava/io/PrintWriter;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::io::PrintWriter _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::ByteArrayInputStream::ByteArrayInputStream(const std::vector< int8_t>& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::java::io::ByteArrayInputStream::_class) ::java::io::ByteArrayInputStream::_class = java::fetch_class("java/io/ByteArrayInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::ByteArrayInputStream::ByteArrayInputStream(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::java::io::ByteArrayInputStream::_class) ::java::io::ByteArrayInputStream::_class = java::fetch_class("java/io/ByteArrayInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

int32_t java::io::ByteArrayInputStream::available() const {
    if (!::java::io::ByteArrayInputStream::_class) ::java::io::ByteArrayInputStream::_class = java::fetch_class("java/io/ByteArrayInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "available", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::io::ByteArrayInputStream::close() const {
    if (!::java::io::ByteArrayInputStream::_class) ::java::io::ByteArrayInputStream::_class = java::fetch_class("java/io/ByteArrayInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::ByteArrayInputStream::mark(int32_t arg0) const {
    if (!::java::io::ByteArrayInputStream::_class) ::java::io::ByteArrayInputStream::_class = java::fetch_class("java/io/ByteArrayInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "mark", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::io::ByteArrayInputStream::markSupported() const {
    if (!::java::io::ByteArrayInputStream::_class) ::java::io::ByteArrayInputStream::_class = java::fetch_class("java/io/ByteArrayInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "markSupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::io::ByteArrayInputStream::read() const {
    if (!::java::io::ByteArrayInputStream::_class) ::java::io::ByteArrayInputStream::_class = java::fetch_class("java/io/ByteArrayInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::io::ByteArrayInputStream::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::ByteArrayInputStream::_class) ::java::io::ByteArrayInputStream::_class = java::fetch_class("java/io/ByteArrayInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::ByteArrayInputStream::reset() const {
    if (!::java::io::ByteArrayInputStream::_class) ::java::io::ByteArrayInputStream::_class = java::fetch_class("java/io/ByteArrayInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int64_t java::io::ByteArrayInputStream::skip(int64_t arg0) const {
    if (!::java::io::ByteArrayInputStream::_class) ::java::io::ByteArrayInputStream::_class = java::fetch_class("java/io/ByteArrayInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "skip", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

::java::lang::Class java::io::ObjectStreamClass::forClass() const {
    if (!::java::io::ObjectStreamClass::_class) ::java::io::ObjectStreamClass::_class = java::fetch_class("java/io/ObjectStreamClass");
    static jmethodID mid = java::jni->GetMethodID(_class, "forClass", "()Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Class _ret(ret);
    return _ret;
}

::java::io::ObjectStreamField java::io::ObjectStreamClass::getField(const ::java::lang::String& arg0) const {
    if (!::java::io::ObjectStreamClass::_class) ::java::io::ObjectStreamClass::_class = java::fetch_class("java/io/ObjectStreamClass");
    static jmethodID mid = java::jni->GetMethodID(_class, "getField", "(Ljava/lang/String;)Ljava/io/ObjectStreamField;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::ObjectStreamField _ret(ret);
    return _ret;
}

std::vector< ::java::io::ObjectStreamField> java::io::ObjectStreamClass::getFields() const {
    if (!::java::io::ObjectStreamClass::_class) ::java::io::ObjectStreamClass::_class = java::fetch_class("java/io/ObjectStreamClass");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFields", "()[Ljava/io/ObjectStreamField;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::io::ObjectStreamField> _ret(rets, ::java::io::ObjectStreamField((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::io::ObjectStreamField retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::String java::io::ObjectStreamClass::getName() const {
    if (!::java::io::ObjectStreamClass::_class) ::java::io::ObjectStreamClass::_class = java::fetch_class("java/io/ObjectStreamClass");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int64_t java::io::ObjectStreamClass::getSerialVersionUID() const {
    if (!::java::io::ObjectStreamClass::_class) ::java::io::ObjectStreamClass::_class = java::fetch_class("java/io/ObjectStreamClass");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSerialVersionUID", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::java::io::ObjectStreamClass java::io::ObjectStreamClass::lookup(const ::java::lang::Class& arg0){
    if (!::java::io::ObjectStreamClass::_class) ::java::io::ObjectStreamClass::_class = java::fetch_class("java/io/ObjectStreamClass");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "lookup", "(Ljava/lang/Class;)Ljava/io/ObjectStreamClass;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::io::ObjectStreamClass _ret(ret);
    return _ret;
}

::java::io::ObjectStreamClass java::io::ObjectStreamClass::lookupAny(const ::java::lang::Class& arg0){
    if (!::java::io::ObjectStreamClass::_class) ::java::io::ObjectStreamClass::_class = java::fetch_class("java/io/ObjectStreamClass");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "lookupAny", "(Ljava/lang/Class;)Ljava/io/ObjectStreamClass;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::io::ObjectStreamClass _ret(ret);
    return _ret;
}

::java::lang::String java::io::ObjectStreamClass::toString() const {
    if (!::java::io::ObjectStreamClass::_class) ::java::io::ObjectStreamClass::_class = java::fetch_class("java/io/ObjectStreamClass");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::NotSerializableException::NotSerializableException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::ObjectStreamException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::io::NotSerializableException::_class) ::java::io::NotSerializableException::_class = java::fetch_class("java/io/NotSerializableException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::NotSerializableException::NotSerializableException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::ObjectStreamException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::io::NotSerializableException::_class) ::java::io::NotSerializableException::_class = java::fetch_class("java/io/NotSerializableException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::ObjectInputStream_GetField::ObjectInputStream_GetField() : ::java::lang::Object((jobject)0) {
    if (!::java::io::ObjectInputStream_GetField::_class) ::java::io::ObjectInputStream_GetField::_class = java::fetch_class("java/io/ObjectInputStream$GetField");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::io::ObjectStreamClass java::io::ObjectInputStream_GetField::getObjectStreamClass() const {
    if (!::java::io::ObjectInputStream_GetField::_class) ::java::io::ObjectInputStream_GetField::_class = java::fetch_class("java/io/ObjectInputStream$GetField");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObjectStreamClass", "()Ljava/io/ObjectStreamClass;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::ObjectStreamClass _ret(ret);
    return _ret;
}

bool java::io::ObjectInputStream_GetField::defaulted(const ::java::lang::String& arg0) const {
    if (!::java::io::ObjectInputStream_GetField::_class) ::java::io::ObjectInputStream_GetField::_class = java::fetch_class("java/io/ObjectInputStream$GetField");
    static jmethodID mid = java::jni->GetMethodID(_class, "defaulted", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::io::ObjectInputStream_GetField::get(const ::java::lang::String& arg0, bool arg1) const {
    if (!::java::io::ObjectInputStream_GetField::_class) ::java::io::ObjectInputStream_GetField::_class = java::fetch_class("java/io/ObjectInputStream$GetField");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/String;Z)Z");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

uint16_t java::io::ObjectInputStream_GetField::get(const ::java::lang::String& arg0, uint16_t arg1) const {
    if (!::java::io::ObjectInputStream_GetField::_class) ::java::io::ObjectInputStream_GetField::_class = java::fetch_class("java/io/ObjectInputStream$GetField");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/String;C)C");
    jobject _arg0 = arg0.obj;
    uint16_t _arg1 = arg1;
    return java::jni->CallCharMethod(obj, mid, _arg0, _arg1);
}

int8_t java::io::ObjectInputStream_GetField::get(const ::java::lang::String& arg0, int8_t arg1) const {
    if (!::java::io::ObjectInputStream_GetField::_class) ::java::io::ObjectInputStream_GetField::_class = java::fetch_class("java/io/ObjectInputStream$GetField");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/String;B)B");
    jobject _arg0 = arg0.obj;
    int8_t _arg1 = arg1;
    return java::jni->CallByteMethod(obj, mid, _arg0, _arg1);
}

int16_t java::io::ObjectInputStream_GetField::get(const ::java::lang::String& arg0, int16_t arg1) const {
    if (!::java::io::ObjectInputStream_GetField::_class) ::java::io::ObjectInputStream_GetField::_class = java::fetch_class("java/io/ObjectInputStream$GetField");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/String;S)S");
    jobject _arg0 = arg0.obj;
    int16_t _arg1 = arg1;
    return java::jni->CallShortMethod(obj, mid, _arg0, _arg1);
}

int32_t java::io::ObjectInputStream_GetField::get(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::java::io::ObjectInputStream_GetField::_class) ::java::io::ObjectInputStream_GetField::_class = java::fetch_class("java/io/ObjectInputStream$GetField");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int64_t java::io::ObjectInputStream_GetField::get(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::java::io::ObjectInputStream_GetField::_class) ::java::io::ObjectInputStream_GetField::_class = java::fetch_class("java/io/ObjectInputStream$GetField");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/String;J)J");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

float java::io::ObjectInputStream_GetField::get(const ::java::lang::String& arg0, float arg1) const {
    if (!::java::io::ObjectInputStream_GetField::_class) ::java::io::ObjectInputStream_GetField::_class = java::fetch_class("java/io/ObjectInputStream$GetField");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/String;F)F");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

double java::io::ObjectInputStream_GetField::get(const ::java::lang::String& arg0, double arg1) const {
    if (!::java::io::ObjectInputStream_GetField::_class) ::java::io::ObjectInputStream_GetField::_class = java::fetch_class("java/io/ObjectInputStream$GetField");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/String;D)D");
    jobject _arg0 = arg0.obj;
    double _arg1 = arg1;
    return java::jni->CallDoubleMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object java::io::ObjectInputStream_GetField::get(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::io::ObjectInputStream_GetField::_class) ::java::io::ObjectInputStream_GetField::_class = java::fetch_class("java/io/ObjectInputStream$GetField");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::BufferedOutputStream::BufferedOutputStream(const ::java::io::OutputStream& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::java::io::BufferedOutputStream::_class) ::java::io::BufferedOutputStream::_class = java::fetch_class("java/io/BufferedOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::BufferedOutputStream::BufferedOutputStream(const ::java::io::OutputStream& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::java::io::BufferedOutputStream::_class) ::java::io::BufferedOutputStream::_class = java::fetch_class("java/io/BufferedOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void java::io::BufferedOutputStream::flush() const {
    if (!::java::io::BufferedOutputStream::_class) ::java::io::BufferedOutputStream::_class = java::fetch_class("java/io/BufferedOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::BufferedOutputStream::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::BufferedOutputStream::_class) ::java::io::BufferedOutputStream::_class = java::fetch_class("java/io/BufferedOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::BufferedOutputStream::close() const {
    if (!::java::io::BufferedOutputStream::_class) ::java::io::BufferedOutputStream::_class = java::fetch_class("java/io/BufferedOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::BufferedOutputStream::write(int32_t arg0) const {
    if (!::java::io::BufferedOutputStream::_class) ::java::io::BufferedOutputStream::_class = java::fetch_class("java/io/BufferedOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::OutputStream::OutputStream() : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0) {
    if (!::java::io::OutputStream::_class) ::java::io::OutputStream::_class = java::fetch_class("java/io/OutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void java::io::OutputStream::close() const {
    if (!::java::io::OutputStream::_class) ::java::io::OutputStream::_class = java::fetch_class("java/io/OutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::OutputStream::flush() const {
    if (!::java::io::OutputStream::_class) ::java::io::OutputStream::_class = java::fetch_class("java/io/OutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::OutputStream::write(const std::vector< int8_t>& arg0) const {
    if (!::java::io::OutputStream::_class) ::java::io::OutputStream::_class = java::fetch_class("java/io/OutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::OutputStream::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::OutputStream::_class) ::java::io::OutputStream::_class = java::fetch_class("java/io/OutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::OutputStream::write(int32_t arg0) const {
    if (!::java::io::OutputStream::_class) ::java::io::OutputStream::_class = java::fetch_class("java/io/OutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::FileWriter::FileWriter(const ::java::io::File& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStreamWriter((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::FileWriter::_class) ::java::io::FileWriter::_class = java::fetch_class("java/io/FileWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/File;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::FileWriter::FileWriter(const ::java::io::File& arg0, bool arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStreamWriter((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::FileWriter::_class) ::java::io::FileWriter::_class = java::fetch_class("java/io/FileWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/File;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::FileWriter::FileWriter(const ::java::io::FileDescriptor& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStreamWriter((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::FileWriter::_class) ::java::io::FileWriter::_class = java::fetch_class("java/io/FileWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/FileDescriptor;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::FileWriter::FileWriter(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStreamWriter((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::FileWriter::_class) ::java::io::FileWriter::_class = java::fetch_class("java/io/FileWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::FileWriter::FileWriter(const ::java::lang::String& arg0, bool arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStreamWriter((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::FileWriter::_class) ::java::io::FileWriter::_class = java::fetch_class("java/io/FileWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PushbackReader::PushbackReader(const ::java::io::Reader& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterReader((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {
    if (!::java::io::PushbackReader::_class) ::java::io::PushbackReader::_class = java::fetch_class("java/io/PushbackReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/Reader;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PushbackReader::PushbackReader(const ::java::io::Reader& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterReader((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {
    if (!::java::io::PushbackReader::_class) ::java::io::PushbackReader::_class = java::fetch_class("java/io/PushbackReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/Reader;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void java::io::PushbackReader::close() const {
    if (!::java::io::PushbackReader::_class) ::java::io::PushbackReader::_class = java::fetch_class("java/io/PushbackReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::PushbackReader::mark(int32_t arg0) const {
    if (!::java::io::PushbackReader::_class) ::java::io::PushbackReader::_class = java::fetch_class("java/io/PushbackReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "mark", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::io::PushbackReader::markSupported() const {
    if (!::java::io::PushbackReader::_class) ::java::io::PushbackReader::_class = java::fetch_class("java/io/PushbackReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "markSupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::io::PushbackReader::read() const {
    if (!::java::io::PushbackReader::_class) ::java::io::PushbackReader::_class = java::fetch_class("java/io/PushbackReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::io::PushbackReader::read(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::PushbackReader::_class) ::java::io::PushbackReader::_class = java::fetch_class("java/io/PushbackReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([CII)I");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool java::io::PushbackReader::ready() const {
    if (!::java::io::PushbackReader::_class) ::java::io::PushbackReader::_class = java::fetch_class("java/io/PushbackReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "ready", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::io::PushbackReader::reset() const {
    if (!::java::io::PushbackReader::_class) ::java::io::PushbackReader::_class = java::fetch_class("java/io/PushbackReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::PushbackReader::unread(const std::vector< uint16_t>& arg0) const {
    if (!::java::io::PushbackReader::_class) ::java::io::PushbackReader::_class = java::fetch_class("java/io/PushbackReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "unread", "([C)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PushbackReader::unread(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::PushbackReader::_class) ::java::io::PushbackReader::_class = java::fetch_class("java/io/PushbackReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "unread", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::PushbackReader::unread(int32_t arg0) const {
    if (!::java::io::PushbackReader::_class) ::java::io::PushbackReader::_class = java::fetch_class("java/io/PushbackReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "unread", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t java::io::PushbackReader::skip(int64_t arg0) const {
    if (!::java::io::PushbackReader::_class) ::java::io::PushbackReader::_class = java::fetch_class("java/io/PushbackReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "skip", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::CharConversionException::CharConversionException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::io::CharConversionException::_class) ::java::io::CharConversionException::_class = java::fetch_class("java/io/CharConversionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::CharConversionException::CharConversionException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::io::CharConversionException::_class) ::java::io::CharConversionException::_class = java::fetch_class("java/io/CharConversionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::CharArrayReader::CharArrayReader(const std::vector< uint16_t>& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {
    if (!::java::io::CharArrayReader::_class) ::java::io::CharArrayReader::_class = java::fetch_class("java/io/CharArrayReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([C)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::CharArrayReader::CharArrayReader(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {
    if (!::java::io::CharArrayReader::_class) ::java::io::CharArrayReader::_class = java::fetch_class("java/io/CharArrayReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void java::io::CharArrayReader::close() const {
    if (!::java::io::CharArrayReader::_class) ::java::io::CharArrayReader::_class = java::fetch_class("java/io/CharArrayReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::CharArrayReader::mark(int32_t arg0) const {
    if (!::java::io::CharArrayReader::_class) ::java::io::CharArrayReader::_class = java::fetch_class("java/io/CharArrayReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "mark", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::io::CharArrayReader::markSupported() const {
    if (!::java::io::CharArrayReader::_class) ::java::io::CharArrayReader::_class = java::fetch_class("java/io/CharArrayReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "markSupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::io::CharArrayReader::read() const {
    if (!::java::io::CharArrayReader::_class) ::java::io::CharArrayReader::_class = java::fetch_class("java/io/CharArrayReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::io::CharArrayReader::read(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::CharArrayReader::_class) ::java::io::CharArrayReader::_class = java::fetch_class("java/io/CharArrayReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([CII)I");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool java::io::CharArrayReader::ready() const {
    if (!::java::io::CharArrayReader::_class) ::java::io::CharArrayReader::_class = java::fetch_class("java/io/CharArrayReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "ready", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::io::CharArrayReader::reset() const {
    if (!::java::io::CharArrayReader::_class) ::java::io::CharArrayReader::_class = java::fetch_class("java/io/CharArrayReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int64_t java::io::CharArrayReader::skip(int64_t arg0) const {
    if (!::java::io::CharArrayReader::_class) ::java::io::CharArrayReader::_class = java::fetch_class("java/io/CharArrayReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "skip", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

void java::io::Externalizable::readExternal(const ::java::io::ObjectInput& arg0) const {
    if (!::java::io::Externalizable::_class) ::java::io::Externalizable::_class = java::fetch_class("java/io/Externalizable");
    static jmethodID mid = java::jni->GetMethodID(_class, "readExternal", "(Ljava/io/ObjectInput;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::Externalizable::writeExternal(const ::java::io::ObjectOutput& arg0) const {
    if (!::java::io::Externalizable::_class) ::java::io::Externalizable::_class = java::fetch_class("java/io/Externalizable");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeExternal", "(Ljava/io/ObjectOutput;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::SyncFailedException::SyncFailedException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::io::SyncFailedException::_class) ::java::io::SyncFailedException::_class = java::fetch_class("java/io/SyncFailedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::InputStreamReader::InputStreamReader(const ::java::io::InputStream& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {
    if (!::java::io::InputStreamReader::_class) ::java::io::InputStreamReader::_class = java::fetch_class("java/io/InputStreamReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::InputStreamReader::InputStreamReader(const ::java::io::InputStream& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {
    if (!::java::io::InputStreamReader::_class) ::java::io::InputStreamReader::_class = java::fetch_class("java/io/InputStreamReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::InputStreamReader::InputStreamReader(const ::java::io::InputStream& arg0, const ::java::nio::charset::CharsetDecoder& arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {
    if (!::java::io::InputStreamReader::_class) ::java::io::InputStreamReader::_class = java::fetch_class("java/io/InputStreamReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;Ljava/nio/charset/CharsetDecoder;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::InputStreamReader::InputStreamReader(const ::java::io::InputStream& arg0, const ::java::nio::charset::Charset& arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {
    if (!::java::io::InputStreamReader::_class) ::java::io::InputStreamReader::_class = java::fetch_class("java/io/InputStreamReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;Ljava/nio/charset/Charset;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void java::io::InputStreamReader::close() const {
    if (!::java::io::InputStreamReader::_class) ::java::io::InputStreamReader::_class = java::fetch_class("java/io/InputStreamReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String java::io::InputStreamReader::getEncoding() const {
    if (!::java::io::InputStreamReader::_class) ::java::io::InputStreamReader::_class = java::fetch_class("java/io/InputStreamReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncoding", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::io::InputStreamReader::read() const {
    if (!::java::io::InputStreamReader::_class) ::java::io::InputStreamReader::_class = java::fetch_class("java/io/InputStreamReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::io::InputStreamReader::read(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::InputStreamReader::_class) ::java::io::InputStreamReader::_class = java::fetch_class("java/io/InputStreamReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([CII)I");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool java::io::InputStreamReader::ready() const {
    if (!::java::io::InputStreamReader::_class) ::java::io::InputStreamReader::_class = java::fetch_class("java/io/InputStreamReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "ready", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::DataInputStream::DataInputStream(const ::java::io::InputStream& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::DataInput((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::java::io::DataInputStream::_class) ::java::io::DataInputStream::_class = java::fetch_class("java/io/DataInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t java::io::DataInputStream::read(const std::vector< int8_t>& arg0) const {
    if (!::java::io::DataInputStream::_class) ::java::io::DataInputStream::_class = java::fetch_class("java/io/DataInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([B)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::io::DataInputStream::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::DataInputStream::_class) ::java::io::DataInputStream::_class = java::fetch_class("java/io/DataInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool java::io::DataInputStream::readBoolean() const {
    if (!::java::io::DataInputStream::_class) ::java::io::DataInputStream::_class = java::fetch_class("java/io/DataInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readBoolean", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int8_t java::io::DataInputStream::readByte() const {
    if (!::java::io::DataInputStream::_class) ::java::io::DataInputStream::_class = java::fetch_class("java/io/DataInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readByte", "()B");
    return java::jni->CallByteMethod(obj, mid);
}

uint16_t java::io::DataInputStream::readChar() const {
    if (!::java::io::DataInputStream::_class) ::java::io::DataInputStream::_class = java::fetch_class("java/io/DataInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readChar", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

double java::io::DataInputStream::readDouble() const {
    if (!::java::io::DataInputStream::_class) ::java::io::DataInputStream::_class = java::fetch_class("java/io/DataInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readDouble", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

float java::io::DataInputStream::readFloat() const {
    if (!::java::io::DataInputStream::_class) ::java::io::DataInputStream::_class = java::fetch_class("java/io/DataInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFloat", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void java::io::DataInputStream::readFully(const std::vector< int8_t>& arg0) const {
    if (!::java::io::DataInputStream::_class) ::java::io::DataInputStream::_class = java::fetch_class("java/io/DataInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFully", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::DataInputStream::readFully(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::DataInputStream::_class) ::java::io::DataInputStream::_class = java::fetch_class("java/io/DataInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFully", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t java::io::DataInputStream::readInt() const {
    if (!::java::io::DataInputStream::_class) ::java::io::DataInputStream::_class = java::fetch_class("java/io/DataInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readInt", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::io::DataInputStream::readLine() const {
    if (!::java::io::DataInputStream::_class) ::java::io::DataInputStream::_class = java::fetch_class("java/io/DataInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readLine", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int64_t java::io::DataInputStream::readLong() const {
    if (!::java::io::DataInputStream::_class) ::java::io::DataInputStream::_class = java::fetch_class("java/io/DataInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readLong", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int16_t java::io::DataInputStream::readShort() const {
    if (!::java::io::DataInputStream::_class) ::java::io::DataInputStream::_class = java::fetch_class("java/io/DataInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readShort", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

int32_t java::io::DataInputStream::readUnsignedByte() const {
    if (!::java::io::DataInputStream::_class) ::java::io::DataInputStream::_class = java::fetch_class("java/io/DataInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readUnsignedByte", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::io::DataInputStream::readUnsignedShort() const {
    if (!::java::io::DataInputStream::_class) ::java::io::DataInputStream::_class = java::fetch_class("java/io/DataInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readUnsignedShort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::io::DataInputStream::readUTF() const {
    if (!::java::io::DataInputStream::_class) ::java::io::DataInputStream::_class = java::fetch_class("java/io/DataInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readUTF", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::io::DataInputStream::readUTF(const ::java::io::DataInput& arg0){
    if (!::java::io::DataInputStream::_class) ::java::io::DataInputStream::_class = java::fetch_class("java/io/DataInputStream");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "readUTF", "(Ljava/io/DataInput;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::io::DataInputStream::skipBytes(int32_t arg0) const {
    if (!::java::io::DataInputStream::_class) ::java::io::DataInputStream::_class = java::fetch_class("java/io/DataInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "skipBytes", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::UnsupportedEncodingException::UnsupportedEncodingException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::io::UnsupportedEncodingException::_class) ::java::io::UnsupportedEncodingException::_class = java::fetch_class("java/io/UnsupportedEncodingException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::UnsupportedEncodingException::UnsupportedEncodingException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::io::UnsupportedEncodingException::_class) ::java::io::UnsupportedEncodingException::_class = java::fetch_class("java/io/UnsupportedEncodingException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::InterruptedIOException::InterruptedIOException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::io::InterruptedIOException::_class) ::java::io::InterruptedIOException::_class = java::fetch_class("java/io/InterruptedIOException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::InterruptedIOException::InterruptedIOException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::io::InterruptedIOException::_class) ::java::io::InterruptedIOException::_class = java::fetch_class("java/io/InterruptedIOException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::InvalidObjectException::InvalidObjectException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::ObjectStreamException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::io::InvalidObjectException::_class) ::java::io::InvalidObjectException::_class = java::fetch_class("java/io/InvalidObjectException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::io::ObjectInputValidation::validateObject() const {
    if (!::java::io::ObjectInputValidation::_class) ::java::io::ObjectInputValidation::_class = java::fetch_class("java/io/ObjectInputValidation");
    static jmethodID mid = java::jni->GetMethodID(_class, "validateObject", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::FilterWriter::close() const {
    if (!::java::io::FilterWriter::_class) ::java::io::FilterWriter::_class = java::fetch_class("java/io/FilterWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::FilterWriter::flush() const {
    if (!::java::io::FilterWriter::_class) ::java::io::FilterWriter::_class = java::fetch_class("java/io/FilterWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::FilterWriter::write(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::FilterWriter::_class) ::java::io::FilterWriter::_class = java::fetch_class("java/io/FilterWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::FilterWriter::write(int32_t arg0) const {
    if (!::java::io::FilterWriter::_class) ::java::io::FilterWriter::_class = java::fetch_class("java/io/FilterWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::FilterWriter::write(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::FilterWriter::_class) ::java::io::FilterWriter::_class = java::fetch_class("java/io/FilterWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(Ljava/lang/String;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::StringWriter::StringWriter() : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::StringWriter::_class) ::java::io::StringWriter::_class = java::fetch_class("java/io/StringWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::StringWriter::StringWriter(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::StringWriter::_class) ::java::io::StringWriter::_class = java::fetch_class("java/io/StringWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::io::StringWriter::close() const {
    if (!::java::io::StringWriter::_class) ::java::io::StringWriter::_class = java::fetch_class("java/io/StringWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::StringWriter::flush() const {
    if (!::java::io::StringWriter::_class) ::java::io::StringWriter::_class = java::fetch_class("java/io/StringWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::StringBuffer java::io::StringWriter::getBuffer() const {
    if (!::java::io::StringWriter::_class) ::java::io::StringWriter::_class = java::fetch_class("java/io/StringWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBuffer", "()Ljava/lang/StringBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::String java::io::StringWriter::toString() const {
    if (!::java::io::StringWriter::_class) ::java::io::StringWriter::_class = java::fetch_class("java/io/StringWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::io::StringWriter::write(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::StringWriter::_class) ::java::io::StringWriter::_class = java::fetch_class("java/io/StringWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::StringWriter::write(int32_t arg0) const {
    if (!::java::io::StringWriter::_class) ::java::io::StringWriter::_class = java::fetch_class("java/io/StringWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::StringWriter::write(const ::java::lang::String& arg0) const {
    if (!::java::io::StringWriter::_class) ::java::io::StringWriter::_class = java::fetch_class("java/io/StringWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::StringWriter::write(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::StringWriter::_class) ::java::io::StringWriter::_class = java::fetch_class("java/io/StringWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(Ljava/lang/String;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::io::StringWriter java::io::StringWriter::append(uint16_t arg0) const {
    if (!::java::io::StringWriter::_class) ::java::io::StringWriter::_class = java::fetch_class("java/io/StringWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(C)Ljava/io/StringWriter;");
    uint16_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::StringWriter _ret(ret);
    return _ret;
}

::java::io::StringWriter java::io::StringWriter::append(const ::java::lang::CharSequence& arg0) const {
    if (!::java::io::StringWriter::_class) ::java::io::StringWriter::_class = java::fetch_class("java/io/StringWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/CharSequence;)Ljava/io/StringWriter;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::StringWriter _ret(ret);
    return _ret;
}

::java::io::StringWriter java::io::StringWriter::append(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::StringWriter::_class) ::java::io::StringWriter::_class = java::fetch_class("java/io/StringWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/CharSequence;II)Ljava/io/StringWriter;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::io::StringWriter _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::SequenceInputStream::SequenceInputStream(const ::java::io::InputStream& arg0, const ::java::io::InputStream& arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::java::io::SequenceInputStream::_class) ::java::io::SequenceInputStream::_class = java::fetch_class("java/io/SequenceInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::SequenceInputStream::SequenceInputStream(const ::java::util::Enumeration& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::java::io::SequenceInputStream::_class) ::java::io::SequenceInputStream::_class = java::fetch_class("java/io/SequenceInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Enumeration;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t java::io::SequenceInputStream::available() const {
    if (!::java::io::SequenceInputStream::_class) ::java::io::SequenceInputStream::_class = java::fetch_class("java/io/SequenceInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "available", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::io::SequenceInputStream::close() const {
    if (!::java::io::SequenceInputStream::_class) ::java::io::SequenceInputStream::_class = java::fetch_class("java/io/SequenceInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t java::io::SequenceInputStream::read() const {
    if (!::java::io::SequenceInputStream::_class) ::java::io::SequenceInputStream::_class = java::fetch_class("java/io/SequenceInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::io::SequenceInputStream::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::SequenceInputStream::_class) ::java::io::SequenceInputStream::_class = java::fetch_class("java/io/SequenceInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::StreamTokenizer::StreamTokenizer(const ::java::io::InputStream& arg0) : ::java::lang::Object((jobject)0) {
    if (!::java::io::StreamTokenizer::_class) ::java::io::StreamTokenizer::_class = java::fetch_class("java/io/StreamTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::StreamTokenizer::StreamTokenizer(const ::java::io::Reader& arg0) : ::java::lang::Object((jobject)0) {
    if (!::java::io::StreamTokenizer::_class) ::java::io::StreamTokenizer::_class = java::fetch_class("java/io/StreamTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/Reader;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::io::StreamTokenizer::commentChar(int32_t arg0) const {
    if (!::java::io::StreamTokenizer::_class) ::java::io::StreamTokenizer::_class = java::fetch_class("java/io/StreamTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "commentChar", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::StreamTokenizer::eolIsSignificant(bool arg0) const {
    if (!::java::io::StreamTokenizer::_class) ::java::io::StreamTokenizer::_class = java::fetch_class("java/io/StreamTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "eolIsSignificant", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t java::io::StreamTokenizer::lineno() const {
    if (!::java::io::StreamTokenizer::_class) ::java::io::StreamTokenizer::_class = java::fetch_class("java/io/StreamTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "lineno", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::io::StreamTokenizer::lowerCaseMode(bool arg0) const {
    if (!::java::io::StreamTokenizer::_class) ::java::io::StreamTokenizer::_class = java::fetch_class("java/io/StreamTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "lowerCaseMode", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t java::io::StreamTokenizer::nextToken() const {
    if (!::java::io::StreamTokenizer::_class) ::java::io::StreamTokenizer::_class = java::fetch_class("java/io/StreamTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextToken", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::io::StreamTokenizer::ordinaryChar(int32_t arg0) const {
    if (!::java::io::StreamTokenizer::_class) ::java::io::StreamTokenizer::_class = java::fetch_class("java/io/StreamTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "ordinaryChar", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::StreamTokenizer::ordinaryChars(int32_t arg0, int32_t arg1) const {
    if (!::java::io::StreamTokenizer::_class) ::java::io::StreamTokenizer::_class = java::fetch_class("java/io/StreamTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "ordinaryChars", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::io::StreamTokenizer::parseNumbers() const {
    if (!::java::io::StreamTokenizer::_class) ::java::io::StreamTokenizer::_class = java::fetch_class("java/io/StreamTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseNumbers", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::StreamTokenizer::pushBack() const {
    if (!::java::io::StreamTokenizer::_class) ::java::io::StreamTokenizer::_class = java::fetch_class("java/io/StreamTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "pushBack", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::StreamTokenizer::quoteChar(int32_t arg0) const {
    if (!::java::io::StreamTokenizer::_class) ::java::io::StreamTokenizer::_class = java::fetch_class("java/io/StreamTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "quoteChar", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::StreamTokenizer::resetSyntax() const {
    if (!::java::io::StreamTokenizer::_class) ::java::io::StreamTokenizer::_class = java::fetch_class("java/io/StreamTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "resetSyntax", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::StreamTokenizer::slashSlashComments(bool arg0) const {
    if (!::java::io::StreamTokenizer::_class) ::java::io::StreamTokenizer::_class = java::fetch_class("java/io/StreamTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "slashSlashComments", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::StreamTokenizer::slashStarComments(bool arg0) const {
    if (!::java::io::StreamTokenizer::_class) ::java::io::StreamTokenizer::_class = java::fetch_class("java/io/StreamTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "slashStarComments", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::io::StreamTokenizer::toString() const {
    if (!::java::io::StreamTokenizer::_class) ::java::io::StreamTokenizer::_class = java::fetch_class("java/io/StreamTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::io::StreamTokenizer::whitespaceChars(int32_t arg0, int32_t arg1) const {
    if (!::java::io::StreamTokenizer::_class) ::java::io::StreamTokenizer::_class = java::fetch_class("java/io/StreamTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "whitespaceChars", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::io::StreamTokenizer::wordChars(int32_t arg0, int32_t arg1) const {
    if (!::java::io::StreamTokenizer::_class) ::java::io::StreamTokenizer::_class = java::fetch_class("java/io/StreamTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "wordChars", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::FilterOutputStream::FilterOutputStream(const ::java::io::OutputStream& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::java::io::FilterOutputStream::_class) ::java::io::FilterOutputStream::_class = java::fetch_class("java/io/FilterOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::io::FilterOutputStream::close() const {
    if (!::java::io::FilterOutputStream::_class) ::java::io::FilterOutputStream::_class = java::fetch_class("java/io/FilterOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::FilterOutputStream::flush() const {
    if (!::java::io::FilterOutputStream::_class) ::java::io::FilterOutputStream::_class = java::fetch_class("java/io/FilterOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::FilterOutputStream::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::FilterOutputStream::_class) ::java::io::FilterOutputStream::_class = java::fetch_class("java/io/FilterOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::FilterOutputStream::write(int32_t arg0) const {
    if (!::java::io::FilterOutputStream::_class) ::java::io::FilterOutputStream::_class = java::fetch_class("java/io/FilterOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::IOError::IOError(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::io::IOError::_class) ::java::io::IOError::_class = java::fetch_class("java/io/IOError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::EOFException::EOFException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::io::EOFException::_class) ::java::io::EOFException::_class = java::fetch_class("java/io/EOFException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::EOFException::EOFException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::io::EOFException::_class) ::java::io::EOFException::_class = java::fetch_class("java/io/EOFException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::ObjectStreamField::ObjectStreamField(const ::java::lang::String& arg0, const ::java::lang::Class& arg1) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::io::ObjectStreamField::_class) ::java::io::ObjectStreamField::_class = java::fetch_class("java/io/ObjectStreamField");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Class;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::ObjectStreamField::ObjectStreamField(const ::java::lang::String& arg0, const ::java::lang::Class& arg1, bool arg2) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::io::ObjectStreamField::_class) ::java::io::ObjectStreamField::_class = java::fetch_class("java/io/ObjectStreamField");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Class;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

int32_t java::io::ObjectStreamField::compareTo(const ::java::lang::Object& arg0) const {
    if (!::java::io::ObjectStreamField::_class) ::java::io::ObjectStreamField::_class = java::fetch_class("java/io/ObjectStreamField");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String java::io::ObjectStreamField::getName() const {
    if (!::java::io::ObjectStreamField::_class) ::java::io::ObjectStreamField::_class = java::fetch_class("java/io/ObjectStreamField");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::io::ObjectStreamField::getOffset() const {
    if (!::java::io::ObjectStreamField::_class) ::java::io::ObjectStreamField::_class = java::fetch_class("java/io/ObjectStreamField");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOffset", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Class java::io::ObjectStreamField::getType() const {
    if (!::java::io::ObjectStreamField::_class) ::java::io::ObjectStreamField::_class = java::fetch_class("java/io/ObjectStreamField");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Class _ret(ret);
    return _ret;
}

uint16_t java::io::ObjectStreamField::getTypeCode() const {
    if (!::java::io::ObjectStreamField::_class) ::java::io::ObjectStreamField::_class = java::fetch_class("java/io/ObjectStreamField");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTypeCode", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

::java::lang::String java::io::ObjectStreamField::getTypeString() const {
    if (!::java::io::ObjectStreamField::_class) ::java::io::ObjectStreamField::_class = java::fetch_class("java/io/ObjectStreamField");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTypeString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::io::ObjectStreamField::isPrimitive() const {
    if (!::java::io::ObjectStreamField::_class) ::java::io::ObjectStreamField::_class = java::fetch_class("java/io/ObjectStreamField");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPrimitive", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String java::io::ObjectStreamField::toString() const {
    if (!::java::io::ObjectStreamField::_class) ::java::io::ObjectStreamField::_class = java::fetch_class("java/io/ObjectStreamField");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::io::ObjectStreamField::isUnshared() const {
    if (!::java::io::ObjectStreamField::_class) ::java::io::ObjectStreamField::_class = java::fetch_class("java/io/ObjectStreamField");
    static jmethodID mid = java::jni->GetMethodID(_class, "isUnshared", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PipedInputStream::PipedInputStream() : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::java::io::PipedInputStream::_class) ::java::io::PipedInputStream::_class = java::fetch_class("java/io/PipedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PipedInputStream::PipedInputStream(const ::java::io::PipedOutputStream& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::java::io::PipedInputStream::_class) ::java::io::PipedInputStream::_class = java::fetch_class("java/io/PipedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/PipedOutputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PipedInputStream::PipedInputStream(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::java::io::PipedInputStream::_class) ::java::io::PipedInputStream::_class = java::fetch_class("java/io/PipedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PipedInputStream::PipedInputStream(const ::java::io::PipedOutputStream& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::java::io::PipedInputStream::_class) ::java::io::PipedInputStream::_class = java::fetch_class("java/io/PipedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/PipedOutputStream;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int32_t java::io::PipedInputStream::available() const {
    if (!::java::io::PipedInputStream::_class) ::java::io::PipedInputStream::_class = java::fetch_class("java/io/PipedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "available", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::io::PipedInputStream::close() const {
    if (!::java::io::PipedInputStream::_class) ::java::io::PipedInputStream::_class = java::fetch_class("java/io/PipedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::PipedInputStream::connect(const ::java::io::PipedOutputStream& arg0) const {
    if (!::java::io::PipedInputStream::_class) ::java::io::PipedInputStream::_class = java::fetch_class("java/io/PipedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "connect", "(Ljava/io/PipedOutputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t java::io::PipedInputStream::read() const {
    if (!::java::io::PipedInputStream::_class) ::java::io::PipedInputStream::_class = java::fetch_class("java/io/PipedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::io::PipedInputStream::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::PipedInputStream::_class) ::java::io::PipedInputStream::_class = java::fetch_class("java/io/PipedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::Writer::close() const {
    if (!::java::io::Writer::_class) ::java::io::Writer::_class = java::fetch_class("java/io/Writer");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::Writer::flush() const {
    if (!::java::io::Writer::_class) ::java::io::Writer::_class = java::fetch_class("java/io/Writer");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::Writer::write(const std::vector< uint16_t>& arg0) const {
    if (!::java::io::Writer::_class) ::java::io::Writer::_class = java::fetch_class("java/io/Writer");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([C)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::Writer::write(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::Writer::_class) ::java::io::Writer::_class = java::fetch_class("java/io/Writer");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::Writer::write(int32_t arg0) const {
    if (!::java::io::Writer::_class) ::java::io::Writer::_class = java::fetch_class("java/io/Writer");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::Writer::write(const ::java::lang::String& arg0) const {
    if (!::java::io::Writer::_class) ::java::io::Writer::_class = java::fetch_class("java/io/Writer");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::Writer::write(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::Writer::_class) ::java::io::Writer::_class = java::fetch_class("java/io/Writer");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(Ljava/lang/String;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::io::Writer java::io::Writer::append(uint16_t arg0) const {
    if (!::java::io::Writer::_class) ::java::io::Writer::_class = java::fetch_class("java/io/Writer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(C)Ljava/io/Writer;");
    uint16_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::Writer _ret(ret);
    return _ret;
}

::java::io::Writer java::io::Writer::append(const ::java::lang::CharSequence& arg0) const {
    if (!::java::io::Writer::_class) ::java::io::Writer::_class = java::fetch_class("java/io/Writer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/CharSequence;)Ljava/io/Writer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::Writer _ret(ret);
    return _ret;
}

::java::io::Writer java::io::Writer::append(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::Writer::_class) ::java::io::Writer::_class = java::fetch_class("java/io/Writer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/CharSequence;II)Ljava/io/Writer;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::io::Writer _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::ObjectInputStream::ObjectInputStream(const ::java::io::InputStream& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::DataInput((jobject)0), ::java::io::InputStream((jobject)0), ::java::io::ObjectInput((jobject)0), ::java::io::ObjectStreamConstants((jobject)0) {
    if (!::java::io::ObjectInputStream::_class) ::java::io::ObjectInputStream::_class = java::fetch_class("java/io/ObjectInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t java::io::ObjectInputStream::available() const {
    if (!::java::io::ObjectInputStream::_class) ::java::io::ObjectInputStream::_class = java::fetch_class("java/io/ObjectInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "available", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::io::ObjectInputStream::close() const {
    if (!::java::io::ObjectInputStream::_class) ::java::io::ObjectInputStream::_class = java::fetch_class("java/io/ObjectInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::ObjectInputStream::defaultReadObject() const {
    if (!::java::io::ObjectInputStream::_class) ::java::io::ObjectInputStream::_class = java::fetch_class("java/io/ObjectInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "defaultReadObject", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t java::io::ObjectInputStream::read() const {
    if (!::java::io::ObjectInputStream::_class) ::java::io::ObjectInputStream::_class = java::fetch_class("java/io/ObjectInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::io::ObjectInputStream::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::ObjectInputStream::_class) ::java::io::ObjectInputStream::_class = java::fetch_class("java/io/ObjectInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool java::io::ObjectInputStream::readBoolean() const {
    if (!::java::io::ObjectInputStream::_class) ::java::io::ObjectInputStream::_class = java::fetch_class("java/io/ObjectInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readBoolean", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int8_t java::io::ObjectInputStream::readByte() const {
    if (!::java::io::ObjectInputStream::_class) ::java::io::ObjectInputStream::_class = java::fetch_class("java/io/ObjectInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readByte", "()B");
    return java::jni->CallByteMethod(obj, mid);
}

uint16_t java::io::ObjectInputStream::readChar() const {
    if (!::java::io::ObjectInputStream::_class) ::java::io::ObjectInputStream::_class = java::fetch_class("java/io/ObjectInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readChar", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

double java::io::ObjectInputStream::readDouble() const {
    if (!::java::io::ObjectInputStream::_class) ::java::io::ObjectInputStream::_class = java::fetch_class("java/io/ObjectInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readDouble", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

::java::io::ObjectInputStream_GetField java::io::ObjectInputStream::readFields() const {
    if (!::java::io::ObjectInputStream::_class) ::java::io::ObjectInputStream::_class = java::fetch_class("java/io/ObjectInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFields", "()Ljava/io/ObjectInputStream$GetField;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::ObjectInputStream_GetField _ret(ret);
    return _ret;
}

float java::io::ObjectInputStream::readFloat() const {
    if (!::java::io::ObjectInputStream::_class) ::java::io::ObjectInputStream::_class = java::fetch_class("java/io/ObjectInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFloat", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void java::io::ObjectInputStream::readFully(const std::vector< int8_t>& arg0) const {
    if (!::java::io::ObjectInputStream::_class) ::java::io::ObjectInputStream::_class = java::fetch_class("java/io/ObjectInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFully", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::ObjectInputStream::readFully(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::ObjectInputStream::_class) ::java::io::ObjectInputStream::_class = java::fetch_class("java/io/ObjectInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFully", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t java::io::ObjectInputStream::readInt() const {
    if (!::java::io::ObjectInputStream::_class) ::java::io::ObjectInputStream::_class = java::fetch_class("java/io/ObjectInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readInt", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::io::ObjectInputStream::readLine() const {
    if (!::java::io::ObjectInputStream::_class) ::java::io::ObjectInputStream::_class = java::fetch_class("java/io/ObjectInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readLine", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int64_t java::io::ObjectInputStream::readLong() const {
    if (!::java::io::ObjectInputStream::_class) ::java::io::ObjectInputStream::_class = java::fetch_class("java/io/ObjectInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readLong", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::java::lang::Object java::io::ObjectInputStream::readObject() const {
    if (!::java::io::ObjectInputStream::_class) ::java::io::ObjectInputStream::_class = java::fetch_class("java/io/ObjectInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readObject", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::io::ObjectInputStream::readUnshared() const {
    if (!::java::io::ObjectInputStream::_class) ::java::io::ObjectInputStream::_class = java::fetch_class("java/io/ObjectInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readUnshared", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int16_t java::io::ObjectInputStream::readShort() const {
    if (!::java::io::ObjectInputStream::_class) ::java::io::ObjectInputStream::_class = java::fetch_class("java/io/ObjectInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readShort", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

int32_t java::io::ObjectInputStream::readUnsignedByte() const {
    if (!::java::io::ObjectInputStream::_class) ::java::io::ObjectInputStream::_class = java::fetch_class("java/io/ObjectInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readUnsignedByte", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::io::ObjectInputStream::readUnsignedShort() const {
    if (!::java::io::ObjectInputStream::_class) ::java::io::ObjectInputStream::_class = java::fetch_class("java/io/ObjectInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readUnsignedShort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::io::ObjectInputStream::readUTF() const {
    if (!::java::io::ObjectInputStream::_class) ::java::io::ObjectInputStream::_class = java::fetch_class("java/io/ObjectInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "readUTF", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::io::ObjectInputStream::registerValidation(const ::java::io::ObjectInputValidation& arg0, int32_t arg1) const {
    if (!::java::io::ObjectInputStream::_class) ::java::io::ObjectInputStream::_class = java::fetch_class("java/io/ObjectInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerValidation", "(Ljava/io/ObjectInputValidation;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t java::io::ObjectInputStream::skipBytes(int32_t arg0) const {
    if (!::java::io::ObjectInputStream::_class) ::java::io::ObjectInputStream::_class = java::fetch_class("java/io/ObjectInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "skipBytes", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void java::io::Closeable::close() const {
    if (!::java::io::Closeable::_class) ::java::io::Closeable::_class = java::fetch_class("java/io/Closeable");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::InputStream::InputStream() : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0) {
    if (!::java::io::InputStream::_class) ::java::io::InputStream::_class = java::fetch_class("java/io/InputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t java::io::InputStream::available() const {
    if (!::java::io::InputStream::_class) ::java::io::InputStream::_class = java::fetch_class("java/io/InputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "available", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::io::InputStream::close() const {
    if (!::java::io::InputStream::_class) ::java::io::InputStream::_class = java::fetch_class("java/io/InputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::InputStream::mark(int32_t arg0) const {
    if (!::java::io::InputStream::_class) ::java::io::InputStream::_class = java::fetch_class("java/io/InputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "mark", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::io::InputStream::markSupported() const {
    if (!::java::io::InputStream::_class) ::java::io::InputStream::_class = java::fetch_class("java/io/InputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "markSupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::io::InputStream::read() const {
    if (!::java::io::InputStream::_class) ::java::io::InputStream::_class = java::fetch_class("java/io/InputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::io::InputStream::read(const std::vector< int8_t>& arg0) const {
    if (!::java::io::InputStream::_class) ::java::io::InputStream::_class = java::fetch_class("java/io/InputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([B)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::io::InputStream::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::InputStream::_class) ::java::io::InputStream::_class = java::fetch_class("java/io/InputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::InputStream::reset() const {
    if (!::java::io::InputStream::_class) ::java::io::InputStream::_class = java::fetch_class("java/io/InputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int64_t java::io::InputStream::skip(int64_t arg0) const {
    if (!::java::io::InputStream::_class) ::java::io::InputStream::_class = java::fetch_class("java/io/InputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "skip", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::StringBufferInputStream::StringBufferInputStream(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::java::io::StringBufferInputStream::_class) ::java::io::StringBufferInputStream::_class = java::fetch_class("java/io/StringBufferInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t java::io::StringBufferInputStream::available() const {
    if (!::java::io::StringBufferInputStream::_class) ::java::io::StringBufferInputStream::_class = java::fetch_class("java/io/StringBufferInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "available", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::io::StringBufferInputStream::read() const {
    if (!::java::io::StringBufferInputStream::_class) ::java::io::StringBufferInputStream::_class = java::fetch_class("java/io/StringBufferInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::io::StringBufferInputStream::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::StringBufferInputStream::_class) ::java::io::StringBufferInputStream::_class = java::fetch_class("java/io/StringBufferInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::StringBufferInputStream::reset() const {
    if (!::java::io::StringBufferInputStream::_class) ::java::io::StringBufferInputStream::_class = java::fetch_class("java/io/StringBufferInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int64_t java::io::StringBufferInputStream::skip(int64_t arg0) const {
    if (!::java::io::StringBufferInputStream::_class) ::java::io::StringBufferInputStream::_class = java::fetch_class("java/io/StringBufferInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "skip", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::IOException::IOException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::io::IOException::_class) ::java::io::IOException::_class = java::fetch_class("java/io/IOException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::IOException::IOException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::io::IOException::_class) ::java::io::IOException::_class = java::fetch_class("java/io/IOException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::IOException::IOException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::io::IOException::_class) ::java::io::IOException::_class = java::fetch_class("java/io/IOException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::IOException::IOException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::io::IOException::_class) ::java::io::IOException::_class = java::fetch_class("java/io/IOException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PipedReader::PipedReader() : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {
    if (!::java::io::PipedReader::_class) ::java::io::PipedReader::_class = java::fetch_class("java/io/PipedReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PipedReader::PipedReader(const ::java::io::PipedWriter& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {
    if (!::java::io::PipedReader::_class) ::java::io::PipedReader::_class = java::fetch_class("java/io/PipedReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/PipedWriter;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PipedReader::PipedReader(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {
    if (!::java::io::PipedReader::_class) ::java::io::PipedReader::_class = java::fetch_class("java/io/PipedReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PipedReader::PipedReader(const ::java::io::PipedWriter& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {
    if (!::java::io::PipedReader::_class) ::java::io::PipedReader::_class = java::fetch_class("java/io/PipedReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/PipedWriter;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void java::io::PipedReader::close() const {
    if (!::java::io::PipedReader::_class) ::java::io::PipedReader::_class = java::fetch_class("java/io/PipedReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::PipedReader::connect(const ::java::io::PipedWriter& arg0) const {
    if (!::java::io::PipedReader::_class) ::java::io::PipedReader::_class = java::fetch_class("java/io/PipedReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "connect", "(Ljava/io/PipedWriter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t java::io::PipedReader::read() const {
    if (!::java::io::PipedReader::_class) ::java::io::PipedReader::_class = java::fetch_class("java/io/PipedReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::io::PipedReader::read(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::PipedReader::_class) ::java::io::PipedReader::_class = java::fetch_class("java/io/PipedReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([CII)I");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool java::io::PipedReader::ready() const {
    if (!::java::io::PipedReader::_class) ::java::io::PipedReader::_class = java::fetch_class("java/io/PipedReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "ready", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::io::DataInput::readBoolean() const {
    if (!::java::io::DataInput::_class) ::java::io::DataInput::_class = java::fetch_class("java/io/DataInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readBoolean", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int8_t java::io::DataInput::readByte() const {
    if (!::java::io::DataInput::_class) ::java::io::DataInput::_class = java::fetch_class("java/io/DataInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readByte", "()B");
    return java::jni->CallByteMethod(obj, mid);
}

uint16_t java::io::DataInput::readChar() const {
    if (!::java::io::DataInput::_class) ::java::io::DataInput::_class = java::fetch_class("java/io/DataInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readChar", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

double java::io::DataInput::readDouble() const {
    if (!::java::io::DataInput::_class) ::java::io::DataInput::_class = java::fetch_class("java/io/DataInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readDouble", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

float java::io::DataInput::readFloat() const {
    if (!::java::io::DataInput::_class) ::java::io::DataInput::_class = java::fetch_class("java/io/DataInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFloat", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void java::io::DataInput::readFully(const std::vector< int8_t>& arg0) const {
    if (!::java::io::DataInput::_class) ::java::io::DataInput::_class = java::fetch_class("java/io/DataInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFully", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::DataInput::readFully(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::DataInput::_class) ::java::io::DataInput::_class = java::fetch_class("java/io/DataInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFully", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t java::io::DataInput::readInt() const {
    if (!::java::io::DataInput::_class) ::java::io::DataInput::_class = java::fetch_class("java/io/DataInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readInt", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::io::DataInput::readLine() const {
    if (!::java::io::DataInput::_class) ::java::io::DataInput::_class = java::fetch_class("java/io/DataInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readLine", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int64_t java::io::DataInput::readLong() const {
    if (!::java::io::DataInput::_class) ::java::io::DataInput::_class = java::fetch_class("java/io/DataInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readLong", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int16_t java::io::DataInput::readShort() const {
    if (!::java::io::DataInput::_class) ::java::io::DataInput::_class = java::fetch_class("java/io/DataInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readShort", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

int32_t java::io::DataInput::readUnsignedByte() const {
    if (!::java::io::DataInput::_class) ::java::io::DataInput::_class = java::fetch_class("java/io/DataInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readUnsignedByte", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::io::DataInput::readUnsignedShort() const {
    if (!::java::io::DataInput::_class) ::java::io::DataInput::_class = java::fetch_class("java/io/DataInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readUnsignedShort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::io::DataInput::readUTF() const {
    if (!::java::io::DataInput::_class) ::java::io::DataInput::_class = java::fetch_class("java/io/DataInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readUTF", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::io::DataInput::skipBytes(int32_t arg0) const {
    if (!::java::io::DataInput::_class) ::java::io::DataInput::_class = java::fetch_class("java/io/DataInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "skipBytes", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::io::FilterInputStream::available() const {
    if (!::java::io::FilterInputStream::_class) ::java::io::FilterInputStream::_class = java::fetch_class("java/io/FilterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "available", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::io::FilterInputStream::close() const {
    if (!::java::io::FilterInputStream::_class) ::java::io::FilterInputStream::_class = java::fetch_class("java/io/FilterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::FilterInputStream::mark(int32_t arg0) const {
    if (!::java::io::FilterInputStream::_class) ::java::io::FilterInputStream::_class = java::fetch_class("java/io/FilterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "mark", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::io::FilterInputStream::markSupported() const {
    if (!::java::io::FilterInputStream::_class) ::java::io::FilterInputStream::_class = java::fetch_class("java/io/FilterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "markSupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::io::FilterInputStream::read() const {
    if (!::java::io::FilterInputStream::_class) ::java::io::FilterInputStream::_class = java::fetch_class("java/io/FilterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::io::FilterInputStream::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::FilterInputStream::_class) ::java::io::FilterInputStream::_class = java::fetch_class("java/io/FilterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::FilterInputStream::reset() const {
    if (!::java::io::FilterInputStream::_class) ::java::io::FilterInputStream::_class = java::fetch_class("java/io/FilterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int64_t java::io::FilterInputStream::skip(int64_t arg0) const {
    if (!::java::io::FilterInputStream::_class) ::java::io::FilterInputStream::_class = java::fetch_class("java/io/FilterInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "skip", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::FileNotFoundException::FileNotFoundException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::io::FileNotFoundException::_class) ::java::io::FileNotFoundException::_class = java::fetch_class("java/io/FileNotFoundException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::FileNotFoundException::FileNotFoundException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::io::FileNotFoundException::_class) ::java::io::FileNotFoundException::_class = java::fetch_class("java/io/FileNotFoundException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::SerializablePermission::SerializablePermission(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::BasicPermission((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {
    if (!::java::io::SerializablePermission::_class) ::java::io::SerializablePermission::_class = java::fetch_class("java/io/SerializablePermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::SerializablePermission::SerializablePermission(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::BasicPermission((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {
    if (!::java::io::SerializablePermission::_class) ::java::io::SerializablePermission::_class = java::fetch_class("java/io/SerializablePermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String java::io::SerializablePermission::getActions() const {
    if (!::java::io::SerializablePermission::_class) ::java::io::SerializablePermission::_class = java::fetch_class("java/io/SerializablePermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActions", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::io::SerializablePermission::implies(const ::java::security::Permission& arg0) const {
    if (!::java::io::SerializablePermission::_class) ::java::io::SerializablePermission::_class = java::fetch_class("java/io/SerializablePermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "implies", "(Ljava/security/Permission;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::io::FilterReader::close() const {
    if (!::java::io::FilterReader::_class) ::java::io::FilterReader::_class = java::fetch_class("java/io/FilterReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::FilterReader::mark(int32_t arg0) const {
    if (!::java::io::FilterReader::_class) ::java::io::FilterReader::_class = java::fetch_class("java/io/FilterReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "mark", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::io::FilterReader::markSupported() const {
    if (!::java::io::FilterReader::_class) ::java::io::FilterReader::_class = java::fetch_class("java/io/FilterReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "markSupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::io::FilterReader::read() const {
    if (!::java::io::FilterReader::_class) ::java::io::FilterReader::_class = java::fetch_class("java/io/FilterReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::io::FilterReader::read(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::FilterReader::_class) ::java::io::FilterReader::_class = java::fetch_class("java/io/FilterReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([CII)I");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool java::io::FilterReader::ready() const {
    if (!::java::io::FilterReader::_class) ::java::io::FilterReader::_class = java::fetch_class("java/io/FilterReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "ready", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::io::FilterReader::reset() const {
    if (!::java::io::FilterReader::_class) ::java::io::FilterReader::_class = java::fetch_class("java/io/FilterReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int64_t java::io::FilterReader::skip(int64_t arg0) const {
    if (!::java::io::FilterReader::_class) ::java::io::FilterReader::_class = java::fetch_class("java/io/FilterReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "skip", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::FileReader::FileReader(const ::java::io::File& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStreamReader((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {
    if (!::java::io::FileReader::_class) ::java::io::FileReader::_class = java::fetch_class("java/io/FileReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/File;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::FileReader::FileReader(const ::java::io::FileDescriptor& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStreamReader((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {
    if (!::java::io::FileReader::_class) ::java::io::FileReader::_class = java::fetch_class("java/io/FileReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/FileDescriptor;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::FileReader::FileReader(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStreamReader((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {
    if (!::java::io::FileReader::_class) ::java::io::FileReader::_class = java::fetch_class("java/io/FileReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::CharArrayWriter::CharArrayWriter() : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::CharArrayWriter::_class) ::java::io::CharArrayWriter::_class = java::fetch_class("java/io/CharArrayWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::CharArrayWriter::CharArrayWriter(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::CharArrayWriter::_class) ::java::io::CharArrayWriter::_class = java::fetch_class("java/io/CharArrayWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::io::CharArrayWriter::close() const {
    if (!::java::io::CharArrayWriter::_class) ::java::io::CharArrayWriter::_class = java::fetch_class("java/io/CharArrayWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::CharArrayWriter::flush() const {
    if (!::java::io::CharArrayWriter::_class) ::java::io::CharArrayWriter::_class = java::fetch_class("java/io/CharArrayWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::CharArrayWriter::reset() const {
    if (!::java::io::CharArrayWriter::_class) ::java::io::CharArrayWriter::_class = java::fetch_class("java/io/CharArrayWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t java::io::CharArrayWriter::size() const {
    if (!::java::io::CharArrayWriter::_class) ::java::io::CharArrayWriter::_class = java::fetch_class("java/io/CharArrayWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< uint16_t> java::io::CharArrayWriter::toCharArray() const {
    if (!::java::io::CharArrayWriter::_class) ::java::io::CharArrayWriter::_class = java::fetch_class("java/io/CharArrayWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "toCharArray", "()[C");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jchar* reta = java::jni->GetCharArrayElements((jcharArray)ret, nullptr);
    std::vector< uint16_t> _ret(reta, reta+rets);
    java::jni->ReleaseCharArrayElements((jcharArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String java::io::CharArrayWriter::toString() const {
    if (!::java::io::CharArrayWriter::_class) ::java::io::CharArrayWriter::_class = java::fetch_class("java/io/CharArrayWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::io::CharArrayWriter::write(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::CharArrayWriter::_class) ::java::io::CharArrayWriter::_class = java::fetch_class("java/io/CharArrayWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::CharArrayWriter::write(int32_t arg0) const {
    if (!::java::io::CharArrayWriter::_class) ::java::io::CharArrayWriter::_class = java::fetch_class("java/io/CharArrayWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::CharArrayWriter::write(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::CharArrayWriter::_class) ::java::io::CharArrayWriter::_class = java::fetch_class("java/io/CharArrayWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(Ljava/lang/String;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::CharArrayWriter::writeTo(const ::java::io::Writer& arg0) const {
    if (!::java::io::CharArrayWriter::_class) ::java::io::CharArrayWriter::_class = java::fetch_class("java/io/CharArrayWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeTo", "(Ljava/io/Writer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::io::CharArrayWriter java::io::CharArrayWriter::append(uint16_t arg0) const {
    if (!::java::io::CharArrayWriter::_class) ::java::io::CharArrayWriter::_class = java::fetch_class("java/io/CharArrayWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(C)Ljava/io/CharArrayWriter;");
    uint16_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::CharArrayWriter _ret(ret);
    return _ret;
}

::java::io::CharArrayWriter java::io::CharArrayWriter::append(const ::java::lang::CharSequence& arg0) const {
    if (!::java::io::CharArrayWriter::_class) ::java::io::CharArrayWriter::_class = java::fetch_class("java/io/CharArrayWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/CharSequence;)Ljava/io/CharArrayWriter;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::CharArrayWriter _ret(ret);
    return _ret;
}

::java::io::CharArrayWriter java::io::CharArrayWriter::append(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::CharArrayWriter::_class) ::java::io::CharArrayWriter::_class = java::fetch_class("java/io/CharArrayWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/CharSequence;II)Ljava/io/CharArrayWriter;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::io::CharArrayWriter _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::StreamCorruptedException::StreamCorruptedException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::ObjectStreamException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::io::StreamCorruptedException::_class) ::java::io::StreamCorruptedException::_class = java::fetch_class("java/io/StreamCorruptedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::StreamCorruptedException::StreamCorruptedException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::ObjectStreamException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::io::StreamCorruptedException::_class) ::java::io::StreamCorruptedException::_class = java::fetch_class("java/io/StreamCorruptedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool java::io::FilenameFilter::accept(const ::java::io::File& arg0, const ::java::lang::String& arg1) const {
    if (!::java::io::FilenameFilter::_class) ::java::io::FilenameFilter::_class = java::fetch_class("java/io/FilenameFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "accept", "(Ljava/io/File;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::OutputStreamWriter::OutputStreamWriter(const ::java::io::OutputStream& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::OutputStreamWriter::_class) ::java::io::OutputStreamWriter::_class = java::fetch_class("java/io/OutputStreamWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::OutputStreamWriter::OutputStreamWriter(const ::java::io::OutputStream& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::OutputStreamWriter::_class) ::java::io::OutputStreamWriter::_class = java::fetch_class("java/io/OutputStreamWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::OutputStreamWriter::OutputStreamWriter(const ::java::io::OutputStream& arg0, const ::java::nio::charset::Charset& arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::OutputStreamWriter::_class) ::java::io::OutputStreamWriter::_class = java::fetch_class("java/io/OutputStreamWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;Ljava/nio/charset/Charset;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::OutputStreamWriter::OutputStreamWriter(const ::java::io::OutputStream& arg0, const ::java::nio::charset::CharsetEncoder& arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::OutputStreamWriter::_class) ::java::io::OutputStreamWriter::_class = java::fetch_class("java/io/OutputStreamWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;Ljava/nio/charset/CharsetEncoder;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void java::io::OutputStreamWriter::close() const {
    if (!::java::io::OutputStreamWriter::_class) ::java::io::OutputStreamWriter::_class = java::fetch_class("java/io/OutputStreamWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::OutputStreamWriter::flush() const {
    if (!::java::io::OutputStreamWriter::_class) ::java::io::OutputStreamWriter::_class = java::fetch_class("java/io/OutputStreamWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String java::io::OutputStreamWriter::getEncoding() const {
    if (!::java::io::OutputStreamWriter::_class) ::java::io::OutputStreamWriter::_class = java::fetch_class("java/io/OutputStreamWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncoding", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::io::OutputStreamWriter::write(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::OutputStreamWriter::_class) ::java::io::OutputStreamWriter::_class = java::fetch_class("java/io/OutputStreamWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::OutputStreamWriter::write(int32_t arg0) const {
    if (!::java::io::OutputStreamWriter::_class) ::java::io::OutputStreamWriter::_class = java::fetch_class("java/io/OutputStreamWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::OutputStreamWriter::write(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::OutputStreamWriter::_class) ::java::io::OutputStreamWriter::_class = java::fetch_class("java/io/OutputStreamWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(Ljava/lang/String;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::File::File(const ::java::io::File& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/File;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::File::File(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::File::File(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::File::File(const ::java::net::URI& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/net/URI;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

std::vector< ::java::io::File> java::io::File::listRoots(){
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "listRoots", "()[Ljava/io/File;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::io::File> _ret(rets, ::java::io::File((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::io::File retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool java::io::File::canExecute() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "canExecute", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::io::File::canRead() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "canRead", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::io::File::canWrite() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "canWrite", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::io::File::compareTo(const ::java::io::File& arg0) const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/io/File;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool java::io::File::delete_() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "delete_", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::io::File::deleteOnExit() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "deleteOnExit", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::io::File::equals(const ::java::lang::Object& arg0) const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::io::File::exists() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "exists", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String java::io::File::getAbsolutePath() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAbsolutePath", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::io::File java::io::File::getAbsoluteFile() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAbsoluteFile", "()Ljava/io/File;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::File _ret(ret);
    return _ret;
}

::java::lang::String java::io::File::getCanonicalPath() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCanonicalPath", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::io::File java::io::File::getCanonicalFile() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCanonicalFile", "()Ljava/io/File;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::File _ret(ret);
    return _ret;
}

::java::lang::String java::io::File::getName() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::io::File::getParent() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParent", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::io::File java::io::File::getParentFile() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParentFile", "()Ljava/io/File;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::File _ret(ret);
    return _ret;
}

::java::lang::String java::io::File::getPath() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPath", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::io::File::hashCode() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::io::File::isAbsolute() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAbsolute", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::io::File::isDirectory() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDirectory", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::io::File::isFile() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFile", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::io::File::isHidden() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "isHidden", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int64_t java::io::File::lastModified() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastModified", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

bool java::io::File::setLastModified(int64_t arg0) const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLastModified", "(J)Z");
    int64_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::io::File::setReadOnly() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReadOnly", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::io::File::setExecutable(bool arg0, bool arg1) const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExecutable", "(ZZ)Z");
    bool _arg0 = arg0;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool java::io::File::setExecutable(bool arg0) const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExecutable", "(Z)Z");
    bool _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::io::File::setReadable(bool arg0, bool arg1) const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReadable", "(ZZ)Z");
    bool _arg0 = arg0;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool java::io::File::setReadable(bool arg0) const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReadable", "(Z)Z");
    bool _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::io::File::setWritable(bool arg0, bool arg1) const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWritable", "(ZZ)Z");
    bool _arg0 = arg0;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool java::io::File::setWritable(bool arg0) const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWritable", "(Z)Z");
    bool _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int64_t java::io::File::length() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

std::vector< ::java::lang::String> java::io::File::list() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "list", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> java::io::File::list(const ::java::io::FilenameFilter& arg0) const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "list", "(Ljava/io/FilenameFilter;)[Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::io::File> java::io::File::listFiles() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "listFiles", "()[Ljava/io/File;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::io::File> _ret(rets, ::java::io::File((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::io::File retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::io::File> java::io::File::listFiles(const ::java::io::FilenameFilter& arg0) const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "listFiles", "(Ljava/io/FilenameFilter;)[Ljava/io/File;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::io::File> _ret(rets, ::java::io::File((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::io::File retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::io::File> java::io::File::listFiles(const ::java::io::FileFilter& arg0) const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "listFiles", "(Ljava/io/FileFilter;)[Ljava/io/File;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::io::File> _ret(rets, ::java::io::File((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::io::File retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool java::io::File::mkdir() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "mkdir", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::io::File::mkdirs() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "mkdirs", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::io::File::createNewFile() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "createNewFile", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::io::File java::io::File::createTempFile(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createTempFile", "(Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::io::File _ret(ret);
    return _ret;
}

::java::io::File java::io::File::createTempFile(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::io::File& arg2){
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createTempFile", "(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Ljava/io/File;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::io::File _ret(ret);
    return _ret;
}

bool java::io::File::renameTo(const ::java::io::File& arg0) const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "renameTo", "(Ljava/io/File;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String java::io::File::toString() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::net::URI java::io::File::toURI() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "toURI", "()Ljava/net/URI;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::URI _ret(ret);
    return _ret;
}

::java::net::URL java::io::File::toURL() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "toURL", "()Ljava/net/URL;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::URL _ret(ret);
    return _ret;
}

int64_t java::io::File::getTotalSpace() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTotalSpace", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t java::io::File::getUsableSpace() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUsableSpace", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t java::io::File::getFreeSpace() const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFreeSpace", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int32_t java::io::File::compareTo(const ::java::lang::Object& arg0) const {
    if (!::java::io::File::_class) ::java::io::File::_class = java::fetch_class("java/io/File");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::NotActiveException::NotActiveException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::ObjectStreamException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::io::NotActiveException::_class) ::java::io::NotActiveException::_class = java::fetch_class("java/io/NotActiveException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::NotActiveException::NotActiveException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::ObjectStreamException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::io::NotActiveException::_class) ::java::io::NotActiveException::_class = java::fetch_class("java/io/NotActiveException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::io::DataOutput::write(const std::vector< int8_t>& arg0) const {
    if (!::java::io::DataOutput::_class) ::java::io::DataOutput::_class = java::fetch_class("java/io/DataOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::DataOutput::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::DataOutput::_class) ::java::io::DataOutput::_class = java::fetch_class("java/io/DataOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::DataOutput::write(int32_t arg0) const {
    if (!::java::io::DataOutput::_class) ::java::io::DataOutput::_class = java::fetch_class("java/io/DataOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::DataOutput::writeBoolean(bool arg0) const {
    if (!::java::io::DataOutput::_class) ::java::io::DataOutput::_class = java::fetch_class("java/io/DataOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeBoolean", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::DataOutput::writeByte(int32_t arg0) const {
    if (!::java::io::DataOutput::_class) ::java::io::DataOutput::_class = java::fetch_class("java/io/DataOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeByte", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::DataOutput::writeBytes(const ::java::lang::String& arg0) const {
    if (!::java::io::DataOutput::_class) ::java::io::DataOutput::_class = java::fetch_class("java/io/DataOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeBytes", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::DataOutput::writeChar(int32_t arg0) const {
    if (!::java::io::DataOutput::_class) ::java::io::DataOutput::_class = java::fetch_class("java/io/DataOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeChar", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::DataOutput::writeChars(const ::java::lang::String& arg0) const {
    if (!::java::io::DataOutput::_class) ::java::io::DataOutput::_class = java::fetch_class("java/io/DataOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeChars", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::DataOutput::writeDouble(double arg0) const {
    if (!::java::io::DataOutput::_class) ::java::io::DataOutput::_class = java::fetch_class("java/io/DataOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeDouble", "(D)V");
    double _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::DataOutput::writeFloat(float arg0) const {
    if (!::java::io::DataOutput::_class) ::java::io::DataOutput::_class = java::fetch_class("java/io/DataOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeFloat", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::DataOutput::writeInt(int32_t arg0) const {
    if (!::java::io::DataOutput::_class) ::java::io::DataOutput::_class = java::fetch_class("java/io/DataOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeInt", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::DataOutput::writeLong(int64_t arg0) const {
    if (!::java::io::DataOutput::_class) ::java::io::DataOutput::_class = java::fetch_class("java/io/DataOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeLong", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::DataOutput::writeShort(int32_t arg0) const {
    if (!::java::io::DataOutput::_class) ::java::io::DataOutput::_class = java::fetch_class("java/io/DataOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeShort", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::DataOutput::writeUTF(const ::java::lang::String& arg0) const {
    if (!::java::io::DataOutput::_class) ::java::io::DataOutput::_class = java::fetch_class("java/io/DataOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeUTF", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::BufferedInputStream::BufferedInputStream(const ::java::io::InputStream& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::java::io::BufferedInputStream::_class) ::java::io::BufferedInputStream::_class = java::fetch_class("java/io/BufferedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::BufferedInputStream::BufferedInputStream(const ::java::io::InputStream& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::java::io::BufferedInputStream::_class) ::java::io::BufferedInputStream::_class = java::fetch_class("java/io/BufferedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int32_t java::io::BufferedInputStream::available() const {
    if (!::java::io::BufferedInputStream::_class) ::java::io::BufferedInputStream::_class = java::fetch_class("java/io/BufferedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "available", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::io::BufferedInputStream::close() const {
    if (!::java::io::BufferedInputStream::_class) ::java::io::BufferedInputStream::_class = java::fetch_class("java/io/BufferedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::BufferedInputStream::mark(int32_t arg0) const {
    if (!::java::io::BufferedInputStream::_class) ::java::io::BufferedInputStream::_class = java::fetch_class("java/io/BufferedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "mark", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::io::BufferedInputStream::markSupported() const {
    if (!::java::io::BufferedInputStream::_class) ::java::io::BufferedInputStream::_class = java::fetch_class("java/io/BufferedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "markSupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::io::BufferedInputStream::read() const {
    if (!::java::io::BufferedInputStream::_class) ::java::io::BufferedInputStream::_class = java::fetch_class("java/io/BufferedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::io::BufferedInputStream::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::BufferedInputStream::_class) ::java::io::BufferedInputStream::_class = java::fetch_class("java/io/BufferedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::BufferedInputStream::reset() const {
    if (!::java::io::BufferedInputStream::_class) ::java::io::BufferedInputStream::_class = java::fetch_class("java/io/BufferedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int64_t java::io::BufferedInputStream::skip(int64_t arg0) const {
    if (!::java::io::BufferedInputStream::_class) ::java::io::BufferedInputStream::_class = java::fetch_class("java/io/BufferedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "skip", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::FileOutputStream::FileOutputStream(const ::java::io::File& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::java::io::FileOutputStream::_class) ::java::io::FileOutputStream::_class = java::fetch_class("java/io/FileOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/File;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::FileOutputStream::FileOutputStream(const ::java::io::File& arg0, bool arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::java::io::FileOutputStream::_class) ::java::io::FileOutputStream::_class = java::fetch_class("java/io/FileOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/File;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::FileOutputStream::FileOutputStream(const ::java::io::FileDescriptor& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::java::io::FileOutputStream::_class) ::java::io::FileOutputStream::_class = java::fetch_class("java/io/FileOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/FileDescriptor;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::FileOutputStream::FileOutputStream(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::java::io::FileOutputStream::_class) ::java::io::FileOutputStream::_class = java::fetch_class("java/io/FileOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::FileOutputStream::FileOutputStream(const ::java::lang::String& arg0, bool arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::java::io::FileOutputStream::_class) ::java::io::FileOutputStream::_class = java::fetch_class("java/io/FileOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void java::io::FileOutputStream::close() const {
    if (!::java::io::FileOutputStream::_class) ::java::io::FileOutputStream::_class = java::fetch_class("java/io/FileOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::nio::channels::FileChannel java::io::FileOutputStream::getChannel() const {
    if (!::java::io::FileOutputStream::_class) ::java::io::FileOutputStream::_class = java::fetch_class("java/io/FileOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChannel", "()Ljava/nio/channels/FileChannel;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::channels::FileChannel _ret(ret);
    return _ret;
}

::java::io::FileDescriptor java::io::FileOutputStream::getFD() const {
    if (!::java::io::FileOutputStream::_class) ::java::io::FileOutputStream::_class = java::fetch_class("java/io/FileOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFD", "()Ljava/io/FileDescriptor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::FileDescriptor _ret(ret);
    return _ret;
}

void java::io::FileOutputStream::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::FileOutputStream::_class) ::java::io::FileOutputStream::_class = java::fetch_class("java/io/FileOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::FileOutputStream::write(int32_t arg0) const {
    if (!::java::io::FileOutputStream::_class) ::java::io::FileOutputStream::_class = java::fetch_class("java/io/FileOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::LineNumberReader::LineNumberReader(const ::java::io::Reader& arg0) : ::java::lang::Object((jobject)0), ::java::io::BufferedReader((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {
    if (!::java::io::LineNumberReader::_class) ::java::io::LineNumberReader::_class = java::fetch_class("java/io/LineNumberReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/Reader;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::LineNumberReader::LineNumberReader(const ::java::io::Reader& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::io::BufferedReader((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {
    if (!::java::io::LineNumberReader::_class) ::java::io::LineNumberReader::_class = java::fetch_class("java/io/LineNumberReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/Reader;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int32_t java::io::LineNumberReader::getLineNumber() const {
    if (!::java::io::LineNumberReader::_class) ::java::io::LineNumberReader::_class = java::fetch_class("java/io/LineNumberReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineNumber", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::io::LineNumberReader::mark(int32_t arg0) const {
    if (!::java::io::LineNumberReader::_class) ::java::io::LineNumberReader::_class = java::fetch_class("java/io/LineNumberReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "mark", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t java::io::LineNumberReader::read() const {
    if (!::java::io::LineNumberReader::_class) ::java::io::LineNumberReader::_class = java::fetch_class("java/io/LineNumberReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::io::LineNumberReader::read(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::LineNumberReader::_class) ::java::io::LineNumberReader::_class = java::fetch_class("java/io/LineNumberReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([CII)I");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::String java::io::LineNumberReader::readLine() const {
    if (!::java::io::LineNumberReader::_class) ::java::io::LineNumberReader::_class = java::fetch_class("java/io/LineNumberReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "readLine", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::io::LineNumberReader::reset() const {
    if (!::java::io::LineNumberReader::_class) ::java::io::LineNumberReader::_class = java::fetch_class("java/io/LineNumberReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::LineNumberReader::setLineNumber(int32_t arg0) const {
    if (!::java::io::LineNumberReader::_class) ::java::io::LineNumberReader::_class = java::fetch_class("java/io/LineNumberReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLineNumber", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t java::io::LineNumberReader::skip(int64_t arg0) const {
    if (!::java::io::LineNumberReader::_class) ::java::io::LineNumberReader::_class = java::fetch_class("java/io/LineNumberReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "skip", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PushbackInputStream::PushbackInputStream(const ::java::io::InputStream& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::java::io::PushbackInputStream::_class) ::java::io::PushbackInputStream::_class = java::fetch_class("java/io/PushbackInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PushbackInputStream::PushbackInputStream(const ::java::io::InputStream& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::java::io::PushbackInputStream::_class) ::java::io::PushbackInputStream::_class = java::fetch_class("java/io/PushbackInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int32_t java::io::PushbackInputStream::available() const {
    if (!::java::io::PushbackInputStream::_class) ::java::io::PushbackInputStream::_class = java::fetch_class("java/io/PushbackInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "available", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::io::PushbackInputStream::close() const {
    if (!::java::io::PushbackInputStream::_class) ::java::io::PushbackInputStream::_class = java::fetch_class("java/io/PushbackInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::io::PushbackInputStream::markSupported() const {
    if (!::java::io::PushbackInputStream::_class) ::java::io::PushbackInputStream::_class = java::fetch_class("java/io/PushbackInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "markSupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::io::PushbackInputStream::read() const {
    if (!::java::io::PushbackInputStream::_class) ::java::io::PushbackInputStream::_class = java::fetch_class("java/io/PushbackInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::io::PushbackInputStream::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::PushbackInputStream::_class) ::java::io::PushbackInputStream::_class = java::fetch_class("java/io/PushbackInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int64_t java::io::PushbackInputStream::skip(int64_t arg0) const {
    if (!::java::io::PushbackInputStream::_class) ::java::io::PushbackInputStream::_class = java::fetch_class("java/io/PushbackInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "skip", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

void java::io::PushbackInputStream::unread(const std::vector< int8_t>& arg0) const {
    if (!::java::io::PushbackInputStream::_class) ::java::io::PushbackInputStream::_class = java::fetch_class("java/io/PushbackInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "unread", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PushbackInputStream::unread(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::PushbackInputStream::_class) ::java::io::PushbackInputStream::_class = java::fetch_class("java/io/PushbackInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "unread", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::PushbackInputStream::unread(int32_t arg0) const {
    if (!::java::io::PushbackInputStream::_class) ::java::io::PushbackInputStream::_class = java::fetch_class("java/io/PushbackInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "unread", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PushbackInputStream::mark(int32_t arg0) const {
    if (!::java::io::PushbackInputStream::_class) ::java::io::PushbackInputStream::_class = java::fetch_class("java/io/PushbackInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "mark", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PushbackInputStream::reset() const {
    if (!::java::io::PushbackInputStream::_class) ::java::io::PushbackInputStream::_class = java::fetch_class("java/io/PushbackInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PipedOutputStream::PipedOutputStream() : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::java::io::PipedOutputStream::_class) ::java::io::PipedOutputStream::_class = java::fetch_class("java/io/PipedOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::PipedOutputStream::PipedOutputStream(const ::java::io::PipedInputStream& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::java::io::PipedOutputStream::_class) ::java::io::PipedOutputStream::_class = java::fetch_class("java/io/PipedOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/PipedInputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::io::PipedOutputStream::close() const {
    if (!::java::io::PipedOutputStream::_class) ::java::io::PipedOutputStream::_class = java::fetch_class("java/io/PipedOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::PipedOutputStream::connect(const ::java::io::PipedInputStream& arg0) const {
    if (!::java::io::PipedOutputStream::_class) ::java::io::PipedOutputStream::_class = java::fetch_class("java/io/PipedOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "connect", "(Ljava/io/PipedInputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::PipedOutputStream::flush() const {
    if (!::java::io::PipedOutputStream::_class) ::java::io::PipedOutputStream::_class = java::fetch_class("java/io/PipedOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::PipedOutputStream::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::PipedOutputStream::_class) ::java::io::PipedOutputStream::_class = java::fetch_class("java/io/PipedOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::PipedOutputStream::write(int32_t arg0) const {
    if (!::java::io::PipedOutputStream::_class) ::java::io::PipedOutputStream::_class = java::fetch_class("java/io/PipedOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::Reader::close() const {
    if (!::java::io::Reader::_class) ::java::io::Reader::_class = java::fetch_class("java/io/Reader");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::Reader::mark(int32_t arg0) const {
    if (!::java::io::Reader::_class) ::java::io::Reader::_class = java::fetch_class("java/io/Reader");
    static jmethodID mid = java::jni->GetMethodID(_class, "mark", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::io::Reader::markSupported() const {
    if (!::java::io::Reader::_class) ::java::io::Reader::_class = java::fetch_class("java/io/Reader");
    static jmethodID mid = java::jni->GetMethodID(_class, "markSupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::io::Reader::read() const {
    if (!::java::io::Reader::_class) ::java::io::Reader::_class = java::fetch_class("java/io/Reader");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::io::Reader::read(const std::vector< uint16_t>& arg0) const {
    if (!::java::io::Reader::_class) ::java::io::Reader::_class = java::fetch_class("java/io/Reader");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([C)I");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::io::Reader::read(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::Reader::_class) ::java::io::Reader::_class = java::fetch_class("java/io/Reader");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([CII)I");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool java::io::Reader::ready() const {
    if (!::java::io::Reader::_class) ::java::io::Reader::_class = java::fetch_class("java/io/Reader");
    static jmethodID mid = java::jni->GetMethodID(_class, "ready", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::io::Reader::reset() const {
    if (!::java::io::Reader::_class) ::java::io::Reader::_class = java::fetch_class("java/io/Reader");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int64_t java::io::Reader::skip(int64_t arg0) const {
    if (!::java::io::Reader::_class) ::java::io::Reader::_class = java::fetch_class("java/io/Reader");
    static jmethodID mid = java::jni->GetMethodID(_class, "skip", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int32_t java::io::Reader::read(const ::java::nio::CharBuffer& arg0) const {
    if (!::java::io::Reader::_class) ::java::io::Reader::_class = java::fetch_class("java/io/Reader");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "(Ljava/nio/CharBuffer;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::FilePermission::FilePermission(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {
    if (!::java::io::FilePermission::_class) ::java::io::FilePermission::_class = java::fetch_class("java/io/FilePermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String java::io::FilePermission::getActions() const {
    if (!::java::io::FilePermission::_class) ::java::io::FilePermission::_class = java::fetch_class("java/io/FilePermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActions", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::io::FilePermission::implies(const ::java::security::Permission& arg0) const {
    if (!::java::io::FilePermission::_class) ::java::io::FilePermission::_class = java::fetch_class("java/io/FilePermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "implies", "(Ljava/security/Permission;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::BufferedWriter::BufferedWriter(const ::java::io::Writer& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::BufferedWriter::_class) ::java::io::BufferedWriter::_class = java::fetch_class("java/io/BufferedWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/Writer;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::BufferedWriter::BufferedWriter(const ::java::io::Writer& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::java::io::BufferedWriter::_class) ::java::io::BufferedWriter::_class = java::fetch_class("java/io/BufferedWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/Writer;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void java::io::BufferedWriter::close() const {
    if (!::java::io::BufferedWriter::_class) ::java::io::BufferedWriter::_class = java::fetch_class("java/io/BufferedWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::BufferedWriter::flush() const {
    if (!::java::io::BufferedWriter::_class) ::java::io::BufferedWriter::_class = java::fetch_class("java/io/BufferedWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::BufferedWriter::newLine() const {
    if (!::java::io::BufferedWriter::_class) ::java::io::BufferedWriter::_class = java::fetch_class("java/io/BufferedWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "newLine", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::BufferedWriter::write(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::BufferedWriter::_class) ::java::io::BufferedWriter::_class = java::fetch_class("java/io/BufferedWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::BufferedWriter::write(int32_t arg0) const {
    if (!::java::io::BufferedWriter::_class) ::java::io::BufferedWriter::_class = java::fetch_class("java/io/BufferedWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::BufferedWriter::write(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::BufferedWriter::_class) ::java::io::BufferedWriter::_class = java::fetch_class("java/io/BufferedWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(Ljava/lang/String;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool java::io::FileFilter::accept(const ::java::io::File& arg0) const {
    if (!::java::io::FileFilter::_class) ::java::io::FileFilter::_class = java::fetch_class("java/io/FileFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "accept", "(Ljava/io/File;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::FileDescriptor::FileDescriptor() : ::java::lang::Object((jobject)0) {
    if (!::java::io::FileDescriptor::_class) ::java::io::FileDescriptor::_class = java::fetch_class("java/io/FileDescriptor");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void java::io::FileDescriptor::sync() const {
    if (!::java::io::FileDescriptor::_class) ::java::io::FileDescriptor::_class = java::fetch_class("java/io/FileDescriptor");
    static jmethodID mid = java::jni->GetMethodID(_class, "sync", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::io::FileDescriptor::valid() const {
    if (!::java::io::FileDescriptor::_class) ::java::io::FileDescriptor::_class = java::fetch_class("java/io/FileDescriptor");
    static jmethodID mid = java::jni->GetMethodID(_class, "valid", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String java::io::FileDescriptor::toString() const {
    if (!::java::io::FileDescriptor::_class) ::java::io::FileDescriptor::_class = java::fetch_class("java/io/FileDescriptor");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::BufferedReader::BufferedReader(const ::java::io::Reader& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {
    if (!::java::io::BufferedReader::_class) ::java::io::BufferedReader::_class = java::fetch_class("java/io/BufferedReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/Reader;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::BufferedReader::BufferedReader(const ::java::io::Reader& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {
    if (!::java::io::BufferedReader::_class) ::java::io::BufferedReader::_class = java::fetch_class("java/io/BufferedReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/Reader;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void java::io::BufferedReader::close() const {
    if (!::java::io::BufferedReader::_class) ::java::io::BufferedReader::_class = java::fetch_class("java/io/BufferedReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::BufferedReader::mark(int32_t arg0) const {
    if (!::java::io::BufferedReader::_class) ::java::io::BufferedReader::_class = java::fetch_class("java/io/BufferedReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "mark", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::io::BufferedReader::markSupported() const {
    if (!::java::io::BufferedReader::_class) ::java::io::BufferedReader::_class = java::fetch_class("java/io/BufferedReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "markSupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::io::BufferedReader::read() const {
    if (!::java::io::BufferedReader::_class) ::java::io::BufferedReader::_class = java::fetch_class("java/io/BufferedReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::io::BufferedReader::read(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::BufferedReader::_class) ::java::io::BufferedReader::_class = java::fetch_class("java/io/BufferedReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([CII)I");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::String java::io::BufferedReader::readLine() const {
    if (!::java::io::BufferedReader::_class) ::java::io::BufferedReader::_class = java::fetch_class("java/io/BufferedReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "readLine", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::io::BufferedReader::ready() const {
    if (!::java::io::BufferedReader::_class) ::java::io::BufferedReader::_class = java::fetch_class("java/io/BufferedReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "ready", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::io::BufferedReader::reset() const {
    if (!::java::io::BufferedReader::_class) ::java::io::BufferedReader::_class = java::fetch_class("java/io/BufferedReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int64_t java::io::BufferedReader::skip(int64_t arg0) const {
    if (!::java::io::BufferedReader::_class) ::java::io::BufferedReader::_class = java::fetch_class("java/io/BufferedReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "skip", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::ByteArrayOutputStream::ByteArrayOutputStream() : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::java::io::ByteArrayOutputStream::_class) ::java::io::ByteArrayOutputStream::_class = java::fetch_class("java/io/ByteArrayOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::ByteArrayOutputStream::ByteArrayOutputStream(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::java::io::ByteArrayOutputStream::_class) ::java::io::ByteArrayOutputStream::_class = java::fetch_class("java/io/ByteArrayOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::io::ByteArrayOutputStream::close() const {
    if (!::java::io::ByteArrayOutputStream::_class) ::java::io::ByteArrayOutputStream::_class = java::fetch_class("java/io/ByteArrayOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::ByteArrayOutputStream::reset() const {
    if (!::java::io::ByteArrayOutputStream::_class) ::java::io::ByteArrayOutputStream::_class = java::fetch_class("java/io/ByteArrayOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t java::io::ByteArrayOutputStream::size() const {
    if (!::java::io::ByteArrayOutputStream::_class) ::java::io::ByteArrayOutputStream::_class = java::fetch_class("java/io/ByteArrayOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< int8_t> java::io::ByteArrayOutputStream::toByteArray() const {
    if (!::java::io::ByteArrayOutputStream::_class) ::java::io::ByteArrayOutputStream::_class = java::fetch_class("java/io/ByteArrayOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "toByteArray", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String java::io::ByteArrayOutputStream::toString() const {
    if (!::java::io::ByteArrayOutputStream::_class) ::java::io::ByteArrayOutputStream::_class = java::fetch_class("java/io/ByteArrayOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::io::ByteArrayOutputStream::toString(int32_t arg0) const {
    if (!::java::io::ByteArrayOutputStream::_class) ::java::io::ByteArrayOutputStream::_class = java::fetch_class("java/io/ByteArrayOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::io::ByteArrayOutputStream::toString(const ::java::lang::String& arg0) const {
    if (!::java::io::ByteArrayOutputStream::_class) ::java::io::ByteArrayOutputStream::_class = java::fetch_class("java/io/ByteArrayOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::io::ByteArrayOutputStream::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::ByteArrayOutputStream::_class) ::java::io::ByteArrayOutputStream::_class = java::fetch_class("java/io/ByteArrayOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::ByteArrayOutputStream::write(int32_t arg0) const {
    if (!::java::io::ByteArrayOutputStream::_class) ::java::io::ByteArrayOutputStream::_class = java::fetch_class("java/io/ByteArrayOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::ByteArrayOutputStream::writeTo(const ::java::io::OutputStream& arg0) const {
    if (!::java::io::ByteArrayOutputStream::_class) ::java::io::ByteArrayOutputStream::_class = java::fetch_class("java/io/ByteArrayOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeTo", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::WriteAbortedException::WriteAbortedException(const ::java::lang::String& arg0, const ::java::lang::Exception& arg1) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::ObjectStreamException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::io::WriteAbortedException::_class) ::java::io::WriteAbortedException::_class = java::fetch_class("java/io/WriteAbortedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String java::io::WriteAbortedException::getMessage() const {
    if (!::java::io::WriteAbortedException::_class) ::java::io::WriteAbortedException::_class = java::fetch_class("java/io/WriteAbortedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Throwable java::io::WriteAbortedException::getCause() const {
    if (!::java::io::WriteAbortedException::_class) ::java::io::WriteAbortedException::_class = java::fetch_class("java/io/WriteAbortedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCause", "()Ljava/lang/Throwable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Throwable _ret(ret);
    return _ret;
}

int32_t java::io::ObjectInput::available() const {
    if (!::java::io::ObjectInput::_class) ::java::io::ObjectInput::_class = java::fetch_class("java/io/ObjectInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "available", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::io::ObjectInput::close() const {
    if (!::java::io::ObjectInput::_class) ::java::io::ObjectInput::_class = java::fetch_class("java/io/ObjectInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t java::io::ObjectInput::read() const {
    if (!::java::io::ObjectInput::_class) ::java::io::ObjectInput::_class = java::fetch_class("java/io/ObjectInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::io::ObjectInput::read(const std::vector< int8_t>& arg0) const {
    if (!::java::io::ObjectInput::_class) ::java::io::ObjectInput::_class = java::fetch_class("java/io/ObjectInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([B)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::io::ObjectInput::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::ObjectInput::_class) ::java::io::ObjectInput::_class = java::fetch_class("java/io/ObjectInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::Object java::io::ObjectInput::readObject() const {
    if (!::java::io::ObjectInput::_class) ::java::io::ObjectInput::_class = java::fetch_class("java/io/ObjectInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readObject", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int64_t java::io::ObjectInput::skip(int64_t arg0) const {
    if (!::java::io::ObjectInput::_class) ::java::io::ObjectInput::_class = java::fetch_class("java/io/ObjectInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "skip", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::InvalidClassException::InvalidClassException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::ObjectStreamException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::io::InvalidClassException::_class) ::java::io::InvalidClassException::_class = java::fetch_class("java/io/InvalidClassException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::InvalidClassException::InvalidClassException(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::ObjectStreamException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::io::InvalidClassException::_class) ::java::io::InvalidClassException::_class = java::fetch_class("java/io/InvalidClassException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String java::io::InvalidClassException::getMessage() const {
    if (!::java::io::InvalidClassException::_class) ::java::io::InvalidClassException::_class = java::fetch_class("java/io/InvalidClassException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::LineNumberInputStream::LineNumberInputStream(const ::java::io::InputStream& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::java::io::LineNumberInputStream::_class) ::java::io::LineNumberInputStream::_class = java::fetch_class("java/io/LineNumberInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t java::io::LineNumberInputStream::available() const {
    if (!::java::io::LineNumberInputStream::_class) ::java::io::LineNumberInputStream::_class = java::fetch_class("java/io/LineNumberInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "available", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::io::LineNumberInputStream::getLineNumber() const {
    if (!::java::io::LineNumberInputStream::_class) ::java::io::LineNumberInputStream::_class = java::fetch_class("java/io/LineNumberInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineNumber", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::io::LineNumberInputStream::mark(int32_t arg0) const {
    if (!::java::io::LineNumberInputStream::_class) ::java::io::LineNumberInputStream::_class = java::fetch_class("java/io/LineNumberInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "mark", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t java::io::LineNumberInputStream::read() const {
    if (!::java::io::LineNumberInputStream::_class) ::java::io::LineNumberInputStream::_class = java::fetch_class("java/io/LineNumberInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::io::LineNumberInputStream::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::LineNumberInputStream::_class) ::java::io::LineNumberInputStream::_class = java::fetch_class("java/io/LineNumberInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::LineNumberInputStream::reset() const {
    if (!::java::io::LineNumberInputStream::_class) ::java::io::LineNumberInputStream::_class = java::fetch_class("java/io/LineNumberInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::LineNumberInputStream::setLineNumber(int32_t arg0) const {
    if (!::java::io::LineNumberInputStream::_class) ::java::io::LineNumberInputStream::_class = java::fetch_class("java/io/LineNumberInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLineNumber", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t java::io::LineNumberInputStream::skip(int64_t arg0) const {
    if (!::java::io::LineNumberInputStream::_class) ::java::io::LineNumberInputStream::_class = java::fetch_class("java/io/LineNumberInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "skip", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::ObjectOutputStream::ObjectOutputStream(const ::java::io::OutputStream& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::DataOutput((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::ObjectOutput((jobject)0), ::java::io::ObjectStreamConstants((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::java::io::ObjectOutputStream::_class) ::java::io::ObjectOutputStream::_class = java::fetch_class("java/io/ObjectOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::io::ObjectOutputStream::close() const {
    if (!::java::io::ObjectOutputStream::_class) ::java::io::ObjectOutputStream::_class = java::fetch_class("java/io/ObjectOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::ObjectOutputStream::defaultWriteObject() const {
    if (!::java::io::ObjectOutputStream::_class) ::java::io::ObjectOutputStream::_class = java::fetch_class("java/io/ObjectOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "defaultWriteObject", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::ObjectOutputStream::flush() const {
    if (!::java::io::ObjectOutputStream::_class) ::java::io::ObjectOutputStream::_class = java::fetch_class("java/io/ObjectOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::io::ObjectOutputStream_PutField java::io::ObjectOutputStream::putFields() const {
    if (!::java::io::ObjectOutputStream::_class) ::java::io::ObjectOutputStream::_class = java::fetch_class("java/io/ObjectOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "putFields", "()Ljava/io/ObjectOutputStream$PutField;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::ObjectOutputStream_PutField _ret(ret);
    return _ret;
}

void java::io::ObjectOutputStream::reset() const {
    if (!::java::io::ObjectOutputStream::_class) ::java::io::ObjectOutputStream::_class = java::fetch_class("java/io/ObjectOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::ObjectOutputStream::useProtocolVersion(int32_t arg0) const {
    if (!::java::io::ObjectOutputStream::_class) ::java::io::ObjectOutputStream::_class = java::fetch_class("java/io/ObjectOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "useProtocolVersion", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::ObjectOutputStream::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::ObjectOutputStream::_class) ::java::io::ObjectOutputStream::_class = java::fetch_class("java/io/ObjectOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::ObjectOutputStream::write(int32_t arg0) const {
    if (!::java::io::ObjectOutputStream::_class) ::java::io::ObjectOutputStream::_class = java::fetch_class("java/io/ObjectOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::ObjectOutputStream::writeBoolean(bool arg0) const {
    if (!::java::io::ObjectOutputStream::_class) ::java::io::ObjectOutputStream::_class = java::fetch_class("java/io/ObjectOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeBoolean", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::ObjectOutputStream::writeByte(int32_t arg0) const {
    if (!::java::io::ObjectOutputStream::_class) ::java::io::ObjectOutputStream::_class = java::fetch_class("java/io/ObjectOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeByte", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::ObjectOutputStream::writeBytes(const ::java::lang::String& arg0) const {
    if (!::java::io::ObjectOutputStream::_class) ::java::io::ObjectOutputStream::_class = java::fetch_class("java/io/ObjectOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeBytes", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::ObjectOutputStream::writeChar(int32_t arg0) const {
    if (!::java::io::ObjectOutputStream::_class) ::java::io::ObjectOutputStream::_class = java::fetch_class("java/io/ObjectOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeChar", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::ObjectOutputStream::writeChars(const ::java::lang::String& arg0) const {
    if (!::java::io::ObjectOutputStream::_class) ::java::io::ObjectOutputStream::_class = java::fetch_class("java/io/ObjectOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeChars", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::ObjectOutputStream::writeDouble(double arg0) const {
    if (!::java::io::ObjectOutputStream::_class) ::java::io::ObjectOutputStream::_class = java::fetch_class("java/io/ObjectOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeDouble", "(D)V");
    double _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::ObjectOutputStream::writeFields() const {
    if (!::java::io::ObjectOutputStream::_class) ::java::io::ObjectOutputStream::_class = java::fetch_class("java/io/ObjectOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeFields", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::io::ObjectOutputStream::writeFloat(float arg0) const {
    if (!::java::io::ObjectOutputStream::_class) ::java::io::ObjectOutputStream::_class = java::fetch_class("java/io/ObjectOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeFloat", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::ObjectOutputStream::writeInt(int32_t arg0) const {
    if (!::java::io::ObjectOutputStream::_class) ::java::io::ObjectOutputStream::_class = java::fetch_class("java/io/ObjectOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeInt", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::ObjectOutputStream::writeLong(int64_t arg0) const {
    if (!::java::io::ObjectOutputStream::_class) ::java::io::ObjectOutputStream::_class = java::fetch_class("java/io/ObjectOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeLong", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::ObjectOutputStream::writeObject(const ::java::lang::Object& arg0) const {
    if (!::java::io::ObjectOutputStream::_class) ::java::io::ObjectOutputStream::_class = java::fetch_class("java/io/ObjectOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeObject", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::ObjectOutputStream::writeUnshared(const ::java::lang::Object& arg0) const {
    if (!::java::io::ObjectOutputStream::_class) ::java::io::ObjectOutputStream::_class = java::fetch_class("java/io/ObjectOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeUnshared", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::ObjectOutputStream::writeShort(int32_t arg0) const {
    if (!::java::io::ObjectOutputStream::_class) ::java::io::ObjectOutputStream::_class = java::fetch_class("java/io/ObjectOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeShort", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::ObjectOutputStream::writeUTF(const ::java::lang::String& arg0) const {
    if (!::java::io::ObjectOutputStream::_class) ::java::io::ObjectOutputStream::_class = java::fetch_class("java/io/ObjectOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeUTF", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::UTFDataFormatException::UTFDataFormatException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::io::UTFDataFormatException::_class) ::java::io::UTFDataFormatException::_class = java::fetch_class("java/io/UTFDataFormatException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::UTFDataFormatException::UTFDataFormatException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::io::UTFDataFormatException::_class) ::java::io::UTFDataFormatException::_class = java::fetch_class("java/io/UTFDataFormatException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::io::Flushable::flush() const {
    if (!::java::io::Flushable::_class) ::java::io::Flushable::_class = java::fetch_class("java/io/Flushable");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::DataOutputStream::DataOutputStream(const ::java::io::OutputStream& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::DataOutput((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::java::io::DataOutputStream::_class) ::java::io::DataOutputStream::_class = java::fetch_class("java/io/DataOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::io::DataOutputStream::flush() const {
    if (!::java::io::DataOutputStream::_class) ::java::io::DataOutputStream::_class = java::fetch_class("java/io/DataOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t java::io::DataOutputStream::size() const {
    if (!::java::io::DataOutputStream::_class) ::java::io::DataOutputStream::_class = java::fetch_class("java/io/DataOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::io::DataOutputStream::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::io::DataOutputStream::_class) ::java::io::DataOutputStream::_class = java::fetch_class("java/io/DataOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::io::DataOutputStream::write(int32_t arg0) const {
    if (!::java::io::DataOutputStream::_class) ::java::io::DataOutputStream::_class = java::fetch_class("java/io/DataOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::DataOutputStream::writeBoolean(bool arg0) const {
    if (!::java::io::DataOutputStream::_class) ::java::io::DataOutputStream::_class = java::fetch_class("java/io/DataOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeBoolean", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::DataOutputStream::writeByte(int32_t arg0) const {
    if (!::java::io::DataOutputStream::_class) ::java::io::DataOutputStream::_class = java::fetch_class("java/io/DataOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeByte", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::DataOutputStream::writeBytes(const ::java::lang::String& arg0) const {
    if (!::java::io::DataOutputStream::_class) ::java::io::DataOutputStream::_class = java::fetch_class("java/io/DataOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeBytes", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::DataOutputStream::writeChar(int32_t arg0) const {
    if (!::java::io::DataOutputStream::_class) ::java::io::DataOutputStream::_class = java::fetch_class("java/io/DataOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeChar", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::DataOutputStream::writeChars(const ::java::lang::String& arg0) const {
    if (!::java::io::DataOutputStream::_class) ::java::io::DataOutputStream::_class = java::fetch_class("java/io/DataOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeChars", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::DataOutputStream::writeDouble(double arg0) const {
    if (!::java::io::DataOutputStream::_class) ::java::io::DataOutputStream::_class = java::fetch_class("java/io/DataOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeDouble", "(D)V");
    double _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::DataOutputStream::writeFloat(float arg0) const {
    if (!::java::io::DataOutputStream::_class) ::java::io::DataOutputStream::_class = java::fetch_class("java/io/DataOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeFloat", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::DataOutputStream::writeInt(int32_t arg0) const {
    if (!::java::io::DataOutputStream::_class) ::java::io::DataOutputStream::_class = java::fetch_class("java/io/DataOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeInt", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::DataOutputStream::writeLong(int64_t arg0) const {
    if (!::java::io::DataOutputStream::_class) ::java::io::DataOutputStream::_class = java::fetch_class("java/io/DataOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeLong", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::DataOutputStream::writeShort(int32_t arg0) const {
    if (!::java::io::DataOutputStream::_class) ::java::io::DataOutputStream::_class = java::fetch_class("java/io/DataOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeShort", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::DataOutputStream::writeUTF(const ::java::lang::String& arg0) const {
    if (!::java::io::DataOutputStream::_class) ::java::io::DataOutputStream::_class = java::fetch_class("java/io/DataOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeUTF", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::io::ObjectOutputStream_PutField::ObjectOutputStream_PutField() : ::java::lang::Object((jobject)0) {
    if (!::java::io::ObjectOutputStream_PutField::_class) ::java::io::ObjectOutputStream_PutField::_class = java::fetch_class("java/io/ObjectOutputStream$PutField");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void java::io::ObjectOutputStream_PutField::put(const ::java::lang::String& arg0, bool arg1) const {
    if (!::java::io::ObjectOutputStream_PutField::_class) ::java::io::ObjectOutputStream_PutField::_class = java::fetch_class("java/io/ObjectOutputStream$PutField");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::io::ObjectOutputStream_PutField::put(const ::java::lang::String& arg0, uint16_t arg1) const {
    if (!::java::io::ObjectOutputStream_PutField::_class) ::java::io::ObjectOutputStream_PutField::_class = java::fetch_class("java/io/ObjectOutputStream$PutField");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/String;C)V");
    jobject _arg0 = arg0.obj;
    uint16_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::io::ObjectOutputStream_PutField::put(const ::java::lang::String& arg0, int8_t arg1) const {
    if (!::java::io::ObjectOutputStream_PutField::_class) ::java::io::ObjectOutputStream_PutField::_class = java::fetch_class("java/io/ObjectOutputStream$PutField");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/String;B)V");
    jobject _arg0 = arg0.obj;
    int8_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::io::ObjectOutputStream_PutField::put(const ::java::lang::String& arg0, int16_t arg1) const {
    if (!::java::io::ObjectOutputStream_PutField::_class) ::java::io::ObjectOutputStream_PutField::_class = java::fetch_class("java/io/ObjectOutputStream$PutField");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/String;S)V");
    jobject _arg0 = arg0.obj;
    int16_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::io::ObjectOutputStream_PutField::put(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::java::io::ObjectOutputStream_PutField::_class) ::java::io::ObjectOutputStream_PutField::_class = java::fetch_class("java/io/ObjectOutputStream$PutField");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::io::ObjectOutputStream_PutField::put(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::java::io::ObjectOutputStream_PutField::_class) ::java::io::ObjectOutputStream_PutField::_class = java::fetch_class("java/io/ObjectOutputStream$PutField");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/String;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::io::ObjectOutputStream_PutField::put(const ::java::lang::String& arg0, float arg1) const {
    if (!::java::io::ObjectOutputStream_PutField::_class) ::java::io::ObjectOutputStream_PutField::_class = java::fetch_class("java/io/ObjectOutputStream$PutField");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/String;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::io::ObjectOutputStream_PutField::put(const ::java::lang::String& arg0, double arg1) const {
    if (!::java::io::ObjectOutputStream_PutField::_class) ::java::io::ObjectOutputStream_PutField::_class = java::fetch_class("java/io/ObjectOutputStream$PutField");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/String;D)V");
    jobject _arg0 = arg0.obj;
    double _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::io::ObjectOutputStream_PutField::put(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::io::ObjectOutputStream_PutField::_class) ::java::io::ObjectOutputStream_PutField::_class = java::fetch_class("java/io/ObjectOutputStream$PutField");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::io::ObjectOutputStream_PutField::write(const ::java::io::ObjectOutput& arg0) const {
    if (!::java::io::ObjectOutputStream_PutField::_class) ::java::io::ObjectOutputStream_PutField::_class = java::fetch_class("java/io/ObjectOutputStream$PutField");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(Ljava/io/ObjectOutput;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::io::Console::flush() const {
    if (!::java::io::Console::_class) ::java::io::Console::_class = java::fetch_class("java/io/Console");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::io::Console java::io::Console::format(const ::java::lang::String& arg0, const std::vector< ::java::lang::Object>& arg1) const {
    if (!::java::io::Console::_class) ::java::io::Console::_class = java::fetch_class("java/io/Console");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/Console;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::io::Console _ret(ret);
    return _ret;
}

::java::io::Console java::io::Console::printf(const ::java::lang::String& arg0, const std::vector< ::java::lang::Object>& arg1) const {
    if (!::java::io::Console::_class) ::java::io::Console::_class = java::fetch_class("java/io/Console");
    static jmethodID mid = java::jni->GetMethodID(_class, "printf", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/Console;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::io::Console _ret(ret);
    return _ret;
}

::java::io::Reader java::io::Console::reader() const {
    if (!::java::io::Console::_class) ::java::io::Console::_class = java::fetch_class("java/io/Console");
    static jmethodID mid = java::jni->GetMethodID(_class, "reader", "()Ljava/io/Reader;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::Reader _ret(ret);
    return _ret;
}

::java::lang::String java::io::Console::readLine() const {
    if (!::java::io::Console::_class) ::java::io::Console::_class = java::fetch_class("java/io/Console");
    static jmethodID mid = java::jni->GetMethodID(_class, "readLine", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::io::Console::readLine(const ::java::lang::String& arg0, const std::vector< ::java::lang::Object>& arg1) const {
    if (!::java::io::Console::_class) ::java::io::Console::_class = java::fetch_class("java/io/Console");
    static jmethodID mid = java::jni->GetMethodID(_class, "readLine", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< uint16_t> java::io::Console::readPassword() const {
    if (!::java::io::Console::_class) ::java::io::Console::_class = java::fetch_class("java/io/Console");
    static jmethodID mid = java::jni->GetMethodID(_class, "readPassword", "()[C");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jchar* reta = java::jni->GetCharArrayElements((jcharArray)ret, nullptr);
    std::vector< uint16_t> _ret(reta, reta+rets);
    java::jni->ReleaseCharArrayElements((jcharArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< uint16_t> java::io::Console::readPassword(const ::java::lang::String& arg0, const std::vector< ::java::lang::Object>& arg1) const {
    if (!::java::io::Console::_class) ::java::io::Console::_class = java::fetch_class("java/io/Console");
    static jmethodID mid = java::jni->GetMethodID(_class, "readPassword", "(Ljava/lang/String;[Ljava/lang/Object;)[C");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jchar* reta = java::jni->GetCharArrayElements((jcharArray)ret, nullptr);
    std::vector< uint16_t> _ret(reta, reta+rets);
    java::jni->ReleaseCharArrayElements((jcharArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::io::PrintWriter java::io::Console::writer() const {
    if (!::java::io::Console::_class) ::java::io::Console::_class = java::fetch_class("java/io/Console");
    static jmethodID mid = java::jni->GetMethodID(_class, "writer", "()Ljava/io/PrintWriter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::PrintWriter _ret(ret);
    return _ret;
}

