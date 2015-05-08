#include "java-core.hpp"
#include <memory>
#include "java.lang.String.hpp"
#include "java.util.List.hpp"
#include "org.apache.http.client.entity.UrlEncodedFormEntity.hpp"

jclass org::apache::http::client::entity::UrlEncodedFormEntity::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::entity::UrlEncodedFormEntity::UrlEncodedFormEntity(const ::java::util::List& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpEntity((jobject)0), ::org::apache::http::entity::AbstractHttpEntity((jobject)0), ::org::apache::http::entity::StringEntity((jobject)0) {
    if (!::org::apache::http::client::entity::UrlEncodedFormEntity::_class) ::org::apache::http::client::entity::UrlEncodedFormEntity::_class = java::fetch_class("org/apache/http/client/entity/UrlEncodedFormEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/List;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::entity::UrlEncodedFormEntity::UrlEncodedFormEntity(const ::java::util::List& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpEntity((jobject)0), ::org::apache::http::entity::AbstractHttpEntity((jobject)0), ::org::apache::http::entity::StringEntity((jobject)0) {
    if (!::org::apache::http::client::entity::UrlEncodedFormEntity::_class) ::org::apache::http::client::entity::UrlEncodedFormEntity::_class = java::fetch_class("org/apache/http/client/entity/UrlEncodedFormEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

