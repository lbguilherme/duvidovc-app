#include "java-core.hpp"
#include <memory>
#include "java.io.InputStream.hpp"
#include "java.io.Reader.hpp"
#include "java.lang.Exception.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.Locale.hpp"
#include "org.xml.sax.AttributeList.hpp"
#include "org.xml.sax.Attributes.hpp"
#include "org.xml.sax.ContentHandler.hpp"
#include "org.xml.sax.DTDHandler.hpp"
#include "org.xml.sax.DocumentHandler.hpp"
#include "org.xml.sax.EntityResolver.hpp"
#include "org.xml.sax.ErrorHandler.hpp"
#include "org.xml.sax.HandlerBase.hpp"
#include "org.xml.sax.InputSource.hpp"
#include "org.xml.sax.Locator.hpp"
#include "org.xml.sax.Parser.hpp"
#include "org.xml.sax.SAXException.hpp"
#include "org.xml.sax.SAXNotRecognizedException.hpp"
#include "org.xml.sax.SAXNotSupportedException.hpp"
#include "org.xml.sax.SAXParseException.hpp"
#include "org.xml.sax.XMLFilter.hpp"
#include "org.xml.sax.XMLReader.hpp"

jclass org::xml::sax::Locator::_class = nullptr;
jclass org::xml::sax::SAXNotSupportedException::_class = nullptr;
jclass org::xml::sax::DTDHandler::_class = nullptr;
jclass org::xml::sax::XMLFilter::_class = nullptr;
jclass org::xml::sax::HandlerBase::_class = nullptr;
jclass org::xml::sax::SAXNotRecognizedException::_class = nullptr;
jclass org::xml::sax::SAXParseException::_class = nullptr;
jclass org::xml::sax::ContentHandler::_class = nullptr;
jclass org::xml::sax::InputSource::_class = nullptr;
jclass org::xml::sax::Parser::_class = nullptr;
jclass org::xml::sax::EntityResolver::_class = nullptr;
jclass org::xml::sax::Attributes::_class = nullptr;
jclass org::xml::sax::ErrorHandler::_class = nullptr;
jclass org::xml::sax::DocumentHandler::_class = nullptr;
jclass org::xml::sax::XMLReader::_class = nullptr;
jclass org::xml::sax::AttributeList::_class = nullptr;
jclass org::xml::sax::SAXException::_class = nullptr;

::java::lang::String org::xml::sax::Locator::getPublicId() const {
    if (!::org::xml::sax::Locator::_class) ::org::xml::sax::Locator::_class = java::fetch_class("org/xml/sax/Locator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPublicId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xml::sax::Locator::getSystemId() const {
    if (!::org::xml::sax::Locator::_class) ::org::xml::sax::Locator::_class = java::fetch_class("org/xml/sax/Locator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t org::xml::sax::Locator::getLineNumber() const {
    if (!::org::xml::sax::Locator::_class) ::org::xml::sax::Locator::_class = java::fetch_class("org/xml/sax/Locator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineNumber", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t org::xml::sax::Locator::getColumnNumber() const {
    if (!::org::xml::sax::Locator::_class) ::org::xml::sax::Locator::_class = java::fetch_class("org/xml/sax/Locator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnNumber", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::SAXNotSupportedException::SAXNotSupportedException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::xml::sax::SAXException((jobject)0) {
    if (!::org::xml::sax::SAXNotSupportedException::_class) ::org::xml::sax::SAXNotSupportedException::_class = java::fetch_class("org/xml/sax/SAXNotSupportedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::SAXNotSupportedException::SAXNotSupportedException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::xml::sax::SAXException((jobject)0) {
    if (!::org::xml::sax::SAXNotSupportedException::_class) ::org::xml::sax::SAXNotSupportedException::_class = java::fetch_class("org/xml/sax/SAXNotSupportedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void org::xml::sax::DTDHandler::notationDecl(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::org::xml::sax::DTDHandler::_class) ::org::xml::sax::DTDHandler::_class = java::fetch_class("org/xml/sax/DTDHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "notationDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::xml::sax::DTDHandler::unparsedEntityDecl(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3) const {
    if (!::org::xml::sax::DTDHandler::_class) ::org::xml::sax::DTDHandler::_class = java::fetch_class("org/xml/sax/DTDHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "unparsedEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void org::xml::sax::XMLFilter::setParent(const ::org::xml::sax::XMLReader& arg0) const {
    if (!::org::xml::sax::XMLFilter::_class) ::org::xml::sax::XMLFilter::_class = java::fetch_class("org/xml/sax/XMLFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParent", "(Lorg/xml/sax/XMLReader;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::XMLReader org::xml::sax::XMLFilter::getParent() const {
    if (!::org::xml::sax::XMLFilter::_class) ::org::xml::sax::XMLFilter::_class = java::fetch_class("org/xml/sax/XMLFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParent", "()Lorg/xml/sax/XMLReader;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xml::sax::XMLReader _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::HandlerBase::HandlerBase() : ::java::lang::Object((jobject)0), ::org::xml::sax::DTDHandler((jobject)0), ::org::xml::sax::DocumentHandler((jobject)0), ::org::xml::sax::EntityResolver((jobject)0), ::org::xml::sax::ErrorHandler((jobject)0) {
    if (!::org::xml::sax::HandlerBase::_class) ::org::xml::sax::HandlerBase::_class = java::fetch_class("org/xml/sax/HandlerBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::org::xml::sax::InputSource org::xml::sax::HandlerBase::resolveEntity(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::HandlerBase::_class) ::org::xml::sax::HandlerBase::_class = java::fetch_class("org/xml/sax/HandlerBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveEntity", "(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::xml::sax::InputSource _ret(ret);
    return _ret;
}

void org::xml::sax::HandlerBase::notationDecl(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::org::xml::sax::HandlerBase::_class) ::org::xml::sax::HandlerBase::_class = java::fetch_class("org/xml/sax/HandlerBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "notationDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::xml::sax::HandlerBase::unparsedEntityDecl(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3) const {
    if (!::org::xml::sax::HandlerBase::_class) ::org::xml::sax::HandlerBase::_class = java::fetch_class("org/xml/sax/HandlerBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "unparsedEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void org::xml::sax::HandlerBase::setDocumentLocator(const ::org::xml::sax::Locator& arg0) const {
    if (!::org::xml::sax::HandlerBase::_class) ::org::xml::sax::HandlerBase::_class = java::fetch_class("org/xml/sax/HandlerBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDocumentLocator", "(Lorg/xml/sax/Locator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::HandlerBase::startDocument() const {
    if (!::org::xml::sax::HandlerBase::_class) ::org::xml::sax::HandlerBase::_class = java::fetch_class("org/xml/sax/HandlerBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "startDocument", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::xml::sax::HandlerBase::endDocument() const {
    if (!::org::xml::sax::HandlerBase::_class) ::org::xml::sax::HandlerBase::_class = java::fetch_class("org/xml/sax/HandlerBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "endDocument", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::xml::sax::HandlerBase::startElement(const ::java::lang::String& arg0, const ::org::xml::sax::AttributeList& arg1) const {
    if (!::org::xml::sax::HandlerBase::_class) ::org::xml::sax::HandlerBase::_class = java::fetch_class("org/xml/sax/HandlerBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "startElement", "(Ljava/lang/String;Lorg/xml/sax/AttributeList;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::xml::sax::HandlerBase::endElement(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::HandlerBase::_class) ::org::xml::sax::HandlerBase::_class = java::fetch_class("org/xml/sax/HandlerBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "endElement", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::HandlerBase::characters(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::xml::sax::HandlerBase::_class) ::org::xml::sax::HandlerBase::_class = java::fetch_class("org/xml/sax/HandlerBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "characters", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::xml::sax::HandlerBase::ignorableWhitespace(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::xml::sax::HandlerBase::_class) ::org::xml::sax::HandlerBase::_class = java::fetch_class("org/xml/sax/HandlerBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "ignorableWhitespace", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::xml::sax::HandlerBase::processingInstruction(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::HandlerBase::_class) ::org::xml::sax::HandlerBase::_class = java::fetch_class("org/xml/sax/HandlerBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::xml::sax::HandlerBase::warning(const ::org::xml::sax::SAXParseException& arg0) const {
    if (!::org::xml::sax::HandlerBase::_class) ::org::xml::sax::HandlerBase::_class = java::fetch_class("org/xml/sax/HandlerBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "warning", "(Lorg/xml/sax/SAXParseException;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::HandlerBase::error(const ::org::xml::sax::SAXParseException& arg0) const {
    if (!::org::xml::sax::HandlerBase::_class) ::org::xml::sax::HandlerBase::_class = java::fetch_class("org/xml/sax/HandlerBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "error", "(Lorg/xml/sax/SAXParseException;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::HandlerBase::fatalError(const ::org::xml::sax::SAXParseException& arg0) const {
    if (!::org::xml::sax::HandlerBase::_class) ::org::xml::sax::HandlerBase::_class = java::fetch_class("org/xml/sax/HandlerBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "fatalError", "(Lorg/xml/sax/SAXParseException;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::SAXNotRecognizedException::SAXNotRecognizedException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::xml::sax::SAXException((jobject)0) {
    if (!::org::xml::sax::SAXNotRecognizedException::_class) ::org::xml::sax::SAXNotRecognizedException::_class = java::fetch_class("org/xml/sax/SAXNotRecognizedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::SAXNotRecognizedException::SAXNotRecognizedException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::xml::sax::SAXException((jobject)0) {
    if (!::org::xml::sax::SAXNotRecognizedException::_class) ::org::xml::sax::SAXNotRecognizedException::_class = java::fetch_class("org/xml/sax/SAXNotRecognizedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::SAXParseException::SAXParseException(const ::java::lang::String& arg0, const ::org::xml::sax::Locator& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::xml::sax::SAXException((jobject)0) {
    if (!::org::xml::sax::SAXParseException::_class) ::org::xml::sax::SAXParseException::_class = java::fetch_class("org/xml/sax/SAXParseException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Lorg/xml/sax/Locator;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::SAXParseException::SAXParseException(const ::java::lang::String& arg0, const ::org::xml::sax::Locator& arg1, const ::java::lang::Exception& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::xml::sax::SAXException((jobject)0) {
    if (!::org::xml::sax::SAXParseException::_class) ::org::xml::sax::SAXParseException::_class = java::fetch_class("org/xml/sax/SAXParseException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Lorg/xml/sax/Locator;Ljava/lang/Exception;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::SAXParseException::SAXParseException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, int32_t arg3, int32_t arg4) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::xml::sax::SAXException((jobject)0) {
    if (!::org::xml::sax::SAXParseException::_class) ::org::xml::sax::SAXParseException::_class = java::fetch_class("org/xml/sax/SAXParseException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;II)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::SAXParseException::SAXParseException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, int32_t arg3, int32_t arg4, const ::java::lang::Exception& arg5) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::xml::sax::SAXException((jobject)0) {
    if (!::org::xml::sax::SAXParseException::_class) ::org::xml::sax::SAXParseException::_class = java::fetch_class("org/xml/sax/SAXParseException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IILjava/lang/Exception;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}
#pragma GCC diagnostic pop

::java::lang::String org::xml::sax::SAXParseException::getPublicId() const {
    if (!::org::xml::sax::SAXParseException::_class) ::org::xml::sax::SAXParseException::_class = java::fetch_class("org/xml/sax/SAXParseException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPublicId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xml::sax::SAXParseException::getSystemId() const {
    if (!::org::xml::sax::SAXParseException::_class) ::org::xml::sax::SAXParseException::_class = java::fetch_class("org/xml/sax/SAXParseException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t org::xml::sax::SAXParseException::getLineNumber() const {
    if (!::org::xml::sax::SAXParseException::_class) ::org::xml::sax::SAXParseException::_class = java::fetch_class("org/xml/sax/SAXParseException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineNumber", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t org::xml::sax::SAXParseException::getColumnNumber() const {
    if (!::org::xml::sax::SAXParseException::_class) ::org::xml::sax::SAXParseException::_class = java::fetch_class("org/xml/sax/SAXParseException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnNumber", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void org::xml::sax::ContentHandler::setDocumentLocator(const ::org::xml::sax::Locator& arg0) const {
    if (!::org::xml::sax::ContentHandler::_class) ::org::xml::sax::ContentHandler::_class = java::fetch_class("org/xml/sax/ContentHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDocumentLocator", "(Lorg/xml/sax/Locator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::ContentHandler::startDocument() const {
    if (!::org::xml::sax::ContentHandler::_class) ::org::xml::sax::ContentHandler::_class = java::fetch_class("org/xml/sax/ContentHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "startDocument", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::xml::sax::ContentHandler::endDocument() const {
    if (!::org::xml::sax::ContentHandler::_class) ::org::xml::sax::ContentHandler::_class = java::fetch_class("org/xml/sax/ContentHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "endDocument", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::xml::sax::ContentHandler::startPrefixMapping(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::ContentHandler::_class) ::org::xml::sax::ContentHandler::_class = java::fetch_class("org/xml/sax/ContentHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::xml::sax::ContentHandler::endPrefixMapping(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::ContentHandler::_class) ::org::xml::sax::ContentHandler::_class = java::fetch_class("org/xml/sax/ContentHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "endPrefixMapping", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::ContentHandler::startElement(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::org::xml::sax::Attributes& arg3) const {
    if (!::org::xml::sax::ContentHandler::_class) ::org::xml::sax::ContentHandler::_class = java::fetch_class("org/xml/sax/ContentHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void org::xml::sax::ContentHandler::endElement(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::org::xml::sax::ContentHandler::_class) ::org::xml::sax::ContentHandler::_class = java::fetch_class("org/xml/sax/ContentHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::xml::sax::ContentHandler::characters(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::xml::sax::ContentHandler::_class) ::org::xml::sax::ContentHandler::_class = java::fetch_class("org/xml/sax/ContentHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "characters", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::xml::sax::ContentHandler::ignorableWhitespace(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::xml::sax::ContentHandler::_class) ::org::xml::sax::ContentHandler::_class = java::fetch_class("org/xml/sax/ContentHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "ignorableWhitespace", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::xml::sax::ContentHandler::processingInstruction(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::ContentHandler::_class) ::org::xml::sax::ContentHandler::_class = java::fetch_class("org/xml/sax/ContentHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::xml::sax::ContentHandler::skippedEntity(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::ContentHandler::_class) ::org::xml::sax::ContentHandler::_class = java::fetch_class("org/xml/sax/ContentHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "skippedEntity", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::InputSource::InputSource() : ::java::lang::Object((jobject)0) {
    if (!::org::xml::sax::InputSource::_class) ::org::xml::sax::InputSource::_class = java::fetch_class("org/xml/sax/InputSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::InputSource::InputSource(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0) {
    if (!::org::xml::sax::InputSource::_class) ::org::xml::sax::InputSource::_class = java::fetch_class("org/xml/sax/InputSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::InputSource::InputSource(const ::java::io::InputStream& arg0) : ::java::lang::Object((jobject)0) {
    if (!::org::xml::sax::InputSource::_class) ::org::xml::sax::InputSource::_class = java::fetch_class("org/xml/sax/InputSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::InputSource::InputSource(const ::java::io::Reader& arg0) : ::java::lang::Object((jobject)0) {
    if (!::org::xml::sax::InputSource::_class) ::org::xml::sax::InputSource::_class = java::fetch_class("org/xml/sax/InputSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/Reader;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void org::xml::sax::InputSource::setPublicId(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::InputSource::_class) ::org::xml::sax::InputSource::_class = java::fetch_class("org/xml/sax/InputSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPublicId", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String org::xml::sax::InputSource::getPublicId() const {
    if (!::org::xml::sax::InputSource::_class) ::org::xml::sax::InputSource::_class = java::fetch_class("org/xml/sax/InputSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPublicId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::xml::sax::InputSource::setSystemId(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::InputSource::_class) ::org::xml::sax::InputSource::_class = java::fetch_class("org/xml/sax/InputSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSystemId", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String org::xml::sax::InputSource::getSystemId() const {
    if (!::org::xml::sax::InputSource::_class) ::org::xml::sax::InputSource::_class = java::fetch_class("org/xml/sax/InputSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::xml::sax::InputSource::setByteStream(const ::java::io::InputStream& arg0) const {
    if (!::org::xml::sax::InputSource::_class) ::org::xml::sax::InputSource::_class = java::fetch_class("org/xml/sax/InputSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "setByteStream", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::io::InputStream org::xml::sax::InputSource::getByteStream() const {
    if (!::org::xml::sax::InputSource::_class) ::org::xml::sax::InputSource::_class = java::fetch_class("org/xml/sax/InputSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "getByteStream", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

void org::xml::sax::InputSource::setEncoding(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::InputSource::_class) ::org::xml::sax::InputSource::_class = java::fetch_class("org/xml/sax/InputSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEncoding", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String org::xml::sax::InputSource::getEncoding() const {
    if (!::org::xml::sax::InputSource::_class) ::org::xml::sax::InputSource::_class = java::fetch_class("org/xml/sax/InputSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncoding", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::xml::sax::InputSource::setCharacterStream(const ::java::io::Reader& arg0) const {
    if (!::org::xml::sax::InputSource::_class) ::org::xml::sax::InputSource::_class = java::fetch_class("org/xml/sax/InputSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCharacterStream", "(Ljava/io/Reader;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::io::Reader org::xml::sax::InputSource::getCharacterStream() const {
    if (!::org::xml::sax::InputSource::_class) ::org::xml::sax::InputSource::_class = java::fetch_class("org/xml/sax/InputSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCharacterStream", "()Ljava/io/Reader;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::Reader _ret(ret);
    return _ret;
}

void org::xml::sax::Parser::setLocale(const ::java::util::Locale& arg0) const {
    if (!::org::xml::sax::Parser::_class) ::org::xml::sax::Parser::_class = java::fetch_class("org/xml/sax/Parser");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLocale", "(Ljava/util/Locale;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::Parser::setEntityResolver(const ::org::xml::sax::EntityResolver& arg0) const {
    if (!::org::xml::sax::Parser::_class) ::org::xml::sax::Parser::_class = java::fetch_class("org/xml/sax/Parser");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEntityResolver", "(Lorg/xml/sax/EntityResolver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::Parser::setDTDHandler(const ::org::xml::sax::DTDHandler& arg0) const {
    if (!::org::xml::sax::Parser::_class) ::org::xml::sax::Parser::_class = java::fetch_class("org/xml/sax/Parser");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDTDHandler", "(Lorg/xml/sax/DTDHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::Parser::setDocumentHandler(const ::org::xml::sax::DocumentHandler& arg0) const {
    if (!::org::xml::sax::Parser::_class) ::org::xml::sax::Parser::_class = java::fetch_class("org/xml/sax/Parser");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDocumentHandler", "(Lorg/xml/sax/DocumentHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::Parser::setErrorHandler(const ::org::xml::sax::ErrorHandler& arg0) const {
    if (!::org::xml::sax::Parser::_class) ::org::xml::sax::Parser::_class = java::fetch_class("org/xml/sax/Parser");
    static jmethodID mid = java::jni->GetMethodID(_class, "setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::Parser::parse(const ::org::xml::sax::InputSource& arg0) const {
    if (!::org::xml::sax::Parser::_class) ::org::xml::sax::Parser::_class = java::fetch_class("org/xml/sax/Parser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/xml/sax/InputSource;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::Parser::parse(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::Parser::_class) ::org::xml::sax::Parser::_class = java::fetch_class("org/xml/sax/Parser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::InputSource org::xml::sax::EntityResolver::resolveEntity(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::EntityResolver::_class) ::org::xml::sax::EntityResolver::_class = java::fetch_class("org/xml/sax/EntityResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveEntity", "(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::xml::sax::InputSource _ret(ret);
    return _ret;
}

int32_t org::xml::sax::Attributes::getLength() const {
    if (!::org::xml::sax::Attributes::_class) ::org::xml::sax::Attributes::_class = java::fetch_class("org/xml/sax/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String org::xml::sax::Attributes::getURI(int32_t arg0) const {
    if (!::org::xml::sax::Attributes::_class) ::org::xml::sax::Attributes::_class = java::fetch_class("org/xml/sax/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "getURI", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xml::sax::Attributes::getLocalName(int32_t arg0) const {
    if (!::org::xml::sax::Attributes::_class) ::org::xml::sax::Attributes::_class = java::fetch_class("org/xml/sax/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xml::sax::Attributes::getQName(int32_t arg0) const {
    if (!::org::xml::sax::Attributes::_class) ::org::xml::sax::Attributes::_class = java::fetch_class("org/xml/sax/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xml::sax::Attributes::getType(int32_t arg0) const {
    if (!::org::xml::sax::Attributes::_class) ::org::xml::sax::Attributes::_class = java::fetch_class("org/xml/sax/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xml::sax::Attributes::getValue(int32_t arg0) const {
    if (!::org::xml::sax::Attributes::_class) ::org::xml::sax::Attributes::_class = java::fetch_class("org/xml/sax/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t org::xml::sax::Attributes::getIndex(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::Attributes::_class) ::org::xml::sax::Attributes::_class = java::fetch_class("org/xml/sax/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIndex", "(Ljava/lang/String;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t org::xml::sax::Attributes::getIndex(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::Attributes::_class) ::org::xml::sax::Attributes::_class = java::fetch_class("org/xml/sax/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIndex", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String org::xml::sax::Attributes::getType(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::Attributes::_class) ::org::xml::sax::Attributes::_class = java::fetch_class("org/xml/sax/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xml::sax::Attributes::getType(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::Attributes::_class) ::org::xml::sax::Attributes::_class = java::fetch_class("org/xml/sax/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xml::sax::Attributes::getValue(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::Attributes::_class) ::org::xml::sax::Attributes::_class = java::fetch_class("org/xml/sax/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xml::sax::Attributes::getValue(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::Attributes::_class) ::org::xml::sax::Attributes::_class = java::fetch_class("org/xml/sax/Attributes");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::xml::sax::ErrorHandler::warning(const ::org::xml::sax::SAXParseException& arg0) const {
    if (!::org::xml::sax::ErrorHandler::_class) ::org::xml::sax::ErrorHandler::_class = java::fetch_class("org/xml/sax/ErrorHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "warning", "(Lorg/xml/sax/SAXParseException;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::ErrorHandler::error(const ::org::xml::sax::SAXParseException& arg0) const {
    if (!::org::xml::sax::ErrorHandler::_class) ::org::xml::sax::ErrorHandler::_class = java::fetch_class("org/xml/sax/ErrorHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "error", "(Lorg/xml/sax/SAXParseException;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::ErrorHandler::fatalError(const ::org::xml::sax::SAXParseException& arg0) const {
    if (!::org::xml::sax::ErrorHandler::_class) ::org::xml::sax::ErrorHandler::_class = java::fetch_class("org/xml/sax/ErrorHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "fatalError", "(Lorg/xml/sax/SAXParseException;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::DocumentHandler::setDocumentLocator(const ::org::xml::sax::Locator& arg0) const {
    if (!::org::xml::sax::DocumentHandler::_class) ::org::xml::sax::DocumentHandler::_class = java::fetch_class("org/xml/sax/DocumentHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDocumentLocator", "(Lorg/xml/sax/Locator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::DocumentHandler::startDocument() const {
    if (!::org::xml::sax::DocumentHandler::_class) ::org::xml::sax::DocumentHandler::_class = java::fetch_class("org/xml/sax/DocumentHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "startDocument", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::xml::sax::DocumentHandler::endDocument() const {
    if (!::org::xml::sax::DocumentHandler::_class) ::org::xml::sax::DocumentHandler::_class = java::fetch_class("org/xml/sax/DocumentHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "endDocument", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::xml::sax::DocumentHandler::startElement(const ::java::lang::String& arg0, const ::org::xml::sax::AttributeList& arg1) const {
    if (!::org::xml::sax::DocumentHandler::_class) ::org::xml::sax::DocumentHandler::_class = java::fetch_class("org/xml/sax/DocumentHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "startElement", "(Ljava/lang/String;Lorg/xml/sax/AttributeList;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::xml::sax::DocumentHandler::endElement(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::DocumentHandler::_class) ::org::xml::sax::DocumentHandler::_class = java::fetch_class("org/xml/sax/DocumentHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "endElement", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::DocumentHandler::characters(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::xml::sax::DocumentHandler::_class) ::org::xml::sax::DocumentHandler::_class = java::fetch_class("org/xml/sax/DocumentHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "characters", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::xml::sax::DocumentHandler::ignorableWhitespace(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::xml::sax::DocumentHandler::_class) ::org::xml::sax::DocumentHandler::_class = java::fetch_class("org/xml/sax/DocumentHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "ignorableWhitespace", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::xml::sax::DocumentHandler::processingInstruction(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::DocumentHandler::_class) ::org::xml::sax::DocumentHandler::_class = java::fetch_class("org/xml/sax/DocumentHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool org::xml::sax::XMLReader::getFeature(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::XMLReader::_class) ::org::xml::sax::XMLReader::_class = java::fetch_class("org/xml/sax/XMLReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFeature", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void org::xml::sax::XMLReader::setFeature(const ::java::lang::String& arg0, bool arg1) const {
    if (!::org::xml::sax::XMLReader::_class) ::org::xml::sax::XMLReader::_class = java::fetch_class("org/xml/sax/XMLReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFeature", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object org::xml::sax::XMLReader::getProperty(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::XMLReader::_class) ::org::xml::sax::XMLReader::_class = java::fetch_class("org/xml/sax/XMLReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProperty", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void org::xml::sax::XMLReader::setProperty(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::xml::sax::XMLReader::_class) ::org::xml::sax::XMLReader::_class = java::fetch_class("org/xml/sax/XMLReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::xml::sax::XMLReader::setEntityResolver(const ::org::xml::sax::EntityResolver& arg0) const {
    if (!::org::xml::sax::XMLReader::_class) ::org::xml::sax::XMLReader::_class = java::fetch_class("org/xml/sax/XMLReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEntityResolver", "(Lorg/xml/sax/EntityResolver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::EntityResolver org::xml::sax::XMLReader::getEntityResolver() const {
    if (!::org::xml::sax::XMLReader::_class) ::org::xml::sax::XMLReader::_class = java::fetch_class("org/xml/sax/XMLReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEntityResolver", "()Lorg/xml/sax/EntityResolver;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xml::sax::EntityResolver _ret(ret);
    return _ret;
}

void org::xml::sax::XMLReader::setDTDHandler(const ::org::xml::sax::DTDHandler& arg0) const {
    if (!::org::xml::sax::XMLReader::_class) ::org::xml::sax::XMLReader::_class = java::fetch_class("org/xml/sax/XMLReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDTDHandler", "(Lorg/xml/sax/DTDHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::DTDHandler org::xml::sax::XMLReader::getDTDHandler() const {
    if (!::org::xml::sax::XMLReader::_class) ::org::xml::sax::XMLReader::_class = java::fetch_class("org/xml/sax/XMLReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDTDHandler", "()Lorg/xml/sax/DTDHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xml::sax::DTDHandler _ret(ret);
    return _ret;
}

void org::xml::sax::XMLReader::setContentHandler(const ::org::xml::sax::ContentHandler& arg0) const {
    if (!::org::xml::sax::XMLReader::_class) ::org::xml::sax::XMLReader::_class = java::fetch_class("org/xml/sax/XMLReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentHandler", "(Lorg/xml/sax/ContentHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::ContentHandler org::xml::sax::XMLReader::getContentHandler() const {
    if (!::org::xml::sax::XMLReader::_class) ::org::xml::sax::XMLReader::_class = java::fetch_class("org/xml/sax/XMLReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentHandler", "()Lorg/xml/sax/ContentHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xml::sax::ContentHandler _ret(ret);
    return _ret;
}

void org::xml::sax::XMLReader::setErrorHandler(const ::org::xml::sax::ErrorHandler& arg0) const {
    if (!::org::xml::sax::XMLReader::_class) ::org::xml::sax::XMLReader::_class = java::fetch_class("org/xml/sax/XMLReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::ErrorHandler org::xml::sax::XMLReader::getErrorHandler() const {
    if (!::org::xml::sax::XMLReader::_class) ::org::xml::sax::XMLReader::_class = java::fetch_class("org/xml/sax/XMLReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getErrorHandler", "()Lorg/xml/sax/ErrorHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xml::sax::ErrorHandler _ret(ret);
    return _ret;
}

void org::xml::sax::XMLReader::parse(const ::org::xml::sax::InputSource& arg0) const {
    if (!::org::xml::sax::XMLReader::_class) ::org::xml::sax::XMLReader::_class = java::fetch_class("org/xml/sax/XMLReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/xml/sax/InputSource;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::XMLReader::parse(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::XMLReader::_class) ::org::xml::sax::XMLReader::_class = java::fetch_class("org/xml/sax/XMLReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t org::xml::sax::AttributeList::getLength() const {
    if (!::org::xml::sax::AttributeList::_class) ::org::xml::sax::AttributeList::_class = java::fetch_class("org/xml/sax/AttributeList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String org::xml::sax::AttributeList::getName(int32_t arg0) const {
    if (!::org::xml::sax::AttributeList::_class) ::org::xml::sax::AttributeList::_class = java::fetch_class("org/xml/sax/AttributeList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xml::sax::AttributeList::getType(int32_t arg0) const {
    if (!::org::xml::sax::AttributeList::_class) ::org::xml::sax::AttributeList::_class = java::fetch_class("org/xml/sax/AttributeList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xml::sax::AttributeList::getValue(int32_t arg0) const {
    if (!::org::xml::sax::AttributeList::_class) ::org::xml::sax::AttributeList::_class = java::fetch_class("org/xml/sax/AttributeList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xml::sax::AttributeList::getType(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::AttributeList::_class) ::org::xml::sax::AttributeList::_class = java::fetch_class("org/xml/sax/AttributeList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xml::sax::AttributeList::getValue(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::AttributeList::_class) ::org::xml::sax::AttributeList::_class = java::fetch_class("org/xml/sax/AttributeList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::SAXException::SAXException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::org::xml::sax::SAXException::_class) ::org::xml::sax::SAXException::_class = java::fetch_class("org/xml/sax/SAXException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::SAXException::SAXException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::org::xml::sax::SAXException::_class) ::org::xml::sax::SAXException::_class = java::fetch_class("org/xml/sax/SAXException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::SAXException::SAXException(const ::java::lang::Exception& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::org::xml::sax::SAXException::_class) ::org::xml::sax::SAXException::_class = java::fetch_class("org/xml/sax/SAXException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Exception;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::SAXException::SAXException(const ::java::lang::String& arg0, const ::java::lang::Exception& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::org::xml::sax::SAXException::_class) ::org::xml::sax::SAXException::_class = java::fetch_class("org/xml/sax/SAXException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String org::xml::sax::SAXException::getMessage() const {
    if (!::org::xml::sax::SAXException::_class) ::org::xml::sax::SAXException::_class = java::fetch_class("org/xml/sax/SAXException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Exception org::xml::sax::SAXException::getException() const {
    if (!::org::xml::sax::SAXException::_class) ::org::xml::sax::SAXException::_class = java::fetch_class("org/xml/sax/SAXException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getException", "()Ljava/lang/Exception;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Exception _ret(ret);
    return _ret;
}

::java::lang::String org::xml::sax::SAXException::toString() const {
    if (!::org::xml::sax::SAXException::_class) ::org::xml::sax::SAXException::_class = java::fetch_class("org/xml/sax/SAXException");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

