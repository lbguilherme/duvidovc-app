#include "java-core.hpp"
#include <memory>
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "org.apache.http.HttpVersion.hpp"
#include "org.apache.http.ProtocolVersion.hpp"
#include "org.apache.http.params.AbstractHttpParams.hpp"
#include "org.apache.http.params.BasicHttpParams.hpp"
#include "org.apache.http.params.CoreConnectionPNames.hpp"
#include "org.apache.http.params.CoreProtocolPNames.hpp"
#include "org.apache.http.params.DefaultedHttpParams.hpp"
#include "org.apache.http.params.HttpAbstractParamBean.hpp"
#include "org.apache.http.params.HttpConnectionParamBean.hpp"
#include "org.apache.http.params.HttpConnectionParams.hpp"
#include "org.apache.http.params.HttpParams.hpp"
#include "org.apache.http.params.HttpProtocolParamBean.hpp"
#include "org.apache.http.params.HttpProtocolParams.hpp"

jclass org::apache::http::params::HttpProtocolParamBean::_class = nullptr;
jclass org::apache::http::params::BasicHttpParams::_class = nullptr;
jclass org::apache::http::params::HttpAbstractParamBean::_class = nullptr;
jclass org::apache::http::params::HttpParams::_class = nullptr;
jclass org::apache::http::params::CoreProtocolPNames::_class = nullptr;
jclass org::apache::http::params::CoreConnectionPNames::_class = nullptr;
jclass org::apache::http::params::DefaultedHttpParams::_class = nullptr;
jclass org::apache::http::params::HttpProtocolParams::_class = nullptr;
jclass org::apache::http::params::AbstractHttpParams::_class = nullptr;
jclass org::apache::http::params::HttpConnectionParamBean::_class = nullptr;
jclass org::apache::http::params::HttpConnectionParams::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::params::HttpProtocolParamBean::HttpProtocolParamBean(const ::org::apache::http::params::HttpParams& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::params::HttpAbstractParamBean((jobject)0) {
    if (!::org::apache::http::params::HttpProtocolParamBean::_class) ::org::apache::http::params::HttpProtocolParamBean::_class = java::fetch_class("org/apache/http/params/HttpProtocolParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void org::apache::http::params::HttpProtocolParamBean::setHttpElementCharset(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::params::HttpProtocolParamBean::_class) ::org::apache::http::params::HttpProtocolParamBean::_class = java::fetch_class("org/apache/http/params/HttpProtocolParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHttpElementCharset", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::params::HttpProtocolParamBean::setContentCharset(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::params::HttpProtocolParamBean::_class) ::org::apache::http::params::HttpProtocolParamBean::_class = java::fetch_class("org/apache/http/params/HttpProtocolParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentCharset", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::params::HttpProtocolParamBean::setVersion(const ::org::apache::http::HttpVersion& arg0) const {
    if (!::org::apache::http::params::HttpProtocolParamBean::_class) ::org::apache::http::params::HttpProtocolParamBean::_class = java::fetch_class("org/apache/http/params/HttpProtocolParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVersion", "(Lorg/apache/http/HttpVersion;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::params::HttpProtocolParamBean::setUserAgent(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::params::HttpProtocolParamBean::_class) ::org::apache::http::params::HttpProtocolParamBean::_class = java::fetch_class("org/apache/http/params/HttpProtocolParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUserAgent", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::params::HttpProtocolParamBean::setUseExpectContinue(bool arg0) const {
    if (!::org::apache::http::params::HttpProtocolParamBean::_class) ::org::apache::http::params::HttpProtocolParamBean::_class = java::fetch_class("org/apache/http/params/HttpProtocolParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUseExpectContinue", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::params::BasicHttpParams::BasicHttpParams() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::params::AbstractHttpParams((jobject)0), ::org::apache::http::params::HttpParams((jobject)0) {
    if (!::org::apache::http::params::BasicHttpParams::_class) ::org::apache::http::params::BasicHttpParams::_class = java::fetch_class("org/apache/http/params/BasicHttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::Object org::apache::http::params::BasicHttpParams::getParameter(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::params::BasicHttpParams::_class) ::org::apache::http::params::BasicHttpParams::_class = java::fetch_class("org/apache/http/params/BasicHttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameter", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::org::apache::http::params::HttpParams org::apache::http::params::BasicHttpParams::setParameter(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::apache::http::params::BasicHttpParams::_class) ::org::apache::http::params::BasicHttpParams::_class = java::fetch_class("org/apache/http/params/BasicHttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParameter", "(Ljava/lang/String;Ljava/lang/Object;)Lorg/apache/http/params/HttpParams;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::params::HttpParams _ret(ret);
    return _ret;
}

bool org::apache::http::params::BasicHttpParams::removeParameter(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::params::BasicHttpParams::_class) ::org::apache::http::params::BasicHttpParams::_class = java::fetch_class("org/apache/http/params/BasicHttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeParameter", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void org::apache::http::params::BasicHttpParams::setParameters(const std::vector< ::java::lang::String>& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::apache::http::params::BasicHttpParams::_class) ::org::apache::http::params::BasicHttpParams::_class = java::fetch_class("org/apache/http/params/BasicHttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParameters", "([Ljava/lang/String;Ljava/lang/Object;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool org::apache::http::params::BasicHttpParams::isParameterSet(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::params::BasicHttpParams::_class) ::org::apache::http::params::BasicHttpParams::_class = java::fetch_class("org/apache/http/params/BasicHttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "isParameterSet", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::apache::http::params::BasicHttpParams::isParameterSetLocally(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::params::BasicHttpParams::_class) ::org::apache::http::params::BasicHttpParams::_class = java::fetch_class("org/apache/http/params/BasicHttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "isParameterSetLocally", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void org::apache::http::params::BasicHttpParams::clear() const {
    if (!::org::apache::http::params::BasicHttpParams::_class) ::org::apache::http::params::BasicHttpParams::_class = java::fetch_class("org/apache/http/params/BasicHttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::org::apache::http::params::HttpParams org::apache::http::params::BasicHttpParams::copy() const {
    if (!::org::apache::http::params::BasicHttpParams::_class) ::org::apache::http::params::BasicHttpParams::_class = java::fetch_class("org/apache/http/params/BasicHttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "copy", "()Lorg/apache/http/params/HttpParams;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::params::HttpParams _ret(ret);
    return _ret;
}

::java::lang::Object org::apache::http::params::BasicHttpParams::clone() const {
    if (!::org::apache::http::params::BasicHttpParams::_class) ::org::apache::http::params::BasicHttpParams::_class = java::fetch_class("org/apache/http/params/BasicHttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::params::HttpAbstractParamBean::HttpAbstractParamBean(const ::org::apache::http::params::HttpParams& arg0) : ::java::lang::Object((jobject)0) {
    if (!::org::apache::http::params::HttpAbstractParamBean::_class) ::org::apache::http::params::HttpAbstractParamBean::_class = java::fetch_class("org/apache/http/params/HttpAbstractParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Object org::apache::http::params::HttpParams::getParameter(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::params::HttpParams::_class) ::org::apache::http::params::HttpParams::_class = java::fetch_class("org/apache/http/params/HttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameter", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::org::apache::http::params::HttpParams org::apache::http::params::HttpParams::setParameter(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::apache::http::params::HttpParams::_class) ::org::apache::http::params::HttpParams::_class = java::fetch_class("org/apache/http/params/HttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParameter", "(Ljava/lang/String;Ljava/lang/Object;)Lorg/apache/http/params/HttpParams;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::params::HttpParams _ret(ret);
    return _ret;
}

::org::apache::http::params::HttpParams org::apache::http::params::HttpParams::copy() const {
    if (!::org::apache::http::params::HttpParams::_class) ::org::apache::http::params::HttpParams::_class = java::fetch_class("org/apache/http/params/HttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "copy", "()Lorg/apache/http/params/HttpParams;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::params::HttpParams _ret(ret);
    return _ret;
}

bool org::apache::http::params::HttpParams::removeParameter(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::params::HttpParams::_class) ::org::apache::http::params::HttpParams::_class = java::fetch_class("org/apache/http/params/HttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeParameter", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int64_t org::apache::http::params::HttpParams::getLongParameter(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::org::apache::http::params::HttpParams::_class) ::org::apache::http::params::HttpParams::_class = java::fetch_class("org/apache/http/params/HttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLongParameter", "(Ljava/lang/String;J)J");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

::org::apache::http::params::HttpParams org::apache::http::params::HttpParams::setLongParameter(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::org::apache::http::params::HttpParams::_class) ::org::apache::http::params::HttpParams::_class = java::fetch_class("org/apache/http/params/HttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLongParameter", "(Ljava/lang/String;J)Lorg/apache/http/params/HttpParams;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::params::HttpParams _ret(ret);
    return _ret;
}

int32_t org::apache::http::params::HttpParams::getIntParameter(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::org::apache::http::params::HttpParams::_class) ::org::apache::http::params::HttpParams::_class = java::fetch_class("org/apache/http/params/HttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntParameter", "(Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

::org::apache::http::params::HttpParams org::apache::http::params::HttpParams::setIntParameter(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::org::apache::http::params::HttpParams::_class) ::org::apache::http::params::HttpParams::_class = java::fetch_class("org/apache/http/params/HttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIntParameter", "(Ljava/lang/String;I)Lorg/apache/http/params/HttpParams;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::params::HttpParams _ret(ret);
    return _ret;
}

double org::apache::http::params::HttpParams::getDoubleParameter(const ::java::lang::String& arg0, double arg1) const {
    if (!::org::apache::http::params::HttpParams::_class) ::org::apache::http::params::HttpParams::_class = java::fetch_class("org/apache/http/params/HttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDoubleParameter", "(Ljava/lang/String;D)D");
    jobject _arg0 = arg0.obj;
    double _arg1 = arg1;
    return java::jni->CallDoubleMethod(obj, mid, _arg0, _arg1);
}

::org::apache::http::params::HttpParams org::apache::http::params::HttpParams::setDoubleParameter(const ::java::lang::String& arg0, double arg1) const {
    if (!::org::apache::http::params::HttpParams::_class) ::org::apache::http::params::HttpParams::_class = java::fetch_class("org/apache/http/params/HttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDoubleParameter", "(Ljava/lang/String;D)Lorg/apache/http/params/HttpParams;");
    jobject _arg0 = arg0.obj;
    double _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::params::HttpParams _ret(ret);
    return _ret;
}

bool org::apache::http::params::HttpParams::getBooleanParameter(const ::java::lang::String& arg0, bool arg1) const {
    if (!::org::apache::http::params::HttpParams::_class) ::org::apache::http::params::HttpParams::_class = java::fetch_class("org/apache/http/params/HttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBooleanParameter", "(Ljava/lang/String;Z)Z");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::org::apache::http::params::HttpParams org::apache::http::params::HttpParams::setBooleanParameter(const ::java::lang::String& arg0, bool arg1) const {
    if (!::org::apache::http::params::HttpParams::_class) ::org::apache::http::params::HttpParams::_class = java::fetch_class("org/apache/http/params/HttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBooleanParameter", "(Ljava/lang/String;Z)Lorg/apache/http/params/HttpParams;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::params::HttpParams _ret(ret);
    return _ret;
}

bool org::apache::http::params::HttpParams::isParameterTrue(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::params::HttpParams::_class) ::org::apache::http::params::HttpParams::_class = java::fetch_class("org/apache/http/params/HttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "isParameterTrue", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::apache::http::params::HttpParams::isParameterFalse(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::params::HttpParams::_class) ::org::apache::http::params::HttpParams::_class = java::fetch_class("org/apache/http/params/HttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "isParameterFalse", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::params::DefaultedHttpParams::DefaultedHttpParams(const ::org::apache::http::params::HttpParams& arg0, const ::org::apache::http::params::HttpParams& arg1) : ::java::lang::Object((jobject)0), ::org::apache::http::params::AbstractHttpParams((jobject)0), ::org::apache::http::params::HttpParams((jobject)0) {
    if (!::org::apache::http::params::DefaultedHttpParams::_class) ::org::apache::http::params::DefaultedHttpParams::_class = java::fetch_class("org/apache/http/params/DefaultedHttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/params/HttpParams;Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::org::apache::http::params::HttpParams org::apache::http::params::DefaultedHttpParams::copy() const {
    if (!::org::apache::http::params::DefaultedHttpParams::_class) ::org::apache::http::params::DefaultedHttpParams::_class = java::fetch_class("org/apache/http/params/DefaultedHttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "copy", "()Lorg/apache/http/params/HttpParams;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::params::HttpParams _ret(ret);
    return _ret;
}

::java::lang::Object org::apache::http::params::DefaultedHttpParams::getParameter(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::params::DefaultedHttpParams::_class) ::org::apache::http::params::DefaultedHttpParams::_class = java::fetch_class("org/apache/http/params/DefaultedHttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameter", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool org::apache::http::params::DefaultedHttpParams::removeParameter(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::params::DefaultedHttpParams::_class) ::org::apache::http::params::DefaultedHttpParams::_class = java::fetch_class("org/apache/http/params/DefaultedHttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeParameter", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::org::apache::http::params::HttpParams org::apache::http::params::DefaultedHttpParams::setParameter(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::apache::http::params::DefaultedHttpParams::_class) ::org::apache::http::params::DefaultedHttpParams::_class = java::fetch_class("org/apache/http/params/DefaultedHttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParameter", "(Ljava/lang/String;Ljava/lang/Object;)Lorg/apache/http/params/HttpParams;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::params::HttpParams _ret(ret);
    return _ret;
}

::org::apache::http::params::HttpParams org::apache::http::params::DefaultedHttpParams::getDefaults() const {
    if (!::org::apache::http::params::DefaultedHttpParams::_class) ::org::apache::http::params::DefaultedHttpParams::_class = java::fetch_class("org/apache/http/params/DefaultedHttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaults", "()Lorg/apache/http/params/HttpParams;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::params::HttpParams _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::params::HttpProtocolParams::getHttpElementCharset(const ::org::apache::http::params::HttpParams& arg0){
    if (!::org::apache::http::params::HttpProtocolParams::_class) ::org::apache::http::params::HttpProtocolParams::_class = java::fetch_class("org/apache/http/params/HttpProtocolParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getHttpElementCharset", "(Lorg/apache/http/params/HttpParams;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::apache::http::params::HttpProtocolParams::setHttpElementCharset(const ::org::apache::http::params::HttpParams& arg0, const ::java::lang::String& arg1){
    if (!::org::apache::http::params::HttpProtocolParams::_class) ::org::apache::http::params::HttpProtocolParams::_class = java::fetch_class("org/apache/http/params/HttpProtocolParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setHttpElementCharset", "(Lorg/apache/http/params/HttpParams;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::lang::String org::apache::http::params::HttpProtocolParams::getContentCharset(const ::org::apache::http::params::HttpParams& arg0){
    if (!::org::apache::http::params::HttpProtocolParams::_class) ::org::apache::http::params::HttpProtocolParams::_class = java::fetch_class("org/apache/http/params/HttpProtocolParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getContentCharset", "(Lorg/apache/http/params/HttpParams;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::apache::http::params::HttpProtocolParams::setContentCharset(const ::org::apache::http::params::HttpParams& arg0, const ::java::lang::String& arg1){
    if (!::org::apache::http::params::HttpProtocolParams::_class) ::org::apache::http::params::HttpProtocolParams::_class = java::fetch_class("org/apache/http/params/HttpProtocolParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setContentCharset", "(Lorg/apache/http/params/HttpParams;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::org::apache::http::ProtocolVersion org::apache::http::params::HttpProtocolParams::getVersion(const ::org::apache::http::params::HttpParams& arg0){
    if (!::org::apache::http::params::HttpProtocolParams::_class) ::org::apache::http::params::HttpProtocolParams::_class = java::fetch_class("org/apache/http/params/HttpProtocolParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getVersion", "(Lorg/apache/http/params/HttpParams;)Lorg/apache/http/ProtocolVersion;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::org::apache::http::ProtocolVersion _ret(ret);
    return _ret;
}

void org::apache::http::params::HttpProtocolParams::setVersion(const ::org::apache::http::params::HttpParams& arg0, const ::org::apache::http::ProtocolVersion& arg1){
    if (!::org::apache::http::params::HttpProtocolParams::_class) ::org::apache::http::params::HttpProtocolParams::_class = java::fetch_class("org/apache/http/params/HttpProtocolParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setVersion", "(Lorg/apache/http/params/HttpParams;Lorg/apache/http/ProtocolVersion;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::lang::String org::apache::http::params::HttpProtocolParams::getUserAgent(const ::org::apache::http::params::HttpParams& arg0){
    if (!::org::apache::http::params::HttpProtocolParams::_class) ::org::apache::http::params::HttpProtocolParams::_class = java::fetch_class("org/apache/http/params/HttpProtocolParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getUserAgent", "(Lorg/apache/http/params/HttpParams;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::apache::http::params::HttpProtocolParams::setUserAgent(const ::org::apache::http::params::HttpParams& arg0, const ::java::lang::String& arg1){
    if (!::org::apache::http::params::HttpProtocolParams::_class) ::org::apache::http::params::HttpProtocolParams::_class = java::fetch_class("org/apache/http/params/HttpProtocolParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setUserAgent", "(Lorg/apache/http/params/HttpParams;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

bool org::apache::http::params::HttpProtocolParams::useExpectContinue(const ::org::apache::http::params::HttpParams& arg0){
    if (!::org::apache::http::params::HttpProtocolParams::_class) ::org::apache::http::params::HttpProtocolParams::_class = java::fetch_class("org/apache/http/params/HttpProtocolParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "useExpectContinue", "(Lorg/apache/http/params/HttpParams;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void org::apache::http::params::HttpProtocolParams::setUseExpectContinue(const ::org::apache::http::params::HttpParams& arg0, bool arg1){
    if (!::org::apache::http::params::HttpProtocolParams::_class) ::org::apache::http::params::HttpProtocolParams::_class = java::fetch_class("org/apache/http/params/HttpProtocolParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setUseExpectContinue", "(Lorg/apache/http/params/HttpParams;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

int64_t org::apache::http::params::AbstractHttpParams::getLongParameter(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::org::apache::http::params::AbstractHttpParams::_class) ::org::apache::http::params::AbstractHttpParams::_class = java::fetch_class("org/apache/http/params/AbstractHttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLongParameter", "(Ljava/lang/String;J)J");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

::org::apache::http::params::HttpParams org::apache::http::params::AbstractHttpParams::setLongParameter(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::org::apache::http::params::AbstractHttpParams::_class) ::org::apache::http::params::AbstractHttpParams::_class = java::fetch_class("org/apache/http/params/AbstractHttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLongParameter", "(Ljava/lang/String;J)Lorg/apache/http/params/HttpParams;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::params::HttpParams _ret(ret);
    return _ret;
}

int32_t org::apache::http::params::AbstractHttpParams::getIntParameter(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::org::apache::http::params::AbstractHttpParams::_class) ::org::apache::http::params::AbstractHttpParams::_class = java::fetch_class("org/apache/http/params/AbstractHttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntParameter", "(Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

::org::apache::http::params::HttpParams org::apache::http::params::AbstractHttpParams::setIntParameter(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::org::apache::http::params::AbstractHttpParams::_class) ::org::apache::http::params::AbstractHttpParams::_class = java::fetch_class("org/apache/http/params/AbstractHttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIntParameter", "(Ljava/lang/String;I)Lorg/apache/http/params/HttpParams;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::params::HttpParams _ret(ret);
    return _ret;
}

double org::apache::http::params::AbstractHttpParams::getDoubleParameter(const ::java::lang::String& arg0, double arg1) const {
    if (!::org::apache::http::params::AbstractHttpParams::_class) ::org::apache::http::params::AbstractHttpParams::_class = java::fetch_class("org/apache/http/params/AbstractHttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDoubleParameter", "(Ljava/lang/String;D)D");
    jobject _arg0 = arg0.obj;
    double _arg1 = arg1;
    return java::jni->CallDoubleMethod(obj, mid, _arg0, _arg1);
}

::org::apache::http::params::HttpParams org::apache::http::params::AbstractHttpParams::setDoubleParameter(const ::java::lang::String& arg0, double arg1) const {
    if (!::org::apache::http::params::AbstractHttpParams::_class) ::org::apache::http::params::AbstractHttpParams::_class = java::fetch_class("org/apache/http/params/AbstractHttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDoubleParameter", "(Ljava/lang/String;D)Lorg/apache/http/params/HttpParams;");
    jobject _arg0 = arg0.obj;
    double _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::params::HttpParams _ret(ret);
    return _ret;
}

bool org::apache::http::params::AbstractHttpParams::getBooleanParameter(const ::java::lang::String& arg0, bool arg1) const {
    if (!::org::apache::http::params::AbstractHttpParams::_class) ::org::apache::http::params::AbstractHttpParams::_class = java::fetch_class("org/apache/http/params/AbstractHttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBooleanParameter", "(Ljava/lang/String;Z)Z");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::org::apache::http::params::HttpParams org::apache::http::params::AbstractHttpParams::setBooleanParameter(const ::java::lang::String& arg0, bool arg1) const {
    if (!::org::apache::http::params::AbstractHttpParams::_class) ::org::apache::http::params::AbstractHttpParams::_class = java::fetch_class("org/apache/http/params/AbstractHttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBooleanParameter", "(Ljava/lang/String;Z)Lorg/apache/http/params/HttpParams;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::params::HttpParams _ret(ret);
    return _ret;
}

bool org::apache::http::params::AbstractHttpParams::isParameterTrue(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::params::AbstractHttpParams::_class) ::org::apache::http::params::AbstractHttpParams::_class = java::fetch_class("org/apache/http/params/AbstractHttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "isParameterTrue", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::apache::http::params::AbstractHttpParams::isParameterFalse(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::params::AbstractHttpParams::_class) ::org::apache::http::params::AbstractHttpParams::_class = java::fetch_class("org/apache/http/params/AbstractHttpParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "isParameterFalse", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::params::HttpConnectionParamBean::HttpConnectionParamBean(const ::org::apache::http::params::HttpParams& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::params::HttpAbstractParamBean((jobject)0) {
    if (!::org::apache::http::params::HttpConnectionParamBean::_class) ::org::apache::http::params::HttpConnectionParamBean::_class = java::fetch_class("org/apache/http/params/HttpConnectionParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void org::apache::http::params::HttpConnectionParamBean::setSoTimeout(int32_t arg0) const {
    if (!::org::apache::http::params::HttpConnectionParamBean::_class) ::org::apache::http::params::HttpConnectionParamBean::_class = java::fetch_class("org/apache/http/params/HttpConnectionParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSoTimeout", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::params::HttpConnectionParamBean::setTcpNoDelay(bool arg0) const {
    if (!::org::apache::http::params::HttpConnectionParamBean::_class) ::org::apache::http::params::HttpConnectionParamBean::_class = java::fetch_class("org/apache/http/params/HttpConnectionParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTcpNoDelay", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::params::HttpConnectionParamBean::setSocketBufferSize(int32_t arg0) const {
    if (!::org::apache::http::params::HttpConnectionParamBean::_class) ::org::apache::http::params::HttpConnectionParamBean::_class = java::fetch_class("org/apache/http/params/HttpConnectionParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSocketBufferSize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::params::HttpConnectionParamBean::setLinger(int32_t arg0) const {
    if (!::org::apache::http::params::HttpConnectionParamBean::_class) ::org::apache::http::params::HttpConnectionParamBean::_class = java::fetch_class("org/apache/http/params/HttpConnectionParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLinger", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::params::HttpConnectionParamBean::setConnectionTimeout(int32_t arg0) const {
    if (!::org::apache::http::params::HttpConnectionParamBean::_class) ::org::apache::http::params::HttpConnectionParamBean::_class = java::fetch_class("org/apache/http/params/HttpConnectionParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setConnectionTimeout", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::params::HttpConnectionParamBean::setStaleCheckingEnabled(bool arg0) const {
    if (!::org::apache::http::params::HttpConnectionParamBean::_class) ::org::apache::http::params::HttpConnectionParamBean::_class = java::fetch_class("org/apache/http/params/HttpConnectionParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStaleCheckingEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t org::apache::http::params::HttpConnectionParams::getSoTimeout(const ::org::apache::http::params::HttpParams& arg0){
    if (!::org::apache::http::params::HttpConnectionParams::_class) ::org::apache::http::params::HttpConnectionParams::_class = java::fetch_class("org/apache/http/params/HttpConnectionParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSoTimeout", "(Lorg/apache/http/params/HttpParams;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void org::apache::http::params::HttpConnectionParams::setSoTimeout(const ::org::apache::http::params::HttpParams& arg0, int32_t arg1){
    if (!::org::apache::http::params::HttpConnectionParams::_class) ::org::apache::http::params::HttpConnectionParams::_class = java::fetch_class("org/apache/http/params/HttpConnectionParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setSoTimeout", "(Lorg/apache/http/params/HttpParams;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

bool org::apache::http::params::HttpConnectionParams::getTcpNoDelay(const ::org::apache::http::params::HttpParams& arg0){
    if (!::org::apache::http::params::HttpConnectionParams::_class) ::org::apache::http::params::HttpConnectionParams::_class = java::fetch_class("org/apache/http/params/HttpConnectionParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTcpNoDelay", "(Lorg/apache/http/params/HttpParams;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void org::apache::http::params::HttpConnectionParams::setTcpNoDelay(const ::org::apache::http::params::HttpParams& arg0, bool arg1){
    if (!::org::apache::http::params::HttpConnectionParams::_class) ::org::apache::http::params::HttpConnectionParams::_class = java::fetch_class("org/apache/http/params/HttpConnectionParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setTcpNoDelay", "(Lorg/apache/http/params/HttpParams;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

int32_t org::apache::http::params::HttpConnectionParams::getSocketBufferSize(const ::org::apache::http::params::HttpParams& arg0){
    if (!::org::apache::http::params::HttpConnectionParams::_class) ::org::apache::http::params::HttpConnectionParams::_class = java::fetch_class("org/apache/http/params/HttpConnectionParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSocketBufferSize", "(Lorg/apache/http/params/HttpParams;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void org::apache::http::params::HttpConnectionParams::setSocketBufferSize(const ::org::apache::http::params::HttpParams& arg0, int32_t arg1){
    if (!::org::apache::http::params::HttpConnectionParams::_class) ::org::apache::http::params::HttpConnectionParams::_class = java::fetch_class("org/apache/http/params/HttpConnectionParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setSocketBufferSize", "(Lorg/apache/http/params/HttpParams;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

int32_t org::apache::http::params::HttpConnectionParams::getLinger(const ::org::apache::http::params::HttpParams& arg0){
    if (!::org::apache::http::params::HttpConnectionParams::_class) ::org::apache::http::params::HttpConnectionParams::_class = java::fetch_class("org/apache/http/params/HttpConnectionParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLinger", "(Lorg/apache/http/params/HttpParams;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void org::apache::http::params::HttpConnectionParams::setLinger(const ::org::apache::http::params::HttpParams& arg0, int32_t arg1){
    if (!::org::apache::http::params::HttpConnectionParams::_class) ::org::apache::http::params::HttpConnectionParams::_class = java::fetch_class("org/apache/http/params/HttpConnectionParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setLinger", "(Lorg/apache/http/params/HttpParams;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

int32_t org::apache::http::params::HttpConnectionParams::getConnectionTimeout(const ::org::apache::http::params::HttpParams& arg0){
    if (!::org::apache::http::params::HttpConnectionParams::_class) ::org::apache::http::params::HttpConnectionParams::_class = java::fetch_class("org/apache/http/params/HttpConnectionParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getConnectionTimeout", "(Lorg/apache/http/params/HttpParams;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void org::apache::http::params::HttpConnectionParams::setConnectionTimeout(const ::org::apache::http::params::HttpParams& arg0, int32_t arg1){
    if (!::org::apache::http::params::HttpConnectionParams::_class) ::org::apache::http::params::HttpConnectionParams::_class = java::fetch_class("org/apache/http/params/HttpConnectionParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setConnectionTimeout", "(Lorg/apache/http/params/HttpParams;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

bool org::apache::http::params::HttpConnectionParams::isStaleCheckingEnabled(const ::org::apache::http::params::HttpParams& arg0){
    if (!::org::apache::http::params::HttpConnectionParams::_class) ::org::apache::http::params::HttpConnectionParams::_class = java::fetch_class("org/apache/http/params/HttpConnectionParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isStaleCheckingEnabled", "(Lorg/apache/http/params/HttpParams;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void org::apache::http::params::HttpConnectionParams::setStaleCheckingEnabled(const ::org::apache::http::params::HttpParams& arg0, bool arg1){
    if (!::org::apache::http::params::HttpConnectionParams::_class) ::org::apache::http::params::HttpConnectionParams::_class = java::fetch_class("org/apache/http/params/HttpConnectionParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setStaleCheckingEnabled", "(Lorg/apache/http/params/HttpParams;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

