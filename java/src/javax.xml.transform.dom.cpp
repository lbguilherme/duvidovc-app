#include "java-core.hpp"
#include <memory>
#include "java.lang.String.hpp"
#include "javax.xml.transform.dom.DOMLocator.hpp"
#include "javax.xml.transform.dom.DOMResult.hpp"
#include "javax.xml.transform.dom.DOMSource.hpp"
#include "org.w3c.dom.Node.hpp"

jclass javax::xml::transform::dom::DOMLocator::_class = nullptr;
jclass javax::xml::transform::dom::DOMResult::_class = nullptr;
jclass javax::xml::transform::dom::DOMSource::_class = nullptr;

::org::w3c::dom::Node javax::xml::transform::dom::DOMLocator::getOriginatingNode() const {
    if (!::javax::xml::transform::dom::DOMLocator::_class) ::javax::xml::transform::dom::DOMLocator::_class = java::fetch_class("javax/xml/transform/dom/DOMLocator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOriginatingNode", "()Lorg/w3c/dom/Node;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::Node _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::dom::DOMResult::DOMResult() : ::java::lang::Object((jobject)0), ::javax::xml::transform::Result((jobject)0) {
    if (!::javax::xml::transform::dom::DOMResult::_class) ::javax::xml::transform::dom::DOMResult::_class = java::fetch_class("javax/xml/transform/dom/DOMResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::dom::DOMResult::DOMResult(const ::org::w3c::dom::Node& arg0) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Result((jobject)0) {
    if (!::javax::xml::transform::dom::DOMResult::_class) ::javax::xml::transform::dom::DOMResult::_class = java::fetch_class("javax/xml/transform/dom/DOMResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/w3c/dom/Node;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::dom::DOMResult::DOMResult(const ::org::w3c::dom::Node& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Result((jobject)0) {
    if (!::javax::xml::transform::dom::DOMResult::_class) ::javax::xml::transform::dom::DOMResult::_class = java::fetch_class("javax/xml/transform/dom/DOMResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/w3c/dom/Node;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::dom::DOMResult::DOMResult(const ::org::w3c::dom::Node& arg0, const ::org::w3c::dom::Node& arg1) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Result((jobject)0) {
    if (!::javax::xml::transform::dom::DOMResult::_class) ::javax::xml::transform::dom::DOMResult::_class = java::fetch_class("javax/xml/transform/dom/DOMResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::dom::DOMResult::DOMResult(const ::org::w3c::dom::Node& arg0, const ::org::w3c::dom::Node& arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Result((jobject)0) {
    if (!::javax::xml::transform::dom::DOMResult::_class) ::javax::xml::transform::dom::DOMResult::_class = java::fetch_class("javax/xml/transform/dom/DOMResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void javax::xml::transform::dom::DOMResult::setNode(const ::org::w3c::dom::Node& arg0) const {
    if (!::javax::xml::transform::dom::DOMResult::_class) ::javax::xml::transform::dom::DOMResult::_class = java::fetch_class("javax/xml/transform/dom/DOMResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNode", "(Lorg/w3c/dom/Node;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::w3c::dom::Node javax::xml::transform::dom::DOMResult::getNode() const {
    if (!::javax::xml::transform::dom::DOMResult::_class) ::javax::xml::transform::dom::DOMResult::_class = java::fetch_class("javax/xml/transform/dom/DOMResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNode", "()Lorg/w3c/dom/Node;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::Node _ret(ret);
    return _ret;
}

void javax::xml::transform::dom::DOMResult::setNextSibling(const ::org::w3c::dom::Node& arg0) const {
    if (!::javax::xml::transform::dom::DOMResult::_class) ::javax::xml::transform::dom::DOMResult::_class = java::fetch_class("javax/xml/transform/dom/DOMResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNextSibling", "(Lorg/w3c/dom/Node;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::w3c::dom::Node javax::xml::transform::dom::DOMResult::getNextSibling() const {
    if (!::javax::xml::transform::dom::DOMResult::_class) ::javax::xml::transform::dom::DOMResult::_class = java::fetch_class("javax/xml/transform/dom/DOMResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNextSibling", "()Lorg/w3c/dom/Node;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::Node _ret(ret);
    return _ret;
}

void javax::xml::transform::dom::DOMResult::setSystemId(const ::java::lang::String& arg0) const {
    if (!::javax::xml::transform::dom::DOMResult::_class) ::javax::xml::transform::dom::DOMResult::_class = java::fetch_class("javax/xml/transform/dom/DOMResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSystemId", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String javax::xml::transform::dom::DOMResult::getSystemId() const {
    if (!::javax::xml::transform::dom::DOMResult::_class) ::javax::xml::transform::dom::DOMResult::_class = java::fetch_class("javax/xml/transform/dom/DOMResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::dom::DOMSource::DOMSource() : ::java::lang::Object((jobject)0), ::javax::xml::transform::Source((jobject)0) {
    if (!::javax::xml::transform::dom::DOMSource::_class) ::javax::xml::transform::dom::DOMSource::_class = java::fetch_class("javax/xml/transform/dom/DOMSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::dom::DOMSource::DOMSource(const ::org::w3c::dom::Node& arg0) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Source((jobject)0) {
    if (!::javax::xml::transform::dom::DOMSource::_class) ::javax::xml::transform::dom::DOMSource::_class = java::fetch_class("javax/xml/transform/dom/DOMSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/w3c/dom/Node;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::transform::dom::DOMSource::DOMSource(const ::org::w3c::dom::Node& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Source((jobject)0) {
    if (!::javax::xml::transform::dom::DOMSource::_class) ::javax::xml::transform::dom::DOMSource::_class = java::fetch_class("javax/xml/transform/dom/DOMSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/w3c/dom/Node;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void javax::xml::transform::dom::DOMSource::setNode(const ::org::w3c::dom::Node& arg0) const {
    if (!::javax::xml::transform::dom::DOMSource::_class) ::javax::xml::transform::dom::DOMSource::_class = java::fetch_class("javax/xml/transform/dom/DOMSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNode", "(Lorg/w3c/dom/Node;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::w3c::dom::Node javax::xml::transform::dom::DOMSource::getNode() const {
    if (!::javax::xml::transform::dom::DOMSource::_class) ::javax::xml::transform::dom::DOMSource::_class = java::fetch_class("javax/xml/transform/dom/DOMSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNode", "()Lorg/w3c/dom/Node;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::Node _ret(ret);
    return _ret;
}

void javax::xml::transform::dom::DOMSource::setSystemId(const ::java::lang::String& arg0) const {
    if (!::javax::xml::transform::dom::DOMSource::_class) ::javax::xml::transform::dom::DOMSource::_class = java::fetch_class("javax/xml/transform/dom/DOMSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSystemId", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String javax::xml::transform::dom::DOMSource::getSystemId() const {
    if (!::javax::xml::transform::dom::DOMSource::_class) ::javax::xml::transform::dom::DOMSource::_class = java::fetch_class("javax/xml/transform/dom/DOMSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

