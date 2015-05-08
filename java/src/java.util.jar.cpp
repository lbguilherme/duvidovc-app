#include "java-core.hpp"
#include <memory>
#include "java.beans.PropertyChangeListener.hpp"
#include "java.io.File.hpp"
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.security.CodeSigner.hpp"
#include "java.security.cert.Certificate.hpp"
#include "java.util.Collection.hpp"
#include "java.util.Enumeration.hpp"
#include "java.util.Map.hpp"
#include "java.util.Set.hpp"
#include "java.util.SortedMap.hpp"
#include "java.util.jar.Attributes.hpp"
#include "java.util.jar.JarEntry.hpp"
#include "java.util.jar.JarException.hpp"
#include "java.util.jar.JarFile.hpp"
#include "java.util.jar.JarInputStream.hpp"
#include "java.util.jar.JarOutputStream.hpp"
#include "java.util.jar.Manifest.hpp"
#include "java.util.jar.Pack200.hpp"
#include "java.util.zip.ZipEntry.hpp"

jclass java::util::jar::JarFile::_class = nullptr;
jclass java::util::jar::JarOutputStream::_class = nullptr;
jclass java::util::jar::JarException::_class = nullptr;
jclass java::util::jar::JarInputStream::_class = nullptr;
jclass java::util::jar::Pack200_Packer::_class = nullptr;
jclass java::util::jar::Pack200_Unpacker::_class = nullptr;
jclass java::util::jar::Manifest::_class = nullptr;
jclass java::util::jar::Pack200::_class = nullptr;
jclass java::util::jar::Attributes_Name::_class = nullptr;
jclass java::util::jar::Attributes::_class = nullptr;
jclass java::util::jar::JarEntry::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::jar::JarFile::JarFile(const ::java::io::File& arg0) : ::java::lang::Object((jobject)0), ::java::util::zip::ZipFile((jobject)0) {
    if (!::java::util::jar::JarFile::_class) ::java::util::jar::JarFile::_class = java::fetch_class("java/util/jar/JarFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/File;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::jar::JarFile::JarFile(const ::java::io::File& arg0, bool arg1) : ::java::lang::Object((jobject)0), ::java::util::zip::ZipFile((jobject)0) {
    if (!::java::util::jar::JarFile::_class) ::java::util::jar::JarFile::_class = java::fetch_class("java/util/jar/JarFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/File;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::jar::JarFile::JarFile(const ::java::io::File& arg0, bool arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::util::zip::ZipFile((jobject)0) {
    if (!::java::util::jar::JarFile::_class) ::java::util::jar::JarFile::_class = java::fetch_class("java/util/jar/JarFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/File;ZI)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::jar::JarFile::JarFile(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::util::zip::ZipFile((jobject)0) {
    if (!::java::util::jar::JarFile::_class) ::java::util::jar::JarFile::_class = java::fetch_class("java/util/jar/JarFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::jar::JarFile::JarFile(const ::java::lang::String& arg0, bool arg1) : ::java::lang::Object((jobject)0), ::java::util::zip::ZipFile((jobject)0) {
    if (!::java::util::jar::JarFile::_class) ::java::util::jar::JarFile::_class = java::fetch_class("java/util/jar/JarFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::util::Enumeration java::util::jar::JarFile::entries() const {
    if (!::java::util::jar::JarFile::_class) ::java::util::jar::JarFile::_class = java::fetch_class("java/util/jar/JarFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "entries", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

::java::util::jar::JarEntry java::util::jar::JarFile::getJarEntry(const ::java::lang::String& arg0) const {
    if (!::java::util::jar::JarFile::_class) ::java::util::jar::JarFile::_class = java::fetch_class("java/util/jar/JarFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getJarEntry", "(Ljava/lang/String;)Ljava/util/jar/JarEntry;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::jar::JarEntry _ret(ret);
    return _ret;
}

::java::util::jar::Manifest java::util::jar::JarFile::getManifest() const {
    if (!::java::util::jar::JarFile::_class) ::java::util::jar::JarFile::_class = java::fetch_class("java/util/jar/JarFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getManifest", "()Ljava/util/jar/Manifest;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::jar::Manifest _ret(ret);
    return _ret;
}

::java::io::InputStream java::util::jar::JarFile::getInputStream(const ::java::util::zip::ZipEntry& arg0) const {
    if (!::java::util::jar::JarFile::_class) ::java::util::jar::JarFile::_class = java::fetch_class("java/util/jar/JarFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputStream", "(Ljava/util/zip/ZipEntry;)Ljava/io/InputStream;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::util::zip::ZipEntry java::util::jar::JarFile::getEntry(const ::java::lang::String& arg0) const {
    if (!::java::util::jar::JarFile::_class) ::java::util::jar::JarFile::_class = java::fetch_class("java/util/jar/JarFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEntry", "(Ljava/lang/String;)Ljava/util/zip/ZipEntry;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::zip::ZipEntry _ret(ret);
    return _ret;
}

void java::util::jar::JarFile::close() const {
    if (!::java::util::jar::JarFile::_class) ::java::util::jar::JarFile::_class = java::fetch_class("java/util/jar/JarFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::jar::JarOutputStream::JarOutputStream(const ::java::io::OutputStream& arg0, const ::java::util::jar::Manifest& arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0), ::java::util::zip::DeflaterOutputStream((jobject)0), ::java::util::zip::ZipOutputStream((jobject)0) {
    if (!::java::util::jar::JarOutputStream::_class) ::java::util::jar::JarOutputStream::_class = java::fetch_class("java/util/jar/JarOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;Ljava/util/jar/Manifest;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::jar::JarOutputStream::JarOutputStream(const ::java::io::OutputStream& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0), ::java::util::zip::DeflaterOutputStream((jobject)0), ::java::util::zip::ZipOutputStream((jobject)0) {
    if (!::java::util::jar::JarOutputStream::_class) ::java::util::jar::JarOutputStream::_class = java::fetch_class("java/util/jar/JarOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::util::jar::JarOutputStream::putNextEntry(const ::java::util::zip::ZipEntry& arg0) const {
    if (!::java::util::jar::JarOutputStream::_class) ::java::util::jar::JarOutputStream::_class = java::fetch_class("java/util/jar/JarOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "putNextEntry", "(Ljava/util/zip/ZipEntry;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::jar::JarException::JarException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::util::zip::ZipException((jobject)0) {
    if (!::java::util::jar::JarException::_class) ::java::util::jar::JarException::_class = java::fetch_class("java/util/jar/JarException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::jar::JarException::JarException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::util::zip::ZipException((jobject)0) {
    if (!::java::util::jar::JarException::_class) ::java::util::jar::JarException::_class = java::fetch_class("java/util/jar/JarException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::jar::JarInputStream::JarInputStream(const ::java::io::InputStream& arg0, bool arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0), ::java::util::zip::InflaterInputStream((jobject)0), ::java::util::zip::ZipInputStream((jobject)0) {
    if (!::java::util::jar::JarInputStream::_class) ::java::util::jar::JarInputStream::_class = java::fetch_class("java/util/jar/JarInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::jar::JarInputStream::JarInputStream(const ::java::io::InputStream& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0), ::java::util::zip::InflaterInputStream((jobject)0), ::java::util::zip::ZipInputStream((jobject)0) {
    if (!::java::util::jar::JarInputStream::_class) ::java::util::jar::JarInputStream::_class = java::fetch_class("java/util/jar/JarInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::util::jar::Manifest java::util::jar::JarInputStream::getManifest() const {
    if (!::java::util::jar::JarInputStream::_class) ::java::util::jar::JarInputStream::_class = java::fetch_class("java/util/jar/JarInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "getManifest", "()Ljava/util/jar/Manifest;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::jar::Manifest _ret(ret);
    return _ret;
}

::java::util::jar::JarEntry java::util::jar::JarInputStream::getNextJarEntry() const {
    if (!::java::util::jar::JarInputStream::_class) ::java::util::jar::JarInputStream::_class = java::fetch_class("java/util/jar/JarInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNextJarEntry", "()Ljava/util/jar/JarEntry;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::jar::JarEntry _ret(ret);
    return _ret;
}

int32_t java::util::jar::JarInputStream::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::util::jar::JarInputStream::_class) ::java::util::jar::JarInputStream::_class = java::fetch_class("java/util/jar/JarInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::util::zip::ZipEntry java::util::jar::JarInputStream::getNextEntry() const {
    if (!::java::util::jar::JarInputStream::_class) ::java::util::jar::JarInputStream::_class = java::fetch_class("java/util/jar/JarInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNextEntry", "()Ljava/util/zip/ZipEntry;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::zip::ZipEntry _ret(ret);
    return _ret;
}

::java::util::SortedMap java::util::jar::Pack200_Packer::properties() const {
    if (!::java::util::jar::Pack200_Packer::_class) ::java::util::jar::Pack200_Packer::_class = java::fetch_class("java/util/jar/Pack200$Packer");
    static jmethodID mid = java::jni->GetMethodID(_class, "properties", "()Ljava/util/SortedMap;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::SortedMap _ret(ret);
    return _ret;
}

void java::util::jar::Pack200_Packer::pack(const ::java::util::jar::JarFile& arg0, const ::java::io::OutputStream& arg1) const {
    if (!::java::util::jar::Pack200_Packer::_class) ::java::util::jar::Pack200_Packer::_class = java::fetch_class("java/util/jar/Pack200$Packer");
    static jmethodID mid = java::jni->GetMethodID(_class, "pack", "(Ljava/util/jar/JarFile;Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::jar::Pack200_Packer::pack(const ::java::util::jar::JarInputStream& arg0, const ::java::io::OutputStream& arg1) const {
    if (!::java::util::jar::Pack200_Packer::_class) ::java::util::jar::Pack200_Packer::_class = java::fetch_class("java/util/jar/Pack200$Packer");
    static jmethodID mid = java::jni->GetMethodID(_class, "pack", "(Ljava/util/jar/JarInputStream;Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::jar::Pack200_Packer::addPropertyChangeListener(const ::java::beans::PropertyChangeListener& arg0) const {
    if (!::java::util::jar::Pack200_Packer::_class) ::java::util::jar::Pack200_Packer::_class = java::fetch_class("java/util/jar/Pack200$Packer");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::jar::Pack200_Packer::removePropertyChangeListener(const ::java::beans::PropertyChangeListener& arg0) const {
    if (!::java::util::jar::Pack200_Packer::_class) ::java::util::jar::Pack200_Packer::_class = java::fetch_class("java/util/jar/Pack200$Packer");
    static jmethodID mid = java::jni->GetMethodID(_class, "removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::SortedMap java::util::jar::Pack200_Unpacker::properties() const {
    if (!::java::util::jar::Pack200_Unpacker::_class) ::java::util::jar::Pack200_Unpacker::_class = java::fetch_class("java/util/jar/Pack200$Unpacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "properties", "()Ljava/util/SortedMap;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::SortedMap _ret(ret);
    return _ret;
}

void java::util::jar::Pack200_Unpacker::unpack(const ::java::io::InputStream& arg0, const ::java::util::jar::JarOutputStream& arg1) const {
    if (!::java::util::jar::Pack200_Unpacker::_class) ::java::util::jar::Pack200_Unpacker::_class = java::fetch_class("java/util/jar/Pack200$Unpacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "unpack", "(Ljava/io/InputStream;Ljava/util/jar/JarOutputStream;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::jar::Pack200_Unpacker::unpack(const ::java::io::File& arg0, const ::java::util::jar::JarOutputStream& arg1) const {
    if (!::java::util::jar::Pack200_Unpacker::_class) ::java::util::jar::Pack200_Unpacker::_class = java::fetch_class("java/util/jar/Pack200$Unpacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "unpack", "(Ljava/io/File;Ljava/util/jar/JarOutputStream;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::jar::Pack200_Unpacker::addPropertyChangeListener(const ::java::beans::PropertyChangeListener& arg0) const {
    if (!::java::util::jar::Pack200_Unpacker::_class) ::java::util::jar::Pack200_Unpacker::_class = java::fetch_class("java/util/jar/Pack200$Unpacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::jar::Pack200_Unpacker::removePropertyChangeListener(const ::java::beans::PropertyChangeListener& arg0) const {
    if (!::java::util::jar::Pack200_Unpacker::_class) ::java::util::jar::Pack200_Unpacker::_class = java::fetch_class("java/util/jar/Pack200$Unpacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::jar::Manifest::Manifest() : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::java::util::jar::Manifest::_class) ::java::util::jar::Manifest::_class = java::fetch_class("java/util/jar/Manifest");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::jar::Manifest::Manifest(const ::java::io::InputStream& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::java::util::jar::Manifest::_class) ::java::util::jar::Manifest::_class = java::fetch_class("java/util/jar/Manifest");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::util::jar::Manifest::clear() const {
    if (!::java::util::jar::Manifest::_class) ::java::util::jar::Manifest::_class = java::fetch_class("java/util/jar/Manifest");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::util::jar::Attributes java::util::jar::Manifest::getAttributes(const ::java::lang::String& arg0) const {
    if (!::java::util::jar::Manifest::_class) ::java::util::jar::Manifest::_class = java::fetch_class("java/util/jar/Manifest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributes", "(Ljava/lang/String;)Ljava/util/jar/Attributes;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::jar::Attributes _ret(ret);
    return _ret;
}

::java::util::Map java::util::jar::Manifest::getEntries() const {
    if (!::java::util::jar::Manifest::_class) ::java::util::jar::Manifest::_class = java::fetch_class("java/util/jar/Manifest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEntries", "()Ljava/util/Map;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map _ret(ret);
    return _ret;
}

::java::util::jar::Attributes java::util::jar::Manifest::getMainAttributes() const {
    if (!::java::util::jar::Manifest::_class) ::java::util::jar::Manifest::_class = java::fetch_class("java/util/jar/Manifest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMainAttributes", "()Ljava/util/jar/Attributes;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::jar::Attributes _ret(ret);
    return _ret;
}

::java::lang::Object java::util::jar::Manifest::clone() const {
    if (!::java::util::jar::Manifest::_class) ::java::util::jar::Manifest::_class = java::fetch_class("java/util/jar/Manifest");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::util::jar::Manifest::write(const ::java::io::OutputStream& arg0) const {
    if (!::java::util::jar::Manifest::_class) ::java::util::jar::Manifest::_class = java::fetch_class("java/util/jar/Manifest");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::jar::Manifest::read(const ::java::io::InputStream& arg0) const {
    if (!::java::util::jar::Manifest::_class) ::java::util::jar::Manifest::_class = java::fetch_class("java/util/jar/Manifest");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t java::util::jar::Manifest::hashCode() const {
    if (!::java::util::jar::Manifest::_class) ::java::util::jar::Manifest::_class = java::fetch_class("java/util/jar/Manifest");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::jar::Manifest::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::jar::Manifest::_class) ::java::util::jar::Manifest::_class = java::fetch_class("java/util/jar/Manifest");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::util::jar::Pack200_Packer java::util::jar::Pack200::newPacker(){
    if (!::java::util::jar::Pack200::_class) ::java::util::jar::Pack200::_class = java::fetch_class("java/util/jar/Pack200");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newPacker", "()Ljava/util/jar/Pack200$Packer;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::jar::Pack200_Packer _ret(ret);
    return _ret;
}

::java::util::jar::Pack200_Unpacker java::util::jar::Pack200::newUnpacker(){
    if (!::java::util::jar::Pack200::_class) ::java::util::jar::Pack200::_class = java::fetch_class("java/util/jar/Pack200");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newUnpacker", "()Ljava/util/jar/Pack200$Unpacker;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::jar::Pack200_Unpacker _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::jar::Attributes_Name::Attributes_Name(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0) {
    if (!::java::util::jar::Attributes_Name::_class) ::java::util::jar::Attributes_Name::_class = java::fetch_class("java/util/jar/Attributes$Name");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool java::util::jar::Attributes_Name::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::jar::Attributes_Name::_class) ::java::util::jar::Attributes_Name::_class = java::fetch_class("java/util/jar/Attributes$Name");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::jar::Attributes_Name::hashCode() const {
    if (!::java::util::jar::Attributes_Name::_class) ::java::util::jar::Attributes_Name::_class = java::fetch_class("java/util/jar/Attributes$Name");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::util::jar::Attributes_Name::toString() const {
    if (!::java::util::jar::Attributes_Name::_class) ::java::util::jar::Attributes_Name::_class = java::fetch_class("java/util/jar/Attributes$Name");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::jar::Attributes::Attributes() : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::Map((jobject)0) {
    if (!::java::util::jar::Attributes::_class) ::java::util::jar::Attributes::_class = java::fetch_class("java/util/jar/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::jar::Attributes::Attributes(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::Map((jobject)0) {
    if (!::java::util::jar::Attributes::_class) ::java::util::jar::Attributes::_class = java::fetch_class("java/util/jar/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::util::jar::Attributes::clear() const {
    if (!::java::util::jar::Attributes::_class) ::java::util::jar::Attributes::_class = java::fetch_class("java/util/jar/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::util::jar::Attributes::containsKey(const ::java::lang::Object& arg0) const {
    if (!::java::util::jar::Attributes::_class) ::java::util::jar::Attributes::_class = java::fetch_class("java/util/jar/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsKey", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::jar::Attributes::containsValue(const ::java::lang::Object& arg0) const {
    if (!::java::util::jar::Attributes::_class) ::java::util::jar::Attributes::_class = java::fetch_class("java/util/jar/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsValue", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::util::Set java::util::jar::Attributes::entrySet() const {
    if (!::java::util::jar::Attributes::_class) ::java::util::jar::Attributes::_class = java::fetch_class("java/util/jar/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "entrySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::lang::Object java::util::jar::Attributes::get(const ::java::lang::Object& arg0) const {
    if (!::java::util::jar::Attributes::_class) ::java::util::jar::Attributes::_class = java::fetch_class("java/util/jar/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::jar::Attributes::isEmpty() const {
    if (!::java::util::jar::Attributes::_class) ::java::util::jar::Attributes::_class = java::fetch_class("java/util/jar/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::util::Set java::util::jar::Attributes::keySet() const {
    if (!::java::util::jar::Attributes::_class) ::java::util::jar::Attributes::_class = java::fetch_class("java/util/jar/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "keySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::lang::Object java::util::jar::Attributes::put(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::jar::Attributes::_class) ::java::util::jar::Attributes::_class = java::fetch_class("java/util/jar/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::util::jar::Attributes::putAll(const ::java::util::Map& arg0) const {
    if (!::java::util::jar::Attributes::_class) ::java::util::jar::Attributes::_class = java::fetch_class("java/util/jar/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "putAll", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::jar::Attributes::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::jar::Attributes::_class) ::java::util::jar::Attributes::_class = java::fetch_class("java/util/jar/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::jar::Attributes::size() const {
    if (!::java::util::jar::Attributes::_class) ::java::util::jar::Attributes::_class = java::fetch_class("java/util/jar/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::Collection java::util::jar::Attributes::values() const {
    if (!::java::util::jar::Attributes::_class) ::java::util::jar::Attributes::_class = java::fetch_class("java/util/jar/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "values", "()Ljava/util/Collection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::lang::Object java::util::jar::Attributes::clone() const {
    if (!::java::util::jar::Attributes::_class) ::java::util::jar::Attributes::_class = java::fetch_class("java/util/jar/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::jar::Attributes::hashCode() const {
    if (!::java::util::jar::Attributes::_class) ::java::util::jar::Attributes::_class = java::fetch_class("java/util/jar/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::jar::Attributes::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::jar::Attributes::_class) ::java::util::jar::Attributes::_class = java::fetch_class("java/util/jar/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String java::util::jar::Attributes::getValue(const ::java::util::jar::Attributes_Name& arg0) const {
    if (!::java::util::jar::Attributes::_class) ::java::util::jar::Attributes::_class = java::fetch_class("java/util/jar/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "(Ljava/util/jar/Attributes$Name;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::jar::Attributes::getValue(const ::java::lang::String& arg0) const {
    if (!::java::util::jar::Attributes::_class) ::java::util::jar::Attributes::_class = java::fetch_class("java/util/jar/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::jar::Attributes::putValue(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::java::util::jar::Attributes::_class) ::java::util::jar::Attributes::_class = java::fetch_class("java/util/jar/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "putValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::jar::JarEntry::JarEntry(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::zip::ZipEntry((jobject)0) {
    if (!::java::util::jar::JarEntry::_class) ::java::util::jar::JarEntry::_class = java::fetch_class("java/util/jar/JarEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::jar::JarEntry::JarEntry(const ::java::util::zip::ZipEntry& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::zip::ZipEntry((jobject)0) {
    if (!::java::util::jar::JarEntry::_class) ::java::util::jar::JarEntry::_class = java::fetch_class("java/util/jar/JarEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/zip/ZipEntry;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::util::jar::Attributes java::util::jar::JarEntry::getAttributes() const {
    if (!::java::util::jar::JarEntry::_class) ::java::util::jar::JarEntry::_class = java::fetch_class("java/util/jar/JarEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributes", "()Ljava/util/jar/Attributes;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::jar::Attributes _ret(ret);
    return _ret;
}

std::vector< ::java::security::cert::Certificate> java::util::jar::JarEntry::getCertificates() const {
    if (!::java::util::jar::JarEntry::_class) ::java::util::jar::JarEntry::_class = java::fetch_class("java/util/jar/JarEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCertificates", "()[Ljava/security/cert/Certificate;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::security::cert::Certificate> _ret(rets, ::java::security::cert::Certificate((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::security::cert::Certificate retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::security::CodeSigner> java::util::jar::JarEntry::getCodeSigners() const {
    if (!::java::util::jar::JarEntry::_class) ::java::util::jar::JarEntry::_class = java::fetch_class("java/util/jar/JarEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCodeSigners", "()[Ljava/security/CodeSigner;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::security::CodeSigner> _ret(rets, ::java::security::CodeSigner((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::security::CodeSigner retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

