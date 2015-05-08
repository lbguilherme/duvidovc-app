#include "java-core.hpp"
#include <memory>
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.net.URI.hpp"
#include "java.util.List.hpp"
#include "java.util.Scanner.hpp"
#include "org.apache.http.HttpEntity.hpp"
#include "org.apache.http.HttpHost.hpp"
#include "org.apache.http.client.utils.CloneUtils.hpp"
#include "org.apache.http.client.utils.URIUtils.hpp"
#include "org.apache.http.client.utils.URLEncodedUtils.hpp"

jclass org::apache::http::client::utils::URIUtils::_class = nullptr;
jclass org::apache::http::client::utils::URLEncodedUtils::_class = nullptr;
jclass org::apache::http::client::utils::CloneUtils::_class = nullptr;

::java::net::URI org::apache::http::client::utils::URIUtils::createURI(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4, const ::java::lang::String& arg5){
    if (!::org::apache::http::client::utils::URIUtils::_class) ::org::apache::http::client::utils::URIUtils::_class = java::fetch_class("org/apache/http/client/utils/URIUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createURI", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/net/URI;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::java::net::URI _ret(ret);
    return _ret;
}

::java::net::URI org::apache::http::client::utils::URIUtils::rewriteURI(const ::java::net::URI& arg0, const ::org::apache::http::HttpHost& arg1, bool arg2){
    if (!::org::apache::http::client::utils::URIUtils::_class) ::org::apache::http::client::utils::URIUtils::_class = java::fetch_class("org/apache/http/client/utils/URIUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "rewriteURI", "(Ljava/net/URI;Lorg/apache/http/HttpHost;Z)Ljava/net/URI;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::net::URI _ret(ret);
    return _ret;
}

::java::net::URI org::apache::http::client::utils::URIUtils::rewriteURI(const ::java::net::URI& arg0, const ::org::apache::http::HttpHost& arg1){
    if (!::org::apache::http::client::utils::URIUtils::_class) ::org::apache::http::client::utils::URIUtils::_class = java::fetch_class("org/apache/http/client/utils/URIUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "rewriteURI", "(Ljava/net/URI;Lorg/apache/http/HttpHost;)Ljava/net/URI;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::net::URI _ret(ret);
    return _ret;
}

::java::net::URI org::apache::http::client::utils::URIUtils::resolve(const ::java::net::URI& arg0, const ::java::lang::String& arg1){
    if (!::org::apache::http::client::utils::URIUtils::_class) ::org::apache::http::client::utils::URIUtils::_class = java::fetch_class("org/apache/http/client/utils/URIUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "resolve", "(Ljava/net/URI;Ljava/lang/String;)Ljava/net/URI;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::net::URI _ret(ret);
    return _ret;
}

::java::net::URI org::apache::http::client::utils::URIUtils::resolve(const ::java::net::URI& arg0, const ::java::net::URI& arg1){
    if (!::org::apache::http::client::utils::URIUtils::_class) ::org::apache::http::client::utils::URIUtils::_class = java::fetch_class("org/apache/http/client/utils/URIUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "resolve", "(Ljava/net/URI;Ljava/net/URI;)Ljava/net/URI;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::net::URI _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::utils::URLEncodedUtils::URLEncodedUtils() : ::java::lang::Object((jobject)0) {
    if (!::org::apache::http::client::utils::URLEncodedUtils::_class) ::org::apache::http::client::utils::URLEncodedUtils::_class = java::fetch_class("org/apache/http/client/utils/URLEncodedUtils");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::util::List org::apache::http::client::utils::URLEncodedUtils::parse(const ::java::net::URI& arg0, const ::java::lang::String& arg1){
    if (!::org::apache::http::client::utils::URLEncodedUtils::_class) ::org::apache::http::client::utils::URLEncodedUtils::_class = java::fetch_class("org/apache/http/client/utils/URLEncodedUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parse", "(Ljava/net/URI;Ljava/lang/String;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List org::apache::http::client::utils::URLEncodedUtils::parse(const ::org::apache::http::HttpEntity& arg0){
    if (!::org::apache::http::client::utils::URLEncodedUtils::_class) ::org::apache::http::client::utils::URLEncodedUtils::_class = java::fetch_class("org/apache/http/client/utils/URLEncodedUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parse", "(Lorg/apache/http/HttpEntity;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

bool org::apache::http::client::utils::URLEncodedUtils::isEncoded(const ::org::apache::http::HttpEntity& arg0){
    if (!::org::apache::http::client::utils::URLEncodedUtils::_class) ::org::apache::http::client::utils::URLEncodedUtils::_class = java::fetch_class("org/apache/http/client/utils/URLEncodedUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isEncoded", "(Lorg/apache/http/HttpEntity;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void org::apache::http::client::utils::URLEncodedUtils::parse(const ::java::util::List& arg0, const ::java::util::Scanner& arg1, const ::java::lang::String& arg2){
    if (!::org::apache::http::client::utils::URLEncodedUtils::_class) ::org::apache::http::client::utils::URLEncodedUtils::_class = java::fetch_class("org/apache/http/client/utils/URLEncodedUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parse", "(Ljava/util/List;Ljava/util/Scanner;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

::java::lang::String org::apache::http::client::utils::URLEncodedUtils::format(const ::java::util::List& arg0, const ::java::lang::String& arg1){
    if (!::org::apache::http::client::utils::URLEncodedUtils::_class) ::org::apache::http::client::utils::URLEncodedUtils::_class = java::fetch_class("org/apache/http/client/utils/URLEncodedUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "format", "(Ljava/util/List;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object org::apache::http::client::utils::CloneUtils::clone(const ::java::lang::Object& arg0){
    if (!::org::apache::http::client::utils::CloneUtils::_class) ::org::apache::http::client::utils::CloneUtils::_class = java::fetch_class("org/apache/http/client/utils/CloneUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "clone", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

