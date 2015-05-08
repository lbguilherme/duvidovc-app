#include "java-core.hpp"
#include <memory>
#include "java.lang.String.hpp"
#include "org.xml.sax.Attributes.hpp"
#include "org.xml.sax.InputSource.hpp"
#include "org.xml.sax.Locator.hpp"
#include "org.xml.sax.ext.Attributes2.hpp"
#include "org.xml.sax.ext.Attributes2Impl.hpp"
#include "org.xml.sax.ext.DeclHandler.hpp"
#include "org.xml.sax.ext.DefaultHandler2.hpp"
#include "org.xml.sax.ext.EntityResolver2.hpp"
#include "org.xml.sax.ext.LexicalHandler.hpp"
#include "org.xml.sax.ext.Locator2.hpp"
#include "org.xml.sax.ext.Locator2Impl.hpp"

jclass org::xml::sax::ext::LexicalHandler::_class = nullptr;
jclass org::xml::sax::ext::DefaultHandler2::_class = nullptr;
jclass org::xml::sax::ext::Locator2Impl::_class = nullptr;
jclass org::xml::sax::ext::EntityResolver2::_class = nullptr;
jclass org::xml::sax::ext::DeclHandler::_class = nullptr;
jclass org::xml::sax::ext::Attributes2Impl::_class = nullptr;
jclass org::xml::sax::ext::Attributes2::_class = nullptr;
jclass org::xml::sax::ext::Locator2::_class = nullptr;

void org::xml::sax::ext::LexicalHandler::startDTD(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::org::xml::sax::ext::LexicalHandler::_class) ::org::xml::sax::ext::LexicalHandler::_class = java::fetch_class("org/xml/sax/ext/LexicalHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "startDTD", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::xml::sax::ext::LexicalHandler::endDTD() const {
    if (!::org::xml::sax::ext::LexicalHandler::_class) ::org::xml::sax::ext::LexicalHandler::_class = java::fetch_class("org/xml/sax/ext/LexicalHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "endDTD", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::xml::sax::ext::LexicalHandler::startEntity(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::ext::LexicalHandler::_class) ::org::xml::sax::ext::LexicalHandler::_class = java::fetch_class("org/xml/sax/ext/LexicalHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "startEntity", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::ext::LexicalHandler::endEntity(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::ext::LexicalHandler::_class) ::org::xml::sax::ext::LexicalHandler::_class = java::fetch_class("org/xml/sax/ext/LexicalHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "endEntity", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::ext::LexicalHandler::startCDATA() const {
    if (!::org::xml::sax::ext::LexicalHandler::_class) ::org::xml::sax::ext::LexicalHandler::_class = java::fetch_class("org/xml/sax/ext/LexicalHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "startCDATA", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::xml::sax::ext::LexicalHandler::endCDATA() const {
    if (!::org::xml::sax::ext::LexicalHandler::_class) ::org::xml::sax::ext::LexicalHandler::_class = java::fetch_class("org/xml/sax/ext/LexicalHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "endCDATA", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::xml::sax::ext::LexicalHandler::comment(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::xml::sax::ext::LexicalHandler::_class) ::org::xml::sax::ext::LexicalHandler::_class = java::fetch_class("org/xml/sax/ext/LexicalHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "comment", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::ext::DefaultHandler2::DefaultHandler2() : ::java::lang::Object((jobject)0), ::org::xml::sax::ContentHandler((jobject)0), ::org::xml::sax::DTDHandler((jobject)0), ::org::xml::sax::EntityResolver((jobject)0), ::org::xml::sax::ErrorHandler((jobject)0), ::org::xml::sax::ext::DeclHandler((jobject)0), ::org::xml::sax::ext::EntityResolver2((jobject)0), ::org::xml::sax::ext::LexicalHandler((jobject)0), ::org::xml::sax::helpers::DefaultHandler((jobject)0) {
    if (!::org::xml::sax::ext::DefaultHandler2::_class) ::org::xml::sax::ext::DefaultHandler2::_class = java::fetch_class("org/xml/sax/ext/DefaultHandler2");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::xml::sax::ext::DefaultHandler2::startCDATA() const {
    if (!::org::xml::sax::ext::DefaultHandler2::_class) ::org::xml::sax::ext::DefaultHandler2::_class = java::fetch_class("org/xml/sax/ext/DefaultHandler2");
    static jmethodID mid = java::jni->GetMethodID(_class, "startCDATA", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::xml::sax::ext::DefaultHandler2::endCDATA() const {
    if (!::org::xml::sax::ext::DefaultHandler2::_class) ::org::xml::sax::ext::DefaultHandler2::_class = java::fetch_class("org/xml/sax/ext/DefaultHandler2");
    static jmethodID mid = java::jni->GetMethodID(_class, "endCDATA", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::xml::sax::ext::DefaultHandler2::startDTD(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::org::xml::sax::ext::DefaultHandler2::_class) ::org::xml::sax::ext::DefaultHandler2::_class = java::fetch_class("org/xml/sax/ext/DefaultHandler2");
    static jmethodID mid = java::jni->GetMethodID(_class, "startDTD", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::xml::sax::ext::DefaultHandler2::endDTD() const {
    if (!::org::xml::sax::ext::DefaultHandler2::_class) ::org::xml::sax::ext::DefaultHandler2::_class = java::fetch_class("org/xml/sax/ext/DefaultHandler2");
    static jmethodID mid = java::jni->GetMethodID(_class, "endDTD", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::xml::sax::ext::DefaultHandler2::startEntity(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::ext::DefaultHandler2::_class) ::org::xml::sax::ext::DefaultHandler2::_class = java::fetch_class("org/xml/sax/ext/DefaultHandler2");
    static jmethodID mid = java::jni->GetMethodID(_class, "startEntity", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::ext::DefaultHandler2::endEntity(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::ext::DefaultHandler2::_class) ::org::xml::sax::ext::DefaultHandler2::_class = java::fetch_class("org/xml/sax/ext/DefaultHandler2");
    static jmethodID mid = java::jni->GetMethodID(_class, "endEntity", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::ext::DefaultHandler2::comment(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::xml::sax::ext::DefaultHandler2::_class) ::org::xml::sax::ext::DefaultHandler2::_class = java::fetch_class("org/xml/sax/ext/DefaultHandler2");
    static jmethodID mid = java::jni->GetMethodID(_class, "comment", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::xml::sax::ext::DefaultHandler2::attributeDecl(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4) const {
    if (!::org::xml::sax::ext::DefaultHandler2::_class) ::org::xml::sax::ext::DefaultHandler2::_class = java::fetch_class("org/xml/sax/ext/DefaultHandler2");
    static jmethodID mid = java::jni->GetMethodID(_class, "attributeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void org::xml::sax::ext::DefaultHandler2::elementDecl(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::ext::DefaultHandler2::_class) ::org::xml::sax::ext::DefaultHandler2::_class = java::fetch_class("org/xml/sax/ext/DefaultHandler2");
    static jmethodID mid = java::jni->GetMethodID(_class, "elementDecl", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::xml::sax::ext::DefaultHandler2::externalEntityDecl(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::org::xml::sax::ext::DefaultHandler2::_class) ::org::xml::sax::ext::DefaultHandler2::_class = java::fetch_class("org/xml/sax/ext/DefaultHandler2");
    static jmethodID mid = java::jni->GetMethodID(_class, "externalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::xml::sax::ext::DefaultHandler2::internalEntityDecl(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::ext::DefaultHandler2::_class) ::org::xml::sax::ext::DefaultHandler2::_class = java::fetch_class("org/xml/sax/ext/DefaultHandler2");
    static jmethodID mid = java::jni->GetMethodID(_class, "internalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::org::xml::sax::InputSource org::xml::sax::ext::DefaultHandler2::getExternalSubset(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::ext::DefaultHandler2::_class) ::org::xml::sax::ext::DefaultHandler2::_class = java::fetch_class("org/xml/sax/ext/DefaultHandler2");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExternalSubset", "(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::xml::sax::InputSource _ret(ret);
    return _ret;
}

::org::xml::sax::InputSource org::xml::sax::ext::DefaultHandler2::resolveEntity(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3) const {
    if (!::org::xml::sax::ext::DefaultHandler2::_class) ::org::xml::sax::ext::DefaultHandler2::_class = java::fetch_class("org/xml/sax/ext/DefaultHandler2");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveEntity", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::org::xml::sax::InputSource _ret(ret);
    return _ret;
}

::org::xml::sax::InputSource org::xml::sax::ext::DefaultHandler2::resolveEntity(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::ext::DefaultHandler2::_class) ::org::xml::sax::ext::DefaultHandler2::_class = java::fetch_class("org/xml/sax/ext/DefaultHandler2");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveEntity", "(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::xml::sax::InputSource _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::ext::Locator2Impl::Locator2Impl() : ::java::lang::Object((jobject)0), ::org::xml::sax::Locator((jobject)0), ::org::xml::sax::ext::Locator2((jobject)0), ::org::xml::sax::helpers::LocatorImpl((jobject)0) {
    if (!::org::xml::sax::ext::Locator2Impl::_class) ::org::xml::sax::ext::Locator2Impl::_class = java::fetch_class("org/xml/sax/ext/Locator2Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::ext::Locator2Impl::Locator2Impl(const ::org::xml::sax::Locator& arg0) : ::java::lang::Object((jobject)0), ::org::xml::sax::Locator((jobject)0), ::org::xml::sax::ext::Locator2((jobject)0), ::org::xml::sax::helpers::LocatorImpl((jobject)0) {
    if (!::org::xml::sax::ext::Locator2Impl::_class) ::org::xml::sax::ext::Locator2Impl::_class = java::fetch_class("org/xml/sax/ext/Locator2Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/xml/sax/Locator;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String org::xml::sax::ext::Locator2Impl::getXMLVersion() const {
    if (!::org::xml::sax::ext::Locator2Impl::_class) ::org::xml::sax::ext::Locator2Impl::_class = java::fetch_class("org/xml/sax/ext/Locator2Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getXMLVersion", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xml::sax::ext::Locator2Impl::getEncoding() const {
    if (!::org::xml::sax::ext::Locator2Impl::_class) ::org::xml::sax::ext::Locator2Impl::_class = java::fetch_class("org/xml/sax/ext/Locator2Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncoding", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::xml::sax::ext::Locator2Impl::setXMLVersion(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::ext::Locator2Impl::_class) ::org::xml::sax::ext::Locator2Impl::_class = java::fetch_class("org/xml/sax/ext/Locator2Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setXMLVersion", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::ext::Locator2Impl::setEncoding(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::ext::Locator2Impl::_class) ::org::xml::sax::ext::Locator2Impl::_class = java::fetch_class("org/xml/sax/ext/Locator2Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEncoding", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::InputSource org::xml::sax::ext::EntityResolver2::getExternalSubset(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::ext::EntityResolver2::_class) ::org::xml::sax::ext::EntityResolver2::_class = java::fetch_class("org/xml/sax/ext/EntityResolver2");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExternalSubset", "(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::xml::sax::InputSource _ret(ret);
    return _ret;
}

::org::xml::sax::InputSource org::xml::sax::ext::EntityResolver2::resolveEntity(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3) const {
    if (!::org::xml::sax::ext::EntityResolver2::_class) ::org::xml::sax::ext::EntityResolver2::_class = java::fetch_class("org/xml/sax/ext/EntityResolver2");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveEntity", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::org::xml::sax::InputSource _ret(ret);
    return _ret;
}

void org::xml::sax::ext::DeclHandler::elementDecl(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::ext::DeclHandler::_class) ::org::xml::sax::ext::DeclHandler::_class = java::fetch_class("org/xml/sax/ext/DeclHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "elementDecl", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::xml::sax::ext::DeclHandler::attributeDecl(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4) const {
    if (!::org::xml::sax::ext::DeclHandler::_class) ::org::xml::sax::ext::DeclHandler::_class = java::fetch_class("org/xml/sax/ext/DeclHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "attributeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void org::xml::sax::ext::DeclHandler::internalEntityDecl(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::ext::DeclHandler::_class) ::org::xml::sax::ext::DeclHandler::_class = java::fetch_class("org/xml/sax/ext/DeclHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "internalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::xml::sax::ext::DeclHandler::externalEntityDecl(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::org::xml::sax::ext::DeclHandler::_class) ::org::xml::sax::ext::DeclHandler::_class = java::fetch_class("org/xml/sax/ext/DeclHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "externalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::ext::Attributes2Impl::Attributes2Impl() : ::java::lang::Object((jobject)0), ::org::xml::sax::Attributes((jobject)0), ::org::xml::sax::ext::Attributes2((jobject)0), ::org::xml::sax::helpers::AttributesImpl((jobject)0) {
    if (!::org::xml::sax::ext::Attributes2Impl::_class) ::org::xml::sax::ext::Attributes2Impl::_class = java::fetch_class("org/xml/sax/ext/Attributes2Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xml::sax::ext::Attributes2Impl::Attributes2Impl(const ::org::xml::sax::Attributes& arg0) : ::java::lang::Object((jobject)0), ::org::xml::sax::Attributes((jobject)0), ::org::xml::sax::ext::Attributes2((jobject)0), ::org::xml::sax::helpers::AttributesImpl((jobject)0) {
    if (!::org::xml::sax::ext::Attributes2Impl::_class) ::org::xml::sax::ext::Attributes2Impl::_class = java::fetch_class("org/xml/sax/ext/Attributes2Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/xml/sax/Attributes;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool org::xml::sax::ext::Attributes2Impl::isDeclared(int32_t arg0) const {
    if (!::org::xml::sax::ext::Attributes2Impl::_class) ::org::xml::sax::ext::Attributes2Impl::_class = java::fetch_class("org/xml/sax/ext/Attributes2Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDeclared", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::xml::sax::ext::Attributes2Impl::isDeclared(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::ext::Attributes2Impl::_class) ::org::xml::sax::ext::Attributes2Impl::_class = java::fetch_class("org/xml/sax/ext/Attributes2Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDeclared", "(Ljava/lang/String;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool org::xml::sax::ext::Attributes2Impl::isDeclared(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::ext::Attributes2Impl::_class) ::org::xml::sax::ext::Attributes2Impl::_class = java::fetch_class("org/xml/sax/ext/Attributes2Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDeclared", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::xml::sax::ext::Attributes2Impl::isSpecified(int32_t arg0) const {
    if (!::org::xml::sax::ext::Attributes2Impl::_class) ::org::xml::sax::ext::Attributes2Impl::_class = java::fetch_class("org/xml/sax/ext/Attributes2Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSpecified", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::xml::sax::ext::Attributes2Impl::isSpecified(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::ext::Attributes2Impl::_class) ::org::xml::sax::ext::Attributes2Impl::_class = java::fetch_class("org/xml/sax/ext/Attributes2Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSpecified", "(Ljava/lang/String;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool org::xml::sax::ext::Attributes2Impl::isSpecified(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::ext::Attributes2Impl::_class) ::org::xml::sax::ext::Attributes2Impl::_class = java::fetch_class("org/xml/sax/ext/Attributes2Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSpecified", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void org::xml::sax::ext::Attributes2Impl::setAttributes(const ::org::xml::sax::Attributes& arg0) const {
    if (!::org::xml::sax::ext::Attributes2Impl::_class) ::org::xml::sax::ext::Attributes2Impl::_class = java::fetch_class("org/xml/sax/ext/Attributes2Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAttributes", "(Lorg/xml/sax/Attributes;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::ext::Attributes2Impl::addAttribute(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4) const {
    if (!::org::xml::sax::ext::Attributes2Impl::_class) ::org::xml::sax::ext::Attributes2Impl::_class = java::fetch_class("org/xml/sax/ext/Attributes2Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void org::xml::sax::ext::Attributes2Impl::removeAttribute(int32_t arg0) const {
    if (!::org::xml::sax::ext::Attributes2Impl::_class) ::org::xml::sax::ext::Attributes2Impl::_class = java::fetch_class("org/xml/sax/ext/Attributes2Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAttribute", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xml::sax::ext::Attributes2Impl::setDeclared(int32_t arg0, bool arg1) const {
    if (!::org::xml::sax::ext::Attributes2Impl::_class) ::org::xml::sax::ext::Attributes2Impl::_class = java::fetch_class("org/xml/sax/ext/Attributes2Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDeclared", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::xml::sax::ext::Attributes2Impl::setSpecified(int32_t arg0, bool arg1) const {
    if (!::org::xml::sax::ext::Attributes2Impl::_class) ::org::xml::sax::ext::Attributes2Impl::_class = java::fetch_class("org/xml/sax/ext/Attributes2Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSpecified", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool org::xml::sax::ext::Attributes2::isDeclared(int32_t arg0) const {
    if (!::org::xml::sax::ext::Attributes2::_class) ::org::xml::sax::ext::Attributes2::_class = java::fetch_class("org/xml/sax/ext/Attributes2");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDeclared", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::xml::sax::ext::Attributes2::isDeclared(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::ext::Attributes2::_class) ::org::xml::sax::ext::Attributes2::_class = java::fetch_class("org/xml/sax/ext/Attributes2");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDeclared", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::xml::sax::ext::Attributes2::isDeclared(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::ext::Attributes2::_class) ::org::xml::sax::ext::Attributes2::_class = java::fetch_class("org/xml/sax/ext/Attributes2");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDeclared", "(Ljava/lang/String;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool org::xml::sax::ext::Attributes2::isSpecified(int32_t arg0) const {
    if (!::org::xml::sax::ext::Attributes2::_class) ::org::xml::sax::ext::Attributes2::_class = java::fetch_class("org/xml/sax/ext/Attributes2");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSpecified", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::xml::sax::ext::Attributes2::isSpecified(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xml::sax::ext::Attributes2::_class) ::org::xml::sax::ext::Attributes2::_class = java::fetch_class("org/xml/sax/ext/Attributes2");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSpecified", "(Ljava/lang/String;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool org::xml::sax::ext::Attributes2::isSpecified(const ::java::lang::String& arg0) const {
    if (!::org::xml::sax::ext::Attributes2::_class) ::org::xml::sax::ext::Attributes2::_class = java::fetch_class("org/xml/sax/ext/Attributes2");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSpecified", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String org::xml::sax::ext::Locator2::getXMLVersion() const {
    if (!::org::xml::sax::ext::Locator2::_class) ::org::xml::sax::ext::Locator2::_class = java::fetch_class("org/xml/sax/ext/Locator2");
    static jmethodID mid = java::jni->GetMethodID(_class, "getXMLVersion", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xml::sax::ext::Locator2::getEncoding() const {
    if (!::org::xml::sax::ext::Locator2::_class) ::org::xml::sax::ext::Locator2::_class = java::fetch_class("org/xml/sax/ext/Locator2");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncoding", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

