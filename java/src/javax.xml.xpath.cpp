#include "java-core.hpp"
#include <memory>
#include "java.io.PrintStream.hpp"
#include "java.io.PrintWriter.hpp"
#include "java.lang.ClassLoader.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"
#include "java.util.List.hpp"
#include "javax.xml.namespace.NamespaceContext.hpp"
#include "javax.xml.namespace.QName.hpp"
#include "javax.xml.xpath.XPath.hpp"
#include "javax.xml.xpath.XPathConstants.hpp"
#include "javax.xml.xpath.XPathException.hpp"
#include "javax.xml.xpath.XPathExpression.hpp"
#include "javax.xml.xpath.XPathExpressionException.hpp"
#include "javax.xml.xpath.XPathFactory.hpp"
#include "javax.xml.xpath.XPathFactoryConfigurationException.hpp"
#include "javax.xml.xpath.XPathFunction.hpp"
#include "javax.xml.xpath.XPathFunctionException.hpp"
#include "javax.xml.xpath.XPathFunctionResolver.hpp"
#include "javax.xml.xpath.XPathVariableResolver.hpp"
#include "org.xml.sax.InputSource.hpp"

jclass javax::xml::xpath::XPathVariableResolver::_class = nullptr;
jclass javax::xml::xpath::XPathExpression::_class = nullptr;
jclass javax::xml::xpath::XPathExpressionException::_class = nullptr;
jclass javax::xml::xpath::XPathFunction::_class = nullptr;
jclass javax::xml::xpath::XPathFunctionException::_class = nullptr;
jclass javax::xml::xpath::XPathException::_class = nullptr;
jclass javax::xml::xpath::XPath::_class = nullptr;
jclass javax::xml::xpath::XPathFunctionResolver::_class = nullptr;
jclass javax::xml::xpath::XPathFactory::_class = nullptr;
jclass javax::xml::xpath::XPathFactoryConfigurationException::_class = nullptr;
jclass javax::xml::xpath::XPathConstants::_class = nullptr;

::java::lang::Object javax::xml::xpath::XPathVariableResolver::resolveVariable(const ::javax::xml::namespace_::QName& arg0) const {
    if (!::javax::xml::xpath::XPathVariableResolver::_class) ::javax::xml::xpath::XPathVariableResolver::_class = java::fetch_class("javax/xml/xpath/XPathVariableResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveVariable", "(Ljavax/xml/namespace/QName;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object javax::xml::xpath::XPathExpression::evaluate(const ::java::lang::Object& arg0, const ::javax::xml::namespace_::QName& arg1) const {
    if (!::javax::xml::xpath::XPathExpression::_class) ::javax::xml::xpath::XPathExpression::_class = java::fetch_class("javax/xml/xpath/XPathExpression");
    static jmethodID mid = java::jni->GetMethodID(_class, "evaluate", "(Ljava/lang/Object;Ljavax/xml/namespace/QName;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::String javax::xml::xpath::XPathExpression::evaluate(const ::java::lang::Object& arg0) const {
    if (!::javax::xml::xpath::XPathExpression::_class) ::javax::xml::xpath::XPathExpression::_class = java::fetch_class("javax/xml/xpath/XPathExpression");
    static jmethodID mid = java::jni->GetMethodID(_class, "evaluate", "(Ljava/lang/Object;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object javax::xml::xpath::XPathExpression::evaluate(const ::org::xml::sax::InputSource& arg0, const ::javax::xml::namespace_::QName& arg1) const {
    if (!::javax::xml::xpath::XPathExpression::_class) ::javax::xml::xpath::XPathExpression::_class = java::fetch_class("javax/xml/xpath/XPathExpression");
    static jmethodID mid = java::jni->GetMethodID(_class, "evaluate", "(Lorg/xml/sax/InputSource;Ljavax/xml/namespace/QName;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::String javax::xml::xpath::XPathExpression::evaluate(const ::org::xml::sax::InputSource& arg0) const {
    if (!::javax::xml::xpath::XPathExpression::_class) ::javax::xml::xpath::XPathExpression::_class = java::fetch_class("javax/xml/xpath/XPathExpression");
    static jmethodID mid = java::jni->GetMethodID(_class, "evaluate", "(Lorg/xml/sax/InputSource;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::xpath::XPathExpressionException::XPathExpressionException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::xml::xpath::XPathException((jobject)0) {
    if (!::javax::xml::xpath::XPathExpressionException::_class) ::javax::xml::xpath::XPathExpressionException::_class = java::fetch_class("javax/xml/xpath/XPathExpressionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::xpath::XPathExpressionException::XPathExpressionException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::xml::xpath::XPathException((jobject)0) {
    if (!::javax::xml::xpath::XPathExpressionException::_class) ::javax::xml::xpath::XPathExpressionException::_class = java::fetch_class("javax/xml/xpath/XPathExpressionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Object javax::xml::xpath::XPathFunction::evaluate(const ::java::util::List& arg0) const {
    if (!::javax::xml::xpath::XPathFunction::_class) ::javax::xml::xpath::XPathFunction::_class = java::fetch_class("javax/xml/xpath/XPathFunction");
    static jmethodID mid = java::jni->GetMethodID(_class, "evaluate", "(Ljava/util/List;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::xpath::XPathFunctionException::XPathFunctionException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::xml::xpath::XPathException((jobject)0), ::javax::xml::xpath::XPathExpressionException((jobject)0) {
    if (!::javax::xml::xpath::XPathFunctionException::_class) ::javax::xml::xpath::XPathFunctionException::_class = java::fetch_class("javax/xml/xpath/XPathFunctionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::xpath::XPathFunctionException::XPathFunctionException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::xml::xpath::XPathException((jobject)0), ::javax::xml::xpath::XPathExpressionException((jobject)0) {
    if (!::javax::xml::xpath::XPathFunctionException::_class) ::javax::xml::xpath::XPathFunctionException::_class = java::fetch_class("javax/xml/xpath/XPathFunctionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::xpath::XPathException::XPathException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::xml::xpath::XPathException::_class) ::javax::xml::xpath::XPathException::_class = java::fetch_class("javax/xml/xpath/XPathException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::xpath::XPathException::XPathException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::xml::xpath::XPathException::_class) ::javax::xml::xpath::XPathException::_class = java::fetch_class("javax/xml/xpath/XPathException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Throwable javax::xml::xpath::XPathException::getCause() const {
    if (!::javax::xml::xpath::XPathException::_class) ::javax::xml::xpath::XPathException::_class = java::fetch_class("javax/xml/xpath/XPathException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCause", "()Ljava/lang/Throwable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Throwable _ret(ret);
    return _ret;
}

void javax::xml::xpath::XPathException::printStackTrace(const ::java::io::PrintStream& arg0) const {
    if (!::javax::xml::xpath::XPathException::_class) ::javax::xml::xpath::XPathException::_class = java::fetch_class("javax/xml/xpath/XPathException");
    static jmethodID mid = java::jni->GetMethodID(_class, "printStackTrace", "(Ljava/io/PrintStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::xpath::XPathException::printStackTrace() const {
    if (!::javax::xml::xpath::XPathException::_class) ::javax::xml::xpath::XPathException::_class = java::fetch_class("javax/xml/xpath/XPathException");
    static jmethodID mid = java::jni->GetMethodID(_class, "printStackTrace", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void javax::xml::xpath::XPathException::printStackTrace(const ::java::io::PrintWriter& arg0) const {
    if (!::javax::xml::xpath::XPathException::_class) ::javax::xml::xpath::XPathException::_class = java::fetch_class("javax/xml/xpath/XPathException");
    static jmethodID mid = java::jni->GetMethodID(_class, "printStackTrace", "(Ljava/io/PrintWriter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::xpath::XPath::reset() const {
    if (!::javax::xml::xpath::XPath::_class) ::javax::xml::xpath::XPath::_class = java::fetch_class("javax/xml/xpath/XPath");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void javax::xml::xpath::XPath::setXPathVariableResolver(const ::javax::xml::xpath::XPathVariableResolver& arg0) const {
    if (!::javax::xml::xpath::XPath::_class) ::javax::xml::xpath::XPath::_class = java::fetch_class("javax/xml/xpath/XPath");
    static jmethodID mid = java::jni->GetMethodID(_class, "setXPathVariableResolver", "(Ljavax/xml/xpath/XPathVariableResolver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::javax::xml::xpath::XPathVariableResolver javax::xml::xpath::XPath::getXPathVariableResolver() const {
    if (!::javax::xml::xpath::XPath::_class) ::javax::xml::xpath::XPath::_class = java::fetch_class("javax/xml/xpath/XPath");
    static jmethodID mid = java::jni->GetMethodID(_class, "getXPathVariableResolver", "()Ljavax/xml/xpath/XPathVariableResolver;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::xpath::XPathVariableResolver _ret(ret);
    return _ret;
}

void javax::xml::xpath::XPath::setXPathFunctionResolver(const ::javax::xml::xpath::XPathFunctionResolver& arg0) const {
    if (!::javax::xml::xpath::XPath::_class) ::javax::xml::xpath::XPath::_class = java::fetch_class("javax/xml/xpath/XPath");
    static jmethodID mid = java::jni->GetMethodID(_class, "setXPathFunctionResolver", "(Ljavax/xml/xpath/XPathFunctionResolver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::javax::xml::xpath::XPathFunctionResolver javax::xml::xpath::XPath::getXPathFunctionResolver() const {
    if (!::javax::xml::xpath::XPath::_class) ::javax::xml::xpath::XPath::_class = java::fetch_class("javax/xml/xpath/XPath");
    static jmethodID mid = java::jni->GetMethodID(_class, "getXPathFunctionResolver", "()Ljavax/xml/xpath/XPathFunctionResolver;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::xpath::XPathFunctionResolver _ret(ret);
    return _ret;
}

void javax::xml::xpath::XPath::setNamespaceContext(const ::javax::xml::namespace_::NamespaceContext& arg0) const {
    if (!::javax::xml::xpath::XPath::_class) ::javax::xml::xpath::XPath::_class = java::fetch_class("javax/xml/xpath/XPath");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNamespaceContext", "(Ljavax/xml/namespace/NamespaceContext;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::javax::xml::namespace_::NamespaceContext javax::xml::xpath::XPath::getNamespaceContext() const {
    if (!::javax::xml::xpath::XPath::_class) ::javax::xml::xpath::XPath::_class = java::fetch_class("javax/xml/xpath/XPath");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNamespaceContext", "()Ljavax/xml/namespace/NamespaceContext;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::namespace_::NamespaceContext _ret(ret);
    return _ret;
}

::javax::xml::xpath::XPathExpression javax::xml::xpath::XPath::compile(const ::java::lang::String& arg0) const {
    if (!::javax::xml::xpath::XPath::_class) ::javax::xml::xpath::XPath::_class = java::fetch_class("javax/xml/xpath/XPath");
    static jmethodID mid = java::jni->GetMethodID(_class, "compile", "(Ljava/lang/String;)Ljavax/xml/xpath/XPathExpression;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::xml::xpath::XPathExpression _ret(ret);
    return _ret;
}

::java::lang::Object javax::xml::xpath::XPath::evaluate(const ::java::lang::String& arg0, const ::java::lang::Object& arg1, const ::javax::xml::namespace_::QName& arg2) const {
    if (!::javax::xml::xpath::XPath::_class) ::javax::xml::xpath::XPath::_class = java::fetch_class("javax/xml/xpath/XPath");
    static jmethodID mid = java::jni->GetMethodID(_class, "evaluate", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/xml/namespace/QName;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::String javax::xml::xpath::XPath::evaluate(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::javax::xml::xpath::XPath::_class) ::javax::xml::xpath::XPath::_class = java::fetch_class("javax/xml/xpath/XPath");
    static jmethodID mid = java::jni->GetMethodID(_class, "evaluate", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object javax::xml::xpath::XPath::evaluate(const ::java::lang::String& arg0, const ::org::xml::sax::InputSource& arg1, const ::javax::xml::namespace_::QName& arg2) const {
    if (!::javax::xml::xpath::XPath::_class) ::javax::xml::xpath::XPath::_class = java::fetch_class("javax/xml/xpath/XPath");
    static jmethodID mid = java::jni->GetMethodID(_class, "evaluate", "(Ljava/lang/String;Lorg/xml/sax/InputSource;Ljavax/xml/namespace/QName;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::String javax::xml::xpath::XPath::evaluate(const ::java::lang::String& arg0, const ::org::xml::sax::InputSource& arg1) const {
    if (!::javax::xml::xpath::XPath::_class) ::javax::xml::xpath::XPath::_class = java::fetch_class("javax/xml/xpath/XPath");
    static jmethodID mid = java::jni->GetMethodID(_class, "evaluate", "(Ljava/lang/String;Lorg/xml/sax/InputSource;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::javax::xml::xpath::XPathFunction javax::xml::xpath::XPathFunctionResolver::resolveFunction(const ::javax::xml::namespace_::QName& arg0, int32_t arg1) const {
    if (!::javax::xml::xpath::XPathFunctionResolver::_class) ::javax::xml::xpath::XPathFunctionResolver::_class = java::fetch_class("javax/xml/xpath/XPathFunctionResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveFunction", "(Ljavax/xml/namespace/QName;I)Ljavax/xml/xpath/XPathFunction;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::javax::xml::xpath::XPathFunction _ret(ret);
    return _ret;
}

::javax::xml::xpath::XPathFactory javax::xml::xpath::XPathFactory::newInstance(){
    if (!::javax::xml::xpath::XPathFactory::_class) ::javax::xml::xpath::XPathFactory::_class = java::fetch_class("javax/xml/xpath/XPathFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInstance", "()Ljavax/xml/xpath/XPathFactory;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::javax::xml::xpath::XPathFactory _ret(ret);
    return _ret;
}

::javax::xml::xpath::XPathFactory javax::xml::xpath::XPathFactory::newInstance(const ::java::lang::String& arg0){
    if (!::javax::xml::xpath::XPathFactory::_class) ::javax::xml::xpath::XPathFactory::_class = java::fetch_class("javax/xml/xpath/XPathFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInstance", "(Ljava/lang/String;)Ljavax/xml/xpath/XPathFactory;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::javax::xml::xpath::XPathFactory _ret(ret);
    return _ret;
}

::javax::xml::xpath::XPathFactory javax::xml::xpath::XPathFactory::newInstance(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::ClassLoader& arg2){
    if (!::javax::xml::xpath::XPathFactory::_class) ::javax::xml::xpath::XPathFactory::_class = java::fetch_class("javax/xml/xpath/XPathFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInstance", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/xpath/XPathFactory;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::javax::xml::xpath::XPathFactory _ret(ret);
    return _ret;
}

bool javax::xml::xpath::XPathFactory::isObjectModelSupported(const ::java::lang::String& arg0) const {
    if (!::javax::xml::xpath::XPathFactory::_class) ::javax::xml::xpath::XPathFactory::_class = java::fetch_class("javax/xml/xpath/XPathFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "isObjectModelSupported", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void javax::xml::xpath::XPathFactory::setFeature(const ::java::lang::String& arg0, bool arg1) const {
    if (!::javax::xml::xpath::XPathFactory::_class) ::javax::xml::xpath::XPathFactory::_class = java::fetch_class("javax/xml/xpath/XPathFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFeature", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool javax::xml::xpath::XPathFactory::getFeature(const ::java::lang::String& arg0) const {
    if (!::javax::xml::xpath::XPathFactory::_class) ::javax::xml::xpath::XPathFactory::_class = java::fetch_class("javax/xml/xpath/XPathFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFeature", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void javax::xml::xpath::XPathFactory::setXPathVariableResolver(const ::javax::xml::xpath::XPathVariableResolver& arg0) const {
    if (!::javax::xml::xpath::XPathFactory::_class) ::javax::xml::xpath::XPathFactory::_class = java::fetch_class("javax/xml/xpath/XPathFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setXPathVariableResolver", "(Ljavax/xml/xpath/XPathVariableResolver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::xpath::XPathFactory::setXPathFunctionResolver(const ::javax::xml::xpath::XPathFunctionResolver& arg0) const {
    if (!::javax::xml::xpath::XPathFactory::_class) ::javax::xml::xpath::XPathFactory::_class = java::fetch_class("javax/xml/xpath/XPathFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setXPathFunctionResolver", "(Ljavax/xml/xpath/XPathFunctionResolver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::javax::xml::xpath::XPath javax::xml::xpath::XPathFactory::newXPath() const {
    if (!::javax::xml::xpath::XPathFactory::_class) ::javax::xml::xpath::XPathFactory::_class = java::fetch_class("javax/xml/xpath/XPathFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newXPath", "()Ljavax/xml/xpath/XPath;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::xpath::XPath _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::xpath::XPathFactoryConfigurationException::XPathFactoryConfigurationException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::xml::xpath::XPathException((jobject)0) {
    if (!::javax::xml::xpath::XPathFactoryConfigurationException::_class) ::javax::xml::xpath::XPathFactoryConfigurationException::_class = java::fetch_class("javax/xml/xpath/XPathFactoryConfigurationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::xpath::XPathFactoryConfigurationException::XPathFactoryConfigurationException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::xml::xpath::XPathException((jobject)0) {
    if (!::javax::xml::xpath::XPathFactoryConfigurationException::_class) ::javax::xml::xpath::XPathFactoryConfigurationException::_class = java::fetch_class("javax/xml/xpath/XPathFactoryConfigurationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

