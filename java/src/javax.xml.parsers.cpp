#include "java-core.hpp"
#include <memory>
#include "java.io.File.hpp"
#include "java.io.InputStream.hpp"
#include "java.lang.ClassLoader.hpp"
#include "java.lang.Exception.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "javax.xml.parsers.DocumentBuilder.hpp"
#include "javax.xml.parsers.DocumentBuilderFactory.hpp"
#include "javax.xml.parsers.FactoryConfigurationError.hpp"
#include "javax.xml.parsers.ParserConfigurationException.hpp"
#include "javax.xml.parsers.SAXParser.hpp"
#include "javax.xml.parsers.SAXParserFactory.hpp"
#include "javax.xml.validation.Schema.hpp"
#include "org.w3c.dom.DOMImplementation.hpp"
#include "org.w3c.dom.Document.hpp"
#include "org.xml.sax.EntityResolver.hpp"
#include "org.xml.sax.ErrorHandler.hpp"
#include "org.xml.sax.HandlerBase.hpp"
#include "org.xml.sax.InputSource.hpp"
#include "org.xml.sax.Parser.hpp"
#include "org.xml.sax.XMLReader.hpp"
#include "org.xml.sax.helpers.DefaultHandler.hpp"

jclass javax::xml::parsers::ParserConfigurationException::_class = nullptr;
jclass javax::xml::parsers::SAXParser::_class = nullptr;
jclass javax::xml::parsers::DocumentBuilderFactory::_class = nullptr;
jclass javax::xml::parsers::DocumentBuilder::_class = nullptr;
jclass javax::xml::parsers::FactoryConfigurationError::_class = nullptr;
jclass javax::xml::parsers::SAXParserFactory::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::parsers::ParserConfigurationException::ParserConfigurationException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::xml::parsers::ParserConfigurationException::_class) ::javax::xml::parsers::ParserConfigurationException::_class = java::fetch_class("javax/xml/parsers/ParserConfigurationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::parsers::ParserConfigurationException::ParserConfigurationException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::xml::parsers::ParserConfigurationException::_class) ::javax::xml::parsers::ParserConfigurationException::_class = java::fetch_class("javax/xml/parsers/ParserConfigurationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void javax::xml::parsers::SAXParser::reset() const {
    if (!::javax::xml::parsers::SAXParser::_class) ::javax::xml::parsers::SAXParser::_class = java::fetch_class("javax/xml/parsers/SAXParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void javax::xml::parsers::SAXParser::parse(const ::java::io::InputStream& arg0, const ::org::xml::sax::HandlerBase& arg1) const {
    if (!::javax::xml::parsers::SAXParser::_class) ::javax::xml::parsers::SAXParser::_class = java::fetch_class("javax/xml/parsers/SAXParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Ljava/io/InputStream;Lorg/xml/sax/HandlerBase;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::xml::parsers::SAXParser::parse(const ::java::io::InputStream& arg0, const ::org::xml::sax::HandlerBase& arg1, const ::java::lang::String& arg2) const {
    if (!::javax::xml::parsers::SAXParser::_class) ::javax::xml::parsers::SAXParser::_class = java::fetch_class("javax/xml/parsers/SAXParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Ljava/io/InputStream;Lorg/xml/sax/HandlerBase;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::xml::parsers::SAXParser::parse(const ::java::io::InputStream& arg0, const ::org::xml::sax::helpers::DefaultHandler& arg1) const {
    if (!::javax::xml::parsers::SAXParser::_class) ::javax::xml::parsers::SAXParser::_class = java::fetch_class("javax/xml/parsers/SAXParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Ljava/io/InputStream;Lorg/xml/sax/helpers/DefaultHandler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::xml::parsers::SAXParser::parse(const ::java::io::InputStream& arg0, const ::org::xml::sax::helpers::DefaultHandler& arg1, const ::java::lang::String& arg2) const {
    if (!::javax::xml::parsers::SAXParser::_class) ::javax::xml::parsers::SAXParser::_class = java::fetch_class("javax/xml/parsers/SAXParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Ljava/io/InputStream;Lorg/xml/sax/helpers/DefaultHandler;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::xml::parsers::SAXParser::parse(const ::java::lang::String& arg0, const ::org::xml::sax::HandlerBase& arg1) const {
    if (!::javax::xml::parsers::SAXParser::_class) ::javax::xml::parsers::SAXParser::_class = java::fetch_class("javax/xml/parsers/SAXParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Ljava/lang/String;Lorg/xml/sax/HandlerBase;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::xml::parsers::SAXParser::parse(const ::java::lang::String& arg0, const ::org::xml::sax::helpers::DefaultHandler& arg1) const {
    if (!::javax::xml::parsers::SAXParser::_class) ::javax::xml::parsers::SAXParser::_class = java::fetch_class("javax/xml/parsers/SAXParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Ljava/lang/String;Lorg/xml/sax/helpers/DefaultHandler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::xml::parsers::SAXParser::parse(const ::java::io::File& arg0, const ::org::xml::sax::HandlerBase& arg1) const {
    if (!::javax::xml::parsers::SAXParser::_class) ::javax::xml::parsers::SAXParser::_class = java::fetch_class("javax/xml/parsers/SAXParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Ljava/io/File;Lorg/xml/sax/HandlerBase;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::xml::parsers::SAXParser::parse(const ::java::io::File& arg0, const ::org::xml::sax::helpers::DefaultHandler& arg1) const {
    if (!::javax::xml::parsers::SAXParser::_class) ::javax::xml::parsers::SAXParser::_class = java::fetch_class("javax/xml/parsers/SAXParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Ljava/io/File;Lorg/xml/sax/helpers/DefaultHandler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::xml::parsers::SAXParser::parse(const ::org::xml::sax::InputSource& arg0, const ::org::xml::sax::HandlerBase& arg1) const {
    if (!::javax::xml::parsers::SAXParser::_class) ::javax::xml::parsers::SAXParser::_class = java::fetch_class("javax/xml/parsers/SAXParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/xml/sax/InputSource;Lorg/xml/sax/HandlerBase;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::xml::parsers::SAXParser::parse(const ::org::xml::sax::InputSource& arg0, const ::org::xml::sax::helpers::DefaultHandler& arg1) const {
    if (!::javax::xml::parsers::SAXParser::_class) ::javax::xml::parsers::SAXParser::_class = java::fetch_class("javax/xml/parsers/SAXParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/xml/sax/InputSource;Lorg/xml/sax/helpers/DefaultHandler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::org::xml::sax::Parser javax::xml::parsers::SAXParser::getParser() const {
    if (!::javax::xml::parsers::SAXParser::_class) ::javax::xml::parsers::SAXParser::_class = java::fetch_class("javax/xml/parsers/SAXParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParser", "()Lorg/xml/sax/Parser;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xml::sax::Parser _ret(ret);
    return _ret;
}

::org::xml::sax::XMLReader javax::xml::parsers::SAXParser::getXMLReader() const {
    if (!::javax::xml::parsers::SAXParser::_class) ::javax::xml::parsers::SAXParser::_class = java::fetch_class("javax/xml/parsers/SAXParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getXMLReader", "()Lorg/xml/sax/XMLReader;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xml::sax::XMLReader _ret(ret);
    return _ret;
}

bool javax::xml::parsers::SAXParser::isNamespaceAware() const {
    if (!::javax::xml::parsers::SAXParser::_class) ::javax::xml::parsers::SAXParser::_class = java::fetch_class("javax/xml/parsers/SAXParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "isNamespaceAware", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool javax::xml::parsers::SAXParser::isValidating() const {
    if (!::javax::xml::parsers::SAXParser::_class) ::javax::xml::parsers::SAXParser::_class = java::fetch_class("javax/xml/parsers/SAXParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "isValidating", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void javax::xml::parsers::SAXParser::setProperty(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::javax::xml::parsers::SAXParser::_class) ::javax::xml::parsers::SAXParser::_class = java::fetch_class("javax/xml/parsers/SAXParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object javax::xml::parsers::SAXParser::getProperty(const ::java::lang::String& arg0) const {
    if (!::javax::xml::parsers::SAXParser::_class) ::javax::xml::parsers::SAXParser::_class = java::fetch_class("javax/xml/parsers/SAXParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProperty", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::javax::xml::validation::Schema javax::xml::parsers::SAXParser::getSchema() const {
    if (!::javax::xml::parsers::SAXParser::_class) ::javax::xml::parsers::SAXParser::_class = java::fetch_class("javax/xml/parsers/SAXParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSchema", "()Ljavax/xml/validation/Schema;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::validation::Schema _ret(ret);
    return _ret;
}

bool javax::xml::parsers::SAXParser::isXIncludeAware() const {
    if (!::javax::xml::parsers::SAXParser::_class) ::javax::xml::parsers::SAXParser::_class = java::fetch_class("javax/xml/parsers/SAXParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "isXIncludeAware", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::javax::xml::parsers::DocumentBuilderFactory javax::xml::parsers::DocumentBuilderFactory::newInstance(){
    if (!::javax::xml::parsers::DocumentBuilderFactory::_class) ::javax::xml::parsers::DocumentBuilderFactory::_class = java::fetch_class("javax/xml/parsers/DocumentBuilderFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInstance", "()Ljavax/xml/parsers/DocumentBuilderFactory;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::javax::xml::parsers::DocumentBuilderFactory _ret(ret);
    return _ret;
}

::javax::xml::parsers::DocumentBuilderFactory javax::xml::parsers::DocumentBuilderFactory::newInstance(const ::java::lang::String& arg0, const ::java::lang::ClassLoader& arg1){
    if (!::javax::xml::parsers::DocumentBuilderFactory::_class) ::javax::xml::parsers::DocumentBuilderFactory::_class = java::fetch_class("javax/xml/parsers/DocumentBuilderFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInstance", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/DocumentBuilderFactory;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::javax::xml::parsers::DocumentBuilderFactory _ret(ret);
    return _ret;
}

::javax::xml::parsers::DocumentBuilder javax::xml::parsers::DocumentBuilderFactory::newDocumentBuilder() const {
    if (!::javax::xml::parsers::DocumentBuilderFactory::_class) ::javax::xml::parsers::DocumentBuilderFactory::_class = java::fetch_class("javax/xml/parsers/DocumentBuilderFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newDocumentBuilder", "()Ljavax/xml/parsers/DocumentBuilder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::parsers::DocumentBuilder _ret(ret);
    return _ret;
}

void javax::xml::parsers::DocumentBuilderFactory::setNamespaceAware(bool arg0) const {
    if (!::javax::xml::parsers::DocumentBuilderFactory::_class) ::javax::xml::parsers::DocumentBuilderFactory::_class = java::fetch_class("javax/xml/parsers/DocumentBuilderFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNamespaceAware", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::parsers::DocumentBuilderFactory::setValidating(bool arg0) const {
    if (!::javax::xml::parsers::DocumentBuilderFactory::_class) ::javax::xml::parsers::DocumentBuilderFactory::_class = java::fetch_class("javax/xml/parsers/DocumentBuilderFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setValidating", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::parsers::DocumentBuilderFactory::setIgnoringElementContentWhitespace(bool arg0) const {
    if (!::javax::xml::parsers::DocumentBuilderFactory::_class) ::javax::xml::parsers::DocumentBuilderFactory::_class = java::fetch_class("javax/xml/parsers/DocumentBuilderFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIgnoringElementContentWhitespace", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::parsers::DocumentBuilderFactory::setExpandEntityReferences(bool arg0) const {
    if (!::javax::xml::parsers::DocumentBuilderFactory::_class) ::javax::xml::parsers::DocumentBuilderFactory::_class = java::fetch_class("javax/xml/parsers/DocumentBuilderFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExpandEntityReferences", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::parsers::DocumentBuilderFactory::setIgnoringComments(bool arg0) const {
    if (!::javax::xml::parsers::DocumentBuilderFactory::_class) ::javax::xml::parsers::DocumentBuilderFactory::_class = java::fetch_class("javax/xml/parsers/DocumentBuilderFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIgnoringComments", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::parsers::DocumentBuilderFactory::setCoalescing(bool arg0) const {
    if (!::javax::xml::parsers::DocumentBuilderFactory::_class) ::javax::xml::parsers::DocumentBuilderFactory::_class = java::fetch_class("javax/xml/parsers/DocumentBuilderFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCoalescing", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool javax::xml::parsers::DocumentBuilderFactory::isNamespaceAware() const {
    if (!::javax::xml::parsers::DocumentBuilderFactory::_class) ::javax::xml::parsers::DocumentBuilderFactory::_class = java::fetch_class("javax/xml/parsers/DocumentBuilderFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "isNamespaceAware", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool javax::xml::parsers::DocumentBuilderFactory::isValidating() const {
    if (!::javax::xml::parsers::DocumentBuilderFactory::_class) ::javax::xml::parsers::DocumentBuilderFactory::_class = java::fetch_class("javax/xml/parsers/DocumentBuilderFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "isValidating", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool javax::xml::parsers::DocumentBuilderFactory::isIgnoringElementContentWhitespace() const {
    if (!::javax::xml::parsers::DocumentBuilderFactory::_class) ::javax::xml::parsers::DocumentBuilderFactory::_class = java::fetch_class("javax/xml/parsers/DocumentBuilderFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "isIgnoringElementContentWhitespace", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool javax::xml::parsers::DocumentBuilderFactory::isExpandEntityReferences() const {
    if (!::javax::xml::parsers::DocumentBuilderFactory::_class) ::javax::xml::parsers::DocumentBuilderFactory::_class = java::fetch_class("javax/xml/parsers/DocumentBuilderFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "isExpandEntityReferences", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool javax::xml::parsers::DocumentBuilderFactory::isIgnoringComments() const {
    if (!::javax::xml::parsers::DocumentBuilderFactory::_class) ::javax::xml::parsers::DocumentBuilderFactory::_class = java::fetch_class("javax/xml/parsers/DocumentBuilderFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "isIgnoringComments", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool javax::xml::parsers::DocumentBuilderFactory::isCoalescing() const {
    if (!::javax::xml::parsers::DocumentBuilderFactory::_class) ::javax::xml::parsers::DocumentBuilderFactory::_class = java::fetch_class("javax/xml/parsers/DocumentBuilderFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCoalescing", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void javax::xml::parsers::DocumentBuilderFactory::setAttribute(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::javax::xml::parsers::DocumentBuilderFactory::_class) ::javax::xml::parsers::DocumentBuilderFactory::_class = java::fetch_class("javax/xml/parsers/DocumentBuilderFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAttribute", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object javax::xml::parsers::DocumentBuilderFactory::getAttribute(const ::java::lang::String& arg0) const {
    if (!::javax::xml::parsers::DocumentBuilderFactory::_class) ::javax::xml::parsers::DocumentBuilderFactory::_class = java::fetch_class("javax/xml/parsers/DocumentBuilderFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void javax::xml::parsers::DocumentBuilderFactory::setFeature(const ::java::lang::String& arg0, bool arg1) const {
    if (!::javax::xml::parsers::DocumentBuilderFactory::_class) ::javax::xml::parsers::DocumentBuilderFactory::_class = java::fetch_class("javax/xml/parsers/DocumentBuilderFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFeature", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool javax::xml::parsers::DocumentBuilderFactory::getFeature(const ::java::lang::String& arg0) const {
    if (!::javax::xml::parsers::DocumentBuilderFactory::_class) ::javax::xml::parsers::DocumentBuilderFactory::_class = java::fetch_class("javax/xml/parsers/DocumentBuilderFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFeature", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::javax::xml::validation::Schema javax::xml::parsers::DocumentBuilderFactory::getSchema() const {
    if (!::javax::xml::parsers::DocumentBuilderFactory::_class) ::javax::xml::parsers::DocumentBuilderFactory::_class = java::fetch_class("javax/xml/parsers/DocumentBuilderFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSchema", "()Ljavax/xml/validation/Schema;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::validation::Schema _ret(ret);
    return _ret;
}

void javax::xml::parsers::DocumentBuilderFactory::setSchema(const ::javax::xml::validation::Schema& arg0) const {
    if (!::javax::xml::parsers::DocumentBuilderFactory::_class) ::javax::xml::parsers::DocumentBuilderFactory::_class = java::fetch_class("javax/xml/parsers/DocumentBuilderFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSchema", "(Ljavax/xml/validation/Schema;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::parsers::DocumentBuilderFactory::setXIncludeAware(bool arg0) const {
    if (!::javax::xml::parsers::DocumentBuilderFactory::_class) ::javax::xml::parsers::DocumentBuilderFactory::_class = java::fetch_class("javax/xml/parsers/DocumentBuilderFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setXIncludeAware", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool javax::xml::parsers::DocumentBuilderFactory::isXIncludeAware() const {
    if (!::javax::xml::parsers::DocumentBuilderFactory::_class) ::javax::xml::parsers::DocumentBuilderFactory::_class = java::fetch_class("javax/xml/parsers/DocumentBuilderFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "isXIncludeAware", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void javax::xml::parsers::DocumentBuilder::reset() const {
    if (!::javax::xml::parsers::DocumentBuilder::_class) ::javax::xml::parsers::DocumentBuilder::_class = java::fetch_class("javax/xml/parsers/DocumentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::org::w3c::dom::Document javax::xml::parsers::DocumentBuilder::parse(const ::java::io::InputStream& arg0) const {
    if (!::javax::xml::parsers::DocumentBuilder::_class) ::javax::xml::parsers::DocumentBuilder::_class = java::fetch_class("javax/xml/parsers/DocumentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Ljava/io/InputStream;)Lorg/w3c/dom/Document;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::Document _ret(ret);
    return _ret;
}

::org::w3c::dom::Document javax::xml::parsers::DocumentBuilder::parse(const ::java::io::InputStream& arg0, const ::java::lang::String& arg1) const {
    if (!::javax::xml::parsers::DocumentBuilder::_class) ::javax::xml::parsers::DocumentBuilder::_class = java::fetch_class("javax/xml/parsers/DocumentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Lorg/w3c/dom/Document;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::w3c::dom::Document _ret(ret);
    return _ret;
}

::org::w3c::dom::Document javax::xml::parsers::DocumentBuilder::parse(const ::java::lang::String& arg0) const {
    if (!::javax::xml::parsers::DocumentBuilder::_class) ::javax::xml::parsers::DocumentBuilder::_class = java::fetch_class("javax/xml/parsers/DocumentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Ljava/lang/String;)Lorg/w3c/dom/Document;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::Document _ret(ret);
    return _ret;
}

::org::w3c::dom::Document javax::xml::parsers::DocumentBuilder::parse(const ::java::io::File& arg0) const {
    if (!::javax::xml::parsers::DocumentBuilder::_class) ::javax::xml::parsers::DocumentBuilder::_class = java::fetch_class("javax/xml/parsers/DocumentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Ljava/io/File;)Lorg/w3c/dom/Document;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::Document _ret(ret);
    return _ret;
}

::org::w3c::dom::Document javax::xml::parsers::DocumentBuilder::parse(const ::org::xml::sax::InputSource& arg0) const {
    if (!::javax::xml::parsers::DocumentBuilder::_class) ::javax::xml::parsers::DocumentBuilder::_class = java::fetch_class("javax/xml/parsers/DocumentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/xml/sax/InputSource;)Lorg/w3c/dom/Document;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::Document _ret(ret);
    return _ret;
}

bool javax::xml::parsers::DocumentBuilder::isNamespaceAware() const {
    if (!::javax::xml::parsers::DocumentBuilder::_class) ::javax::xml::parsers::DocumentBuilder::_class = java::fetch_class("javax/xml/parsers/DocumentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "isNamespaceAware", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool javax::xml::parsers::DocumentBuilder::isValidating() const {
    if (!::javax::xml::parsers::DocumentBuilder::_class) ::javax::xml::parsers::DocumentBuilder::_class = java::fetch_class("javax/xml/parsers/DocumentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "isValidating", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void javax::xml::parsers::DocumentBuilder::setEntityResolver(const ::org::xml::sax::EntityResolver& arg0) const {
    if (!::javax::xml::parsers::DocumentBuilder::_class) ::javax::xml::parsers::DocumentBuilder::_class = java::fetch_class("javax/xml/parsers/DocumentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEntityResolver", "(Lorg/xml/sax/EntityResolver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::parsers::DocumentBuilder::setErrorHandler(const ::org::xml::sax::ErrorHandler& arg0) const {
    if (!::javax::xml::parsers::DocumentBuilder::_class) ::javax::xml::parsers::DocumentBuilder::_class = java::fetch_class("javax/xml/parsers/DocumentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::w3c::dom::Document javax::xml::parsers::DocumentBuilder::newDocument() const {
    if (!::javax::xml::parsers::DocumentBuilder::_class) ::javax::xml::parsers::DocumentBuilder::_class = java::fetch_class("javax/xml/parsers/DocumentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "newDocument", "()Lorg/w3c/dom/Document;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::Document _ret(ret);
    return _ret;
}

::org::w3c::dom::DOMImplementation javax::xml::parsers::DocumentBuilder::getDOMImplementation() const {
    if (!::javax::xml::parsers::DocumentBuilder::_class) ::javax::xml::parsers::DocumentBuilder::_class = java::fetch_class("javax/xml/parsers/DocumentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDOMImplementation", "()Lorg/w3c/dom/DOMImplementation;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::DOMImplementation _ret(ret);
    return _ret;
}

::javax::xml::validation::Schema javax::xml::parsers::DocumentBuilder::getSchema() const {
    if (!::javax::xml::parsers::DocumentBuilder::_class) ::javax::xml::parsers::DocumentBuilder::_class = java::fetch_class("javax/xml/parsers/DocumentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSchema", "()Ljavax/xml/validation/Schema;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::validation::Schema _ret(ret);
    return _ret;
}

bool javax::xml::parsers::DocumentBuilder::isXIncludeAware() const {
    if (!::javax::xml::parsers::DocumentBuilder::_class) ::javax::xml::parsers::DocumentBuilder::_class = java::fetch_class("javax/xml/parsers/DocumentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "isXIncludeAware", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::parsers::FactoryConfigurationError::FactoryConfigurationError() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::xml::parsers::FactoryConfigurationError::_class) ::javax::xml::parsers::FactoryConfigurationError::_class = java::fetch_class("javax/xml/parsers/FactoryConfigurationError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::parsers::FactoryConfigurationError::FactoryConfigurationError(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::xml::parsers::FactoryConfigurationError::_class) ::javax::xml::parsers::FactoryConfigurationError::_class = java::fetch_class("javax/xml/parsers/FactoryConfigurationError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::parsers::FactoryConfigurationError::FactoryConfigurationError(const ::java::lang::Exception& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::xml::parsers::FactoryConfigurationError::_class) ::javax::xml::parsers::FactoryConfigurationError::_class = java::fetch_class("javax/xml/parsers/FactoryConfigurationError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Exception;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::parsers::FactoryConfigurationError::FactoryConfigurationError(const ::java::lang::Exception& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::xml::parsers::FactoryConfigurationError::_class) ::javax::xml::parsers::FactoryConfigurationError::_class = java::fetch_class("javax/xml/parsers/FactoryConfigurationError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String javax::xml::parsers::FactoryConfigurationError::getMessage() const {
    if (!::javax::xml::parsers::FactoryConfigurationError::_class) ::javax::xml::parsers::FactoryConfigurationError::_class = java::fetch_class("javax/xml/parsers/FactoryConfigurationError");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Exception javax::xml::parsers::FactoryConfigurationError::getException() const {
    if (!::javax::xml::parsers::FactoryConfigurationError::_class) ::javax::xml::parsers::FactoryConfigurationError::_class = java::fetch_class("javax/xml/parsers/FactoryConfigurationError");
    static jmethodID mid = java::jni->GetMethodID(_class, "getException", "()Ljava/lang/Exception;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Exception _ret(ret);
    return _ret;
}

::javax::xml::parsers::SAXParserFactory javax::xml::parsers::SAXParserFactory::newInstance(){
    if (!::javax::xml::parsers::SAXParserFactory::_class) ::javax::xml::parsers::SAXParserFactory::_class = java::fetch_class("javax/xml/parsers/SAXParserFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInstance", "()Ljavax/xml/parsers/SAXParserFactory;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::javax::xml::parsers::SAXParserFactory _ret(ret);
    return _ret;
}

::javax::xml::parsers::SAXParserFactory javax::xml::parsers::SAXParserFactory::newInstance(const ::java::lang::String& arg0, const ::java::lang::ClassLoader& arg1){
    if (!::javax::xml::parsers::SAXParserFactory::_class) ::javax::xml::parsers::SAXParserFactory::_class = java::fetch_class("javax/xml/parsers/SAXParserFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInstance", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/SAXParserFactory;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::javax::xml::parsers::SAXParserFactory _ret(ret);
    return _ret;
}

::javax::xml::parsers::SAXParser javax::xml::parsers::SAXParserFactory::newSAXParser() const {
    if (!::javax::xml::parsers::SAXParserFactory::_class) ::javax::xml::parsers::SAXParserFactory::_class = java::fetch_class("javax/xml/parsers/SAXParserFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newSAXParser", "()Ljavax/xml/parsers/SAXParser;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::parsers::SAXParser _ret(ret);
    return _ret;
}

void javax::xml::parsers::SAXParserFactory::setNamespaceAware(bool arg0) const {
    if (!::javax::xml::parsers::SAXParserFactory::_class) ::javax::xml::parsers::SAXParserFactory::_class = java::fetch_class("javax/xml/parsers/SAXParserFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNamespaceAware", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::parsers::SAXParserFactory::setValidating(bool arg0) const {
    if (!::javax::xml::parsers::SAXParserFactory::_class) ::javax::xml::parsers::SAXParserFactory::_class = java::fetch_class("javax/xml/parsers/SAXParserFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setValidating", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool javax::xml::parsers::SAXParserFactory::isNamespaceAware() const {
    if (!::javax::xml::parsers::SAXParserFactory::_class) ::javax::xml::parsers::SAXParserFactory::_class = java::fetch_class("javax/xml/parsers/SAXParserFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "isNamespaceAware", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool javax::xml::parsers::SAXParserFactory::isValidating() const {
    if (!::javax::xml::parsers::SAXParserFactory::_class) ::javax::xml::parsers::SAXParserFactory::_class = java::fetch_class("javax/xml/parsers/SAXParserFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "isValidating", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void javax::xml::parsers::SAXParserFactory::setFeature(const ::java::lang::String& arg0, bool arg1) const {
    if (!::javax::xml::parsers::SAXParserFactory::_class) ::javax::xml::parsers::SAXParserFactory::_class = java::fetch_class("javax/xml/parsers/SAXParserFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFeature", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool javax::xml::parsers::SAXParserFactory::getFeature(const ::java::lang::String& arg0) const {
    if (!::javax::xml::parsers::SAXParserFactory::_class) ::javax::xml::parsers::SAXParserFactory::_class = java::fetch_class("javax/xml/parsers/SAXParserFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFeature", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::javax::xml::validation::Schema javax::xml::parsers::SAXParserFactory::getSchema() const {
    if (!::javax::xml::parsers::SAXParserFactory::_class) ::javax::xml::parsers::SAXParserFactory::_class = java::fetch_class("javax/xml/parsers/SAXParserFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSchema", "()Ljavax/xml/validation/Schema;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::validation::Schema _ret(ret);
    return _ret;
}

void javax::xml::parsers::SAXParserFactory::setSchema(const ::javax::xml::validation::Schema& arg0) const {
    if (!::javax::xml::parsers::SAXParserFactory::_class) ::javax::xml::parsers::SAXParserFactory::_class = java::fetch_class("javax/xml/parsers/SAXParserFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSchema", "(Ljavax/xml/validation/Schema;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::parsers::SAXParserFactory::setXIncludeAware(bool arg0) const {
    if (!::javax::xml::parsers::SAXParserFactory::_class) ::javax::xml::parsers::SAXParserFactory::_class = java::fetch_class("javax/xml/parsers/SAXParserFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setXIncludeAware", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool javax::xml::parsers::SAXParserFactory::isXIncludeAware() const {
    if (!::javax::xml::parsers::SAXParserFactory::_class) ::javax::xml::parsers::SAXParserFactory::_class = java::fetch_class("javax/xml/parsers/SAXParserFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "isXIncludeAware", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

