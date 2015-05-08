#include "java-core.hpp"
#include <memory>
#include "java.io.File.hpp"
#include "java.lang.ClassLoader.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.net.URL.hpp"
#include "javax.xml.transform.Result.hpp"
#include "javax.xml.transform.Source.hpp"
#include "javax.xml.validation.Schema.hpp"
#include "javax.xml.validation.SchemaFactory.hpp"
#include "javax.xml.validation.SchemaFactoryLoader.hpp"
#include "javax.xml.validation.TypeInfoProvider.hpp"
#include "javax.xml.validation.Validator.hpp"
#include "javax.xml.validation.ValidatorHandler.hpp"
#include "org.w3c.dom.TypeInfo.hpp"
#include "org.w3c.dom.ls.LSResourceResolver.hpp"
#include "org.xml.sax.ContentHandler.hpp"
#include "org.xml.sax.ErrorHandler.hpp"

jclass javax::xml::validation::TypeInfoProvider::_class = nullptr;
jclass javax::xml::validation::Schema::_class = nullptr;
jclass javax::xml::validation::SchemaFactory::_class = nullptr;
jclass javax::xml::validation::SchemaFactoryLoader::_class = nullptr;
jclass javax::xml::validation::Validator::_class = nullptr;
jclass javax::xml::validation::ValidatorHandler::_class = nullptr;

::org::w3c::dom::TypeInfo javax::xml::validation::TypeInfoProvider::getElementTypeInfo() const {
    if (!::javax::xml::validation::TypeInfoProvider::_class) ::javax::xml::validation::TypeInfoProvider::_class = java::fetch_class("javax/xml/validation/TypeInfoProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "getElementTypeInfo", "()Lorg/w3c/dom/TypeInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::TypeInfo _ret(ret);
    return _ret;
}

::org::w3c::dom::TypeInfo javax::xml::validation::TypeInfoProvider::getAttributeTypeInfo(int32_t arg0) const {
    if (!::javax::xml::validation::TypeInfoProvider::_class) ::javax::xml::validation::TypeInfoProvider::_class = java::fetch_class("javax/xml/validation/TypeInfoProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributeTypeInfo", "(I)Lorg/w3c/dom/TypeInfo;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::TypeInfo _ret(ret);
    return _ret;
}

bool javax::xml::validation::TypeInfoProvider::isIdAttribute(int32_t arg0) const {
    if (!::javax::xml::validation::TypeInfoProvider::_class) ::javax::xml::validation::TypeInfoProvider::_class = java::fetch_class("javax/xml/validation/TypeInfoProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "isIdAttribute", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool javax::xml::validation::TypeInfoProvider::isSpecified(int32_t arg0) const {
    if (!::javax::xml::validation::TypeInfoProvider::_class) ::javax::xml::validation::TypeInfoProvider::_class = java::fetch_class("javax/xml/validation/TypeInfoProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSpecified", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::javax::xml::validation::Validator javax::xml::validation::Schema::newValidator() const {
    if (!::javax::xml::validation::Schema::_class) ::javax::xml::validation::Schema::_class = java::fetch_class("javax/xml/validation/Schema");
    static jmethodID mid = java::jni->GetMethodID(_class, "newValidator", "()Ljavax/xml/validation/Validator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::validation::Validator _ret(ret);
    return _ret;
}

::javax::xml::validation::ValidatorHandler javax::xml::validation::Schema::newValidatorHandler() const {
    if (!::javax::xml::validation::Schema::_class) ::javax::xml::validation::Schema::_class = java::fetch_class("javax/xml/validation/Schema");
    static jmethodID mid = java::jni->GetMethodID(_class, "newValidatorHandler", "()Ljavax/xml/validation/ValidatorHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::validation::ValidatorHandler _ret(ret);
    return _ret;
}

::javax::xml::validation::SchemaFactory javax::xml::validation::SchemaFactory::newInstance(const ::java::lang::String& arg0){
    if (!::javax::xml::validation::SchemaFactory::_class) ::javax::xml::validation::SchemaFactory::_class = java::fetch_class("javax/xml/validation/SchemaFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInstance", "(Ljava/lang/String;)Ljavax/xml/validation/SchemaFactory;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::javax::xml::validation::SchemaFactory _ret(ret);
    return _ret;
}

::javax::xml::validation::SchemaFactory javax::xml::validation::SchemaFactory::newInstance(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::ClassLoader& arg2){
    if (!::javax::xml::validation::SchemaFactory::_class) ::javax::xml::validation::SchemaFactory::_class = java::fetch_class("javax/xml/validation/SchemaFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInstance", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/validation/SchemaFactory;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::javax::xml::validation::SchemaFactory _ret(ret);
    return _ret;
}

bool javax::xml::validation::SchemaFactory::isSchemaLanguageSupported(const ::java::lang::String& arg0) const {
    if (!::javax::xml::validation::SchemaFactory::_class) ::javax::xml::validation::SchemaFactory::_class = java::fetch_class("javax/xml/validation/SchemaFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSchemaLanguageSupported", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool javax::xml::validation::SchemaFactory::getFeature(const ::java::lang::String& arg0) const {
    if (!::javax::xml::validation::SchemaFactory::_class) ::javax::xml::validation::SchemaFactory::_class = java::fetch_class("javax/xml/validation/SchemaFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFeature", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void javax::xml::validation::SchemaFactory::setFeature(const ::java::lang::String& arg0, bool arg1) const {
    if (!::javax::xml::validation::SchemaFactory::_class) ::javax::xml::validation::SchemaFactory::_class = java::fetch_class("javax/xml/validation/SchemaFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFeature", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::xml::validation::SchemaFactory::setProperty(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::javax::xml::validation::SchemaFactory::_class) ::javax::xml::validation::SchemaFactory::_class = java::fetch_class("javax/xml/validation/SchemaFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object javax::xml::validation::SchemaFactory::getProperty(const ::java::lang::String& arg0) const {
    if (!::javax::xml::validation::SchemaFactory::_class) ::javax::xml::validation::SchemaFactory::_class = java::fetch_class("javax/xml/validation/SchemaFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProperty", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void javax::xml::validation::SchemaFactory::setErrorHandler(const ::org::xml::sax::ErrorHandler& arg0) const {
    if (!::javax::xml::validation::SchemaFactory::_class) ::javax::xml::validation::SchemaFactory::_class = java::fetch_class("javax/xml/validation/SchemaFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::ErrorHandler javax::xml::validation::SchemaFactory::getErrorHandler() const {
    if (!::javax::xml::validation::SchemaFactory::_class) ::javax::xml::validation::SchemaFactory::_class = java::fetch_class("javax/xml/validation/SchemaFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getErrorHandler", "()Lorg/xml/sax/ErrorHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xml::sax::ErrorHandler _ret(ret);
    return _ret;
}

void javax::xml::validation::SchemaFactory::setResourceResolver(const ::org::w3c::dom::ls::LSResourceResolver& arg0) const {
    if (!::javax::xml::validation::SchemaFactory::_class) ::javax::xml::validation::SchemaFactory::_class = java::fetch_class("javax/xml/validation/SchemaFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setResourceResolver", "(Lorg/w3c/dom/ls/LSResourceResolver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::w3c::dom::ls::LSResourceResolver javax::xml::validation::SchemaFactory::getResourceResolver() const {
    if (!::javax::xml::validation::SchemaFactory::_class) ::javax::xml::validation::SchemaFactory::_class = java::fetch_class("javax/xml/validation/SchemaFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResourceResolver", "()Lorg/w3c/dom/ls/LSResourceResolver;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::ls::LSResourceResolver _ret(ret);
    return _ret;
}

::javax::xml::validation::Schema javax::xml::validation::SchemaFactory::newSchema(const ::javax::xml::transform::Source& arg0) const {
    if (!::javax::xml::validation::SchemaFactory::_class) ::javax::xml::validation::SchemaFactory::_class = java::fetch_class("javax/xml/validation/SchemaFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newSchema", "(Ljavax/xml/transform/Source;)Ljavax/xml/validation/Schema;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::xml::validation::Schema _ret(ret);
    return _ret;
}

::javax::xml::validation::Schema javax::xml::validation::SchemaFactory::newSchema(const ::java::io::File& arg0) const {
    if (!::javax::xml::validation::SchemaFactory::_class) ::javax::xml::validation::SchemaFactory::_class = java::fetch_class("javax/xml/validation/SchemaFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newSchema", "(Ljava/io/File;)Ljavax/xml/validation/Schema;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::xml::validation::Schema _ret(ret);
    return _ret;
}

::javax::xml::validation::Schema javax::xml::validation::SchemaFactory::newSchema(const ::java::net::URL& arg0) const {
    if (!::javax::xml::validation::SchemaFactory::_class) ::javax::xml::validation::SchemaFactory::_class = java::fetch_class("javax/xml/validation/SchemaFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newSchema", "(Ljava/net/URL;)Ljavax/xml/validation/Schema;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::xml::validation::Schema _ret(ret);
    return _ret;
}

::javax::xml::validation::Schema javax::xml::validation::SchemaFactory::newSchema(const std::vector< ::javax::xml::transform::Source>& arg0) const {
    if (!::javax::xml::validation::SchemaFactory::_class) ::javax::xml::validation::SchemaFactory::_class = java::fetch_class("javax/xml/validation/SchemaFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newSchema", "([Ljavax/xml/transform/Source;)Ljavax/xml/validation/Schema;");
    unsigned arg0s = arg0.size();
    if (!::javax::xml::transform::Source::_class) ::javax::xml::transform::Source::_class = java::fetch_class("javax/xml/transform/Source");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::javax::xml::transform::Source::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::javax::xml::transform::Source& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::xml::validation::Schema _ret(ret);
    return _ret;
}

::javax::xml::validation::Schema javax::xml::validation::SchemaFactory::newSchema() const {
    if (!::javax::xml::validation::SchemaFactory::_class) ::javax::xml::validation::SchemaFactory::_class = java::fetch_class("javax/xml/validation/SchemaFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newSchema", "()Ljavax/xml/validation/Schema;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::validation::Schema _ret(ret);
    return _ret;
}

::javax::xml::validation::SchemaFactory javax::xml::validation::SchemaFactoryLoader::newFactory(const ::java::lang::String& arg0) const {
    if (!::javax::xml::validation::SchemaFactoryLoader::_class) ::javax::xml::validation::SchemaFactoryLoader::_class = java::fetch_class("javax/xml/validation/SchemaFactoryLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "newFactory", "(Ljava/lang/String;)Ljavax/xml/validation/SchemaFactory;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::xml::validation::SchemaFactory _ret(ret);
    return _ret;
}

void javax::xml::validation::Validator::reset() const {
    if (!::javax::xml::validation::Validator::_class) ::javax::xml::validation::Validator::_class = java::fetch_class("javax/xml/validation/Validator");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void javax::xml::validation::Validator::validate(const ::javax::xml::transform::Source& arg0) const {
    if (!::javax::xml::validation::Validator::_class) ::javax::xml::validation::Validator::_class = java::fetch_class("javax/xml/validation/Validator");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Ljavax/xml/transform/Source;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::validation::Validator::validate(const ::javax::xml::transform::Source& arg0, const ::javax::xml::transform::Result& arg1) const {
    if (!::javax::xml::validation::Validator::_class) ::javax::xml::validation::Validator::_class = java::fetch_class("javax/xml/validation/Validator");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Ljavax/xml/transform/Source;Ljavax/xml/transform/Result;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::xml::validation::Validator::setErrorHandler(const ::org::xml::sax::ErrorHandler& arg0) const {
    if (!::javax::xml::validation::Validator::_class) ::javax::xml::validation::Validator::_class = java::fetch_class("javax/xml/validation/Validator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::ErrorHandler javax::xml::validation::Validator::getErrorHandler() const {
    if (!::javax::xml::validation::Validator::_class) ::javax::xml::validation::Validator::_class = java::fetch_class("javax/xml/validation/Validator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getErrorHandler", "()Lorg/xml/sax/ErrorHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xml::sax::ErrorHandler _ret(ret);
    return _ret;
}

void javax::xml::validation::Validator::setResourceResolver(const ::org::w3c::dom::ls::LSResourceResolver& arg0) const {
    if (!::javax::xml::validation::Validator::_class) ::javax::xml::validation::Validator::_class = java::fetch_class("javax/xml/validation/Validator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setResourceResolver", "(Lorg/w3c/dom/ls/LSResourceResolver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::w3c::dom::ls::LSResourceResolver javax::xml::validation::Validator::getResourceResolver() const {
    if (!::javax::xml::validation::Validator::_class) ::javax::xml::validation::Validator::_class = java::fetch_class("javax/xml/validation/Validator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResourceResolver", "()Lorg/w3c/dom/ls/LSResourceResolver;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::ls::LSResourceResolver _ret(ret);
    return _ret;
}

bool javax::xml::validation::Validator::getFeature(const ::java::lang::String& arg0) const {
    if (!::javax::xml::validation::Validator::_class) ::javax::xml::validation::Validator::_class = java::fetch_class("javax/xml/validation/Validator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFeature", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void javax::xml::validation::Validator::setFeature(const ::java::lang::String& arg0, bool arg1) const {
    if (!::javax::xml::validation::Validator::_class) ::javax::xml::validation::Validator::_class = java::fetch_class("javax/xml/validation/Validator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFeature", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::xml::validation::Validator::setProperty(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::javax::xml::validation::Validator::_class) ::javax::xml::validation::Validator::_class = java::fetch_class("javax/xml/validation/Validator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object javax::xml::validation::Validator::getProperty(const ::java::lang::String& arg0) const {
    if (!::javax::xml::validation::Validator::_class) ::javax::xml::validation::Validator::_class = java::fetch_class("javax/xml/validation/Validator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProperty", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void javax::xml::validation::ValidatorHandler::setContentHandler(const ::org::xml::sax::ContentHandler& arg0) const {
    if (!::javax::xml::validation::ValidatorHandler::_class) ::javax::xml::validation::ValidatorHandler::_class = java::fetch_class("javax/xml/validation/ValidatorHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentHandler", "(Lorg/xml/sax/ContentHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::ContentHandler javax::xml::validation::ValidatorHandler::getContentHandler() const {
    if (!::javax::xml::validation::ValidatorHandler::_class) ::javax::xml::validation::ValidatorHandler::_class = java::fetch_class("javax/xml/validation/ValidatorHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentHandler", "()Lorg/xml/sax/ContentHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xml::sax::ContentHandler _ret(ret);
    return _ret;
}

void javax::xml::validation::ValidatorHandler::setErrorHandler(const ::org::xml::sax::ErrorHandler& arg0) const {
    if (!::javax::xml::validation::ValidatorHandler::_class) ::javax::xml::validation::ValidatorHandler::_class = java::fetch_class("javax/xml/validation/ValidatorHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::xml::sax::ErrorHandler javax::xml::validation::ValidatorHandler::getErrorHandler() const {
    if (!::javax::xml::validation::ValidatorHandler::_class) ::javax::xml::validation::ValidatorHandler::_class = java::fetch_class("javax/xml/validation/ValidatorHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getErrorHandler", "()Lorg/xml/sax/ErrorHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xml::sax::ErrorHandler _ret(ret);
    return _ret;
}

void javax::xml::validation::ValidatorHandler::setResourceResolver(const ::org::w3c::dom::ls::LSResourceResolver& arg0) const {
    if (!::javax::xml::validation::ValidatorHandler::_class) ::javax::xml::validation::ValidatorHandler::_class = java::fetch_class("javax/xml/validation/ValidatorHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "setResourceResolver", "(Lorg/w3c/dom/ls/LSResourceResolver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::w3c::dom::ls::LSResourceResolver javax::xml::validation::ValidatorHandler::getResourceResolver() const {
    if (!::javax::xml::validation::ValidatorHandler::_class) ::javax::xml::validation::ValidatorHandler::_class = java::fetch_class("javax/xml/validation/ValidatorHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResourceResolver", "()Lorg/w3c/dom/ls/LSResourceResolver;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::ls::LSResourceResolver _ret(ret);
    return _ret;
}

::javax::xml::validation::TypeInfoProvider javax::xml::validation::ValidatorHandler::getTypeInfoProvider() const {
    if (!::javax::xml::validation::ValidatorHandler::_class) ::javax::xml::validation::ValidatorHandler::_class = java::fetch_class("javax/xml/validation/ValidatorHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTypeInfoProvider", "()Ljavax/xml/validation/TypeInfoProvider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::validation::TypeInfoProvider _ret(ret);
    return _ret;
}

bool javax::xml::validation::ValidatorHandler::getFeature(const ::java::lang::String& arg0) const {
    if (!::javax::xml::validation::ValidatorHandler::_class) ::javax::xml::validation::ValidatorHandler::_class = java::fetch_class("javax/xml/validation/ValidatorHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFeature", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void javax::xml::validation::ValidatorHandler::setFeature(const ::java::lang::String& arg0, bool arg1) const {
    if (!::javax::xml::validation::ValidatorHandler::_class) ::javax::xml::validation::ValidatorHandler::_class = java::fetch_class("javax/xml/validation/ValidatorHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFeature", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::xml::validation::ValidatorHandler::setProperty(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::javax::xml::validation::ValidatorHandler::_class) ::javax::xml::validation::ValidatorHandler::_class = java::fetch_class("javax/xml/validation/ValidatorHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object javax::xml::validation::ValidatorHandler::getProperty(const ::java::lang::String& arg0) const {
    if (!::javax::xml::validation::ValidatorHandler::_class) ::javax::xml::validation::ValidatorHandler::_class = java::fetch_class("javax/xml/validation/ValidatorHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProperty", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

