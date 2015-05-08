#include "java-core.hpp"
#include <memory>
#include "android.content.ContentResolver.hpp"
#include "android.content.Context.hpp"
#include "android.net.http.AndroidHttpClient.hpp"
#include "android.net.http.HttpResponseCache.hpp"
#include "android.net.http.SslCertificate.hpp"
#include "android.net.http.SslError.hpp"
#include "android.os.Bundle.hpp"
#include "java.io.File.hpp"
#include "java.io.InputStream.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.net.CacheRequest.hpp"
#include "java.net.CacheResponse.hpp"
#include "java.net.URI.hpp"
#include "java.net.URLConnection.hpp"
#include "java.security.cert.X509Certificate.hpp"
#include "java.util.Date.hpp"
#include "java.util.Map.hpp"
#include "org.apache.http.HttpEntity.hpp"
#include "org.apache.http.HttpHost.hpp"
#include "org.apache.http.HttpRequest.hpp"
#include "org.apache.http.HttpResponse.hpp"
#include "org.apache.http.client.ResponseHandler.hpp"
#include "org.apache.http.client.methods.HttpUriRequest.hpp"
#include "org.apache.http.conn.ClientConnectionManager.hpp"
#include "org.apache.http.entity.AbstractHttpEntity.hpp"
#include "org.apache.http.params.HttpParams.hpp"
#include "org.apache.http.protocol.HttpContext.hpp"

jclass android::net::http::HttpResponseCache::_class = nullptr;
jclass android::net::http::AndroidHttpClient::_class = nullptr;
jclass android::net::http::SslError::_class = nullptr;
jclass android::net::http::SslCertificate::_class = nullptr;
jclass android::net::http::SslCertificate_DName::_class = nullptr;

::android::net::http::HttpResponseCache android::net::http::HttpResponseCache::getInstalled(){
    if (!::android::net::http::HttpResponseCache::_class) ::android::net::http::HttpResponseCache::_class = java::fetch_class("android/net/http/HttpResponseCache");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstalled", "()Landroid/net/http/HttpResponseCache;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::net::http::HttpResponseCache _ret(ret);
    return _ret;
}

::android::net::http::HttpResponseCache android::net::http::HttpResponseCache::install(const ::java::io::File& arg0, int64_t arg1){
    if (!::android::net::http::HttpResponseCache::_class) ::android::net::http::HttpResponseCache::_class = java::fetch_class("android/net/http/HttpResponseCache");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "install", "(Ljava/io/File;J)Landroid/net/http/HttpResponseCache;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::net::http::HttpResponseCache _ret(ret);
    return _ret;
}

::java::net::CacheResponse android::net::http::HttpResponseCache::get(const ::java::net::URI& arg0, const ::java::lang::String& arg1, const ::java::util::Map& arg2) const {
    if (!::android::net::http::HttpResponseCache::_class) ::android::net::http::HttpResponseCache::_class = java::fetch_class("android/net/http/HttpResponseCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/net/URI;Ljava/lang/String;Ljava/util/Map;)Ljava/net/CacheResponse;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::net::CacheResponse _ret(ret);
    return _ret;
}

::java::net::CacheRequest android::net::http::HttpResponseCache::put(const ::java::net::URI& arg0, const ::java::net::URLConnection& arg1) const {
    if (!::android::net::http::HttpResponseCache::_class) ::android::net::http::HttpResponseCache::_class = java::fetch_class("android/net/http/HttpResponseCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/net/URI;Ljava/net/URLConnection;)Ljava/net/CacheRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::net::CacheRequest _ret(ret);
    return _ret;
}

int64_t android::net::http::HttpResponseCache::size() const {
    if (!::android::net::http::HttpResponseCache::_class) ::android::net::http::HttpResponseCache::_class = java::fetch_class("android/net/http/HttpResponseCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t android::net::http::HttpResponseCache::maxSize() const {
    if (!::android::net::http::HttpResponseCache::_class) ::android::net::http::HttpResponseCache::_class = java::fetch_class("android/net/http/HttpResponseCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "maxSize", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void android::net::http::HttpResponseCache::flush() const {
    if (!::android::net::http::HttpResponseCache::_class) ::android::net::http::HttpResponseCache::_class = java::fetch_class("android/net/http/HttpResponseCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::net::http::HttpResponseCache::getNetworkCount() const {
    if (!::android::net::http::HttpResponseCache::_class) ::android::net::http::HttpResponseCache::_class = java::fetch_class("android/net/http/HttpResponseCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNetworkCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::net::http::HttpResponseCache::getHitCount() const {
    if (!::android::net::http::HttpResponseCache::_class) ::android::net::http::HttpResponseCache::_class = java::fetch_class("android/net/http/HttpResponseCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHitCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::net::http::HttpResponseCache::getRequestCount() const {
    if (!::android::net::http::HttpResponseCache::_class) ::android::net::http::HttpResponseCache::_class = java::fetch_class("android/net/http/HttpResponseCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::net::http::HttpResponseCache::close() const {
    if (!::android::net::http::HttpResponseCache::_class) ::android::net::http::HttpResponseCache::_class = java::fetch_class("android/net/http/HttpResponseCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::net::http::HttpResponseCache::delete_() const {
    if (!::android::net::http::HttpResponseCache::_class) ::android::net::http::HttpResponseCache::_class = java::fetch_class("android/net/http/HttpResponseCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "delete_", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::net::http::AndroidHttpClient android::net::http::AndroidHttpClient::newInstance(const ::java::lang::String& arg0, const ::android::content::Context& arg1){
    if (!::android::net::http::AndroidHttpClient::_class) ::android::net::http::AndroidHttpClient::_class = java::fetch_class("android/net/http/AndroidHttpClient");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInstance", "(Ljava/lang/String;Landroid/content/Context;)Landroid/net/http/AndroidHttpClient;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::net::http::AndroidHttpClient _ret(ret);
    return _ret;
}

::android::net::http::AndroidHttpClient android::net::http::AndroidHttpClient::newInstance(const ::java::lang::String& arg0){
    if (!::android::net::http::AndroidHttpClient::_class) ::android::net::http::AndroidHttpClient::_class = java::fetch_class("android/net/http/AndroidHttpClient");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInstance", "(Ljava/lang/String;)Landroid/net/http/AndroidHttpClient;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::net::http::AndroidHttpClient _ret(ret);
    return _ret;
}

void android::net::http::AndroidHttpClient::modifyRequestToAcceptGzipResponse(const ::org::apache::http::HttpRequest& arg0){
    if (!::android::net::http::AndroidHttpClient::_class) ::android::net::http::AndroidHttpClient::_class = java::fetch_class("android/net/http/AndroidHttpClient");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "modifyRequestToAcceptGzipResponse", "(Lorg/apache/http/HttpRequest;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::java::io::InputStream android::net::http::AndroidHttpClient::getUngzippedContent(const ::org::apache::http::HttpEntity& arg0){
    if (!::android::net::http::AndroidHttpClient::_class) ::android::net::http::AndroidHttpClient::_class = java::fetch_class("android/net/http/AndroidHttpClient");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getUngzippedContent", "(Lorg/apache/http/HttpEntity;)Ljava/io/InputStream;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

void android::net::http::AndroidHttpClient::close() const {
    if (!::android::net::http::AndroidHttpClient::_class) ::android::net::http::AndroidHttpClient::_class = java::fetch_class("android/net/http/AndroidHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::org::apache::http::params::HttpParams android::net::http::AndroidHttpClient::getParams() const {
    if (!::android::net::http::AndroidHttpClient::_class) ::android::net::http::AndroidHttpClient::_class = java::fetch_class("android/net/http/AndroidHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParams", "()Lorg/apache/http/params/HttpParams;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::params::HttpParams _ret(ret);
    return _ret;
}

::org::apache::http::conn::ClientConnectionManager android::net::http::AndroidHttpClient::getConnectionManager() const {
    if (!::android::net::http::AndroidHttpClient::_class) ::android::net::http::AndroidHttpClient::_class = java::fetch_class("android/net/http/AndroidHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnectionManager", "()Lorg/apache/http/conn/ClientConnectionManager;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::conn::ClientConnectionManager _ret(ret);
    return _ret;
}

::org::apache::http::HttpResponse android::net::http::AndroidHttpClient::execute(const ::org::apache::http::client::methods::HttpUriRequest& arg0) const {
    if (!::android::net::http::AndroidHttpClient::_class) ::android::net::http::AndroidHttpClient::_class = java::fetch_class("android/net/http/AndroidHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Lorg/apache/http/client/methods/HttpUriRequest;)Lorg/apache/http/HttpResponse;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::HttpResponse _ret(ret);
    return _ret;
}

::org::apache::http::HttpResponse android::net::http::AndroidHttpClient::execute(const ::org::apache::http::client::methods::HttpUriRequest& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::android::net::http::AndroidHttpClient::_class) ::android::net::http::AndroidHttpClient::_class = java::fetch_class("android/net/http/AndroidHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Lorg/apache/http/client/methods/HttpUriRequest;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/HttpResponse;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::HttpResponse _ret(ret);
    return _ret;
}

::org::apache::http::HttpResponse android::net::http::AndroidHttpClient::execute(const ::org::apache::http::HttpHost& arg0, const ::org::apache::http::HttpRequest& arg1) const {
    if (!::android::net::http::AndroidHttpClient::_class) ::android::net::http::AndroidHttpClient::_class = java::fetch_class("android/net/http/AndroidHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Lorg/apache/http/HttpHost;Lorg/apache/http/HttpRequest;)Lorg/apache/http/HttpResponse;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::HttpResponse _ret(ret);
    return _ret;
}

::org::apache::http::HttpResponse android::net::http::AndroidHttpClient::execute(const ::org::apache::http::HttpHost& arg0, const ::org::apache::http::HttpRequest& arg1, const ::org::apache::http::protocol::HttpContext& arg2) const {
    if (!::android::net::http::AndroidHttpClient::_class) ::android::net::http::AndroidHttpClient::_class = java::fetch_class("android/net/http/AndroidHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Lorg/apache/http/HttpHost;Lorg/apache/http/HttpRequest;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/HttpResponse;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::org::apache::http::HttpResponse _ret(ret);
    return _ret;
}

::java::lang::Object android::net::http::AndroidHttpClient::execute(const ::org::apache::http::client::methods::HttpUriRequest& arg0, const ::org::apache::http::client::ResponseHandler& arg1) const {
    if (!::android::net::http::AndroidHttpClient::_class) ::android::net::http::AndroidHttpClient::_class = java::fetch_class("android/net/http/AndroidHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Lorg/apache/http/client/methods/HttpUriRequest;Lorg/apache/http/client/ResponseHandler;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::net::http::AndroidHttpClient::execute(const ::org::apache::http::client::methods::HttpUriRequest& arg0, const ::org::apache::http::client::ResponseHandler& arg1, const ::org::apache::http::protocol::HttpContext& arg2) const {
    if (!::android::net::http::AndroidHttpClient::_class) ::android::net::http::AndroidHttpClient::_class = java::fetch_class("android/net/http/AndroidHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Lorg/apache/http/client/methods/HttpUriRequest;Lorg/apache/http/client/ResponseHandler;Lorg/apache/http/protocol/HttpContext;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::net::http::AndroidHttpClient::execute(const ::org::apache::http::HttpHost& arg0, const ::org::apache::http::HttpRequest& arg1, const ::org::apache::http::client::ResponseHandler& arg2) const {
    if (!::android::net::http::AndroidHttpClient::_class) ::android::net::http::AndroidHttpClient::_class = java::fetch_class("android/net/http/AndroidHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Lorg/apache/http/HttpHost;Lorg/apache/http/HttpRequest;Lorg/apache/http/client/ResponseHandler;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::net::http::AndroidHttpClient::execute(const ::org::apache::http::HttpHost& arg0, const ::org::apache::http::HttpRequest& arg1, const ::org::apache::http::client::ResponseHandler& arg2, const ::org::apache::http::protocol::HttpContext& arg3) const {
    if (!::android::net::http::AndroidHttpClient::_class) ::android::net::http::AndroidHttpClient::_class = java::fetch_class("android/net/http/AndroidHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Lorg/apache/http/HttpHost;Lorg/apache/http/HttpRequest;Lorg/apache/http/client/ResponseHandler;Lorg/apache/http/protocol/HttpContext;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::org::apache::http::entity::AbstractHttpEntity android::net::http::AndroidHttpClient::getCompressedEntity(const std::vector< int8_t>& arg0, const ::android::content::ContentResolver& arg1){
    if (!::android::net::http::AndroidHttpClient::_class) ::android::net::http::AndroidHttpClient::_class = java::fetch_class("android/net/http/AndroidHttpClient");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCompressedEntity", "([BLandroid/content/ContentResolver;)Lorg/apache/http/entity/AbstractHttpEntity;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::org::apache::http::entity::AbstractHttpEntity _ret(ret);
    return _ret;
}

int64_t android::net::http::AndroidHttpClient::getMinGzipSize(const ::android::content::ContentResolver& arg0){
    if (!::android::net::http::AndroidHttpClient::_class) ::android::net::http::AndroidHttpClient::_class = java::fetch_class("android/net/http/AndroidHttpClient");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMinGzipSize", "(Landroid/content/ContentResolver;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

void android::net::http::AndroidHttpClient::enableCurlLogging(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::net::http::AndroidHttpClient::_class) ::android::net::http::AndroidHttpClient::_class = java::fetch_class("android/net/http/AndroidHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "enableCurlLogging", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::net::http::AndroidHttpClient::disableCurlLogging() const {
    if (!::android::net::http::AndroidHttpClient::_class) ::android::net::http::AndroidHttpClient::_class = java::fetch_class("android/net/http/AndroidHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "disableCurlLogging", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int64_t android::net::http::AndroidHttpClient::parseDate(const ::java::lang::String& arg0){
    if (!::android::net::http::AndroidHttpClient::_class) ::android::net::http::AndroidHttpClient::_class = java::fetch_class("android/net/http/AndroidHttpClient");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parseDate", "(Ljava/lang/String;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::http::SslError::SslError(int32_t arg0, const ::android::net::http::SslCertificate& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::net::http::SslError::_class) ::android::net::http::SslError::_class = java::fetch_class("android/net/http/SslError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILandroid/net/http/SslCertificate;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::http::SslError::SslError(int32_t arg0, const ::java::security::cert::X509Certificate& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::net::http::SslError::_class) ::android::net::http::SslError::_class = java::fetch_class("android/net/http/SslError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/security/cert/X509Certificate;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::http::SslError::SslError(int32_t arg0, const ::android::net::http::SslCertificate& arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::net::http::SslError::_class) ::android::net::http::SslError::_class = java::fetch_class("android/net/http/SslError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILandroid/net/http/SslCertificate;Ljava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::http::SslError::SslError(int32_t arg0, const ::java::security::cert::X509Certificate& arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::net::http::SslError::_class) ::android::net::http::SslError::_class = java::fetch_class("android/net/http/SslError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/security/cert/X509Certificate;Ljava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::android::net::http::SslCertificate android::net::http::SslError::getCertificate() const {
    if (!::android::net::http::SslError::_class) ::android::net::http::SslError::_class = java::fetch_class("android/net/http/SslError");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCertificate", "()Landroid/net/http/SslCertificate;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::http::SslCertificate _ret(ret);
    return _ret;
}

::java::lang::String android::net::http::SslError::getUrl() const {
    if (!::android::net::http::SslError::_class) ::android::net::http::SslError::_class = java::fetch_class("android/net/http/SslError");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUrl", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::net::http::SslError::addError(int32_t arg0) const {
    if (!::android::net::http::SslError::_class) ::android::net::http::SslError::_class = java::fetch_class("android/net/http/SslError");
    static jmethodID mid = java::jni->GetMethodID(_class, "addError", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::net::http::SslError::hasError(int32_t arg0) const {
    if (!::android::net::http::SslError::_class) ::android::net::http::SslError::_class = java::fetch_class("android/net/http/SslError");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasError", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::net::http::SslError::getPrimaryError() const {
    if (!::android::net::http::SslError::_class) ::android::net::http::SslError::_class = java::fetch_class("android/net/http/SslError");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrimaryError", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::net::http::SslError::toString() const {
    if (!::android::net::http::SslError::_class) ::android::net::http::SslError::_class = java::fetch_class("android/net/http/SslError");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::http::SslCertificate::SslCertificate(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3) : ::java::lang::Object((jobject)0) {
    if (!::android::net::http::SslCertificate::_class) ::android::net::http::SslCertificate::_class = java::fetch_class("android/net/http/SslCertificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::http::SslCertificate::SslCertificate(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::util::Date& arg2, const ::java::util::Date& arg3) : ::java::lang::Object((jobject)0) {
    if (!::android::net::http::SslCertificate::_class) ::android::net::http::SslCertificate::_class = java::fetch_class("android/net/http/SslCertificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Date;Ljava/util/Date;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::http::SslCertificate::SslCertificate(const ::java::security::cert::X509Certificate& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::net::http::SslCertificate::_class) ::android::net::http::SslCertificate::_class = java::fetch_class("android/net/http/SslCertificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/security/cert/X509Certificate;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::os::Bundle android::net::http::SslCertificate::saveState(const ::android::net::http::SslCertificate& arg0){
    if (!::android::net::http::SslCertificate::_class) ::android::net::http::SslCertificate::_class = java::fetch_class("android/net/http/SslCertificate");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "saveState", "(Landroid/net/http/SslCertificate;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::net::http::SslCertificate android::net::http::SslCertificate::restoreState(const ::android::os::Bundle& arg0){
    if (!::android::net::http::SslCertificate::_class) ::android::net::http::SslCertificate::_class = java::fetch_class("android/net/http/SslCertificate");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "restoreState", "(Landroid/os/Bundle;)Landroid/net/http/SslCertificate;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::net::http::SslCertificate _ret(ret);
    return _ret;
}

::java::util::Date android::net::http::SslCertificate::getValidNotBeforeDate() const {
    if (!::android::net::http::SslCertificate::_class) ::android::net::http::SslCertificate::_class = java::fetch_class("android/net/http/SslCertificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValidNotBeforeDate", "()Ljava/util/Date;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Date _ret(ret);
    return _ret;
}

::java::lang::String android::net::http::SslCertificate::getValidNotBefore() const {
    if (!::android::net::http::SslCertificate::_class) ::android::net::http::SslCertificate::_class = java::fetch_class("android/net/http/SslCertificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValidNotBefore", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::Date android::net::http::SslCertificate::getValidNotAfterDate() const {
    if (!::android::net::http::SslCertificate::_class) ::android::net::http::SslCertificate::_class = java::fetch_class("android/net/http/SslCertificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValidNotAfterDate", "()Ljava/util/Date;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Date _ret(ret);
    return _ret;
}

::java::lang::String android::net::http::SslCertificate::getValidNotAfter() const {
    if (!::android::net::http::SslCertificate::_class) ::android::net::http::SslCertificate::_class = java::fetch_class("android/net/http/SslCertificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValidNotAfter", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::net::http::SslCertificate_DName android::net::http::SslCertificate::getIssuedTo() const {
    if (!::android::net::http::SslCertificate::_class) ::android::net::http::SslCertificate::_class = java::fetch_class("android/net/http/SslCertificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIssuedTo", "()Landroid/net/http/SslCertificate$DName;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::http::SslCertificate_DName _ret(ret);
    return _ret;
}

::android::net::http::SslCertificate_DName android::net::http::SslCertificate::getIssuedBy() const {
    if (!::android::net::http::SslCertificate::_class) ::android::net::http::SslCertificate::_class = java::fetch_class("android/net/http/SslCertificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIssuedBy", "()Landroid/net/http/SslCertificate$DName;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::http::SslCertificate_DName _ret(ret);
    return _ret;
}

::java::lang::String android::net::http::SslCertificate::toString() const {
    if (!::android::net::http::SslCertificate::_class) ::android::net::http::SslCertificate::_class = java::fetch_class("android/net/http/SslCertificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::http::SslCertificate_DName::SslCertificate_DName(const ::android::net::http::SslCertificate& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::net::http::SslCertificate_DName::_class) ::android::net::http::SslCertificate_DName::_class = java::fetch_class("android/net/http/SslCertificate$DName");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/net/http/SslCertificate;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String android::net::http::SslCertificate_DName::getDName() const {
    if (!::android::net::http::SslCertificate_DName::_class) ::android::net::http::SslCertificate_DName::_class = java::fetch_class("android/net/http/SslCertificate$DName");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::http::SslCertificate_DName::getCName() const {
    if (!::android::net::http::SslCertificate_DName::_class) ::android::net::http::SslCertificate_DName::_class = java::fetch_class("android/net/http/SslCertificate$DName");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::http::SslCertificate_DName::getOName() const {
    if (!::android::net::http::SslCertificate_DName::_class) ::android::net::http::SslCertificate_DName::_class = java::fetch_class("android/net/http/SslCertificate$DName");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::http::SslCertificate_DName::getUName() const {
    if (!::android::net::http::SslCertificate_DName::_class) ::android::net::http::SslCertificate_DName::_class = java::fetch_class("android/net/http/SslCertificate$DName");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

