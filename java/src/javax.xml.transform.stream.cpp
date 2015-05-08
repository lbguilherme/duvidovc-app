#include "java-core.hpp"
#include <memory>
#include "java.io.File.hpp"
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.io.Reader.hpp"
#include "java.io.Writer.hpp"
#include "java.lang.String.hpp"
#include "javax.xml.transform.stream.StreamResult.hpp"
#include "javax.xml.transform.stream.StreamSource.hpp"

jclass javax::xml::transform::stream::StreamResult::_class = nullptr;
jclass javax::xml::transform::stream::StreamSource::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::stream::StreamResult::StreamResult() : ::java::lang::Object((jobject)0), ::javax::xml::transform::Result((jobject)0) {
    if (!::javax::xml::transform::stream::StreamResult::_class) ::javax::xml::transform::stream::StreamResult::_class = java::fetch_class("javax/xml/transform/stream/StreamResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::stream::StreamResult::StreamResult(const ::java::io::OutputStream& arg0) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Result((jobject)0) {
    if (!::javax::xml::transform::stream::StreamResult::_class) ::javax::xml::transform::stream::StreamResult::_class = java::fetch_class("javax/xml/transform/stream/StreamResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::stream::StreamResult::StreamResult(const ::java::io::Writer& arg0) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Result((jobject)0) {
    if (!::javax::xml::transform::stream::StreamResult::_class) ::javax::xml::transform::stream::StreamResult::_class = java::fetch_class("javax/xml/transform/stream/StreamResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/Writer;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::stream::StreamResult::StreamResult(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Result((jobject)0) {
    if (!::javax::xml::transform::stream::StreamResult::_class) ::javax::xml::transform::stream::StreamResult::_class = java::fetch_class("javax/xml/transform/stream/StreamResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::stream::StreamResult::StreamResult(const ::java::io::File& arg0) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Result((jobject)0) {
    if (!::javax::xml::transform::stream::StreamResult::_class) ::javax::xml::transform::stream::StreamResult::_class = java::fetch_class("javax/xml/transform/stream/StreamResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/File;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void javax::xml::transform::stream::StreamResult::setOutputStream(const ::java::io::OutputStream& arg0) const {
    if (!::javax::xml::transform::stream::StreamResult::_class) ::javax::xml::transform::stream::StreamResult::_class = java::fetch_class("javax/xml/transform/stream/StreamResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOutputStream", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::io::OutputStream javax::xml::transform::stream::StreamResult::getOutputStream() const {
    if (!::javax::xml::transform::stream::StreamResult::_class) ::javax::xml::transform::stream::StreamResult::_class = java::fetch_class("javax/xml/transform/stream/StreamResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOutputStream", "()Ljava/io/OutputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::OutputStream _ret(ret);
    return _ret;
}

void javax::xml::transform::stream::StreamResult::setWriter(const ::java::io::Writer& arg0) const {
    if (!::javax::xml::transform::stream::StreamResult::_class) ::javax::xml::transform::stream::StreamResult::_class = java::fetch_class("javax/xml/transform/stream/StreamResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWriter", "(Ljava/io/Writer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::io::Writer javax::xml::transform::stream::StreamResult::getWriter() const {
    if (!::javax::xml::transform::stream::StreamResult::_class) ::javax::xml::transform::stream::StreamResult::_class = java::fetch_class("javax/xml/transform/stream/StreamResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWriter", "()Ljava/io/Writer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::Writer _ret(ret);
    return _ret;
}

void javax::xml::transform::stream::StreamResult::setSystemId(const ::java::lang::String& arg0) const {
    if (!::javax::xml::transform::stream::StreamResult::_class) ::javax::xml::transform::stream::StreamResult::_class = java::fetch_class("javax/xml/transform/stream/StreamResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSystemId", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::transform::stream::StreamResult::setSystemId(const ::java::io::File& arg0) const {
    if (!::javax::xml::transform::stream::StreamResult::_class) ::javax::xml::transform::stream::StreamResult::_class = java::fetch_class("javax/xml/transform/stream/StreamResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSystemId", "(Ljava/io/File;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String javax::xml::transform::stream::StreamResult::getSystemId() const {
    if (!::javax::xml::transform::stream::StreamResult::_class) ::javax::xml::transform::stream::StreamResult::_class = java::fetch_class("javax/xml/transform/stream/StreamResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::stream::StreamSource::StreamSource() : ::java::lang::Object((jobject)0), ::javax::xml::transform::Source((jobject)0) {
    if (!::javax::xml::transform::stream::StreamSource::_class) ::javax::xml::transform::stream::StreamSource::_class = java::fetch_class("javax/xml/transform/stream/StreamSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::stream::StreamSource::StreamSource(const ::java::io::InputStream& arg0) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Source((jobject)0) {
    if (!::javax::xml::transform::stream::StreamSource::_class) ::javax::xml::transform::stream::StreamSource::_class = java::fetch_class("javax/xml/transform/stream/StreamSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::stream::StreamSource::StreamSource(const ::java::io::InputStream& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Source((jobject)0) {
    if (!::javax::xml::transform::stream::StreamSource::_class) ::javax::xml::transform::stream::StreamSource::_class = java::fetch_class("javax/xml/transform/stream/StreamSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::stream::StreamSource::StreamSource(const ::java::io::Reader& arg0) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Source((jobject)0) {
    if (!::javax::xml::transform::stream::StreamSource::_class) ::javax::xml::transform::stream::StreamSource::_class = java::fetch_class("javax/xml/transform/stream/StreamSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/Reader;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::stream::StreamSource::StreamSource(const ::java::io::Reader& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Source((jobject)0) {
    if (!::javax::xml::transform::stream::StreamSource::_class) ::javax::xml::transform::stream::StreamSource::_class = java::fetch_class("javax/xml/transform/stream/StreamSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/Reader;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::stream::StreamSource::StreamSource(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Source((jobject)0) {
    if (!::javax::xml::transform::stream::StreamSource::_class) ::javax::xml::transform::stream::StreamSource::_class = java::fetch_class("javax/xml/transform/stream/StreamSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::stream::StreamSource::StreamSource(const ::java::io::File& arg0) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Source((jobject)0) {
    if (!::javax::xml::transform::stream::StreamSource::_class) ::javax::xml::transform::stream::StreamSource::_class = java::fetch_class("javax/xml/transform/stream/StreamSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/File;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void javax::xml::transform::stream::StreamSource::setInputStream(const ::java::io::InputStream& arg0) const {
    if (!::javax::xml::transform::stream::StreamSource::_class) ::javax::xml::transform::stream::StreamSource::_class = java::fetch_class("javax/xml/transform/stream/StreamSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInputStream", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::io::InputStream javax::xml::transform::stream::StreamSource::getInputStream() const {
    if (!::javax::xml::transform::stream::StreamSource::_class) ::javax::xml::transform::stream::StreamSource::_class = java::fetch_class("javax/xml/transform/stream/StreamSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputStream", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

void javax::xml::transform::stream::StreamSource::setReader(const ::java::io::Reader& arg0) const {
    if (!::javax::xml::transform::stream::StreamSource::_class) ::javax::xml::transform::stream::StreamSource::_class = java::fetch_class("javax/xml/transform/stream/StreamSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReader", "(Ljava/io/Reader;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::io::Reader javax::xml::transform::stream::StreamSource::getReader() const {
    if (!::javax::xml::transform::stream::StreamSource::_class) ::javax::xml::transform::stream::StreamSource::_class = java::fetch_class("javax/xml/transform/stream/StreamSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReader", "()Ljava/io/Reader;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::Reader _ret(ret);
    return _ret;
}

void javax::xml::transform::stream::StreamSource::setPublicId(const ::java::lang::String& arg0) const {
    if (!::javax::xml::transform::stream::StreamSource::_class) ::javax::xml::transform::stream::StreamSource::_class = java::fetch_class("javax/xml/transform/stream/StreamSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPublicId", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String javax::xml::transform::stream::StreamSource::getPublicId() const {
    if (!::javax::xml::transform::stream::StreamSource::_class) ::javax::xml::transform::stream::StreamSource::_class = java::fetch_class("javax/xml/transform/stream/StreamSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPublicId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void javax::xml::transform::stream::StreamSource::setSystemId(const ::java::lang::String& arg0) const {
    if (!::javax::xml::transform::stream::StreamSource::_class) ::javax::xml::transform::stream::StreamSource::_class = java::fetch_class("javax/xml/transform/stream/StreamSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSystemId", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String javax::xml::transform::stream::StreamSource::getSystemId() const {
    if (!::javax::xml::transform::stream::StreamSource::_class) ::javax::xml::transform::stream::StreamSource::_class = java::fetch_class("javax/xml/transform/stream/StreamSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void javax::xml::transform::stream::StreamSource::setSystemId(const ::java::io::File& arg0) const {
    if (!::javax::xml::transform::stream::StreamSource::_class) ::javax::xml::transform::stream::StreamSource::_class = java::fetch_class("javax/xml/transform/stream/StreamSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSystemId", "(Ljava/io/File;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

