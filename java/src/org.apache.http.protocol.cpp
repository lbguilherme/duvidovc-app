#include "java-core.hpp"
#include <memory>
#include "java.lang.Class.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.List.hpp"
#include "java.util.Map.hpp"
#include "org.apache.http.ConnectionReuseStrategy.hpp"
#include "org.apache.http.HttpClientConnection.hpp"
#include "org.apache.http.HttpRequest.hpp"
#include "org.apache.http.HttpRequestInterceptor.hpp"
#include "org.apache.http.HttpResponse.hpp"
#include "org.apache.http.HttpResponseFactory.hpp"
#include "org.apache.http.HttpResponseInterceptor.hpp"
#include "org.apache.http.HttpServerConnection.hpp"
#include "org.apache.http.params.HttpParams.hpp"
#include "org.apache.http.protocol.BasicHttpContext.hpp"
#include "org.apache.http.protocol.BasicHttpProcessor.hpp"
#include "org.apache.http.protocol.DefaultedHttpContext.hpp"
#include "org.apache.http.protocol.ExecutionContext.hpp"
#include "org.apache.http.protocol.HTTP.hpp"
#include "org.apache.http.protocol.HttpContext.hpp"
#include "org.apache.http.protocol.HttpDateGenerator.hpp"
#include "org.apache.http.protocol.HttpExpectationVerifier.hpp"
#include "org.apache.http.protocol.HttpProcessor.hpp"
#include "org.apache.http.protocol.HttpRequestExecutor.hpp"
#include "org.apache.http.protocol.HttpRequestHandler.hpp"
#include "org.apache.http.protocol.HttpRequestHandlerRegistry.hpp"
#include "org.apache.http.protocol.HttpRequestHandlerResolver.hpp"
#include "org.apache.http.protocol.HttpRequestInterceptorList.hpp"
#include "org.apache.http.protocol.HttpResponseInterceptorList.hpp"
#include "org.apache.http.protocol.HttpService.hpp"
#include "org.apache.http.protocol.RequestConnControl.hpp"
#include "org.apache.http.protocol.RequestContent.hpp"
#include "org.apache.http.protocol.RequestDate.hpp"
#include "org.apache.http.protocol.RequestExpectContinue.hpp"
#include "org.apache.http.protocol.RequestTargetHost.hpp"
#include "org.apache.http.protocol.RequestUserAgent.hpp"
#include "org.apache.http.protocol.ResponseConnControl.hpp"
#include "org.apache.http.protocol.ResponseContent.hpp"
#include "org.apache.http.protocol.ResponseDate.hpp"
#include "org.apache.http.protocol.ResponseServer.hpp"
#include "org.apache.http.protocol.SyncBasicHttpContext.hpp"
#include "org.apache.http.protocol.UriPatternMatcher.hpp"

jclass org::apache::http::protocol::HttpProcessor::_class = nullptr;
jclass org::apache::http::protocol::BasicHttpContext::_class = nullptr;
jclass org::apache::http::protocol::HttpRequestHandler::_class = nullptr;
jclass org::apache::http::protocol::HttpRequestInterceptorList::_class = nullptr;
jclass org::apache::http::protocol::ResponseContent::_class = nullptr;
jclass org::apache::http::protocol::SyncBasicHttpContext::_class = nullptr;
jclass org::apache::http::protocol::HttpRequestHandlerResolver::_class = nullptr;
jclass org::apache::http::protocol::HttpContext::_class = nullptr;
jclass org::apache::http::protocol::UriPatternMatcher::_class = nullptr;
jclass org::apache::http::protocol::HttpService::_class = nullptr;
jclass org::apache::http::protocol::ExecutionContext::_class = nullptr;
jclass org::apache::http::protocol::HttpDateGenerator::_class = nullptr;
jclass org::apache::http::protocol::RequestTargetHost::_class = nullptr;
jclass org::apache::http::protocol::BasicHttpProcessor::_class = nullptr;
jclass org::apache::http::protocol::RequestConnControl::_class = nullptr;
jclass org::apache::http::protocol::HttpRequestExecutor::_class = nullptr;
jclass org::apache::http::protocol::ResponseServer::_class = nullptr;
jclass org::apache::http::protocol::RequestUserAgent::_class = nullptr;
jclass org::apache::http::protocol::HttpResponseInterceptorList::_class = nullptr;
jclass org::apache::http::protocol::RequestDate::_class = nullptr;
jclass org::apache::http::protocol::HttpRequestHandlerRegistry::_class = nullptr;
jclass org::apache::http::protocol::ResponseConnControl::_class = nullptr;
jclass org::apache::http::protocol::ResponseDate::_class = nullptr;
jclass org::apache::http::protocol::RequestExpectContinue::_class = nullptr;
jclass org::apache::http::protocol::RequestContent::_class = nullptr;
jclass org::apache::http::protocol::HTTP::_class = nullptr;
jclass org::apache::http::protocol::HttpExpectationVerifier::_class = nullptr;
jclass org::apache::http::protocol::DefaultedHttpContext::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::protocol::BasicHttpContext::BasicHttpContext() : ::java::lang::Object((jobject)0), ::org::apache::http::protocol::HttpContext((jobject)0) {
    if (!::org::apache::http::protocol::BasicHttpContext::_class) ::org::apache::http::protocol::BasicHttpContext::_class = java::fetch_class("org/apache/http/protocol/BasicHttpContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::protocol::BasicHttpContext::BasicHttpContext(const ::org::apache::http::protocol::HttpContext& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::protocol::HttpContext((jobject)0) {
    if (!::org::apache::http::protocol::BasicHttpContext::_class) ::org::apache::http::protocol::BasicHttpContext::_class = java::fetch_class("org/apache/http/protocol/BasicHttpContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/protocol/HttpContext;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Object org::apache::http::protocol::BasicHttpContext::getAttribute(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::protocol::BasicHttpContext::_class) ::org::apache::http::protocol::BasicHttpContext::_class = java::fetch_class("org/apache/http/protocol/BasicHttpContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void org::apache::http::protocol::BasicHttpContext::setAttribute(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::apache::http::protocol::BasicHttpContext::_class) ::org::apache::http::protocol::BasicHttpContext::_class = java::fetch_class("org/apache/http/protocol/BasicHttpContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAttribute", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object org::apache::http::protocol::BasicHttpContext::removeAttribute(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::protocol::BasicHttpContext::_class) ::org::apache::http::protocol::BasicHttpContext::_class = java::fetch_class("org/apache/http/protocol/BasicHttpContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAttribute", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void org::apache::http::protocol::HttpRequestHandler::handle(const ::org::apache::http::HttpRequest& arg0, const ::org::apache::http::HttpResponse& arg1, const ::org::apache::http::protocol::HttpContext& arg2) const {
    if (!::org::apache::http::protocol::HttpRequestHandler::_class) ::org::apache::http::protocol::HttpRequestHandler::_class = java::fetch_class("org/apache/http/protocol/HttpRequestHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "handle", "(Lorg/apache/http/HttpRequest;Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::apache::http::protocol::HttpRequestInterceptorList::addRequestInterceptor(const ::org::apache::http::HttpRequestInterceptor& arg0) const {
    if (!::org::apache::http::protocol::HttpRequestInterceptorList::_class) ::org::apache::http::protocol::HttpRequestInterceptorList::_class = java::fetch_class("org/apache/http/protocol/HttpRequestInterceptorList");
    static jmethodID mid = java::jni->GetMethodID(_class, "addRequestInterceptor", "(Lorg/apache/http/HttpRequestInterceptor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::protocol::HttpRequestInterceptorList::addRequestInterceptor(const ::org::apache::http::HttpRequestInterceptor& arg0, int32_t arg1) const {
    if (!::org::apache::http::protocol::HttpRequestInterceptorList::_class) ::org::apache::http::protocol::HttpRequestInterceptorList::_class = java::fetch_class("org/apache/http/protocol/HttpRequestInterceptorList");
    static jmethodID mid = java::jni->GetMethodID(_class, "addRequestInterceptor", "(Lorg/apache/http/HttpRequestInterceptor;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t org::apache::http::protocol::HttpRequestInterceptorList::getRequestInterceptorCount() const {
    if (!::org::apache::http::protocol::HttpRequestInterceptorList::_class) ::org::apache::http::protocol::HttpRequestInterceptorList::_class = java::fetch_class("org/apache/http/protocol/HttpRequestInterceptorList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestInterceptorCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::org::apache::http::HttpRequestInterceptor org::apache::http::protocol::HttpRequestInterceptorList::getRequestInterceptor(int32_t arg0) const {
    if (!::org::apache::http::protocol::HttpRequestInterceptorList::_class) ::org::apache::http::protocol::HttpRequestInterceptorList::_class = java::fetch_class("org/apache/http/protocol/HttpRequestInterceptorList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestInterceptor", "(I)Lorg/apache/http/HttpRequestInterceptor;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::HttpRequestInterceptor _ret(ret);
    return _ret;
}

void org::apache::http::protocol::HttpRequestInterceptorList::clearRequestInterceptors() const {
    if (!::org::apache::http::protocol::HttpRequestInterceptorList::_class) ::org::apache::http::protocol::HttpRequestInterceptorList::_class = java::fetch_class("org/apache/http/protocol/HttpRequestInterceptorList");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearRequestInterceptors", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::protocol::HttpRequestInterceptorList::removeRequestInterceptorByClass(const ::java::lang::Class& arg0) const {
    if (!::org::apache::http::protocol::HttpRequestInterceptorList::_class) ::org::apache::http::protocol::HttpRequestInterceptorList::_class = java::fetch_class("org/apache/http/protocol/HttpRequestInterceptorList");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeRequestInterceptorByClass", "(Ljava/lang/Class;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::protocol::HttpRequestInterceptorList::setInterceptors(const ::java::util::List& arg0) const {
    if (!::org::apache::http::protocol::HttpRequestInterceptorList::_class) ::org::apache::http::protocol::HttpRequestInterceptorList::_class = java::fetch_class("org/apache/http/protocol/HttpRequestInterceptorList");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInterceptors", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::protocol::ResponseContent::ResponseContent() : ::java::lang::Object((jobject)0), ::org::apache::http::HttpResponseInterceptor((jobject)0) {
    if (!::org::apache::http::protocol::ResponseContent::_class) ::org::apache::http::protocol::ResponseContent::_class = java::fetch_class("org/apache/http/protocol/ResponseContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::protocol::ResponseContent::process(const ::org::apache::http::HttpResponse& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::protocol::ResponseContent::_class) ::org::apache::http::protocol::ResponseContent::_class = java::fetch_class("org/apache/http/protocol/ResponseContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "process", "(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::protocol::SyncBasicHttpContext::SyncBasicHttpContext(const ::org::apache::http::protocol::HttpContext& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::protocol::BasicHttpContext((jobject)0), ::org::apache::http::protocol::HttpContext((jobject)0) {
    if (!::org::apache::http::protocol::SyncBasicHttpContext::_class) ::org::apache::http::protocol::SyncBasicHttpContext::_class = java::fetch_class("org/apache/http/protocol/SyncBasicHttpContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/protocol/HttpContext;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Object org::apache::http::protocol::SyncBasicHttpContext::getAttribute(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::protocol::SyncBasicHttpContext::_class) ::org::apache::http::protocol::SyncBasicHttpContext::_class = java::fetch_class("org/apache/http/protocol/SyncBasicHttpContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void org::apache::http::protocol::SyncBasicHttpContext::setAttribute(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::apache::http::protocol::SyncBasicHttpContext::_class) ::org::apache::http::protocol::SyncBasicHttpContext::_class = java::fetch_class("org/apache/http/protocol/SyncBasicHttpContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAttribute", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object org::apache::http::protocol::SyncBasicHttpContext::removeAttribute(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::protocol::SyncBasicHttpContext::_class) ::org::apache::http::protocol::SyncBasicHttpContext::_class = java::fetch_class("org/apache/http/protocol/SyncBasicHttpContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAttribute", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::org::apache::http::protocol::HttpRequestHandler org::apache::http::protocol::HttpRequestHandlerResolver::lookup(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::protocol::HttpRequestHandlerResolver::_class) ::org::apache::http::protocol::HttpRequestHandlerResolver::_class = java::fetch_class("org/apache/http/protocol/HttpRequestHandlerResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "lookup", "(Ljava/lang/String;)Lorg/apache/http/protocol/HttpRequestHandler;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::protocol::HttpRequestHandler _ret(ret);
    return _ret;
}

::java::lang::Object org::apache::http::protocol::HttpContext::getAttribute(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::protocol::HttpContext::_class) ::org::apache::http::protocol::HttpContext::_class = java::fetch_class("org/apache/http/protocol/HttpContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void org::apache::http::protocol::HttpContext::setAttribute(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::apache::http::protocol::HttpContext::_class) ::org::apache::http::protocol::HttpContext::_class = java::fetch_class("org/apache/http/protocol/HttpContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAttribute", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object org::apache::http::protocol::HttpContext::removeAttribute(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::protocol::HttpContext::_class) ::org::apache::http::protocol::HttpContext::_class = java::fetch_class("org/apache/http/protocol/HttpContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAttribute", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::protocol::UriPatternMatcher::UriPatternMatcher() : ::java::lang::Object((jobject)0) {
    if (!::org::apache::http::protocol::UriPatternMatcher::_class) ::org::apache::http::protocol::UriPatternMatcher::_class = java::fetch_class("org/apache/http/protocol/UriPatternMatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::protocol::UriPatternMatcher::register_(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::apache::http::protocol::UriPatternMatcher::_class) ::org::apache::http::protocol::UriPatternMatcher::_class = java::fetch_class("org/apache/http/protocol/UriPatternMatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "register_", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::protocol::UriPatternMatcher::unregister(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::protocol::UriPatternMatcher::_class) ::org::apache::http::protocol::UriPatternMatcher::_class = java::fetch_class("org/apache/http/protocol/UriPatternMatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregister", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::protocol::UriPatternMatcher::setHandlers(const ::java::util::Map& arg0) const {
    if (!::org::apache::http::protocol::UriPatternMatcher::_class) ::org::apache::http::protocol::UriPatternMatcher::_class = java::fetch_class("org/apache/http/protocol/UriPatternMatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHandlers", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object org::apache::http::protocol::UriPatternMatcher::lookup(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::protocol::UriPatternMatcher::_class) ::org::apache::http::protocol::UriPatternMatcher::_class = java::fetch_class("org/apache/http/protocol/UriPatternMatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "lookup", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::protocol::HttpService::HttpService(const ::org::apache::http::protocol::HttpProcessor& arg0, const ::org::apache::http::ConnectionReuseStrategy& arg1, const ::org::apache::http::HttpResponseFactory& arg2) : ::java::lang::Object((jobject)0) {
    if (!::org::apache::http::protocol::HttpService::_class) ::org::apache::http::protocol::HttpService::_class = java::fetch_class("org/apache/http/protocol/HttpService");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/protocol/HttpProcessor;Lorg/apache/http/ConnectionReuseStrategy;Lorg/apache/http/HttpResponseFactory;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void org::apache::http::protocol::HttpService::setHttpProcessor(const ::org::apache::http::protocol::HttpProcessor& arg0) const {
    if (!::org::apache::http::protocol::HttpService::_class) ::org::apache::http::protocol::HttpService::_class = java::fetch_class("org/apache/http/protocol/HttpService");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHttpProcessor", "(Lorg/apache/http/protocol/HttpProcessor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::protocol::HttpService::setConnReuseStrategy(const ::org::apache::http::ConnectionReuseStrategy& arg0) const {
    if (!::org::apache::http::protocol::HttpService::_class) ::org::apache::http::protocol::HttpService::_class = java::fetch_class("org/apache/http/protocol/HttpService");
    static jmethodID mid = java::jni->GetMethodID(_class, "setConnReuseStrategy", "(Lorg/apache/http/ConnectionReuseStrategy;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::protocol::HttpService::setResponseFactory(const ::org::apache::http::HttpResponseFactory& arg0) const {
    if (!::org::apache::http::protocol::HttpService::_class) ::org::apache::http::protocol::HttpService::_class = java::fetch_class("org/apache/http/protocol/HttpService");
    static jmethodID mid = java::jni->GetMethodID(_class, "setResponseFactory", "(Lorg/apache/http/HttpResponseFactory;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::protocol::HttpService::setHandlerResolver(const ::org::apache::http::protocol::HttpRequestHandlerResolver& arg0) const {
    if (!::org::apache::http::protocol::HttpService::_class) ::org::apache::http::protocol::HttpService::_class = java::fetch_class("org/apache/http/protocol/HttpService");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHandlerResolver", "(Lorg/apache/http/protocol/HttpRequestHandlerResolver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::protocol::HttpService::setExpectationVerifier(const ::org::apache::http::protocol::HttpExpectationVerifier& arg0) const {
    if (!::org::apache::http::protocol::HttpService::_class) ::org::apache::http::protocol::HttpService::_class = java::fetch_class("org/apache/http/protocol/HttpService");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExpectationVerifier", "(Lorg/apache/http/protocol/HttpExpectationVerifier;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::params::HttpParams org::apache::http::protocol::HttpService::getParams() const {
    if (!::org::apache::http::protocol::HttpService::_class) ::org::apache::http::protocol::HttpService::_class = java::fetch_class("org/apache/http/protocol/HttpService");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParams", "()Lorg/apache/http/params/HttpParams;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::params::HttpParams _ret(ret);
    return _ret;
}

void org::apache::http::protocol::HttpService::setParams(const ::org::apache::http::params::HttpParams& arg0) const {
    if (!::org::apache::http::protocol::HttpService::_class) ::org::apache::http::protocol::HttpService::_class = java::fetch_class("org/apache/http/protocol/HttpService");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParams", "(Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::protocol::HttpService::handleRequest(const ::org::apache::http::HttpServerConnection& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::protocol::HttpService::_class) ::org::apache::http::protocol::HttpService::_class = java::fetch_class("org/apache/http/protocol/HttpService");
    static jmethodID mid = java::jni->GetMethodID(_class, "handleRequest", "(Lorg/apache/http/HttpServerConnection;Lorg/apache/http/protocol/HttpContext;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::protocol::HttpDateGenerator::HttpDateGenerator() : ::java::lang::Object((jobject)0) {
    if (!::org::apache::http::protocol::HttpDateGenerator::_class) ::org::apache::http::protocol::HttpDateGenerator::_class = java::fetch_class("org/apache/http/protocol/HttpDateGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String org::apache::http::protocol::HttpDateGenerator::getCurrentDate() const {
    if (!::org::apache::http::protocol::HttpDateGenerator::_class) ::org::apache::http::protocol::HttpDateGenerator::_class = java::fetch_class("org/apache/http/protocol/HttpDateGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentDate", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::protocol::RequestTargetHost::RequestTargetHost() : ::java::lang::Object((jobject)0), ::org::apache::http::HttpRequestInterceptor((jobject)0) {
    if (!::org::apache::http::protocol::RequestTargetHost::_class) ::org::apache::http::protocol::RequestTargetHost::_class = java::fetch_class("org/apache/http/protocol/RequestTargetHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::protocol::RequestTargetHost::process(const ::org::apache::http::HttpRequest& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::protocol::RequestTargetHost::_class) ::org::apache::http::protocol::RequestTargetHost::_class = java::fetch_class("org/apache/http/protocol/RequestTargetHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "process", "(Lorg/apache/http/HttpRequest;Lorg/apache/http/protocol/HttpContext;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::protocol::BasicHttpProcessor::BasicHttpProcessor() : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpRequestInterceptor((jobject)0), ::org::apache::http::HttpResponseInterceptor((jobject)0), ::org::apache::http::protocol::HttpProcessor((jobject)0), ::org::apache::http::protocol::HttpRequestInterceptorList((jobject)0), ::org::apache::http::protocol::HttpResponseInterceptorList((jobject)0) {
    if (!::org::apache::http::protocol::BasicHttpProcessor::_class) ::org::apache::http::protocol::BasicHttpProcessor::_class = java::fetch_class("org/apache/http/protocol/BasicHttpProcessor");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::protocol::BasicHttpProcessor::addRequestInterceptor(const ::org::apache::http::HttpRequestInterceptor& arg0) const {
    if (!::org::apache::http::protocol::BasicHttpProcessor::_class) ::org::apache::http::protocol::BasicHttpProcessor::_class = java::fetch_class("org/apache/http/protocol/BasicHttpProcessor");
    static jmethodID mid = java::jni->GetMethodID(_class, "addRequestInterceptor", "(Lorg/apache/http/HttpRequestInterceptor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::protocol::BasicHttpProcessor::addRequestInterceptor(const ::org::apache::http::HttpRequestInterceptor& arg0, int32_t arg1) const {
    if (!::org::apache::http::protocol::BasicHttpProcessor::_class) ::org::apache::http::protocol::BasicHttpProcessor::_class = java::fetch_class("org/apache/http/protocol/BasicHttpProcessor");
    static jmethodID mid = java::jni->GetMethodID(_class, "addRequestInterceptor", "(Lorg/apache/http/HttpRequestInterceptor;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::protocol::BasicHttpProcessor::addResponseInterceptor(const ::org::apache::http::HttpResponseInterceptor& arg0, int32_t arg1) const {
    if (!::org::apache::http::protocol::BasicHttpProcessor::_class) ::org::apache::http::protocol::BasicHttpProcessor::_class = java::fetch_class("org/apache/http/protocol/BasicHttpProcessor");
    static jmethodID mid = java::jni->GetMethodID(_class, "addResponseInterceptor", "(Lorg/apache/http/HttpResponseInterceptor;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::protocol::BasicHttpProcessor::removeRequestInterceptorByClass(const ::java::lang::Class& arg0) const {
    if (!::org::apache::http::protocol::BasicHttpProcessor::_class) ::org::apache::http::protocol::BasicHttpProcessor::_class = java::fetch_class("org/apache/http/protocol/BasicHttpProcessor");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeRequestInterceptorByClass", "(Ljava/lang/Class;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::protocol::BasicHttpProcessor::removeResponseInterceptorByClass(const ::java::lang::Class& arg0) const {
    if (!::org::apache::http::protocol::BasicHttpProcessor::_class) ::org::apache::http::protocol::BasicHttpProcessor::_class = java::fetch_class("org/apache/http/protocol/BasicHttpProcessor");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeResponseInterceptorByClass", "(Ljava/lang/Class;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::protocol::BasicHttpProcessor::addInterceptor(const ::org::apache::http::HttpRequestInterceptor& arg0) const {
    if (!::org::apache::http::protocol::BasicHttpProcessor::_class) ::org::apache::http::protocol::BasicHttpProcessor::_class = java::fetch_class("org/apache/http/protocol/BasicHttpProcessor");
    static jmethodID mid = java::jni->GetMethodID(_class, "addInterceptor", "(Lorg/apache/http/HttpRequestInterceptor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::protocol::BasicHttpProcessor::addInterceptor(const ::org::apache::http::HttpRequestInterceptor& arg0, int32_t arg1) const {
    if (!::org::apache::http::protocol::BasicHttpProcessor::_class) ::org::apache::http::protocol::BasicHttpProcessor::_class = java::fetch_class("org/apache/http/protocol/BasicHttpProcessor");
    static jmethodID mid = java::jni->GetMethodID(_class, "addInterceptor", "(Lorg/apache/http/HttpRequestInterceptor;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t org::apache::http::protocol::BasicHttpProcessor::getRequestInterceptorCount() const {
    if (!::org::apache::http::protocol::BasicHttpProcessor::_class) ::org::apache::http::protocol::BasicHttpProcessor::_class = java::fetch_class("org/apache/http/protocol/BasicHttpProcessor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestInterceptorCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::org::apache::http::HttpRequestInterceptor org::apache::http::protocol::BasicHttpProcessor::getRequestInterceptor(int32_t arg0) const {
    if (!::org::apache::http::protocol::BasicHttpProcessor::_class) ::org::apache::http::protocol::BasicHttpProcessor::_class = java::fetch_class("org/apache/http/protocol/BasicHttpProcessor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestInterceptor", "(I)Lorg/apache/http/HttpRequestInterceptor;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::HttpRequestInterceptor _ret(ret);
    return _ret;
}

void org::apache::http::protocol::BasicHttpProcessor::clearRequestInterceptors() const {
    if (!::org::apache::http::protocol::BasicHttpProcessor::_class) ::org::apache::http::protocol::BasicHttpProcessor::_class = java::fetch_class("org/apache/http/protocol/BasicHttpProcessor");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearRequestInterceptors", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::protocol::BasicHttpProcessor::addResponseInterceptor(const ::org::apache::http::HttpResponseInterceptor& arg0) const {
    if (!::org::apache::http::protocol::BasicHttpProcessor::_class) ::org::apache::http::protocol::BasicHttpProcessor::_class = java::fetch_class("org/apache/http/protocol/BasicHttpProcessor");
    static jmethodID mid = java::jni->GetMethodID(_class, "addResponseInterceptor", "(Lorg/apache/http/HttpResponseInterceptor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::protocol::BasicHttpProcessor::addInterceptor(const ::org::apache::http::HttpResponseInterceptor& arg0) const {
    if (!::org::apache::http::protocol::BasicHttpProcessor::_class) ::org::apache::http::protocol::BasicHttpProcessor::_class = java::fetch_class("org/apache/http/protocol/BasicHttpProcessor");
    static jmethodID mid = java::jni->GetMethodID(_class, "addInterceptor", "(Lorg/apache/http/HttpResponseInterceptor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::protocol::BasicHttpProcessor::addInterceptor(const ::org::apache::http::HttpResponseInterceptor& arg0, int32_t arg1) const {
    if (!::org::apache::http::protocol::BasicHttpProcessor::_class) ::org::apache::http::protocol::BasicHttpProcessor::_class = java::fetch_class("org/apache/http/protocol/BasicHttpProcessor");
    static jmethodID mid = java::jni->GetMethodID(_class, "addInterceptor", "(Lorg/apache/http/HttpResponseInterceptor;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t org::apache::http::protocol::BasicHttpProcessor::getResponseInterceptorCount() const {
    if (!::org::apache::http::protocol::BasicHttpProcessor::_class) ::org::apache::http::protocol::BasicHttpProcessor::_class = java::fetch_class("org/apache/http/protocol/BasicHttpProcessor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResponseInterceptorCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::org::apache::http::HttpResponseInterceptor org::apache::http::protocol::BasicHttpProcessor::getResponseInterceptor(int32_t arg0) const {
    if (!::org::apache::http::protocol::BasicHttpProcessor::_class) ::org::apache::http::protocol::BasicHttpProcessor::_class = java::fetch_class("org/apache/http/protocol/BasicHttpProcessor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResponseInterceptor", "(I)Lorg/apache/http/HttpResponseInterceptor;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::HttpResponseInterceptor _ret(ret);
    return _ret;
}

void org::apache::http::protocol::BasicHttpProcessor::clearResponseInterceptors() const {
    if (!::org::apache::http::protocol::BasicHttpProcessor::_class) ::org::apache::http::protocol::BasicHttpProcessor::_class = java::fetch_class("org/apache/http/protocol/BasicHttpProcessor");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearResponseInterceptors", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::protocol::BasicHttpProcessor::setInterceptors(const ::java::util::List& arg0) const {
    if (!::org::apache::http::protocol::BasicHttpProcessor::_class) ::org::apache::http::protocol::BasicHttpProcessor::_class = java::fetch_class("org/apache/http/protocol/BasicHttpProcessor");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInterceptors", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::protocol::BasicHttpProcessor::clearInterceptors() const {
    if (!::org::apache::http::protocol::BasicHttpProcessor::_class) ::org::apache::http::protocol::BasicHttpProcessor::_class = java::fetch_class("org/apache/http/protocol/BasicHttpProcessor");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearInterceptors", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::protocol::BasicHttpProcessor::process(const ::org::apache::http::HttpRequest& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::protocol::BasicHttpProcessor::_class) ::org::apache::http::protocol::BasicHttpProcessor::_class = java::fetch_class("org/apache/http/protocol/BasicHttpProcessor");
    static jmethodID mid = java::jni->GetMethodID(_class, "process", "(Lorg/apache/http/HttpRequest;Lorg/apache/http/protocol/HttpContext;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::protocol::BasicHttpProcessor::process(const ::org::apache::http::HttpResponse& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::protocol::BasicHttpProcessor::_class) ::org::apache::http::protocol::BasicHttpProcessor::_class = java::fetch_class("org/apache/http/protocol/BasicHttpProcessor");
    static jmethodID mid = java::jni->GetMethodID(_class, "process", "(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::org::apache::http::protocol::BasicHttpProcessor org::apache::http::protocol::BasicHttpProcessor::copy() const {
    if (!::org::apache::http::protocol::BasicHttpProcessor::_class) ::org::apache::http::protocol::BasicHttpProcessor::_class = java::fetch_class("org/apache/http/protocol/BasicHttpProcessor");
    static jmethodID mid = java::jni->GetMethodID(_class, "copy", "()Lorg/apache/http/protocol/BasicHttpProcessor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::protocol::BasicHttpProcessor _ret(ret);
    return _ret;
}

::java::lang::Object org::apache::http::protocol::BasicHttpProcessor::clone() const {
    if (!::org::apache::http::protocol::BasicHttpProcessor::_class) ::org::apache::http::protocol::BasicHttpProcessor::_class = java::fetch_class("org/apache/http/protocol/BasicHttpProcessor");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::protocol::RequestConnControl::RequestConnControl() : ::java::lang::Object((jobject)0), ::org::apache::http::HttpRequestInterceptor((jobject)0) {
    if (!::org::apache::http::protocol::RequestConnControl::_class) ::org::apache::http::protocol::RequestConnControl::_class = java::fetch_class("org/apache/http/protocol/RequestConnControl");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::protocol::RequestConnControl::process(const ::org::apache::http::HttpRequest& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::protocol::RequestConnControl::_class) ::org::apache::http::protocol::RequestConnControl::_class = java::fetch_class("org/apache/http/protocol/RequestConnControl");
    static jmethodID mid = java::jni->GetMethodID(_class, "process", "(Lorg/apache/http/HttpRequest;Lorg/apache/http/protocol/HttpContext;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::protocol::HttpRequestExecutor::HttpRequestExecutor() : ::java::lang::Object((jobject)0) {
    if (!::org::apache::http::protocol::HttpRequestExecutor::_class) ::org::apache::http::protocol::HttpRequestExecutor::_class = java::fetch_class("org/apache/http/protocol/HttpRequestExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::org::apache::http::HttpResponse org::apache::http::protocol::HttpRequestExecutor::execute(const ::org::apache::http::HttpRequest& arg0, const ::org::apache::http::HttpClientConnection& arg1, const ::org::apache::http::protocol::HttpContext& arg2) const {
    if (!::org::apache::http::protocol::HttpRequestExecutor::_class) ::org::apache::http::protocol::HttpRequestExecutor::_class = java::fetch_class("org/apache/http/protocol/HttpRequestExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Lorg/apache/http/HttpRequest;Lorg/apache/http/HttpClientConnection;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/HttpResponse;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::org::apache::http::HttpResponse _ret(ret);
    return _ret;
}

void org::apache::http::protocol::HttpRequestExecutor::preProcess(const ::org::apache::http::HttpRequest& arg0, const ::org::apache::http::protocol::HttpProcessor& arg1, const ::org::apache::http::protocol::HttpContext& arg2) const {
    if (!::org::apache::http::protocol::HttpRequestExecutor::_class) ::org::apache::http::protocol::HttpRequestExecutor::_class = java::fetch_class("org/apache/http/protocol/HttpRequestExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "preProcess", "(Lorg/apache/http/HttpRequest;Lorg/apache/http/protocol/HttpProcessor;Lorg/apache/http/protocol/HttpContext;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::apache::http::protocol::HttpRequestExecutor::postProcess(const ::org::apache::http::HttpResponse& arg0, const ::org::apache::http::protocol::HttpProcessor& arg1, const ::org::apache::http::protocol::HttpContext& arg2) const {
    if (!::org::apache::http::protocol::HttpRequestExecutor::_class) ::org::apache::http::protocol::HttpRequestExecutor::_class = java::fetch_class("org/apache/http/protocol/HttpRequestExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "postProcess", "(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpProcessor;Lorg/apache/http/protocol/HttpContext;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::protocol::ResponseServer::ResponseServer() : ::java::lang::Object((jobject)0), ::org::apache::http::HttpResponseInterceptor((jobject)0) {
    if (!::org::apache::http::protocol::ResponseServer::_class) ::org::apache::http::protocol::ResponseServer::_class = java::fetch_class("org/apache/http/protocol/ResponseServer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::protocol::ResponseServer::process(const ::org::apache::http::HttpResponse& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::protocol::ResponseServer::_class) ::org::apache::http::protocol::ResponseServer::_class = java::fetch_class("org/apache/http/protocol/ResponseServer");
    static jmethodID mid = java::jni->GetMethodID(_class, "process", "(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::protocol::RequestUserAgent::RequestUserAgent() : ::java::lang::Object((jobject)0), ::org::apache::http::HttpRequestInterceptor((jobject)0) {
    if (!::org::apache::http::protocol::RequestUserAgent::_class) ::org::apache::http::protocol::RequestUserAgent::_class = java::fetch_class("org/apache/http/protocol/RequestUserAgent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::protocol::RequestUserAgent::process(const ::org::apache::http::HttpRequest& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::protocol::RequestUserAgent::_class) ::org::apache::http::protocol::RequestUserAgent::_class = java::fetch_class("org/apache/http/protocol/RequestUserAgent");
    static jmethodID mid = java::jni->GetMethodID(_class, "process", "(Lorg/apache/http/HttpRequest;Lorg/apache/http/protocol/HttpContext;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::protocol::HttpResponseInterceptorList::addResponseInterceptor(const ::org::apache::http::HttpResponseInterceptor& arg0) const {
    if (!::org::apache::http::protocol::HttpResponseInterceptorList::_class) ::org::apache::http::protocol::HttpResponseInterceptorList::_class = java::fetch_class("org/apache/http/protocol/HttpResponseInterceptorList");
    static jmethodID mid = java::jni->GetMethodID(_class, "addResponseInterceptor", "(Lorg/apache/http/HttpResponseInterceptor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::protocol::HttpResponseInterceptorList::addResponseInterceptor(const ::org::apache::http::HttpResponseInterceptor& arg0, int32_t arg1) const {
    if (!::org::apache::http::protocol::HttpResponseInterceptorList::_class) ::org::apache::http::protocol::HttpResponseInterceptorList::_class = java::fetch_class("org/apache/http/protocol/HttpResponseInterceptorList");
    static jmethodID mid = java::jni->GetMethodID(_class, "addResponseInterceptor", "(Lorg/apache/http/HttpResponseInterceptor;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t org::apache::http::protocol::HttpResponseInterceptorList::getResponseInterceptorCount() const {
    if (!::org::apache::http::protocol::HttpResponseInterceptorList::_class) ::org::apache::http::protocol::HttpResponseInterceptorList::_class = java::fetch_class("org/apache/http/protocol/HttpResponseInterceptorList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResponseInterceptorCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::org::apache::http::HttpResponseInterceptor org::apache::http::protocol::HttpResponseInterceptorList::getResponseInterceptor(int32_t arg0) const {
    if (!::org::apache::http::protocol::HttpResponseInterceptorList::_class) ::org::apache::http::protocol::HttpResponseInterceptorList::_class = java::fetch_class("org/apache/http/protocol/HttpResponseInterceptorList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResponseInterceptor", "(I)Lorg/apache/http/HttpResponseInterceptor;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::HttpResponseInterceptor _ret(ret);
    return _ret;
}

void org::apache::http::protocol::HttpResponseInterceptorList::clearResponseInterceptors() const {
    if (!::org::apache::http::protocol::HttpResponseInterceptorList::_class) ::org::apache::http::protocol::HttpResponseInterceptorList::_class = java::fetch_class("org/apache/http/protocol/HttpResponseInterceptorList");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearResponseInterceptors", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::protocol::HttpResponseInterceptorList::removeResponseInterceptorByClass(const ::java::lang::Class& arg0) const {
    if (!::org::apache::http::protocol::HttpResponseInterceptorList::_class) ::org::apache::http::protocol::HttpResponseInterceptorList::_class = java::fetch_class("org/apache/http/protocol/HttpResponseInterceptorList");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeResponseInterceptorByClass", "(Ljava/lang/Class;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::protocol::HttpResponseInterceptorList::setInterceptors(const ::java::util::List& arg0) const {
    if (!::org::apache::http::protocol::HttpResponseInterceptorList::_class) ::org::apache::http::protocol::HttpResponseInterceptorList::_class = java::fetch_class("org/apache/http/protocol/HttpResponseInterceptorList");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInterceptors", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::protocol::RequestDate::RequestDate() : ::java::lang::Object((jobject)0), ::org::apache::http::HttpRequestInterceptor((jobject)0) {
    if (!::org::apache::http::protocol::RequestDate::_class) ::org::apache::http::protocol::RequestDate::_class = java::fetch_class("org/apache/http/protocol/RequestDate");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::protocol::RequestDate::process(const ::org::apache::http::HttpRequest& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::protocol::RequestDate::_class) ::org::apache::http::protocol::RequestDate::_class = java::fetch_class("org/apache/http/protocol/RequestDate");
    static jmethodID mid = java::jni->GetMethodID(_class, "process", "(Lorg/apache/http/HttpRequest;Lorg/apache/http/protocol/HttpContext;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::protocol::HttpRequestHandlerRegistry::HttpRequestHandlerRegistry() : ::java::lang::Object((jobject)0), ::org::apache::http::protocol::HttpRequestHandlerResolver((jobject)0) {
    if (!::org::apache::http::protocol::HttpRequestHandlerRegistry::_class) ::org::apache::http::protocol::HttpRequestHandlerRegistry::_class = java::fetch_class("org/apache/http/protocol/HttpRequestHandlerRegistry");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::protocol::HttpRequestHandlerRegistry::register_(const ::java::lang::String& arg0, const ::org::apache::http::protocol::HttpRequestHandler& arg1) const {
    if (!::org::apache::http::protocol::HttpRequestHandlerRegistry::_class) ::org::apache::http::protocol::HttpRequestHandlerRegistry::_class = java::fetch_class("org/apache/http/protocol/HttpRequestHandlerRegistry");
    static jmethodID mid = java::jni->GetMethodID(_class, "register_", "(Ljava/lang/String;Lorg/apache/http/protocol/HttpRequestHandler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::protocol::HttpRequestHandlerRegistry::unregister(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::protocol::HttpRequestHandlerRegistry::_class) ::org::apache::http::protocol::HttpRequestHandlerRegistry::_class = java::fetch_class("org/apache/http/protocol/HttpRequestHandlerRegistry");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregister", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::protocol::HttpRequestHandlerRegistry::setHandlers(const ::java::util::Map& arg0) const {
    if (!::org::apache::http::protocol::HttpRequestHandlerRegistry::_class) ::org::apache::http::protocol::HttpRequestHandlerRegistry::_class = java::fetch_class("org/apache/http/protocol/HttpRequestHandlerRegistry");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHandlers", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::protocol::HttpRequestHandler org::apache::http::protocol::HttpRequestHandlerRegistry::lookup(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::protocol::HttpRequestHandlerRegistry::_class) ::org::apache::http::protocol::HttpRequestHandlerRegistry::_class = java::fetch_class("org/apache/http/protocol/HttpRequestHandlerRegistry");
    static jmethodID mid = java::jni->GetMethodID(_class, "lookup", "(Ljava/lang/String;)Lorg/apache/http/protocol/HttpRequestHandler;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::protocol::HttpRequestHandler _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::protocol::ResponseConnControl::ResponseConnControl() : ::java::lang::Object((jobject)0), ::org::apache::http::HttpResponseInterceptor((jobject)0) {
    if (!::org::apache::http::protocol::ResponseConnControl::_class) ::org::apache::http::protocol::ResponseConnControl::_class = java::fetch_class("org/apache/http/protocol/ResponseConnControl");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::protocol::ResponseConnControl::process(const ::org::apache::http::HttpResponse& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::protocol::ResponseConnControl::_class) ::org::apache::http::protocol::ResponseConnControl::_class = java::fetch_class("org/apache/http/protocol/ResponseConnControl");
    static jmethodID mid = java::jni->GetMethodID(_class, "process", "(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::protocol::ResponseDate::ResponseDate() : ::java::lang::Object((jobject)0), ::org::apache::http::HttpResponseInterceptor((jobject)0) {
    if (!::org::apache::http::protocol::ResponseDate::_class) ::org::apache::http::protocol::ResponseDate::_class = java::fetch_class("org/apache/http/protocol/ResponseDate");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::protocol::ResponseDate::process(const ::org::apache::http::HttpResponse& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::protocol::ResponseDate::_class) ::org::apache::http::protocol::ResponseDate::_class = java::fetch_class("org/apache/http/protocol/ResponseDate");
    static jmethodID mid = java::jni->GetMethodID(_class, "process", "(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::protocol::RequestExpectContinue::RequestExpectContinue() : ::java::lang::Object((jobject)0), ::org::apache::http::HttpRequestInterceptor((jobject)0) {
    if (!::org::apache::http::protocol::RequestExpectContinue::_class) ::org::apache::http::protocol::RequestExpectContinue::_class = java::fetch_class("org/apache/http/protocol/RequestExpectContinue");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::protocol::RequestExpectContinue::process(const ::org::apache::http::HttpRequest& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::protocol::RequestExpectContinue::_class) ::org::apache::http::protocol::RequestExpectContinue::_class = java::fetch_class("org/apache/http/protocol/RequestExpectContinue");
    static jmethodID mid = java::jni->GetMethodID(_class, "process", "(Lorg/apache/http/HttpRequest;Lorg/apache/http/protocol/HttpContext;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::protocol::RequestContent::RequestContent() : ::java::lang::Object((jobject)0), ::org::apache::http::HttpRequestInterceptor((jobject)0) {
    if (!::org::apache::http::protocol::RequestContent::_class) ::org::apache::http::protocol::RequestContent::_class = java::fetch_class("org/apache/http/protocol/RequestContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::protocol::RequestContent::process(const ::org::apache::http::HttpRequest& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::protocol::RequestContent::_class) ::org::apache::http::protocol::RequestContent::_class = java::fetch_class("org/apache/http/protocol/RequestContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "process", "(Lorg/apache/http/HttpRequest;Lorg/apache/http/protocol/HttpContext;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool org::apache::http::protocol::HTTP::isWhitespace(uint16_t arg0){
    if (!::org::apache::http::protocol::HTTP::_class) ::org::apache::http::protocol::HTTP::_class = java::fetch_class("org/apache/http/protocol/HTTP");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isWhitespace", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void org::apache::http::protocol::HttpExpectationVerifier::verify(const ::org::apache::http::HttpRequest& arg0, const ::org::apache::http::HttpResponse& arg1, const ::org::apache::http::protocol::HttpContext& arg2) const {
    if (!::org::apache::http::protocol::HttpExpectationVerifier::_class) ::org::apache::http::protocol::HttpExpectationVerifier::_class = java::fetch_class("org/apache/http/protocol/HttpExpectationVerifier");
    static jmethodID mid = java::jni->GetMethodID(_class, "verify", "(Lorg/apache/http/HttpRequest;Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::protocol::DefaultedHttpContext::DefaultedHttpContext(const ::org::apache::http::protocol::HttpContext& arg0, const ::org::apache::http::protocol::HttpContext& arg1) : ::java::lang::Object((jobject)0), ::org::apache::http::protocol::HttpContext((jobject)0) {
    if (!::org::apache::http::protocol::DefaultedHttpContext::_class) ::org::apache::http::protocol::DefaultedHttpContext::_class = java::fetch_class("org/apache/http/protocol/DefaultedHttpContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/protocol/HttpContext;Lorg/apache/http/protocol/HttpContext;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::Object org::apache::http::protocol::DefaultedHttpContext::getAttribute(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::protocol::DefaultedHttpContext::_class) ::org::apache::http::protocol::DefaultedHttpContext::_class = java::fetch_class("org/apache/http/protocol/DefaultedHttpContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object org::apache::http::protocol::DefaultedHttpContext::removeAttribute(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::protocol::DefaultedHttpContext::_class) ::org::apache::http::protocol::DefaultedHttpContext::_class = java::fetch_class("org/apache/http/protocol/DefaultedHttpContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAttribute", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void org::apache::http::protocol::DefaultedHttpContext::setAttribute(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::apache::http::protocol::DefaultedHttpContext::_class) ::org::apache::http::protocol::DefaultedHttpContext::_class = java::fetch_class("org/apache/http/protocol/DefaultedHttpContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAttribute", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::org::apache::http::protocol::HttpContext org::apache::http::protocol::DefaultedHttpContext::getDefaults() const {
    if (!::org::apache::http::protocol::DefaultedHttpContext::_class) ::org::apache::http::protocol::DefaultedHttpContext::_class = java::fetch_class("org/apache/http/protocol/DefaultedHttpContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaults", "()Lorg/apache/http/protocol/HttpContext;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::protocol::HttpContext _ret(ret);
    return _ret;
}

