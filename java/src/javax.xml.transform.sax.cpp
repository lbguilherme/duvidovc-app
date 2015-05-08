#include "java-core.hpp"
#include <memory>
#include "java.lang.String.hpp"
#include "javax.xml.transform.Result.hpp"
#include "javax.xml.transform.Source.hpp"
#include "javax.xml.transform.Templates.hpp"
#include "javax.xml.transform.Transformer.hpp"
#include "javax.xml.transform.sax.SAXResult.hpp"
#include "javax.xml.transform.sax.SAXSource.hpp"
#include "javax.xml.transform.sax.SAXTransformerFactory.hpp"
#include "javax.xml.transform.sax.TemplatesHandler.hpp"
#include "javax.xml.transform.sax.TransformerHandler.hpp"
#include "org.xml.sax.ContentHandler.hpp"
#include "org.xml.sax.InputSource.hpp"
#include "org.xml.sax.XMLFilter.hpp"
#include "org.xml.sax.XMLReader.hpp"
#include "org.xml.sax.ext.LexicalHandler.hpp"

jclass javax::xml::transform::sax::SAXSource::_class = nullptr;
jclass javax::xml::transform::sax::SAXTransformerFactory::_class = nullptr;
jclass javax::xml::transform::sax::SAXResult::_class = nullptr;
jclass javax::xml::transform::sax::TransformerHandler::_class = nullptr;
jclass javax::xml::transform::sax::TemplatesHandler::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::sax::SAXSource::SAXSource() : ::java::lang::Object((jobject)0), ::javax::xml::transform::Source((jobject)0) {
    if (!::javax::xml::transform::sax::SAXSource::_class) ::javax::xml::transform::sax::SAXSource::_class = java::fetch_class("javax/xml/transform/sax/SAXSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::sax::SAXSource::SAXSource(const ::org::xml::sax::XMLReader& arg0, const ::org::xml::sax::InputSource& arg1) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Source((jobject)0) {
    if (!::javax::xml::transform::sax::SAXSource::_class) ::javax::xml::transform::sax::SAXSource::_class = java::fetch_class("javax/xml/transform/sax/SAXSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/xml/sax/XMLReader;Lorg/xml/sax/InputSource;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::sax::SAXSource::SAXSource(const ::org::xml::sax::InputSource& arg0) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Source((jobject)0) {
    if (!::javax::xml::transform::sax::SAXSource::_class) ::javax::xml::transform::sax::SAXSource::_class = java::fetch_class("javax/xml/transform/sax/SAXSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/xml/sax/InputSource;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void javax::xml::transform::sax::SAXSource::setXMLReader(const ::org::xml::sax::XMLReader& arg0) const {
    if (!::javax::xml::transform::sax::SAXSource::_class) ::javax::xml::transform::sax::SAXSource::_class = java::fetch_class("javax/xml/transform/sax/SAXSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "setXMLReader", "(Lorg/xml/sax/XMLReader;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::XMLReader javax::xml::transform::sax::SAXSource::getXMLReader() const {
    if (!::javax::xml::transform::sax::SAXSource::_class) ::javax::xml::transform::sax::SAXSource::_class = java::fetch_class("javax/xml/transform/sax/SAXSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "getXMLReader", "()Lorg/xml/sax/XMLReader;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xml::sax::XMLReader _ret(ret);
    return _ret;
}

void javax::xml::transform::sax::SAXSource::setInputSource(const ::org::xml::sax::InputSource& arg0) const {
    if (!::javax::xml::transform::sax::SAXSource::_class) ::javax::xml::transform::sax::SAXSource::_class = java::fetch_class("javax/xml/transform/sax/SAXSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInputSource", "(Lorg/xml/sax/InputSource;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::InputSource javax::xml::transform::sax::SAXSource::getInputSource() const {
    if (!::javax::xml::transform::sax::SAXSource::_class) ::javax::xml::transform::sax::SAXSource::_class = java::fetch_class("javax/xml/transform/sax/SAXSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputSource", "()Lorg/xml/sax/InputSource;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xml::sax::InputSource _ret(ret);
    return _ret;
}

void javax::xml::transform::sax::SAXSource::setSystemId(const ::java::lang::String& arg0) const {
    if (!::javax::xml::transform::sax::SAXSource::_class) ::javax::xml::transform::sax::SAXSource::_class = java::fetch_class("javax/xml/transform/sax/SAXSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSystemId", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String javax::xml::transform::sax::SAXSource::getSystemId() const {
    if (!::javax::xml::transform::sax::SAXSource::_class) ::javax::xml::transform::sax::SAXSource::_class = java::fetch_class("javax/xml/transform/sax/SAXSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::org::xml::sax::InputSource javax::xml::transform::sax::SAXSource::sourceToInputSource(const ::javax::xml::transform::Source& arg0){
    if (!::javax::xml::transform::sax::SAXSource::_class) ::javax::xml::transform::sax::SAXSource::_class = java::fetch_class("javax/xml/transform/sax/SAXSource");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sourceToInputSource", "(Ljavax/xml/transform/Source;)Lorg/xml/sax/InputSource;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::org::xml::sax::InputSource _ret(ret);
    return _ret;
}

::javax::xml::transform::sax::TransformerHandler javax::xml::transform::sax::SAXTransformerFactory::newTransformerHandler(const ::javax::xml::transform::Source& arg0) const {
    if (!::javax::xml::transform::sax::SAXTransformerFactory::_class) ::javax::xml::transform::sax::SAXTransformerFactory::_class = java::fetch_class("javax/xml/transform/sax/SAXTransformerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newTransformerHandler", "(Ljavax/xml/transform/Source;)Ljavax/xml/transform/sax/TransformerHandler;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::xml::transform::sax::TransformerHandler _ret(ret);
    return _ret;
}

::javax::xml::transform::sax::TransformerHandler javax::xml::transform::sax::SAXTransformerFactory::newTransformerHandler(const ::javax::xml::transform::Templates& arg0) const {
    if (!::javax::xml::transform::sax::SAXTransformerFactory::_class) ::javax::xml::transform::sax::SAXTransformerFactory::_class = java::fetch_class("javax/xml/transform/sax/SAXTransformerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newTransformerHandler", "(Ljavax/xml/transform/Templates;)Ljavax/xml/transform/sax/TransformerHandler;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::xml::transform::sax::TransformerHandler _ret(ret);
    return _ret;
}

::javax::xml::transform::sax::TransformerHandler javax::xml::transform::sax::SAXTransformerFactory::newTransformerHandler() const {
    if (!::javax::xml::transform::sax::SAXTransformerFactory::_class) ::javax::xml::transform::sax::SAXTransformerFactory::_class = java::fetch_class("javax/xml/transform/sax/SAXTransformerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newTransformerHandler", "()Ljavax/xml/transform/sax/TransformerHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::transform::sax::TransformerHandler _ret(ret);
    return _ret;
}

::javax::xml::transform::sax::TemplatesHandler javax::xml::transform::sax::SAXTransformerFactory::newTemplatesHandler() const {
    if (!::javax::xml::transform::sax::SAXTransformerFactory::_class) ::javax::xml::transform::sax::SAXTransformerFactory::_class = java::fetch_class("javax/xml/transform/sax/SAXTransformerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newTemplatesHandler", "()Ljavax/xml/transform/sax/TemplatesHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::transform::sax::TemplatesHandler _ret(ret);
    return _ret;
}

::org::xml::sax::XMLFilter javax::xml::transform::sax::SAXTransformerFactory::newXMLFilter(const ::javax::xml::transform::Source& arg0) const {
    if (!::javax::xml::transform::sax::SAXTransformerFactory::_class) ::javax::xml::transform::sax::SAXTransformerFactory::_class = java::fetch_class("javax/xml/transform/sax/SAXTransformerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newXMLFilter", "(Ljavax/xml/transform/Source;)Lorg/xml/sax/XMLFilter;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::xml::sax::XMLFilter _ret(ret);
    return _ret;
}

::org::xml::sax::XMLFilter javax::xml::transform::sax::SAXTransformerFactory::newXMLFilter(const ::javax::xml::transform::Templates& arg0) const {
    if (!::javax::xml::transform::sax::SAXTransformerFactory::_class) ::javax::xml::transform::sax::SAXTransformerFactory::_class = java::fetch_class("javax/xml/transform/sax/SAXTransformerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newXMLFilter", "(Ljavax/xml/transform/Templates;)Lorg/xml/sax/XMLFilter;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::xml::sax::XMLFilter _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::sax::SAXResult::SAXResult() : ::java::lang::Object((jobject)0), ::javax::xml::transform::Result((jobject)0) {
    if (!::javax::xml::transform::sax::SAXResult::_class) ::javax::xml::transform::sax::SAXResult::_class = java::fetch_class("javax/xml/transform/sax/SAXResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::sax::SAXResult::SAXResult(const ::org::xml::sax::ContentHandler& arg0) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Result((jobject)0) {
    if (!::javax::xml::transform::sax::SAXResult::_class) ::javax::xml::transform::sax::SAXResult::_class = java::fetch_class("javax/xml/transform/sax/SAXResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/xml/sax/ContentHandler;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void javax::xml::transform::sax::SAXResult::setHandler(const ::org::xml::sax::ContentHandler& arg0) const {
    if (!::javax::xml::transform::sax::SAXResult::_class) ::javax::xml::transform::sax::SAXResult::_class = java::fetch_class("javax/xml/transform/sax/SAXResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHandler", "(Lorg/xml/sax/ContentHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::ContentHandler javax::xml::transform::sax::SAXResult::getHandler() const {
    if (!::javax::xml::transform::sax::SAXResult::_class) ::javax::xml::transform::sax::SAXResult::_class = java::fetch_class("javax/xml/transform/sax/SAXResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHandler", "()Lorg/xml/sax/ContentHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xml::sax::ContentHandler _ret(ret);
    return _ret;
}

void javax::xml::transform::sax::SAXResult::setLexicalHandler(const ::org::xml::sax::ext::LexicalHandler& arg0) const {
    if (!::javax::xml::transform::sax::SAXResult::_class) ::javax::xml::transform::sax::SAXResult::_class = java::fetch_class("javax/xml/transform/sax/SAXResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLexicalHandler", "(Lorg/xml/sax/ext/LexicalHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::ext::LexicalHandler javax::xml::transform::sax::SAXResult::getLexicalHandler() const {
    if (!::javax::xml::transform::sax::SAXResult::_class) ::javax::xml::transform::sax::SAXResult::_class = java::fetch_class("javax/xml/transform/sax/SAXResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLexicalHandler", "()Lorg/xml/sax/ext/LexicalHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xml::sax::ext::LexicalHandler _ret(ret);
    return _ret;
}

void javax::xml::transform::sax::SAXResult::setSystemId(const ::java::lang::String& arg0) const {
    if (!::javax::xml::transform::sax::SAXResult::_class) ::javax::xml::transform::sax::SAXResult::_class = java::fetch_class("javax/xml/transform/sax/SAXResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSystemId", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String javax::xml::transform::sax::SAXResult::getSystemId() const {
    if (!::javax::xml::transform::sax::SAXResult::_class) ::javax::xml::transform::sax::SAXResult::_class = java::fetch_class("javax/xml/transform/sax/SAXResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void javax::xml::transform::sax::TransformerHandler::setResult(const ::javax::xml::transform::Result& arg0) const {
    if (!::javax::xml::transform::sax::TransformerHandler::_class) ::javax::xml::transform::sax::TransformerHandler::_class = java::fetch_class("javax/xml/transform/sax/TransformerHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "setResult", "(Ljavax/xml/transform/Result;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::transform::sax::TransformerHandler::setSystemId(const ::java::lang::String& arg0) const {
    if (!::javax::xml::transform::sax::TransformerHandler::_class) ::javax::xml::transform::sax::TransformerHandler::_class = java::fetch_class("javax/xml/transform/sax/TransformerHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSystemId", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String javax::xml::transform::sax::TransformerHandler::getSystemId() const {
    if (!::javax::xml::transform::sax::TransformerHandler::_class) ::javax::xml::transform::sax::TransformerHandler::_class = java::fetch_class("javax/xml/transform/sax/TransformerHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::javax::xml::transform::Transformer javax::xml::transform::sax::TransformerHandler::getTransformer() const {
    if (!::javax::xml::transform::sax::TransformerHandler::_class) ::javax::xml::transform::sax::TransformerHandler::_class = java::fetch_class("javax/xml/transform/sax/TransformerHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransformer", "()Ljavax/xml/transform/Transformer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::transform::Transformer _ret(ret);
    return _ret;
}

::javax::xml::transform::Templates javax::xml::transform::sax::TemplatesHandler::getTemplates() const {
    if (!::javax::xml::transform::sax::TemplatesHandler::_class) ::javax::xml::transform::sax::TemplatesHandler::_class = java::fetch_class("javax/xml/transform/sax/TemplatesHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTemplates", "()Ljavax/xml/transform/Templates;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::transform::Templates _ret(ret);
    return _ret;
}

void javax::xml::transform::sax::TemplatesHandler::setSystemId(const ::java::lang::String& arg0) const {
    if (!::javax::xml::transform::sax::TemplatesHandler::_class) ::javax::xml::transform::sax::TemplatesHandler::_class = java::fetch_class("javax/xml/transform/sax/TemplatesHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSystemId", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String javax::xml::transform::sax::TemplatesHandler::getSystemId() const {
    if (!::javax::xml::transform::sax::TemplatesHandler::_class) ::javax::xml::transform::sax::TemplatesHandler::_class = java::fetch_class("javax/xml/transform/sax/TemplatesHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

