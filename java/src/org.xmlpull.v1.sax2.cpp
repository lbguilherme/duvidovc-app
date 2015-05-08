#include "java-core.hpp"
#include <memory>
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "org.xml.sax.ContentHandler.hpp"
#include "org.xml.sax.DTDHandler.hpp"
#include "org.xml.sax.EntityResolver.hpp"
#include "org.xml.sax.ErrorHandler.hpp"
#include "org.xml.sax.InputSource.hpp"
#include "org.xmlpull.v1.XmlPullParser.hpp"
#include "org.xmlpull.v1.sax2.Driver.hpp"

jclass org::xmlpull::v1::sax2::Driver::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xmlpull::v1::sax2::Driver::Driver() : ::java::lang::Object((jobject)0), ::org::xml::sax::Attributes((jobject)0), ::org::xml::sax::Locator((jobject)0), ::org::xml::sax::XMLReader((jobject)0) {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xmlpull::v1::sax2::Driver::Driver(const ::org::xmlpull::v1::XmlPullParser& arg0) : ::java::lang::Object((jobject)0), ::org::xml::sax::Attributes((jobject)0), ::org::xml::sax::Locator((jobject)0), ::org::xml::sax::XMLReader((jobject)0) {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/xmlpull/v1/XmlPullParser;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t org::xmlpull::v1::sax2::Driver::getLength() const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String org::xmlpull::v1::sax2::Driver::getURI(int32_t arg0) const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getURI", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xmlpull::v1::sax2::Driver::getLocalName(int32_t arg0) const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xmlpull::v1::sax2::Driver::getQName(int32_t arg0) const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xmlpull::v1::sax2::Driver::getType(int32_t arg0) const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xmlpull::v1::sax2::Driver::getValue(int32_t arg0) const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t org::xmlpull::v1::sax2::Driver::getIndex(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIndex", "(Ljava/lang/String;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t org::xmlpull::v1::sax2::Driver::getIndex(const ::java::lang::String& arg0) const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIndex", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String org::xmlpull::v1::sax2::Driver::getType(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xmlpull::v1::sax2::Driver::getType(const ::java::lang::String& arg0) const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xmlpull::v1::sax2::Driver::getValue(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xmlpull::v1::sax2::Driver::getValue(const ::java::lang::String& arg0) const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xmlpull::v1::sax2::Driver::getPublicId() const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPublicId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xmlpull::v1::sax2::Driver::getSystemId() const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t org::xmlpull::v1::sax2::Driver::getLineNumber() const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineNumber", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t org::xmlpull::v1::sax2::Driver::getColumnNumber() const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnNumber", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool org::xmlpull::v1::sax2::Driver::getFeature(const ::java::lang::String& arg0) const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFeature", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void org::xmlpull::v1::sax2::Driver::setFeature(const ::java::lang::String& arg0, bool arg1) const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFeature", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object org::xmlpull::v1::sax2::Driver::getProperty(const ::java::lang::String& arg0) const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProperty", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void org::xmlpull::v1::sax2::Driver::setProperty(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::xmlpull::v1::sax2::Driver::setEntityResolver(const ::org::xml::sax::EntityResolver& arg0) const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEntityResolver", "(Lorg/xml/sax/EntityResolver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::EntityResolver org::xmlpull::v1::sax2::Driver::getEntityResolver() const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEntityResolver", "()Lorg/xml/sax/EntityResolver;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xml::sax::EntityResolver _ret(ret);
    return _ret;
}

void org::xmlpull::v1::sax2::Driver::setDTDHandler(const ::org::xml::sax::DTDHandler& arg0) const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDTDHandler", "(Lorg/xml/sax/DTDHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::DTDHandler org::xmlpull::v1::sax2::Driver::getDTDHandler() const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDTDHandler", "()Lorg/xml/sax/DTDHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xml::sax::DTDHandler _ret(ret);
    return _ret;
}

void org::xmlpull::v1::sax2::Driver::setContentHandler(const ::org::xml::sax::ContentHandler& arg0) const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentHandler", "(Lorg/xml/sax/ContentHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::ContentHandler org::xmlpull::v1::sax2::Driver::getContentHandler() const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentHandler", "()Lorg/xml/sax/ContentHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xml::sax::ContentHandler _ret(ret);
    return _ret;
}

void org::xmlpull::v1::sax2::Driver::setErrorHandler(const ::org::xml::sax::ErrorHandler& arg0) const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::ErrorHandler org::xmlpull::v1::sax2::Driver::getErrorHandler() const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getErrorHandler", "()Lorg/xml/sax/ErrorHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xml::sax::ErrorHandler _ret(ret);
    return _ret;
}

void org::xmlpull::v1::sax2::Driver::parse(const ::org::xml::sax::InputSource& arg0) const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/xml/sax/InputSource;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xmlpull::v1::sax2::Driver::parse(const ::java::lang::String& arg0) const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xmlpull::v1::sax2::Driver::parseSubTree(const ::org::xmlpull::v1::XmlPullParser& arg0) const {
    if (!::org::xmlpull::v1::sax2::Driver::_class) ::org::xmlpull::v1::sax2::Driver::_class = java::fetch_class("org/xmlpull/v1/sax2/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseSubTree", "(Lorg/xmlpull/v1/XmlPullParser;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

