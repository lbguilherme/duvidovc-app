#include "java-core.hpp"
#include <memory>
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.io.Reader.hpp"
#include "java.io.Writer.hpp"
#include "java.lang.Boolean.hpp"
#include "java.lang.Class.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"
#include "org.xmlpull.v1.XmlPullParser.hpp"
#include "org.xmlpull.v1.XmlPullParserException.hpp"
#include "org.xmlpull.v1.XmlPullParserFactory.hpp"
#include "org.xmlpull.v1.XmlSerializer.hpp"

jclass org::xmlpull::v1::XmlPullParserFactory::_class = nullptr;
jclass org::xmlpull::v1::XmlPullParserException::_class = nullptr;
jclass org::xmlpull::v1::XmlPullParser::_class = nullptr;
jclass org::xmlpull::v1::XmlSerializer::_class = nullptr;

void org::xmlpull::v1::XmlPullParserFactory::setFeature(const ::java::lang::String& arg0, bool arg1) const {
    if (!::org::xmlpull::v1::XmlPullParserFactory::_class) ::org::xmlpull::v1::XmlPullParserFactory::_class = java::fetch_class("org/xmlpull/v1/XmlPullParserFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFeature", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool org::xmlpull::v1::XmlPullParserFactory::getFeature(const ::java::lang::String& arg0) const {
    if (!::org::xmlpull::v1::XmlPullParserFactory::_class) ::org::xmlpull::v1::XmlPullParserFactory::_class = java::fetch_class("org/xmlpull/v1/XmlPullParserFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFeature", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void org::xmlpull::v1::XmlPullParserFactory::setNamespaceAware(bool arg0) const {
    if (!::org::xmlpull::v1::XmlPullParserFactory::_class) ::org::xmlpull::v1::XmlPullParserFactory::_class = java::fetch_class("org/xmlpull/v1/XmlPullParserFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNamespaceAware", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::xmlpull::v1::XmlPullParserFactory::isNamespaceAware() const {
    if (!::org::xmlpull::v1::XmlPullParserFactory::_class) ::org::xmlpull::v1::XmlPullParserFactory::_class = java::fetch_class("org/xmlpull/v1/XmlPullParserFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "isNamespaceAware", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void org::xmlpull::v1::XmlPullParserFactory::setValidating(bool arg0) const {
    if (!::org::xmlpull::v1::XmlPullParserFactory::_class) ::org::xmlpull::v1::XmlPullParserFactory::_class = java::fetch_class("org/xmlpull/v1/XmlPullParserFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setValidating", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::xmlpull::v1::XmlPullParserFactory::isValidating() const {
    if (!::org::xmlpull::v1::XmlPullParserFactory::_class) ::org::xmlpull::v1::XmlPullParserFactory::_class = java::fetch_class("org/xmlpull/v1/XmlPullParserFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "isValidating", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::org::xmlpull::v1::XmlPullParser org::xmlpull::v1::XmlPullParserFactory::newPullParser() const {
    if (!::org::xmlpull::v1::XmlPullParserFactory::_class) ::org::xmlpull::v1::XmlPullParserFactory::_class = java::fetch_class("org/xmlpull/v1/XmlPullParserFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newPullParser", "()Lorg/xmlpull/v1/XmlPullParser;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xmlpull::v1::XmlPullParser _ret(ret);
    return _ret;
}

::org::xmlpull::v1::XmlSerializer org::xmlpull::v1::XmlPullParserFactory::newSerializer() const {
    if (!::org::xmlpull::v1::XmlPullParserFactory::_class) ::org::xmlpull::v1::XmlPullParserFactory::_class = java::fetch_class("org/xmlpull/v1/XmlPullParserFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newSerializer", "()Lorg/xmlpull/v1/XmlSerializer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xmlpull::v1::XmlSerializer _ret(ret);
    return _ret;
}

::org::xmlpull::v1::XmlPullParserFactory org::xmlpull::v1::XmlPullParserFactory::newInstance(){
    if (!::org::xmlpull::v1::XmlPullParserFactory::_class) ::org::xmlpull::v1::XmlPullParserFactory::_class = java::fetch_class("org/xmlpull/v1/XmlPullParserFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInstance", "()Lorg/xmlpull/v1/XmlPullParserFactory;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::org::xmlpull::v1::XmlPullParserFactory _ret(ret);
    return _ret;
}

::org::xmlpull::v1::XmlPullParserFactory org::xmlpull::v1::XmlPullParserFactory::newInstance(const ::java::lang::String& arg0, const ::java::lang::Class& arg1){
    if (!::org::xmlpull::v1::XmlPullParserFactory::_class) ::org::xmlpull::v1::XmlPullParserFactory::_class = java::fetch_class("org/xmlpull/v1/XmlPullParserFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInstance", "(Ljava/lang/String;Ljava/lang/Class;)Lorg/xmlpull/v1/XmlPullParserFactory;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::org::xmlpull::v1::XmlPullParserFactory _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xmlpull::v1::XmlPullParserException::XmlPullParserException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::org::xmlpull::v1::XmlPullParserException::_class) ::org::xmlpull::v1::XmlPullParserException::_class = java::fetch_class("org/xmlpull/v1/XmlPullParserException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::xmlpull::v1::XmlPullParserException::XmlPullParserException(const ::java::lang::String& arg0, const ::org::xmlpull::v1::XmlPullParser& arg1, const ::java::lang::Throwable& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::org::xmlpull::v1::XmlPullParserException::_class) ::org::xmlpull::v1::XmlPullParserException::_class = java::fetch_class("org/xmlpull/v1/XmlPullParserException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Lorg/xmlpull/v1/XmlPullParser;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::java::lang::Throwable org::xmlpull::v1::XmlPullParserException::getDetail() const {
    if (!::org::xmlpull::v1::XmlPullParserException::_class) ::org::xmlpull::v1::XmlPullParserException::_class = java::fetch_class("org/xmlpull/v1/XmlPullParserException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDetail", "()Ljava/lang/Throwable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Throwable _ret(ret);
    return _ret;
}

int32_t org::xmlpull::v1::XmlPullParserException::getLineNumber() const {
    if (!::org::xmlpull::v1::XmlPullParserException::_class) ::org::xmlpull::v1::XmlPullParserException::_class = java::fetch_class("org/xmlpull/v1/XmlPullParserException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineNumber", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t org::xmlpull::v1::XmlPullParserException::getColumnNumber() const {
    if (!::org::xmlpull::v1::XmlPullParserException::_class) ::org::xmlpull::v1::XmlPullParserException::_class = java::fetch_class("org/xmlpull/v1/XmlPullParserException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnNumber", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void org::xmlpull::v1::XmlPullParserException::printStackTrace() const {
    if (!::org::xmlpull::v1::XmlPullParserException::_class) ::org::xmlpull::v1::XmlPullParserException::_class = java::fetch_class("org/xmlpull/v1/XmlPullParserException");
    static jmethodID mid = java::jni->GetMethodID(_class, "printStackTrace", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::xmlpull::v1::XmlPullParser::setFeature(const ::java::lang::String& arg0, bool arg1) const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFeature", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool org::xmlpull::v1::XmlPullParser::getFeature(const ::java::lang::String& arg0) const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFeature", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void org::xmlpull::v1::XmlPullParser::setProperty(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object org::xmlpull::v1::XmlPullParser::getProperty(const ::java::lang::String& arg0) const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProperty", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void org::xmlpull::v1::XmlPullParser::setInput(const ::java::io::Reader& arg0) const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInput", "(Ljava/io/Reader;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xmlpull::v1::XmlPullParser::setInput(const ::java::io::InputStream& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInput", "(Ljava/io/InputStream;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String org::xmlpull::v1::XmlPullParser::getInputEncoding() const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputEncoding", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::xmlpull::v1::XmlPullParser::defineEntityReplacementText(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "defineEntityReplacementText", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t org::xmlpull::v1::XmlPullParser::getNamespaceCount(int32_t arg0) const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNamespaceCount", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String org::xmlpull::v1::XmlPullParser::getNamespacePrefix(int32_t arg0) const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNamespacePrefix", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xmlpull::v1::XmlPullParser::getNamespaceUri(int32_t arg0) const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNamespaceUri", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xmlpull::v1::XmlPullParser::getNamespace(const ::java::lang::String& arg0) const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNamespace", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t org::xmlpull::v1::XmlPullParser::getDepth() const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDepth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String org::xmlpull::v1::XmlPullParser::getPositionDescription() const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPositionDescription", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t org::xmlpull::v1::XmlPullParser::getLineNumber() const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineNumber", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t org::xmlpull::v1::XmlPullParser::getColumnNumber() const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnNumber", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool org::xmlpull::v1::XmlPullParser::isWhitespace() const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "isWhitespace", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String org::xmlpull::v1::XmlPullParser::getText() const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< uint16_t> org::xmlpull::v1::XmlPullParser::getTextCharacters(const std::vector< int32_t>& arg0) const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextCharacters", "([I)[C");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jchar* reta = java::jni->GetCharArrayElements((jcharArray)ret, nullptr);
    std::vector< uint16_t> _ret(reta, reta+rets);
    java::jni->ReleaseCharArrayElements((jcharArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String org::xmlpull::v1::XmlPullParser::getNamespace() const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNamespace", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xmlpull::v1::XmlPullParser::getName() const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xmlpull::v1::XmlPullParser::getPrefix() const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrefix", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool org::xmlpull::v1::XmlPullParser::isEmptyElementTag() const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmptyElementTag", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t org::xmlpull::v1::XmlPullParser::getAttributeCount() const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributeCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String org::xmlpull::v1::XmlPullParser::getAttributeNamespace(int32_t arg0) const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributeNamespace", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xmlpull::v1::XmlPullParser::getAttributeName(int32_t arg0) const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributeName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xmlpull::v1::XmlPullParser::getAttributePrefix(int32_t arg0) const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributePrefix", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xmlpull::v1::XmlPullParser::getAttributeType(int32_t arg0) const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributeType", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool org::xmlpull::v1::XmlPullParser::isAttributeDefault(int32_t arg0) const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAttributeDefault", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String org::xmlpull::v1::XmlPullParser::getAttributeValue(int32_t arg0) const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributeValue", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xmlpull::v1::XmlPullParser::getAttributeValue(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributeValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t org::xmlpull::v1::XmlPullParser::getEventType() const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEventType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t org::xmlpull::v1::XmlPullParser::next() const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "next", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t org::xmlpull::v1::XmlPullParser::nextToken() const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextToken", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void org::xmlpull::v1::XmlPullParser::require(int32_t arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "require", "(ILjava/lang/String;Ljava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::String org::xmlpull::v1::XmlPullParser::nextText() const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextText", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t org::xmlpull::v1::XmlPullParser::nextTag() const {
    if (!::org::xmlpull::v1::XmlPullParser::_class) ::org::xmlpull::v1::XmlPullParser::_class = java::fetch_class("org/xmlpull/v1/XmlPullParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextTag", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void org::xmlpull::v1::XmlSerializer::setFeature(const ::java::lang::String& arg0, bool arg1) const {
    if (!::org::xmlpull::v1::XmlSerializer::_class) ::org::xmlpull::v1::XmlSerializer::_class = java::fetch_class("org/xmlpull/v1/XmlSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFeature", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool org::xmlpull::v1::XmlSerializer::getFeature(const ::java::lang::String& arg0) const {
    if (!::org::xmlpull::v1::XmlSerializer::_class) ::org::xmlpull::v1::XmlSerializer::_class = java::fetch_class("org/xmlpull/v1/XmlSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFeature", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void org::xmlpull::v1::XmlSerializer::setProperty(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::xmlpull::v1::XmlSerializer::_class) ::org::xmlpull::v1::XmlSerializer::_class = java::fetch_class("org/xmlpull/v1/XmlSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object org::xmlpull::v1::XmlSerializer::getProperty(const ::java::lang::String& arg0) const {
    if (!::org::xmlpull::v1::XmlSerializer::_class) ::org::xmlpull::v1::XmlSerializer::_class = java::fetch_class("org/xmlpull/v1/XmlSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProperty", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void org::xmlpull::v1::XmlSerializer::setOutput(const ::java::io::OutputStream& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xmlpull::v1::XmlSerializer::_class) ::org::xmlpull::v1::XmlSerializer::_class = java::fetch_class("org/xmlpull/v1/XmlSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOutput", "(Ljava/io/OutputStream;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::xmlpull::v1::XmlSerializer::setOutput(const ::java::io::Writer& arg0) const {
    if (!::org::xmlpull::v1::XmlSerializer::_class) ::org::xmlpull::v1::XmlSerializer::_class = java::fetch_class("org/xmlpull/v1/XmlSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOutput", "(Ljava/io/Writer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xmlpull::v1::XmlSerializer::startDocument(const ::java::lang::String& arg0, const ::java::lang::Boolean& arg1) const {
    if (!::org::xmlpull::v1::XmlSerializer::_class) ::org::xmlpull::v1::XmlSerializer::_class = java::fetch_class("org/xmlpull/v1/XmlSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "startDocument", "(Ljava/lang/String;Ljava/lang/Boolean;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::xmlpull::v1::XmlSerializer::endDocument() const {
    if (!::org::xmlpull::v1::XmlSerializer::_class) ::org::xmlpull::v1::XmlSerializer::_class = java::fetch_class("org/xmlpull/v1/XmlSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "endDocument", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::xmlpull::v1::XmlSerializer::setPrefix(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xmlpull::v1::XmlSerializer::_class) ::org::xmlpull::v1::XmlSerializer::_class = java::fetch_class("org/xmlpull/v1/XmlSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPrefix", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String org::xmlpull::v1::XmlSerializer::getPrefix(const ::java::lang::String& arg0, bool arg1) const {
    if (!::org::xmlpull::v1::XmlSerializer::_class) ::org::xmlpull::v1::XmlSerializer::_class = java::fetch_class("org/xmlpull/v1/XmlSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrefix", "(Ljava/lang/String;Z)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t org::xmlpull::v1::XmlSerializer::getDepth() const {
    if (!::org::xmlpull::v1::XmlSerializer::_class) ::org::xmlpull::v1::XmlSerializer::_class = java::fetch_class("org/xmlpull/v1/XmlSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDepth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String org::xmlpull::v1::XmlSerializer::getNamespace() const {
    if (!::org::xmlpull::v1::XmlSerializer::_class) ::org::xmlpull::v1::XmlSerializer::_class = java::fetch_class("org/xmlpull/v1/XmlSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNamespace", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::xmlpull::v1::XmlSerializer::getName() const {
    if (!::org::xmlpull::v1::XmlSerializer::_class) ::org::xmlpull::v1::XmlSerializer::_class = java::fetch_class("org/xmlpull/v1/XmlSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::org::xmlpull::v1::XmlSerializer org::xmlpull::v1::XmlSerializer::startTag(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xmlpull::v1::XmlSerializer::_class) ::org::xmlpull::v1::XmlSerializer::_class = java::fetch_class("org/xmlpull/v1/XmlSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "startTag", "(Ljava/lang/String;Ljava/lang/String;)Lorg/xmlpull/v1/XmlSerializer;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::xmlpull::v1::XmlSerializer _ret(ret);
    return _ret;
}

::org::xmlpull::v1::XmlSerializer org::xmlpull::v1::XmlSerializer::attribute(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::org::xmlpull::v1::XmlSerializer::_class) ::org::xmlpull::v1::XmlSerializer::_class = java::fetch_class("org/xmlpull/v1/XmlSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "attribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/xmlpull/v1/XmlSerializer;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::org::xmlpull::v1::XmlSerializer _ret(ret);
    return _ret;
}

::org::xmlpull::v1::XmlSerializer org::xmlpull::v1::XmlSerializer::endTag(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::xmlpull::v1::XmlSerializer::_class) ::org::xmlpull::v1::XmlSerializer::_class = java::fetch_class("org/xmlpull/v1/XmlSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "endTag", "(Ljava/lang/String;Ljava/lang/String;)Lorg/xmlpull/v1/XmlSerializer;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::xmlpull::v1::XmlSerializer _ret(ret);
    return _ret;
}

::org::xmlpull::v1::XmlSerializer org::xmlpull::v1::XmlSerializer::text(const ::java::lang::String& arg0) const {
    if (!::org::xmlpull::v1::XmlSerializer::_class) ::org::xmlpull::v1::XmlSerializer::_class = java::fetch_class("org/xmlpull/v1/XmlSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "text", "(Ljava/lang/String;)Lorg/xmlpull/v1/XmlSerializer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::xmlpull::v1::XmlSerializer _ret(ret);
    return _ret;
}

::org::xmlpull::v1::XmlSerializer org::xmlpull::v1::XmlSerializer::text(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::xmlpull::v1::XmlSerializer::_class) ::org::xmlpull::v1::XmlSerializer::_class = java::fetch_class("org/xmlpull/v1/XmlSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "text", "([CII)Lorg/xmlpull/v1/XmlSerializer;");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::org::xmlpull::v1::XmlSerializer _ret(ret);
    return _ret;
}

void org::xmlpull::v1::XmlSerializer::cdsect(const ::java::lang::String& arg0) const {
    if (!::org::xmlpull::v1::XmlSerializer::_class) ::org::xmlpull::v1::XmlSerializer::_class = java::fetch_class("org/xmlpull/v1/XmlSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "cdsect", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xmlpull::v1::XmlSerializer::entityRef(const ::java::lang::String& arg0) const {
    if (!::org::xmlpull::v1::XmlSerializer::_class) ::org::xmlpull::v1::XmlSerializer::_class = java::fetch_class("org/xmlpull/v1/XmlSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "entityRef", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xmlpull::v1::XmlSerializer::processingInstruction(const ::java::lang::String& arg0) const {
    if (!::org::xmlpull::v1::XmlSerializer::_class) ::org::xmlpull::v1::XmlSerializer::_class = java::fetch_class("org/xmlpull/v1/XmlSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "processingInstruction", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xmlpull::v1::XmlSerializer::comment(const ::java::lang::String& arg0) const {
    if (!::org::xmlpull::v1::XmlSerializer::_class) ::org::xmlpull::v1::XmlSerializer::_class = java::fetch_class("org/xmlpull/v1/XmlSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "comment", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xmlpull::v1::XmlSerializer::docdecl(const ::java::lang::String& arg0) const {
    if (!::org::xmlpull::v1::XmlSerializer::_class) ::org::xmlpull::v1::XmlSerializer::_class = java::fetch_class("org/xmlpull/v1/XmlSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "docdecl", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xmlpull::v1::XmlSerializer::ignorableWhitespace(const ::java::lang::String& arg0) const {
    if (!::org::xmlpull::v1::XmlSerializer::_class) ::org::xmlpull::v1::XmlSerializer::_class = java::fetch_class("org/xmlpull/v1/XmlSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "ignorableWhitespace", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::xmlpull::v1::XmlSerializer::flush() const {
    if (!::org::xmlpull::v1::XmlSerializer::_class) ::org::xmlpull::v1::XmlSerializer::_class = java::fetch_class("org/xmlpull/v1/XmlSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

