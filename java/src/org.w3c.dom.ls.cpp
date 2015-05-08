#include "java-core.hpp"
#include <memory>
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.io.Reader.hpp"
#include "java.io.Writer.hpp"
#include "java.lang.String.hpp"
#include "org.w3c.dom.DOMConfiguration.hpp"
#include "org.w3c.dom.Document.hpp"
#include "org.w3c.dom.Element.hpp"
#include "org.w3c.dom.Node.hpp"
#include "org.w3c.dom.ls.DOMImplementationLS.hpp"
#include "org.w3c.dom.ls.LSException.hpp"
#include "org.w3c.dom.ls.LSInput.hpp"
#include "org.w3c.dom.ls.LSOutput.hpp"
#include "org.w3c.dom.ls.LSParser.hpp"
#include "org.w3c.dom.ls.LSParserFilter.hpp"
#include "org.w3c.dom.ls.LSResourceResolver.hpp"
#include "org.w3c.dom.ls.LSSerializer.hpp"

jclass org::w3c::dom::ls::LSSerializer::_class = nullptr;
jclass org::w3c::dom::ls::LSResourceResolver::_class = nullptr;
jclass org::w3c::dom::ls::LSException::_class = nullptr;
jclass org::w3c::dom::ls::DOMImplementationLS::_class = nullptr;
jclass org::w3c::dom::ls::LSOutput::_class = nullptr;
jclass org::w3c::dom::ls::LSInput::_class = nullptr;
jclass org::w3c::dom::ls::LSParser::_class = nullptr;
jclass org::w3c::dom::ls::LSParserFilter::_class = nullptr;

::org::w3c::dom::DOMConfiguration org::w3c::dom::ls::LSSerializer::getDomConfig() const {
    if (!::org::w3c::dom::ls::LSSerializer::_class) ::org::w3c::dom::ls::LSSerializer::_class = java::fetch_class("org/w3c/dom/ls/LSSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDomConfig", "()Lorg/w3c/dom/DOMConfiguration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::DOMConfiguration _ret(ret);
    return _ret;
}

::java::lang::String org::w3c::dom::ls::LSSerializer::getNewLine() const {
    if (!::org::w3c::dom::ls::LSSerializer::_class) ::org::w3c::dom::ls::LSSerializer::_class = java::fetch_class("org/w3c/dom/ls/LSSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNewLine", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::w3c::dom::ls::LSSerializer::setNewLine(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::ls::LSSerializer::_class) ::org::w3c::dom::ls::LSSerializer::_class = java::fetch_class("org/w3c/dom/ls/LSSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNewLine", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::w3c::dom::ls::LSSerializer::write(const ::org::w3c::dom::Node& arg0, const ::org::w3c::dom::ls::LSOutput& arg1) const {
    if (!::org::w3c::dom::ls::LSSerializer::_class) ::org::w3c::dom::ls::LSSerializer::_class = java::fetch_class("org/w3c/dom/ls/LSSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/ls/LSOutput;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool org::w3c::dom::ls::LSSerializer::writeToURI(const ::org::w3c::dom::Node& arg0, const ::java::lang::String& arg1) const {
    if (!::org::w3c::dom::ls::LSSerializer::_class) ::org::w3c::dom::ls::LSSerializer::_class = java::fetch_class("org/w3c/dom/ls/LSSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToURI", "(Lorg/w3c/dom/Node;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String org::w3c::dom::ls::LSSerializer::writeToString(const ::org::w3c::dom::Node& arg0) const {
    if (!::org::w3c::dom::ls::LSSerializer::_class) ::org::w3c::dom::ls::LSSerializer::_class = java::fetch_class("org/w3c/dom/ls/LSSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToString", "(Lorg/w3c/dom/Node;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::org::w3c::dom::ls::LSInput org::w3c::dom::ls::LSResourceResolver::resolveResource(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4) const {
    if (!::org::w3c::dom::ls::LSResourceResolver::_class) ::org::w3c::dom::ls::LSResourceResolver::_class = java::fetch_class("org/w3c/dom/ls/LSResourceResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveResource", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/ls/LSInput;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::org::w3c::dom::ls::LSInput _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::w3c::dom::ls::LSException::LSException(int16_t arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::org::w3c::dom::ls::LSException::_class) ::org::w3c::dom::ls::LSException::_class = java::fetch_class("org/w3c/dom/ls/LSException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(SLjava/lang/String;)V");
    int16_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::org::w3c::dom::ls::LSParser org::w3c::dom::ls::DOMImplementationLS::createLSParser(int16_t arg0, const ::java::lang::String& arg1) const {
    if (!::org::w3c::dom::ls::DOMImplementationLS::_class) ::org::w3c::dom::ls::DOMImplementationLS::_class = java::fetch_class("org/w3c/dom/ls/DOMImplementationLS");
    static jmethodID mid = java::jni->GetMethodID(_class, "createLSParser", "(SLjava/lang/String;)Lorg/w3c/dom/ls/LSParser;");
    int16_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::w3c::dom::ls::LSParser _ret(ret);
    return _ret;
}

::org::w3c::dom::ls::LSSerializer org::w3c::dom::ls::DOMImplementationLS::createLSSerializer() const {
    if (!::org::w3c::dom::ls::DOMImplementationLS::_class) ::org::w3c::dom::ls::DOMImplementationLS::_class = java::fetch_class("org/w3c/dom/ls/DOMImplementationLS");
    static jmethodID mid = java::jni->GetMethodID(_class, "createLSSerializer", "()Lorg/w3c/dom/ls/LSSerializer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::ls::LSSerializer _ret(ret);
    return _ret;
}

::org::w3c::dom::ls::LSInput org::w3c::dom::ls::DOMImplementationLS::createLSInput() const {
    if (!::org::w3c::dom::ls::DOMImplementationLS::_class) ::org::w3c::dom::ls::DOMImplementationLS::_class = java::fetch_class("org/w3c/dom/ls/DOMImplementationLS");
    static jmethodID mid = java::jni->GetMethodID(_class, "createLSInput", "()Lorg/w3c/dom/ls/LSInput;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::ls::LSInput _ret(ret);
    return _ret;
}

::org::w3c::dom::ls::LSOutput org::w3c::dom::ls::DOMImplementationLS::createLSOutput() const {
    if (!::org::w3c::dom::ls::DOMImplementationLS::_class) ::org::w3c::dom::ls::DOMImplementationLS::_class = java::fetch_class("org/w3c/dom/ls/DOMImplementationLS");
    static jmethodID mid = java::jni->GetMethodID(_class, "createLSOutput", "()Lorg/w3c/dom/ls/LSOutput;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::ls::LSOutput _ret(ret);
    return _ret;
}

::java::io::Writer org::w3c::dom::ls::LSOutput::getCharacterStream() const {
    if (!::org::w3c::dom::ls::LSOutput::_class) ::org::w3c::dom::ls::LSOutput::_class = java::fetch_class("org/w3c/dom/ls/LSOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCharacterStream", "()Ljava/io/Writer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::Writer _ret(ret);
    return _ret;
}

void org::w3c::dom::ls::LSOutput::setCharacterStream(const ::java::io::Writer& arg0) const {
    if (!::org::w3c::dom::ls::LSOutput::_class) ::org::w3c::dom::ls::LSOutput::_class = java::fetch_class("org/w3c/dom/ls/LSOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCharacterStream", "(Ljava/io/Writer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::io::OutputStream org::w3c::dom::ls::LSOutput::getByteStream() const {
    if (!::org::w3c::dom::ls::LSOutput::_class) ::org::w3c::dom::ls::LSOutput::_class = java::fetch_class("org/w3c/dom/ls/LSOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "getByteStream", "()Ljava/io/OutputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::OutputStream _ret(ret);
    return _ret;
}

void org::w3c::dom::ls::LSOutput::setByteStream(const ::java::io::OutputStream& arg0) const {
    if (!::org::w3c::dom::ls::LSOutput::_class) ::org::w3c::dom::ls::LSOutput::_class = java::fetch_class("org/w3c/dom/ls/LSOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "setByteStream", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String org::w3c::dom::ls::LSOutput::getSystemId() const {
    if (!::org::w3c::dom::ls::LSOutput::_class) ::org::w3c::dom::ls::LSOutput::_class = java::fetch_class("org/w3c/dom/ls/LSOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::w3c::dom::ls::LSOutput::setSystemId(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::ls::LSOutput::_class) ::org::w3c::dom::ls::LSOutput::_class = java::fetch_class("org/w3c/dom/ls/LSOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSystemId", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String org::w3c::dom::ls::LSOutput::getEncoding() const {
    if (!::org::w3c::dom::ls::LSOutput::_class) ::org::w3c::dom::ls::LSOutput::_class = java::fetch_class("org/w3c/dom/ls/LSOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncoding", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::w3c::dom::ls::LSOutput::setEncoding(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::ls::LSOutput::_class) ::org::w3c::dom::ls::LSOutput::_class = java::fetch_class("org/w3c/dom/ls/LSOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEncoding", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::io::Reader org::w3c::dom::ls::LSInput::getCharacterStream() const {
    if (!::org::w3c::dom::ls::LSInput::_class) ::org::w3c::dom::ls::LSInput::_class = java::fetch_class("org/w3c/dom/ls/LSInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCharacterStream", "()Ljava/io/Reader;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::Reader _ret(ret);
    return _ret;
}

void org::w3c::dom::ls::LSInput::setCharacterStream(const ::java::io::Reader& arg0) const {
    if (!::org::w3c::dom::ls::LSInput::_class) ::org::w3c::dom::ls::LSInput::_class = java::fetch_class("org/w3c/dom/ls/LSInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCharacterStream", "(Ljava/io/Reader;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::io::InputStream org::w3c::dom::ls::LSInput::getByteStream() const {
    if (!::org::w3c::dom::ls::LSInput::_class) ::org::w3c::dom::ls::LSInput::_class = java::fetch_class("org/w3c/dom/ls/LSInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "getByteStream", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

void org::w3c::dom::ls::LSInput::setByteStream(const ::java::io::InputStream& arg0) const {
    if (!::org::w3c::dom::ls::LSInput::_class) ::org::w3c::dom::ls::LSInput::_class = java::fetch_class("org/w3c/dom/ls/LSInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "setByteStream", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String org::w3c::dom::ls::LSInput::getStringData() const {
    if (!::org::w3c::dom::ls::LSInput::_class) ::org::w3c::dom::ls::LSInput::_class = java::fetch_class("org/w3c/dom/ls/LSInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStringData", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::w3c::dom::ls::LSInput::setStringData(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::ls::LSInput::_class) ::org::w3c::dom::ls::LSInput::_class = java::fetch_class("org/w3c/dom/ls/LSInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStringData", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String org::w3c::dom::ls::LSInput::getSystemId() const {
    if (!::org::w3c::dom::ls::LSInput::_class) ::org::w3c::dom::ls::LSInput::_class = java::fetch_class("org/w3c/dom/ls/LSInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::w3c::dom::ls::LSInput::setSystemId(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::ls::LSInput::_class) ::org::w3c::dom::ls::LSInput::_class = java::fetch_class("org/w3c/dom/ls/LSInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSystemId", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String org::w3c::dom::ls::LSInput::getPublicId() const {
    if (!::org::w3c::dom::ls::LSInput::_class) ::org::w3c::dom::ls::LSInput::_class = java::fetch_class("org/w3c/dom/ls/LSInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPublicId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::w3c::dom::ls::LSInput::setPublicId(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::ls::LSInput::_class) ::org::w3c::dom::ls::LSInput::_class = java::fetch_class("org/w3c/dom/ls/LSInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPublicId", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String org::w3c::dom::ls::LSInput::getBaseURI() const {
    if (!::org::w3c::dom::ls::LSInput::_class) ::org::w3c::dom::ls::LSInput::_class = java::fetch_class("org/w3c/dom/ls/LSInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBaseURI", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::w3c::dom::ls::LSInput::setBaseURI(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::ls::LSInput::_class) ::org::w3c::dom::ls::LSInput::_class = java::fetch_class("org/w3c/dom/ls/LSInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBaseURI", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String org::w3c::dom::ls::LSInput::getEncoding() const {
    if (!::org::w3c::dom::ls::LSInput::_class) ::org::w3c::dom::ls::LSInput::_class = java::fetch_class("org/w3c/dom/ls/LSInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncoding", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::w3c::dom::ls::LSInput::setEncoding(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::ls::LSInput::_class) ::org::w3c::dom::ls::LSInput::_class = java::fetch_class("org/w3c/dom/ls/LSInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEncoding", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::w3c::dom::ls::LSInput::getCertifiedText() const {
    if (!::org::w3c::dom::ls::LSInput::_class) ::org::w3c::dom::ls::LSInput::_class = java::fetch_class("org/w3c/dom/ls/LSInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCertifiedText", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void org::w3c::dom::ls::LSInput::setCertifiedText(bool arg0) const {
    if (!::org::w3c::dom::ls::LSInput::_class) ::org::w3c::dom::ls::LSInput::_class = java::fetch_class("org/w3c/dom/ls/LSInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCertifiedText", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::w3c::dom::DOMConfiguration org::w3c::dom::ls::LSParser::getDomConfig() const {
    if (!::org::w3c::dom::ls::LSParser::_class) ::org::w3c::dom::ls::LSParser::_class = java::fetch_class("org/w3c/dom/ls/LSParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDomConfig", "()Lorg/w3c/dom/DOMConfiguration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::DOMConfiguration _ret(ret);
    return _ret;
}

::org::w3c::dom::ls::LSParserFilter org::w3c::dom::ls::LSParser::getFilter() const {
    if (!::org::w3c::dom::ls::LSParser::_class) ::org::w3c::dom::ls::LSParser::_class = java::fetch_class("org/w3c/dom/ls/LSParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFilter", "()Lorg/w3c/dom/ls/LSParserFilter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::ls::LSParserFilter _ret(ret);
    return _ret;
}

void org::w3c::dom::ls::LSParser::setFilter(const ::org::w3c::dom::ls::LSParserFilter& arg0) const {
    if (!::org::w3c::dom::ls::LSParser::_class) ::org::w3c::dom::ls::LSParser::_class = java::fetch_class("org/w3c/dom/ls/LSParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFilter", "(Lorg/w3c/dom/ls/LSParserFilter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::w3c::dom::ls::LSParser::getAsync() const {
    if (!::org::w3c::dom::ls::LSParser::_class) ::org::w3c::dom::ls::LSParser::_class = java::fetch_class("org/w3c/dom/ls/LSParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAsync", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool org::w3c::dom::ls::LSParser::getBusy() const {
    if (!::org::w3c::dom::ls::LSParser::_class) ::org::w3c::dom::ls::LSParser::_class = java::fetch_class("org/w3c/dom/ls/LSParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBusy", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::org::w3c::dom::Document org::w3c::dom::ls::LSParser::parse(const ::org::w3c::dom::ls::LSInput& arg0) const {
    if (!::org::w3c::dom::ls::LSParser::_class) ::org::w3c::dom::ls::LSParser::_class = java::fetch_class("org/w3c/dom/ls/LSParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/w3c/dom/ls/LSInput;)Lorg/w3c/dom/Document;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::Document _ret(ret);
    return _ret;
}

::org::w3c::dom::Document org::w3c::dom::ls::LSParser::parseURI(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::ls::LSParser::_class) ::org::w3c::dom::ls::LSParser::_class = java::fetch_class("org/w3c/dom/ls/LSParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseURI", "(Ljava/lang/String;)Lorg/w3c/dom/Document;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::Document _ret(ret);
    return _ret;
}

::org::w3c::dom::Node org::w3c::dom::ls::LSParser::parseWithContext(const ::org::w3c::dom::ls::LSInput& arg0, const ::org::w3c::dom::Node& arg1, int16_t arg2) const {
    if (!::org::w3c::dom::ls::LSParser::_class) ::org::w3c::dom::ls::LSParser::_class = java::fetch_class("org/w3c/dom/ls/LSParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseWithContext", "(Lorg/w3c/dom/ls/LSInput;Lorg/w3c/dom/Node;S)Lorg/w3c/dom/Node;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int16_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::org::w3c::dom::Node _ret(ret);
    return _ret;
}

void org::w3c::dom::ls::LSParser::abort() const {
    if (!::org::w3c::dom::ls::LSParser::_class) ::org::w3c::dom::ls::LSParser::_class = java::fetch_class("org/w3c/dom/ls/LSParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "abort", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int16_t org::w3c::dom::ls::LSParserFilter::startElement(const ::org::w3c::dom::Element& arg0) const {
    if (!::org::w3c::dom::ls::LSParserFilter::_class) ::org::w3c::dom::ls::LSParserFilter::_class = java::fetch_class("org/w3c/dom/ls/LSParserFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "startElement", "(Lorg/w3c/dom/Element;)S");
    jobject _arg0 = arg0.obj;
    return java::jni->CallShortMethod(obj, mid, _arg0);
}

int16_t org::w3c::dom::ls::LSParserFilter::acceptNode(const ::org::w3c::dom::Node& arg0) const {
    if (!::org::w3c::dom::ls::LSParserFilter::_class) ::org::w3c::dom::ls::LSParserFilter::_class = java::fetch_class("org/w3c/dom/ls/LSParserFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "acceptNode", "(Lorg/w3c/dom/Node;)S");
    jobject _arg0 = arg0.obj;
    return java::jni->CallShortMethod(obj, mid, _arg0);
}

int32_t org::w3c::dom::ls::LSParserFilter::getWhatToShow() const {
    if (!::org::w3c::dom::ls::LSParserFilter::_class) ::org::w3c::dom::ls::LSParserFilter::_class = java::fetch_class("org/w3c/dom/ls/LSParserFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWhatToShow", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

