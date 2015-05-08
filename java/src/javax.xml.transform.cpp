#include "java-core.hpp"
#include <memory>
#include "java.io.PrintStream.hpp"
#include "java.io.PrintWriter.hpp"
#include "java.lang.ClassLoader.hpp"
#include "java.lang.Exception.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"
#include "java.util.Properties.hpp"
#include "javax.xml.transform.ErrorListener.hpp"
#include "javax.xml.transform.OutputKeys.hpp"
#include "javax.xml.transform.Result.hpp"
#include "javax.xml.transform.Source.hpp"
#include "javax.xml.transform.SourceLocator.hpp"
#include "javax.xml.transform.Templates.hpp"
#include "javax.xml.transform.Transformer.hpp"
#include "javax.xml.transform.TransformerConfigurationException.hpp"
#include "javax.xml.transform.TransformerException.hpp"
#include "javax.xml.transform.TransformerFactory.hpp"
#include "javax.xml.transform.TransformerFactoryConfigurationError.hpp"
#include "javax.xml.transform.URIResolver.hpp"

jclass javax::xml::transform::Source::_class = nullptr;
jclass javax::xml::transform::TransformerFactory::_class = nullptr;
jclass javax::xml::transform::TransformerConfigurationException::_class = nullptr;
jclass javax::xml::transform::Result::_class = nullptr;
jclass javax::xml::transform::OutputKeys::_class = nullptr;
jclass javax::xml::transform::Transformer::_class = nullptr;
jclass javax::xml::transform::TransformerFactoryConfigurationError::_class = nullptr;
jclass javax::xml::transform::ErrorListener::_class = nullptr;
jclass javax::xml::transform::URIResolver::_class = nullptr;
jclass javax::xml::transform::TransformerException::_class = nullptr;
jclass javax::xml::transform::SourceLocator::_class = nullptr;
jclass javax::xml::transform::Templates::_class = nullptr;

void javax::xml::transform::Source::setSystemId(const ::java::lang::String& arg0) const {
    if (!::javax::xml::transform::Source::_class) ::javax::xml::transform::Source::_class = java::fetch_class("javax/xml/transform/Source");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSystemId", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String javax::xml::transform::Source::getSystemId() const {
    if (!::javax::xml::transform::Source::_class) ::javax::xml::transform::Source::_class = java::fetch_class("javax/xml/transform/Source");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::javax::xml::transform::TransformerFactory javax::xml::transform::TransformerFactory::newInstance(){
    if (!::javax::xml::transform::TransformerFactory::_class) ::javax::xml::transform::TransformerFactory::_class = java::fetch_class("javax/xml/transform/TransformerFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInstance", "()Ljavax/xml/transform/TransformerFactory;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::javax::xml::transform::TransformerFactory _ret(ret);
    return _ret;
}

::javax::xml::transform::TransformerFactory javax::xml::transform::TransformerFactory::newInstance(const ::java::lang::String& arg0, const ::java::lang::ClassLoader& arg1){
    if (!::javax::xml::transform::TransformerFactory::_class) ::javax::xml::transform::TransformerFactory::_class = java::fetch_class("javax/xml/transform/TransformerFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInstance", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/transform/TransformerFactory;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::javax::xml::transform::TransformerFactory _ret(ret);
    return _ret;
}

::javax::xml::transform::Transformer javax::xml::transform::TransformerFactory::newTransformer(const ::javax::xml::transform::Source& arg0) const {
    if (!::javax::xml::transform::TransformerFactory::_class) ::javax::xml::transform::TransformerFactory::_class = java::fetch_class("javax/xml/transform/TransformerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newTransformer", "(Ljavax/xml/transform/Source;)Ljavax/xml/transform/Transformer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::xml::transform::Transformer _ret(ret);
    return _ret;
}

::javax::xml::transform::Transformer javax::xml::transform::TransformerFactory::newTransformer() const {
    if (!::javax::xml::transform::TransformerFactory::_class) ::javax::xml::transform::TransformerFactory::_class = java::fetch_class("javax/xml/transform/TransformerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newTransformer", "()Ljavax/xml/transform/Transformer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::transform::Transformer _ret(ret);
    return _ret;
}

::javax::xml::transform::Templates javax::xml::transform::TransformerFactory::newTemplates(const ::javax::xml::transform::Source& arg0) const {
    if (!::javax::xml::transform::TransformerFactory::_class) ::javax::xml::transform::TransformerFactory::_class = java::fetch_class("javax/xml/transform/TransformerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newTemplates", "(Ljavax/xml/transform/Source;)Ljavax/xml/transform/Templates;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::xml::transform::Templates _ret(ret);
    return _ret;
}

::javax::xml::transform::Source javax::xml::transform::TransformerFactory::getAssociatedStylesheet(const ::javax::xml::transform::Source& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3) const {
    if (!::javax::xml::transform::TransformerFactory::_class) ::javax::xml::transform::TransformerFactory::_class = java::fetch_class("javax/xml/transform/TransformerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAssociatedStylesheet", "(Ljavax/xml/transform/Source;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/transform/Source;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::javax::xml::transform::Source _ret(ret);
    return _ret;
}

void javax::xml::transform::TransformerFactory::setURIResolver(const ::javax::xml::transform::URIResolver& arg0) const {
    if (!::javax::xml::transform::TransformerFactory::_class) ::javax::xml::transform::TransformerFactory::_class = java::fetch_class("javax/xml/transform/TransformerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setURIResolver", "(Ljavax/xml/transform/URIResolver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::javax::xml::transform::URIResolver javax::xml::transform::TransformerFactory::getURIResolver() const {
    if (!::javax::xml::transform::TransformerFactory::_class) ::javax::xml::transform::TransformerFactory::_class = java::fetch_class("javax/xml/transform/TransformerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getURIResolver", "()Ljavax/xml/transform/URIResolver;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::transform::URIResolver _ret(ret);
    return _ret;
}

void javax::xml::transform::TransformerFactory::setFeature(const ::java::lang::String& arg0, bool arg1) const {
    if (!::javax::xml::transform::TransformerFactory::_class) ::javax::xml::transform::TransformerFactory::_class = java::fetch_class("javax/xml/transform/TransformerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFeature", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool javax::xml::transform::TransformerFactory::getFeature(const ::java::lang::String& arg0) const {
    if (!::javax::xml::transform::TransformerFactory::_class) ::javax::xml::transform::TransformerFactory::_class = java::fetch_class("javax/xml/transform/TransformerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFeature", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void javax::xml::transform::TransformerFactory::setAttribute(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::javax::xml::transform::TransformerFactory::_class) ::javax::xml::transform::TransformerFactory::_class = java::fetch_class("javax/xml/transform/TransformerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAttribute", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object javax::xml::transform::TransformerFactory::getAttribute(const ::java::lang::String& arg0) const {
    if (!::javax::xml::transform::TransformerFactory::_class) ::javax::xml::transform::TransformerFactory::_class = java::fetch_class("javax/xml/transform/TransformerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void javax::xml::transform::TransformerFactory::setErrorListener(const ::javax::xml::transform::ErrorListener& arg0) const {
    if (!::javax::xml::transform::TransformerFactory::_class) ::javax::xml::transform::TransformerFactory::_class = java::fetch_class("javax/xml/transform/TransformerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setErrorListener", "(Ljavax/xml/transform/ErrorListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::javax::xml::transform::ErrorListener javax::xml::transform::TransformerFactory::getErrorListener() const {
    if (!::javax::xml::transform::TransformerFactory::_class) ::javax::xml::transform::TransformerFactory::_class = java::fetch_class("javax/xml/transform/TransformerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getErrorListener", "()Ljavax/xml/transform/ErrorListener;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::transform::ErrorListener _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::TransformerConfigurationException::TransformerConfigurationException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::xml::transform::TransformerException((jobject)0) {
    if (!::javax::xml::transform::TransformerConfigurationException::_class) ::javax::xml::transform::TransformerConfigurationException::_class = java::fetch_class("javax/xml/transform/TransformerConfigurationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::TransformerConfigurationException::TransformerConfigurationException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::xml::transform::TransformerException((jobject)0) {
    if (!::javax::xml::transform::TransformerConfigurationException::_class) ::javax::xml::transform::TransformerConfigurationException::_class = java::fetch_class("javax/xml/transform/TransformerConfigurationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::TransformerConfigurationException::TransformerConfigurationException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::xml::transform::TransformerException((jobject)0) {
    if (!::javax::xml::transform::TransformerConfigurationException::_class) ::javax::xml::transform::TransformerConfigurationException::_class = java::fetch_class("javax/xml/transform/TransformerConfigurationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::TransformerConfigurationException::TransformerConfigurationException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::xml::transform::TransformerException((jobject)0) {
    if (!::javax::xml::transform::TransformerConfigurationException::_class) ::javax::xml::transform::TransformerConfigurationException::_class = java::fetch_class("javax/xml/transform/TransformerConfigurationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::TransformerConfigurationException::TransformerConfigurationException(const ::java::lang::String& arg0, const ::javax::xml::transform::SourceLocator& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::xml::transform::TransformerException((jobject)0) {
    if (!::javax::xml::transform::TransformerConfigurationException::_class) ::javax::xml::transform::TransformerConfigurationException::_class = java::fetch_class("javax/xml/transform/TransformerConfigurationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::TransformerConfigurationException::TransformerConfigurationException(const ::java::lang::String& arg0, const ::javax::xml::transform::SourceLocator& arg1, const ::java::lang::Throwable& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::xml::transform::TransformerException((jobject)0) {
    if (!::javax::xml::transform::TransformerConfigurationException::_class) ::javax::xml::transform::TransformerConfigurationException::_class = java::fetch_class("javax/xml/transform/TransformerConfigurationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void javax::xml::transform::Result::setSystemId(const ::java::lang::String& arg0) const {
    if (!::javax::xml::transform::Result::_class) ::javax::xml::transform::Result::_class = java::fetch_class("javax/xml/transform/Result");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSystemId", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String javax::xml::transform::Result::getSystemId() const {
    if (!::javax::xml::transform::Result::_class) ::javax::xml::transform::Result::_class = java::fetch_class("javax/xml/transform/Result");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void javax::xml::transform::Transformer::reset() const {
    if (!::javax::xml::transform::Transformer::_class) ::javax::xml::transform::Transformer::_class = java::fetch_class("javax/xml/transform/Transformer");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void javax::xml::transform::Transformer::transform(const ::javax::xml::transform::Source& arg0, const ::javax::xml::transform::Result& arg1) const {
    if (!::javax::xml::transform::Transformer::_class) ::javax::xml::transform::Transformer::_class = java::fetch_class("javax/xml/transform/Transformer");
    static jmethodID mid = java::jni->GetMethodID(_class, "transform", "(Ljavax/xml/transform/Source;Ljavax/xml/transform/Result;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::xml::transform::Transformer::setParameter(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::javax::xml::transform::Transformer::_class) ::javax::xml::transform::Transformer::_class = java::fetch_class("javax/xml/transform/Transformer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParameter", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object javax::xml::transform::Transformer::getParameter(const ::java::lang::String& arg0) const {
    if (!::javax::xml::transform::Transformer::_class) ::javax::xml::transform::Transformer::_class = java::fetch_class("javax/xml/transform/Transformer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameter", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void javax::xml::transform::Transformer::clearParameters() const {
    if (!::javax::xml::transform::Transformer::_class) ::javax::xml::transform::Transformer::_class = java::fetch_class("javax/xml/transform/Transformer");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearParameters", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void javax::xml::transform::Transformer::setURIResolver(const ::javax::xml::transform::URIResolver& arg0) const {
    if (!::javax::xml::transform::Transformer::_class) ::javax::xml::transform::Transformer::_class = java::fetch_class("javax/xml/transform/Transformer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setURIResolver", "(Ljavax/xml/transform/URIResolver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::javax::xml::transform::URIResolver javax::xml::transform::Transformer::getURIResolver() const {
    if (!::javax::xml::transform::Transformer::_class) ::javax::xml::transform::Transformer::_class = java::fetch_class("javax/xml/transform/Transformer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getURIResolver", "()Ljavax/xml/transform/URIResolver;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::transform::URIResolver _ret(ret);
    return _ret;
}

void javax::xml::transform::Transformer::setOutputProperties(const ::java::util::Properties& arg0) const {
    if (!::javax::xml::transform::Transformer::_class) ::javax::xml::transform::Transformer::_class = java::fetch_class("javax/xml/transform/Transformer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOutputProperties", "(Ljava/util/Properties;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::Properties javax::xml::transform::Transformer::getOutputProperties() const {
    if (!::javax::xml::transform::Transformer::_class) ::javax::xml::transform::Transformer::_class = java::fetch_class("javax/xml/transform/Transformer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOutputProperties", "()Ljava/util/Properties;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Properties _ret(ret);
    return _ret;
}

void javax::xml::transform::Transformer::setOutputProperty(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::javax::xml::transform::Transformer::_class) ::javax::xml::transform::Transformer::_class = java::fetch_class("javax/xml/transform/Transformer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOutputProperty", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String javax::xml::transform::Transformer::getOutputProperty(const ::java::lang::String& arg0) const {
    if (!::javax::xml::transform::Transformer::_class) ::javax::xml::transform::Transformer::_class = java::fetch_class("javax/xml/transform/Transformer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOutputProperty", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void javax::xml::transform::Transformer::setErrorListener(const ::javax::xml::transform::ErrorListener& arg0) const {
    if (!::javax::xml::transform::Transformer::_class) ::javax::xml::transform::Transformer::_class = java::fetch_class("javax/xml/transform/Transformer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setErrorListener", "(Ljavax/xml/transform/ErrorListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::javax::xml::transform::ErrorListener javax::xml::transform::Transformer::getErrorListener() const {
    if (!::javax::xml::transform::Transformer::_class) ::javax::xml::transform::Transformer::_class = java::fetch_class("javax/xml/transform/Transformer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getErrorListener", "()Ljavax/xml/transform/ErrorListener;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::transform::ErrorListener _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::TransformerFactoryConfigurationError::TransformerFactoryConfigurationError() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::xml::transform::TransformerFactoryConfigurationError::_class) ::javax::xml::transform::TransformerFactoryConfigurationError::_class = java::fetch_class("javax/xml/transform/TransformerFactoryConfigurationError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::TransformerFactoryConfigurationError::TransformerFactoryConfigurationError(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::xml::transform::TransformerFactoryConfigurationError::_class) ::javax::xml::transform::TransformerFactoryConfigurationError::_class = java::fetch_class("javax/xml/transform/TransformerFactoryConfigurationError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::TransformerFactoryConfigurationError::TransformerFactoryConfigurationError(const ::java::lang::Exception& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::xml::transform::TransformerFactoryConfigurationError::_class) ::javax::xml::transform::TransformerFactoryConfigurationError::_class = java::fetch_class("javax/xml/transform/TransformerFactoryConfigurationError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Exception;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::TransformerFactoryConfigurationError::TransformerFactoryConfigurationError(const ::java::lang::Exception& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::xml::transform::TransformerFactoryConfigurationError::_class) ::javax::xml::transform::TransformerFactoryConfigurationError::_class = java::fetch_class("javax/xml/transform/TransformerFactoryConfigurationError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String javax::xml::transform::TransformerFactoryConfigurationError::getMessage() const {
    if (!::javax::xml::transform::TransformerFactoryConfigurationError::_class) ::javax::xml::transform::TransformerFactoryConfigurationError::_class = java::fetch_class("javax/xml/transform/TransformerFactoryConfigurationError");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Exception javax::xml::transform::TransformerFactoryConfigurationError::getException() const {
    if (!::javax::xml::transform::TransformerFactoryConfigurationError::_class) ::javax::xml::transform::TransformerFactoryConfigurationError::_class = java::fetch_class("javax/xml/transform/TransformerFactoryConfigurationError");
    static jmethodID mid = java::jni->GetMethodID(_class, "getException", "()Ljava/lang/Exception;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Exception _ret(ret);
    return _ret;
}

void javax::xml::transform::ErrorListener::warning(const ::javax::xml::transform::TransformerException& arg0) const {
    if (!::javax::xml::transform::ErrorListener::_class) ::javax::xml::transform::ErrorListener::_class = java::fetch_class("javax/xml/transform/ErrorListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "warning", "(Ljavax/xml/transform/TransformerException;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::transform::ErrorListener::error(const ::javax::xml::transform::TransformerException& arg0) const {
    if (!::javax::xml::transform::ErrorListener::_class) ::javax::xml::transform::ErrorListener::_class = java::fetch_class("javax/xml/transform/ErrorListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "error", "(Ljavax/xml/transform/TransformerException;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::transform::ErrorListener::fatalError(const ::javax::xml::transform::TransformerException& arg0) const {
    if (!::javax::xml::transform::ErrorListener::_class) ::javax::xml::transform::ErrorListener::_class = java::fetch_class("javax/xml/transform/ErrorListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "fatalError", "(Ljavax/xml/transform/TransformerException;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::javax::xml::transform::Source javax::xml::transform::URIResolver::resolve(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::javax::xml::transform::URIResolver::_class) ::javax::xml::transform::URIResolver::_class = java::fetch_class("javax/xml/transform/URIResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolve", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/transform/Source;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::javax::xml::transform::Source _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::TransformerException::TransformerException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::xml::transform::TransformerException::_class) ::javax::xml::transform::TransformerException::_class = java::fetch_class("javax/xml/transform/TransformerException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::TransformerException::TransformerException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::xml::transform::TransformerException::_class) ::javax::xml::transform::TransformerException::_class = java::fetch_class("javax/xml/transform/TransformerException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::TransformerException::TransformerException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::xml::transform::TransformerException::_class) ::javax::xml::transform::TransformerException::_class = java::fetch_class("javax/xml/transform/TransformerException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::TransformerException::TransformerException(const ::java::lang::String& arg0, const ::javax::xml::transform::SourceLocator& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::xml::transform::TransformerException::_class) ::javax::xml::transform::TransformerException::_class = java::fetch_class("javax/xml/transform/TransformerException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::TransformerException::TransformerException(const ::java::lang::String& arg0, const ::javax::xml::transform::SourceLocator& arg1, const ::java::lang::Throwable& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::xml::transform::TransformerException::_class) ::javax::xml::transform::TransformerException::_class = java::fetch_class("javax/xml/transform/TransformerException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::javax::xml::transform::SourceLocator javax::xml::transform::TransformerException::getLocator() const {
    if (!::javax::xml::transform::TransformerException::_class) ::javax::xml::transform::TransformerException::_class = java::fetch_class("javax/xml/transform/TransformerException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocator", "()Ljavax/xml/transform/SourceLocator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::transform::SourceLocator _ret(ret);
    return _ret;
}

void javax::xml::transform::TransformerException::setLocator(const ::javax::xml::transform::SourceLocator& arg0) const {
    if (!::javax::xml::transform::TransformerException::_class) ::javax::xml::transform::TransformerException::_class = java::fetch_class("javax/xml/transform/TransformerException");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLocator", "(Ljavax/xml/transform/SourceLocator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Throwable javax::xml::transform::TransformerException::getException() const {
    if (!::javax::xml::transform::TransformerException::_class) ::javax::xml::transform::TransformerException::_class = java::fetch_class("javax/xml/transform/TransformerException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getException", "()Ljava/lang/Throwable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Throwable _ret(ret);
    return _ret;
}

::java::lang::Throwable javax::xml::transform::TransformerException::getCause() const {
    if (!::javax::xml::transform::TransformerException::_class) ::javax::xml::transform::TransformerException::_class = java::fetch_class("javax/xml/transform/TransformerException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCause", "()Ljava/lang/Throwable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Throwable _ret(ret);
    return _ret;
}

::java::lang::Throwable javax::xml::transform::TransformerException::initCause(const ::java::lang::Throwable& arg0) const {
    if (!::javax::xml::transform::TransformerException::_class) ::javax::xml::transform::TransformerException::_class = java::fetch_class("javax/xml/transform/TransformerException");
    static jmethodID mid = java::jni->GetMethodID(_class, "initCause", "(Ljava/lang/Throwable;)Ljava/lang/Throwable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Throwable _ret(ret);
    return _ret;
}

::java::lang::String javax::xml::transform::TransformerException::getMessageAndLocation() const {
    if (!::javax::xml::transform::TransformerException::_class) ::javax::xml::transform::TransformerException::_class = java::fetch_class("javax/xml/transform/TransformerException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessageAndLocation", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String javax::xml::transform::TransformerException::getLocationAsString() const {
    if (!::javax::xml::transform::TransformerException::_class) ::javax::xml::transform::TransformerException::_class = java::fetch_class("javax/xml/transform/TransformerException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocationAsString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void javax::xml::transform::TransformerException::printStackTrace() const {
    if (!::javax::xml::transform::TransformerException::_class) ::javax::xml::transform::TransformerException::_class = java::fetch_class("javax/xml/transform/TransformerException");
    static jmethodID mid = java::jni->GetMethodID(_class, "printStackTrace", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void javax::xml::transform::TransformerException::printStackTrace(const ::java::io::PrintStream& arg0) const {
    if (!::javax::xml::transform::TransformerException::_class) ::javax::xml::transform::TransformerException::_class = java::fetch_class("javax/xml/transform/TransformerException");
    static jmethodID mid = java::jni->GetMethodID(_class, "printStackTrace", "(Ljava/io/PrintStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::transform::TransformerException::printStackTrace(const ::java::io::PrintWriter& arg0) const {
    if (!::javax::xml::transform::TransformerException::_class) ::javax::xml::transform::TransformerException::_class = java::fetch_class("javax/xml/transform/TransformerException");
    static jmethodID mid = java::jni->GetMethodID(_class, "printStackTrace", "(Ljava/io/PrintWriter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String javax::xml::transform::SourceLocator::getPublicId() const {
    if (!::javax::xml::transform::SourceLocator::_class) ::javax::xml::transform::SourceLocator::_class = java::fetch_class("javax/xml/transform/SourceLocator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPublicId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String javax::xml::transform::SourceLocator::getSystemId() const {
    if (!::javax::xml::transform::SourceLocator::_class) ::javax::xml::transform::SourceLocator::_class = java::fetch_class("javax/xml/transform/SourceLocator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t javax::xml::transform::SourceLocator::getLineNumber() const {
    if (!::javax::xml::transform::SourceLocator::_class) ::javax::xml::transform::SourceLocator::_class = java::fetch_class("javax/xml/transform/SourceLocator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineNumber", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t javax::xml::transform::SourceLocator::getColumnNumber() const {
    if (!::javax::xml::transform::SourceLocator::_class) ::javax::xml::transform::SourceLocator::_class = java::fetch_class("javax/xml/transform/SourceLocator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnNumber", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::javax::xml::transform::Transformer javax::xml::transform::Templates::newTransformer() const {
    if (!::javax::xml::transform::Templates::_class) ::javax::xml::transform::Templates::_class = java::fetch_class("javax/xml/transform/Templates");
    static jmethodID mid = java::jni->GetMethodID(_class, "newTransformer", "()Ljavax/xml/transform/Transformer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::transform::Transformer _ret(ret);
    return _ret;
}

::java::util::Properties javax::xml::transform::Templates::getOutputProperties() const {
    if (!::javax::xml::transform::Templates::_class) ::javax::xml::transform::Templates::_class = java::fetch_class("javax/xml/transform/Templates");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOutputProperties", "()Ljava/util/Properties;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Properties _ret(ret);
    return _ret;
}

