#include "java-core.hpp"
#include <memory>
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.Enumeration.hpp"
#include "java.util.Locale.hpp"
#include "org.xml.sax.AttributeList.hpp"
#include "org.xml.sax.Attributes.hpp"
#include "org.xml.sax.ContentHandler.hpp"
#include "org.xml.sax.DTDHandler.hpp"
#include "org.xml.sax.DocumentHandler.hpp"
#include "org.xml.sax.EntityResolver.hpp"
#include "org.xml.sax.ErrorHandler.hpp"
#include "org.xml.sax.InputSource.hpp"
#include "org.xml.sax.Locator.hpp"
#include "org.xml.sax.Parser.hpp"
#include "org.xml.sax.SAXParseException.hpp"
#include "org.xml.sax.XMLReader.hpp"
#include "org.xml.sax.helpers.AttributeListImpl.hpp"
#include "org.xml.sax.helpers.AttributesImpl.hpp"
#include "org.xml.sax.helpers.DefaultHandler.hpp"
#include "org.xml.sax.helpers.LocatorImpl.hpp"
#include "org.xml.sax.helpers.NamespaceSupport.hpp"
#include "org.xml.sax.helpers.ParserAdapter.hpp"
#include "org.xml.sax.helpers.ParserFactory.hpp"
#include "org.xml.sax.helpers.XMLFilterImpl.hpp"
#include "org.xml.sax.helpers.XMLReaderAdapter.hpp"
#include "org.xml.sax.helpers.XMLReaderFactory.hpp"

jclass org::xml::sax::helpers::NamespaceSupport::_class = nullptr;
jclass org::xml::sax::helpers::XMLFilterImpl::_class = nullptr;
jclass org::xml::sax::helpers::XMLReaderFactory::_class = nullptr;
jclass org::xml::sax::helpers::AttributeListImpl::_class = nullptr;
jclass org::xml::sax::helpers::AttributesImpl::_class = nullptr;
jclass org::xml::sax::helpers::ParserFactory::_class = nullptr;
jclass org::xml::sax::helpers::XMLReaderAdapter::_class = nullptr;
jclass org::xml::sax::helpers::LocatorImpl::_class = nullptr;
jclass org::xml::sax::helpers::DefaultHandler::_class = nullptr;
jclass org::xml::sax::helpers::ParserAdapter::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::helpers::NamespaceSupport::NamespaceSupport() : ::java::lang::Object((jobject)0) {
    if (!::org::xml::sax::helpers::NamespaceSupport::_class) ::org::xml::sax::helpers::NamespaceSupport::_class = java::fetch_class("org/xml/sax/helpers/NamespaceSupport");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::xml::sax::helpers::NamespaceSupport::reset() const {
    if (!::org::xml::sax::helpers::NamespaceSupport::_class) ::org::xml::sax::helpers::NamespaceSupport::_class = java::fetch_class("org/xml/sax/helpers/NamespaceSupport");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::xml::sax::helpers::NamespaceSupport::pushContext() const {
    if (!::org::xml::sax::helpers::NamespaceSupport::_class) ::org::xml::sax::helpers::NamespaceSupport::_class = java::fetch_class("org/xml/sax/helpers/NamespaceSupport");
    static jmethodID mid = java::jni->GetMethodID(_class, "pushContext", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::xml::sax::helpers::NamespaceSupport::popContext() const {
    if (!::org::xml::sax::helpers::NamespaceSupport::_class) ::org::xml::sax::helpers::NamespaceSupport::_class = java::fetch_class("org/xml/sax/helpers/NamespaceSupport");
    static jmethodID mid = java::jni->GetMethodID(_class, "popContext", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool org::xml::sax::helpers::NamespaceSupport::declarePrefix(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::helpers::NamespaceSupport::_class) ::org::xml::sax::helpers::NamespaceSupport::_class = java::fetch_class("org/xml/sax/helpers/NamespaceSupport");
    static jmethodID mid = java::jni->GetMethodID(_class, "declarePrefix", "(Ljava/lang/String;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

std::vector< ::java::lang::String> org::xml::sax::helpers::NamespaceSupport::processName(const ::java::lang::String& arg0, const std::vector< ::java::lang::String>& arg1, bool arg2) const {
    if (!::org::xml::sax::helpers::NamespaceSupport::_class) ::org::xml::sax::helpers::NamespaceSupport::_class = java::fetch_class("org/xml/sax/helpers/NamespaceSupport");
    static jmethodID mid = java::jni->GetMethodID(_class, "processName", "(Ljava/lang/String;[Ljava/lang/String;Z)[Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    bool _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::String org::xml::sax::helpers::NamespaceSupport::getURI(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::helpers::NamespaceSupport::_class) ::org::xml::sax::helpers::NamespaceSupport::_class = java::fetch_class("org/xml/sax/helpers/NamespaceSupport");
    static jmethodID mid = java::jni->GetMethodID(_class, "getURI", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::Enumeration org::xml::sax::helpers::NamespaceSupport::getPrefixes() const {
    if (!::org::xml::sax::helpers::NamespaceSupport::_class) ::org::xml::sax::helpers::NamespaceSupport::_class = java::fetch_class("org/xml/sax/helpers/NamespaceSupport");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrefixes", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

::java::lang::String org::xml::sax::helpers::NamespaceSupport::getPrefix(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::helpers::NamespaceSupport::_class) ::org::xml::sax::helpers::NamespaceSupport::_class = java::fetch_class("org/xml/sax/helpers/NamespaceSupport");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrefix", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::Enumeration org::xml::sax::helpers::NamespaceSupport::getPrefixes(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::helpers::NamespaceSupport::_class) ::org::xml::sax::helpers::NamespaceSupport::_class = java::fetch_class("org/xml/sax/helpers/NamespaceSupport");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrefixes", "(Ljava/lang/String;)Ljava/util/Enumeration;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

::java::util::Enumeration org::xml::sax::helpers::NamespaceSupport::getDeclaredPrefixes() const {
    if (!::org::xml::sax::helpers::NamespaceSupport::_class) ::org::xml::sax::helpers::NamespaceSupport::_class = java::fetch_class("org/xml/sax/helpers/NamespaceSupport");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeclaredPrefixes", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

void org::xml::sax::helpers::NamespaceSupport::setNamespaceDeclUris(bool arg0) const {
    if (!::org::xml::sax::helpers::NamespaceSupport::_class) ::org::xml::sax::helpers::NamespaceSupport::_class = java::fetch_class("org/xml/sax/helpers/NamespaceSupport");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNamespaceDeclUris", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::xml::sax::helpers::NamespaceSupport::isNamespaceDeclUris() const {
    if (!::org::xml::sax::helpers::NamespaceSupport::_class) ::org::xml::sax::helpers::NamespaceSupport::_class = java::fetch_class("org/xml/sax/helpers/NamespaceSupport");
    static jmethodID mid = java::jni->GetMethodID(_class, "isNamespaceDeclUris", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::helpers::XMLFilterImpl::XMLFilterImpl() : ::java::lang::Object((jobject)0), ::org::xml::sax::ContentHandler((jobject)0), ::org::xml::sax::DTDHandler((jobject)0), ::org::xml::sax::EntityResolver((jobject)0), ::org::xml::sax::ErrorHandler((jobject)0), ::org::xml::sax::XMLFilter((jobject)0), ::org::xml::sax::XMLReader((jobject)0) {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::helpers::XMLFilterImpl::XMLFilterImpl(const ::org::xml::sax::XMLReader& arg0) : ::java::lang::Object((jobject)0), ::org::xml::sax::ContentHandler((jobject)0), ::org::xml::sax::DTDHandler((jobject)0), ::org::xml::sax::EntityResolver((jobject)0), ::org::xml::sax::ErrorHandler((jobject)0), ::org::xml::sax::XMLFilter((jobject)0), ::org::xml::sax::XMLReader((jobject)0) {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/xml/sax/XMLReader;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void org::xml::sax::helpers::XMLFilterImpl::setParent(const ::org::xml::sax::XMLReader& arg0) const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParent", "(Lorg/xml/sax/XMLReader;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::XMLReader org::xml::sax::helpers::XMLFilterImpl::getParent() const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParent", "()Lorg/xml/sax/XMLReader;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xml::sax::XMLReader _ret(ret);
    return _ret;
}

void org::xml::sax::helpers::XMLFilterImpl::setFeature(const ::java::lang::String& arg0, bool arg1) const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFeature", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool org::xml::sax::helpers::XMLFilterImpl::getFeature(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFeature", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::XMLFilterImpl::setProperty(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object org::xml::sax::helpers::XMLFilterImpl::getProperty(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProperty", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void org::xml::sax::helpers::XMLFilterImpl::setEntityResolver(const ::org::xml::sax::EntityResolver& arg0) const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEntityResolver", "(Lorg/xml/sax/EntityResolver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::EntityResolver org::xml::sax::helpers::XMLFilterImpl::getEntityResolver() const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEntityResolver", "()Lorg/xml/sax/EntityResolver;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xml::sax::EntityResolver _ret(ret);
    return _ret;
}

void org::xml::sax::helpers::XMLFilterImpl::setDTDHandler(const ::org::xml::sax::DTDHandler& arg0) const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDTDHandler", "(Lorg/xml/sax/DTDHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::DTDHandler org::xml::sax::helpers::XMLFilterImpl::getDTDHandler() const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDTDHandler", "()Lorg/xml/sax/DTDHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xml::sax::DTDHandler _ret(ret);
    return _ret;
}

void org::xml::sax::helpers::XMLFilterImpl::setContentHandler(const ::org::xml::sax::ContentHandler& arg0) const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentHandler", "(Lorg/xml/sax/ContentHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::ContentHandler org::xml::sax::helpers::XMLFilterImpl::getContentHandler() const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentHandler", "()Lorg/xml/sax/ContentHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xml::sax::ContentHandler _ret(ret);
    return _ret;
}

void org::xml::sax::helpers::XMLFilterImpl::setErrorHandler(const ::org::xml::sax::ErrorHandler& arg0) const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::ErrorHandler org::xml::sax::helpers::XMLFilterImpl::getErrorHandler() const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getErrorHandler", "()Lorg/xml/sax/ErrorHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xml::sax::ErrorHandler _ret(ret);
    return _ret;
}

void org::xml::sax::helpers::XMLFilterImpl::parse(const ::org::xml::sax::InputSource& arg0) const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/xml/sax/InputSource;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::XMLFilterImpl::parse(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::InputSource org::xml::sax::helpers::XMLFilterImpl::resolveEntity(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveEntity", "(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::xml::sax::InputSource _ret(ret);
    return _ret;
}

void org::xml::sax::helpers::XMLFilterImpl::notationDecl(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "notationDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::xml::sax::helpers::XMLFilterImpl::unparsedEntityDecl(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3) const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "unparsedEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void org::xml::sax::helpers::XMLFilterImpl::setDocumentLocator(const ::org::xml::sax::Locator& arg0) const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDocumentLocator", "(Lorg/xml/sax/Locator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::XMLFilterImpl::startDocument() const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "startDocument", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::xml::sax::helpers::XMLFilterImpl::endDocument() const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "endDocument", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::xml::sax::helpers::XMLFilterImpl::startPrefixMapping(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::xml::sax::helpers::XMLFilterImpl::endPrefixMapping(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "endPrefixMapping", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::XMLFilterImpl::startElement(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::org::xml::sax::Attributes& arg3) const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void org::xml::sax::helpers::XMLFilterImpl::endElement(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::xml::sax::helpers::XMLFilterImpl::characters(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "characters", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::xml::sax::helpers::XMLFilterImpl::ignorableWhitespace(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "ignorableWhitespace", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::xml::sax::helpers::XMLFilterImpl::processingInstruction(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::xml::sax::helpers::XMLFilterImpl::skippedEntity(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "skippedEntity", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::XMLFilterImpl::warning(const ::org::xml::sax::SAXParseException& arg0) const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "warning", "(Lorg/xml/sax/SAXParseException;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::XMLFilterImpl::error(const ::org::xml::sax::SAXParseException& arg0) const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "error", "(Lorg/xml/sax/SAXParseException;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::XMLFilterImpl::fatalError(const ::org::xml::sax::SAXParseException& arg0) const {
    if (!::org::xml::sax::helpers::XMLFilterImpl::_class) ::org::xml::sax::helpers::XMLFilterImpl::_class = java::fetch_class("org/xml/sax/helpers/XMLFilterImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "fatalError", "(Lorg/xml/sax/SAXParseException;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::XMLReader org::xml::sax::helpers::XMLReaderFactory::createXMLReader(){
    if (!::org::xml::sax::helpers::XMLReaderFactory::_class) ::org::xml::sax::helpers::XMLReaderFactory::_class = java::fetch_class("org/xml/sax/helpers/XMLReaderFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createXMLReader", "()Lorg/xml/sax/XMLReader;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::org::xml::sax::XMLReader _ret(ret);
    return _ret;
}

::org::xml::sax::XMLReader org::xml::sax::helpers::XMLReaderFactory::createXMLReader(const ::java::lang::String& arg0){
    if (!::org::xml::sax::helpers::XMLReaderFactory::_class) ::org::xml::sax::helpers::XMLReaderFactory::_class = java::fetch_class("org/xml/sax/helpers/XMLReaderFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createXMLReader", "(Ljava/lang/String;)Lorg/xml/sax/XMLReader;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::org::xml::sax::XMLReader _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::helpers::AttributeListImpl::AttributeListImpl() : ::java::lang::Object((jobject)0), ::org::xml::sax::AttributeList((jobject)0) {
    if (!::org::xml::sax::helpers::AttributeListImpl::_class) ::org::xml::sax::helpers::AttributeListImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributeListImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::helpers::AttributeListImpl::AttributeListImpl(const ::org::xml::sax::AttributeList& arg0) : ::java::lang::Object((jobject)0), ::org::xml::sax::AttributeList((jobject)0) {
    if (!::org::xml::sax::helpers::AttributeListImpl::_class) ::org::xml::sax::helpers::AttributeListImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributeListImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/xml/sax/AttributeList;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void org::xml::sax::helpers::AttributeListImpl::setAttributeList(const ::org::xml::sax::AttributeList& arg0) const {
    if (!::org::xml::sax::helpers::AttributeListImpl::_class) ::org::xml::sax::helpers::AttributeListImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributeListImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAttributeList", "(Lorg/xml/sax/AttributeList;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::AttributeListImpl::addAttribute(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::org::xml::sax::helpers::AttributeListImpl::_class) ::org::xml::sax::helpers::AttributeListImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributeListImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::xml::sax::helpers::AttributeListImpl::removeAttribute(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::helpers::AttributeListImpl::_class) ::org::xml::sax::helpers::AttributeListImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributeListImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAttribute", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::AttributeListImpl::clear() const {
    if (!::org::xml::sax::helpers::AttributeListImpl::_class) ::org::xml::sax::helpers::AttributeListImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributeListImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t org::xml::sax::helpers::AttributeListImpl::getLength() const {
    if (!::org::xml::sax::helpers::AttributeListImpl::_class) ::org::xml::sax::helpers::AttributeListImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributeListImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String org::xml::sax::helpers::AttributeListImpl::getName(int32_t arg0) const {
    if (!::org::xml::sax::helpers::AttributeListImpl::_class) ::org::xml::sax::helpers::AttributeListImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributeListImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xml::sax::helpers::AttributeListImpl::getType(int32_t arg0) const {
    if (!::org::xml::sax::helpers::AttributeListImpl::_class) ::org::xml::sax::helpers::AttributeListImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributeListImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xml::sax::helpers::AttributeListImpl::getValue(int32_t arg0) const {
    if (!::org::xml::sax::helpers::AttributeListImpl::_class) ::org::xml::sax::helpers::AttributeListImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributeListImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xml::sax::helpers::AttributeListImpl::getType(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::helpers::AttributeListImpl::_class) ::org::xml::sax::helpers::AttributeListImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributeListImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xml::sax::helpers::AttributeListImpl::getValue(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::helpers::AttributeListImpl::_class) ::org::xml::sax::helpers::AttributeListImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributeListImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::helpers::AttributesImpl::AttributesImpl() : ::java::lang::Object((jobject)0), ::org::xml::sax::Attributes((jobject)0) {
    if (!::org::xml::sax::helpers::AttributesImpl::_class) ::org::xml::sax::helpers::AttributesImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributesImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::helpers::AttributesImpl::AttributesImpl(const ::org::xml::sax::Attributes& arg0) : ::java::lang::Object((jobject)0), ::org::xml::sax::Attributes((jobject)0) {
    if (!::org::xml::sax::helpers::AttributesImpl::_class) ::org::xml::sax::helpers::AttributesImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributesImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/xml/sax/Attributes;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t org::xml::sax::helpers::AttributesImpl::getLength() const {
    if (!::org::xml::sax::helpers::AttributesImpl::_class) ::org::xml::sax::helpers::AttributesImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributesImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String org::xml::sax::helpers::AttributesImpl::getURI(int32_t arg0) const {
    if (!::org::xml::sax::helpers::AttributesImpl::_class) ::org::xml::sax::helpers::AttributesImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributesImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getURI", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xml::sax::helpers::AttributesImpl::getLocalName(int32_t arg0) const {
    if (!::org::xml::sax::helpers::AttributesImpl::_class) ::org::xml::sax::helpers::AttributesImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributesImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xml::sax::helpers::AttributesImpl::getQName(int32_t arg0) const {
    if (!::org::xml::sax::helpers::AttributesImpl::_class) ::org::xml::sax::helpers::AttributesImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributesImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xml::sax::helpers::AttributesImpl::getType(int32_t arg0) const {
    if (!::org::xml::sax::helpers::AttributesImpl::_class) ::org::xml::sax::helpers::AttributesImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributesImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xml::sax::helpers::AttributesImpl::getValue(int32_t arg0) const {
    if (!::org::xml::sax::helpers::AttributesImpl::_class) ::org::xml::sax::helpers::AttributesImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributesImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t org::xml::sax::helpers::AttributesImpl::getIndex(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::helpers::AttributesImpl::_class) ::org::xml::sax::helpers::AttributesImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributesImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIndex", "(Ljava/lang/String;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t org::xml::sax::helpers::AttributesImpl::getIndex(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::helpers::AttributesImpl::_class) ::org::xml::sax::helpers::AttributesImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributesImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIndex", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String org::xml::sax::helpers::AttributesImpl::getType(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::helpers::AttributesImpl::_class) ::org::xml::sax::helpers::AttributesImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributesImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xml::sax::helpers::AttributesImpl::getType(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::helpers::AttributesImpl::_class) ::org::xml::sax::helpers::AttributesImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributesImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xml::sax::helpers::AttributesImpl::getValue(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::helpers::AttributesImpl::_class) ::org::xml::sax::helpers::AttributesImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributesImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xml::sax::helpers::AttributesImpl::getValue(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::helpers::AttributesImpl::_class) ::org::xml::sax::helpers::AttributesImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributesImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::xml::sax::helpers::AttributesImpl::clear() const {
    if (!::org::xml::sax::helpers::AttributesImpl::_class) ::org::xml::sax::helpers::AttributesImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributesImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::xml::sax::helpers::AttributesImpl::setAttributes(const ::org::xml::sax::Attributes& arg0) const {
    if (!::org::xml::sax::helpers::AttributesImpl::_class) ::org::xml::sax::helpers::AttributesImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributesImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAttributes", "(Lorg/xml/sax/Attributes;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::AttributesImpl::addAttribute(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4) const {
    if (!::org::xml::sax::helpers::AttributesImpl::_class) ::org::xml::sax::helpers::AttributesImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributesImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void org::xml::sax::helpers::AttributesImpl::setAttribute(int32_t arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4, const ::java::lang::String& arg5) const {
    if (!::org::xml::sax::helpers::AttributesImpl::_class) ::org::xml::sax::helpers::AttributesImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributesImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAttribute", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void org::xml::sax::helpers::AttributesImpl::removeAttribute(int32_t arg0) const {
    if (!::org::xml::sax::helpers::AttributesImpl::_class) ::org::xml::sax::helpers::AttributesImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributesImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAttribute", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::AttributesImpl::setURI(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::helpers::AttributesImpl::_class) ::org::xml::sax::helpers::AttributesImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributesImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setURI", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::xml::sax::helpers::AttributesImpl::setLocalName(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::helpers::AttributesImpl::_class) ::org::xml::sax::helpers::AttributesImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributesImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLocalName", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::xml::sax::helpers::AttributesImpl::setQName(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::helpers::AttributesImpl::_class) ::org::xml::sax::helpers::AttributesImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributesImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setQName", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::xml::sax::helpers::AttributesImpl::setType(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::helpers::AttributesImpl::_class) ::org::xml::sax::helpers::AttributesImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributesImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setType", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::xml::sax::helpers::AttributesImpl::setValue(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::helpers::AttributesImpl::_class) ::org::xml::sax::helpers::AttributesImpl::_class = java::fetch_class("org/xml/sax/helpers/AttributesImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setValue", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::org::xml::sax::Parser org::xml::sax::helpers::ParserFactory::makeParser(){
    if (!::org::xml::sax::helpers::ParserFactory::_class) ::org::xml::sax::helpers::ParserFactory::_class = java::fetch_class("org/xml/sax/helpers/ParserFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "makeParser", "()Lorg/xml/sax/Parser;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::org::xml::sax::Parser _ret(ret);
    return _ret;
}

::org::xml::sax::Parser org::xml::sax::helpers::ParserFactory::makeParser(const ::java::lang::String& arg0){
    if (!::org::xml::sax::helpers::ParserFactory::_class) ::org::xml::sax::helpers::ParserFactory::_class = java::fetch_class("org/xml/sax/helpers/ParserFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "makeParser", "(Ljava/lang/String;)Lorg/xml/sax/Parser;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::org::xml::sax::Parser _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::helpers::XMLReaderAdapter::XMLReaderAdapter() : ::java::lang::Object((jobject)0), ::org::xml::sax::ContentHandler((jobject)0), ::org::xml::sax::Parser((jobject)0) {
    if (!::org::xml::sax::helpers::XMLReaderAdapter::_class) ::org::xml::sax::helpers::XMLReaderAdapter::_class = java::fetch_class("org/xml/sax/helpers/XMLReaderAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::helpers::XMLReaderAdapter::XMLReaderAdapter(const ::org::xml::sax::XMLReader& arg0) : ::java::lang::Object((jobject)0), ::org::xml::sax::ContentHandler((jobject)0), ::org::xml::sax::Parser((jobject)0) {
    if (!::org::xml::sax::helpers::XMLReaderAdapter::_class) ::org::xml::sax::helpers::XMLReaderAdapter::_class = java::fetch_class("org/xml/sax/helpers/XMLReaderAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/xml/sax/XMLReader;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void org::xml::sax::helpers::XMLReaderAdapter::setLocale(const ::java::util::Locale& arg0) const {
    if (!::org::xml::sax::helpers::XMLReaderAdapter::_class) ::org::xml::sax::helpers::XMLReaderAdapter::_class = java::fetch_class("org/xml/sax/helpers/XMLReaderAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLocale", "(Ljava/util/Locale;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::XMLReaderAdapter::setEntityResolver(const ::org::xml::sax::EntityResolver& arg0) const {
    if (!::org::xml::sax::helpers::XMLReaderAdapter::_class) ::org::xml::sax::helpers::XMLReaderAdapter::_class = java::fetch_class("org/xml/sax/helpers/XMLReaderAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEntityResolver", "(Lorg/xml/sax/EntityResolver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::XMLReaderAdapter::setDTDHandler(const ::org::xml::sax::DTDHandler& arg0) const {
    if (!::org::xml::sax::helpers::XMLReaderAdapter::_class) ::org::xml::sax::helpers::XMLReaderAdapter::_class = java::fetch_class("org/xml/sax/helpers/XMLReaderAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDTDHandler", "(Lorg/xml/sax/DTDHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::XMLReaderAdapter::setDocumentHandler(const ::org::xml::sax::DocumentHandler& arg0) const {
    if (!::org::xml::sax::helpers::XMLReaderAdapter::_class) ::org::xml::sax::helpers::XMLReaderAdapter::_class = java::fetch_class("org/xml/sax/helpers/XMLReaderAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDocumentHandler", "(Lorg/xml/sax/DocumentHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::XMLReaderAdapter::setErrorHandler(const ::org::xml::sax::ErrorHandler& arg0) const {
    if (!::org::xml::sax::helpers::XMLReaderAdapter::_class) ::org::xml::sax::helpers::XMLReaderAdapter::_class = java::fetch_class("org/xml/sax/helpers/XMLReaderAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::XMLReaderAdapter::parse(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::helpers::XMLReaderAdapter::_class) ::org::xml::sax::helpers::XMLReaderAdapter::_class = java::fetch_class("org/xml/sax/helpers/XMLReaderAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::XMLReaderAdapter::parse(const ::org::xml::sax::InputSource& arg0) const {
    if (!::org::xml::sax::helpers::XMLReaderAdapter::_class) ::org::xml::sax::helpers::XMLReaderAdapter::_class = java::fetch_class("org/xml/sax/helpers/XMLReaderAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/xml/sax/InputSource;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::XMLReaderAdapter::setDocumentLocator(const ::org::xml::sax::Locator& arg0) const {
    if (!::org::xml::sax::helpers::XMLReaderAdapter::_class) ::org::xml::sax::helpers::XMLReaderAdapter::_class = java::fetch_class("org/xml/sax/helpers/XMLReaderAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDocumentLocator", "(Lorg/xml/sax/Locator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::XMLReaderAdapter::startDocument() const {
    if (!::org::xml::sax::helpers::XMLReaderAdapter::_class) ::org::xml::sax::helpers::XMLReaderAdapter::_class = java::fetch_class("org/xml/sax/helpers/XMLReaderAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "startDocument", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::xml::sax::helpers::XMLReaderAdapter::endDocument() const {
    if (!::org::xml::sax::helpers::XMLReaderAdapter::_class) ::org::xml::sax::helpers::XMLReaderAdapter::_class = java::fetch_class("org/xml/sax/helpers/XMLReaderAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "endDocument", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::xml::sax::helpers::XMLReaderAdapter::startPrefixMapping(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::helpers::XMLReaderAdapter::_class) ::org::xml::sax::helpers::XMLReaderAdapter::_class = java::fetch_class("org/xml/sax/helpers/XMLReaderAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::xml::sax::helpers::XMLReaderAdapter::endPrefixMapping(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::helpers::XMLReaderAdapter::_class) ::org::xml::sax::helpers::XMLReaderAdapter::_class = java::fetch_class("org/xml/sax/helpers/XMLReaderAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "endPrefixMapping", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::XMLReaderAdapter::startElement(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::org::xml::sax::Attributes& arg3) const {
    if (!::org::xml::sax::helpers::XMLReaderAdapter::_class) ::org::xml::sax::helpers::XMLReaderAdapter::_class = java::fetch_class("org/xml/sax/helpers/XMLReaderAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void org::xml::sax::helpers::XMLReaderAdapter::endElement(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::org::xml::sax::helpers::XMLReaderAdapter::_class) ::org::xml::sax::helpers::XMLReaderAdapter::_class = java::fetch_class("org/xml/sax/helpers/XMLReaderAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::xml::sax::helpers::XMLReaderAdapter::characters(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::xml::sax::helpers::XMLReaderAdapter::_class) ::org::xml::sax::helpers::XMLReaderAdapter::_class = java::fetch_class("org/xml/sax/helpers/XMLReaderAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "characters", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::xml::sax::helpers::XMLReaderAdapter::ignorableWhitespace(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::xml::sax::helpers::XMLReaderAdapter::_class) ::org::xml::sax::helpers::XMLReaderAdapter::_class = java::fetch_class("org/xml/sax/helpers/XMLReaderAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "ignorableWhitespace", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::xml::sax::helpers::XMLReaderAdapter::processingInstruction(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::helpers::XMLReaderAdapter::_class) ::org::xml::sax::helpers::XMLReaderAdapter::_class = java::fetch_class("org/xml/sax/helpers/XMLReaderAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::xml::sax::helpers::XMLReaderAdapter::skippedEntity(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::helpers::XMLReaderAdapter::_class) ::org::xml::sax::helpers::XMLReaderAdapter::_class = java::fetch_class("org/xml/sax/helpers/XMLReaderAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "skippedEntity", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::helpers::LocatorImpl::LocatorImpl() : ::java::lang::Object((jobject)0), ::org::xml::sax::Locator((jobject)0) {
    if (!::org::xml::sax::helpers::LocatorImpl::_class) ::org::xml::sax::helpers::LocatorImpl::_class = java::fetch_class("org/xml/sax/helpers/LocatorImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::helpers::LocatorImpl::LocatorImpl(const ::org::xml::sax::Locator& arg0) : ::java::lang::Object((jobject)0), ::org::xml::sax::Locator((jobject)0) {
    if (!::org::xml::sax::helpers::LocatorImpl::_class) ::org::xml::sax::helpers::LocatorImpl::_class = java::fetch_class("org/xml/sax/helpers/LocatorImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/xml/sax/Locator;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String org::xml::sax::helpers::LocatorImpl::getPublicId() const {
    if (!::org::xml::sax::helpers::LocatorImpl::_class) ::org::xml::sax::helpers::LocatorImpl::_class = java::fetch_class("org/xml/sax/helpers/LocatorImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPublicId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xml::sax::helpers::LocatorImpl::getSystemId() const {
    if (!::org::xml::sax::helpers::LocatorImpl::_class) ::org::xml::sax::helpers::LocatorImpl::_class = java::fetch_class("org/xml/sax/helpers/LocatorImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t org::xml::sax::helpers::LocatorImpl::getLineNumber() const {
    if (!::org::xml::sax::helpers::LocatorImpl::_class) ::org::xml::sax::helpers::LocatorImpl::_class = java::fetch_class("org/xml/sax/helpers/LocatorImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineNumber", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t org::xml::sax::helpers::LocatorImpl::getColumnNumber() const {
    if (!::org::xml::sax::helpers::LocatorImpl::_class) ::org::xml::sax::helpers::LocatorImpl::_class = java::fetch_class("org/xml/sax/helpers/LocatorImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnNumber", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void org::xml::sax::helpers::LocatorImpl::setPublicId(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::helpers::LocatorImpl::_class) ::org::xml::sax::helpers::LocatorImpl::_class = java::fetch_class("org/xml/sax/helpers/LocatorImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPublicId", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::LocatorImpl::setSystemId(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::helpers::LocatorImpl::_class) ::org::xml::sax::helpers::LocatorImpl::_class = java::fetch_class("org/xml/sax/helpers/LocatorImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSystemId", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::LocatorImpl::setLineNumber(int32_t arg0) const {
    if (!::org::xml::sax::helpers::LocatorImpl::_class) ::org::xml::sax::helpers::LocatorImpl::_class = java::fetch_class("org/xml/sax/helpers/LocatorImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLineNumber", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::LocatorImpl::setColumnNumber(int32_t arg0) const {
    if (!::org::xml::sax::helpers::LocatorImpl::_class) ::org::xml::sax::helpers::LocatorImpl::_class = java::fetch_class("org/xml/sax/helpers/LocatorImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColumnNumber", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::helpers::DefaultHandler::DefaultHandler() : ::java::lang::Object((jobject)0), ::org::xml::sax::ContentHandler((jobject)0), ::org::xml::sax::DTDHandler((jobject)0), ::org::xml::sax::EntityResolver((jobject)0), ::org::xml::sax::ErrorHandler((jobject)0) {
    if (!::org::xml::sax::helpers::DefaultHandler::_class) ::org::xml::sax::helpers::DefaultHandler::_class = java::fetch_class("org/xml/sax/helpers/DefaultHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::org::xml::sax::InputSource org::xml::sax::helpers::DefaultHandler::resolveEntity(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::helpers::DefaultHandler::_class) ::org::xml::sax::helpers::DefaultHandler::_class = java::fetch_class("org/xml/sax/helpers/DefaultHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveEntity", "(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::xml::sax::InputSource _ret(ret);
    return _ret;
}

void org::xml::sax::helpers::DefaultHandler::notationDecl(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::org::xml::sax::helpers::DefaultHandler::_class) ::org::xml::sax::helpers::DefaultHandler::_class = java::fetch_class("org/xml/sax/helpers/DefaultHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "notationDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::xml::sax::helpers::DefaultHandler::unparsedEntityDecl(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3) const {
    if (!::org::xml::sax::helpers::DefaultHandler::_class) ::org::xml::sax::helpers::DefaultHandler::_class = java::fetch_class("org/xml/sax/helpers/DefaultHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "unparsedEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void org::xml::sax::helpers::DefaultHandler::setDocumentLocator(const ::org::xml::sax::Locator& arg0) const {
    if (!::org::xml::sax::helpers::DefaultHandler::_class) ::org::xml::sax::helpers::DefaultHandler::_class = java::fetch_class("org/xml/sax/helpers/DefaultHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDocumentLocator", "(Lorg/xml/sax/Locator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::DefaultHandler::startDocument() const {
    if (!::org::xml::sax::helpers::DefaultHandler::_class) ::org::xml::sax::helpers::DefaultHandler::_class = java::fetch_class("org/xml/sax/helpers/DefaultHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "startDocument", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::xml::sax::helpers::DefaultHandler::endDocument() const {
    if (!::org::xml::sax::helpers::DefaultHandler::_class) ::org::xml::sax::helpers::DefaultHandler::_class = java::fetch_class("org/xml/sax/helpers/DefaultHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "endDocument", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::xml::sax::helpers::DefaultHandler::startPrefixMapping(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::helpers::DefaultHandler::_class) ::org::xml::sax::helpers::DefaultHandler::_class = java::fetch_class("org/xml/sax/helpers/DefaultHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::xml::sax::helpers::DefaultHandler::endPrefixMapping(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::helpers::DefaultHandler::_class) ::org::xml::sax::helpers::DefaultHandler::_class = java::fetch_class("org/xml/sax/helpers/DefaultHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "endPrefixMapping", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::DefaultHandler::startElement(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::org::xml::sax::Attributes& arg3) const {
    if (!::org::xml::sax::helpers::DefaultHandler::_class) ::org::xml::sax::helpers::DefaultHandler::_class = java::fetch_class("org/xml/sax/helpers/DefaultHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void org::xml::sax::helpers::DefaultHandler::endElement(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::org::xml::sax::helpers::DefaultHandler::_class) ::org::xml::sax::helpers::DefaultHandler::_class = java::fetch_class("org/xml/sax/helpers/DefaultHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::xml::sax::helpers::DefaultHandler::characters(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::xml::sax::helpers::DefaultHandler::_class) ::org::xml::sax::helpers::DefaultHandler::_class = java::fetch_class("org/xml/sax/helpers/DefaultHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "characters", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::xml::sax::helpers::DefaultHandler::ignorableWhitespace(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::xml::sax::helpers::DefaultHandler::_class) ::org::xml::sax::helpers::DefaultHandler::_class = java::fetch_class("org/xml/sax/helpers/DefaultHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "ignorableWhitespace", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::xml::sax::helpers::DefaultHandler::processingInstruction(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::helpers::DefaultHandler::_class) ::org::xml::sax::helpers::DefaultHandler::_class = java::fetch_class("org/xml/sax/helpers/DefaultHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::xml::sax::helpers::DefaultHandler::skippedEntity(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::helpers::DefaultHandler::_class) ::org::xml::sax::helpers::DefaultHandler::_class = java::fetch_class("org/xml/sax/helpers/DefaultHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "skippedEntity", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::DefaultHandler::warning(const ::org::xml::sax::SAXParseException& arg0) const {
    if (!::org::xml::sax::helpers::DefaultHandler::_class) ::org::xml::sax::helpers::DefaultHandler::_class = java::fetch_class("org/xml/sax/helpers/DefaultHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "warning", "(Lorg/xml/sax/SAXParseException;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::DefaultHandler::error(const ::org::xml::sax::SAXParseException& arg0) const {
    if (!::org::xml::sax::helpers::DefaultHandler::_class) ::org::xml::sax::helpers::DefaultHandler::_class = java::fetch_class("org/xml/sax/helpers/DefaultHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "error", "(Lorg/xml/sax/SAXParseException;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::DefaultHandler::fatalError(const ::org::xml::sax::SAXParseException& arg0) const {
    if (!::org::xml::sax::helpers::DefaultHandler::_class) ::org::xml::sax::helpers::DefaultHandler::_class = java::fetch_class("org/xml/sax/helpers/DefaultHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "fatalError", "(Lorg/xml/sax/SAXParseException;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::helpers::ParserAdapter::ParserAdapter() : ::java::lang::Object((jobject)0), ::org::xml::sax::DocumentHandler((jobject)0), ::org::xml::sax::XMLReader((jobject)0) {
    if (!::org::xml::sax::helpers::ParserAdapter::_class) ::org::xml::sax::helpers::ParserAdapter::_class = java::fetch_class("org/xml/sax/helpers/ParserAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::helpers::ParserAdapter::ParserAdapter(const ::org::xml::sax::Parser& arg0) : ::java::lang::Object((jobject)0), ::org::xml::sax::DocumentHandler((jobject)0), ::org::xml::sax::XMLReader((jobject)0) {
    if (!::org::xml::sax::helpers::ParserAdapter::_class) ::org::xml::sax::helpers::ParserAdapter::_class = java::fetch_class("org/xml/sax/helpers/ParserAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/xml/sax/Parser;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void org::xml::sax::helpers::ParserAdapter::setFeature(const ::java::lang::String& arg0, bool arg1) const {
    if (!::org::xml::sax::helpers::ParserAdapter::_class) ::org::xml::sax::helpers::ParserAdapter::_class = java::fetch_class("org/xml/sax/helpers/ParserAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFeature", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool org::xml::sax::helpers::ParserAdapter::getFeature(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::helpers::ParserAdapter::_class) ::org::xml::sax::helpers::ParserAdapter::_class = java::fetch_class("org/xml/sax/helpers/ParserAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFeature", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::ParserAdapter::setProperty(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::xml::sax::helpers::ParserAdapter::_class) ::org::xml::sax::helpers::ParserAdapter::_class = java::fetch_class("org/xml/sax/helpers/ParserAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object org::xml::sax::helpers::ParserAdapter::getProperty(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::helpers::ParserAdapter::_class) ::org::xml::sax::helpers::ParserAdapter::_class = java::fetch_class("org/xml/sax/helpers/ParserAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProperty", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void org::xml::sax::helpers::ParserAdapter::setEntityResolver(const ::org::xml::sax::EntityResolver& arg0) const {
    if (!::org::xml::sax::helpers::ParserAdapter::_class) ::org::xml::sax::helpers::ParserAdapter::_class = java::fetch_class("org/xml/sax/helpers/ParserAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEntityResolver", "(Lorg/xml/sax/EntityResolver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::EntityResolver org::xml::sax::helpers::ParserAdapter::getEntityResolver() const {
    if (!::org::xml::sax::helpers::ParserAdapter::_class) ::org::xml::sax::helpers::ParserAdapter::_class = java::fetch_class("org/xml/sax/helpers/ParserAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEntityResolver", "()Lorg/xml/sax/EntityResolver;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xml::sax::EntityResolver _ret(ret);
    return _ret;
}

void org::xml::sax::helpers::ParserAdapter::setDTDHandler(const ::org::xml::sax::DTDHandler& arg0) const {
    if (!::org::xml::sax::helpers::ParserAdapter::_class) ::org::xml::sax::helpers::ParserAdapter::_class = java::fetch_class("org/xml/sax/helpers/ParserAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDTDHandler", "(Lorg/xml/sax/DTDHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::DTDHandler org::xml::sax::helpers::ParserAdapter::getDTDHandler() const {
    if (!::org::xml::sax::helpers::ParserAdapter::_class) ::org::xml::sax::helpers::ParserAdapter::_class = java::fetch_class("org/xml/sax/helpers/ParserAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDTDHandler", "()Lorg/xml/sax/DTDHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xml::sax::DTDHandler _ret(ret);
    return _ret;
}

void org::xml::sax::helpers::ParserAdapter::setContentHandler(const ::org::xml::sax::ContentHandler& arg0) const {
    if (!::org::xml::sax::helpers::ParserAdapter::_class) ::org::xml::sax::helpers::ParserAdapter::_class = java::fetch_class("org/xml/sax/helpers/ParserAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentHandler", "(Lorg/xml/sax/ContentHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::ContentHandler org::xml::sax::helpers::ParserAdapter::getContentHandler() const {
    if (!::org::xml::sax::helpers::ParserAdapter::_class) ::org::xml::sax::helpers::ParserAdapter::_class = java::fetch_class("org/xml/sax/helpers/ParserAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentHandler", "()Lorg/xml/sax/ContentHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xml::sax::ContentHandler _ret(ret);
    return _ret;
}

void org::xml::sax::helpers::ParserAdapter::setErrorHandler(const ::org::xml::sax::ErrorHandler& arg0) const {
    if (!::org::xml::sax::helpers::ParserAdapter::_class) ::org::xml::sax::helpers::ParserAdapter::_class = java::fetch_class("org/xml/sax/helpers/ParserAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::ErrorHandler org::xml::sax::helpers::ParserAdapter::getErrorHandler() const {
    if (!::org::xml::sax::helpers::ParserAdapter::_class) ::org::xml::sax::helpers::ParserAdapter::_class = java::fetch_class("org/xml/sax/helpers/ParserAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getErrorHandler", "()Lorg/xml/sax/ErrorHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xml::sax::ErrorHandler _ret(ret);
    return _ret;
}

void org::xml::sax::helpers::ParserAdapter::parse(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::helpers::ParserAdapter::_class) ::org::xml::sax::helpers::ParserAdapter::_class = java::fetch_class("org/xml/sax/helpers/ParserAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::ParserAdapter::parse(const ::org::xml::sax::InputSource& arg0) const {
    if (!::org::xml::sax::helpers::ParserAdapter::_class) ::org::xml::sax::helpers::ParserAdapter::_class = java::fetch_class("org/xml/sax/helpers/ParserAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/xml/sax/InputSource;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::ParserAdapter::setDocumentLocator(const ::org::xml::sax::Locator& arg0) const {
    if (!::org::xml::sax::helpers::ParserAdapter::_class) ::org::xml::sax::helpers::ParserAdapter::_class = java::fetch_class("org/xml/sax/helpers/ParserAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDocumentLocator", "(Lorg/xml/sax/Locator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::ParserAdapter::startDocument() const {
    if (!::org::xml::sax::helpers::ParserAdapter::_class) ::org::xml::sax::helpers::ParserAdapter::_class = java::fetch_class("org/xml/sax/helpers/ParserAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "startDocument", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::xml::sax::helpers::ParserAdapter::endDocument() const {
    if (!::org::xml::sax::helpers::ParserAdapter::_class) ::org::xml::sax::helpers::ParserAdapter::_class = java::fetch_class("org/xml/sax/helpers/ParserAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "endDocument", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::xml::sax::helpers::ParserAdapter::startElement(const ::java::lang::String& arg0, const ::org::xml::sax::AttributeList& arg1) const {
    if (!::org::xml::sax::helpers::ParserAdapter::_class) ::org::xml::sax::helpers::ParserAdapter::_class = java::fetch_class("org/xml/sax/helpers/ParserAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "startElement", "(Ljava/lang/String;Lorg/xml/sax/AttributeList;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::xml::sax::helpers::ParserAdapter::endElement(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::helpers::ParserAdapter::_class) ::org::xml::sax::helpers::ParserAdapter::_class = java::fetch_class("org/xml/sax/helpers/ParserAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "endElement", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::helpers::ParserAdapter::characters(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::xml::sax::helpers::ParserAdapter::_class) ::org::xml::sax::helpers::ParserAdapter::_class = java::fetch_class("org/xml/sax/helpers/ParserAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "characters", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::xml::sax::helpers::ParserAdapter::ignorableWhitespace(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::xml::sax::helpers::ParserAdapter::_class) ::org::xml::sax::helpers::ParserAdapter::_class = java::fetch_class("org/xml/sax/helpers/ParserAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "ignorableWhitespace", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::xml::sax::helpers::ParserAdapter::processingInstruction(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::helpers::ParserAdapter::_class) ::org::xml::sax::helpers::ParserAdapter::_class = java::fetch_class("org/xml/sax/helpers/ParserAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

