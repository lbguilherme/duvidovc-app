#include "java-core.hpp"
#include <memory>
#include "org.apache.http.HttpEntity.hpp"
#include "org.apache.http.HttpMessage.hpp"
#include "org.apache.http.entity.ContentLengthStrategy.hpp"
#include "org.apache.http.impl.entity.EntityDeserializer.hpp"
#include "org.apache.http.impl.entity.EntitySerializer.hpp"
#include "org.apache.http.impl.entity.LaxContentLengthStrategy.hpp"
#include "org.apache.http.impl.entity.StrictContentLengthStrategy.hpp"
#include "org.apache.http.io.SessionInputBuffer.hpp"
#include "org.apache.http.io.SessionOutputBuffer.hpp"

jclass org::apache::http::impl::entity::EntitySerializer::_class = nullptr;
jclass org::apache::http::impl::entity::EntityDeserializer::_class = nullptr;
jclass org::apache::http::impl::entity::StrictContentLengthStrategy::_class = nullptr;
jclass org::apache::http::impl::entity::LaxContentLengthStrategy::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::entity::EntitySerializer::EntitySerializer(const ::org::apache::http::entity::ContentLengthStrategy& arg0) : ::java::lang::Object((jobject)0) {
    if (!::org::apache::http::impl::entity::EntitySerializer::_class) ::org::apache::http::impl::entity::EntitySerializer::_class = java::fetch_class("org/apache/http/impl/entity/EntitySerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/entity/ContentLengthStrategy;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::entity::EntitySerializer::serialize(const ::org::apache::http::io::SessionOutputBuffer& arg0, const ::org::apache::http::HttpMessage& arg1, const ::org::apache::http::HttpEntity& arg2) const {
    if (!::org::apache::http::impl::entity::EntitySerializer::_class) ::org::apache::http::impl::entity::EntitySerializer::_class = java::fetch_class("org/apache/http/impl/entity/EntitySerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "serialize", "(Lorg/apache/http/io/SessionOutputBuffer;Lorg/apache/http/HttpMessage;Lorg/apache/http/HttpEntity;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::entity::EntityDeserializer::EntityDeserializer(const ::org::apache::http::entity::ContentLengthStrategy& arg0) : ::java::lang::Object((jobject)0) {
    if (!::org::apache::http::impl::entity::EntityDeserializer::_class) ::org::apache::http::impl::entity::EntityDeserializer::_class = java::fetch_class("org/apache/http/impl/entity/EntityDeserializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/entity/ContentLengthStrategy;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::org::apache::http::HttpEntity org::apache::http::impl::entity::EntityDeserializer::deserialize(const ::org::apache::http::io::SessionInputBuffer& arg0, const ::org::apache::http::HttpMessage& arg1) const {
    if (!::org::apache::http::impl::entity::EntityDeserializer::_class) ::org::apache::http::impl::entity::EntityDeserializer::_class = java::fetch_class("org/apache/http/impl/entity/EntityDeserializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "deserialize", "(Lorg/apache/http/io/SessionInputBuffer;Lorg/apache/http/HttpMessage;)Lorg/apache/http/HttpEntity;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::HttpEntity _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::entity::StrictContentLengthStrategy::StrictContentLengthStrategy() : ::java::lang::Object((jobject)0), ::org::apache::http::entity::ContentLengthStrategy((jobject)0) {
    if (!::org::apache::http::impl::entity::StrictContentLengthStrategy::_class) ::org::apache::http::impl::entity::StrictContentLengthStrategy::_class = java::fetch_class("org/apache/http/impl/entity/StrictContentLengthStrategy");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int64_t org::apache::http::impl::entity::StrictContentLengthStrategy::determineLength(const ::org::apache::http::HttpMessage& arg0) const {
    if (!::org::apache::http::impl::entity::StrictContentLengthStrategy::_class) ::org::apache::http::impl::entity::StrictContentLengthStrategy::_class = java::fetch_class("org/apache/http/impl/entity/StrictContentLengthStrategy");
    static jmethodID mid = java::jni->GetMethodID(_class, "determineLength", "(Lorg/apache/http/HttpMessage;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::entity::LaxContentLengthStrategy::LaxContentLengthStrategy() : ::java::lang::Object((jobject)0), ::org::apache::http::entity::ContentLengthStrategy((jobject)0) {
    if (!::org::apache::http::impl::entity::LaxContentLengthStrategy::_class) ::org::apache::http::impl::entity::LaxContentLengthStrategy::_class = java::fetch_class("org/apache/http/impl/entity/LaxContentLengthStrategy");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int64_t org::apache::http::impl::entity::LaxContentLengthStrategy::determineLength(const ::org::apache::http::HttpMessage& arg0) const {
    if (!::org::apache::http::impl::entity::LaxContentLengthStrategy::_class) ::org::apache::http::impl::entity::LaxContentLengthStrategy::_class = java::fetch_class("org/apache/http/impl/entity/LaxContentLengthStrategy");
    static jmethodID mid = java::jni->GetMethodID(_class, "determineLength", "(Lorg/apache/http/HttpMessage;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

