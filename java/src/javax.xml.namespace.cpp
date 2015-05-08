#include "java-core.hpp"
#include <memory>
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.Iterator.hpp"
#include "javax.xml.namespace.NamespaceContext.hpp"
#include "javax.xml.namespace.QName.hpp"

jclass javax::xml::namespace_::QName::_class = nullptr;
jclass javax::xml::namespace_::NamespaceContext::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::namespace_::QName::QName(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::javax::xml::namespace_::QName::_class) ::javax::xml::namespace_::QName::_class = java::fetch_class("javax/xml/namespace/QName");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::namespace_::QName::QName(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::javax::xml::namespace_::QName::_class) ::javax::xml::namespace_::QName::_class = java::fetch_class("javax/xml/namespace/QName");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::namespace_::QName::QName(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::javax::xml::namespace_::QName::_class) ::javax::xml::namespace_::QName::_class = java::fetch_class("javax/xml/namespace/QName");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String javax::xml::namespace_::QName::getNamespaceURI() const {
    if (!::javax::xml::namespace_::QName::_class) ::javax::xml::namespace_::QName::_class = java::fetch_class("javax/xml/namespace/QName");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNamespaceURI", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String javax::xml::namespace_::QName::getLocalPart() const {
    if (!::javax::xml::namespace_::QName::_class) ::javax::xml::namespace_::QName::_class = java::fetch_class("javax/xml/namespace/QName");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalPart", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String javax::xml::namespace_::QName::getPrefix() const {
    if (!::javax::xml::namespace_::QName::_class) ::javax::xml::namespace_::QName::_class = java::fetch_class("javax/xml/namespace/QName");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrefix", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool javax::xml::namespace_::QName::equals(const ::java::lang::Object& arg0) const {
    if (!::javax::xml::namespace_::QName::_class) ::javax::xml::namespace_::QName::_class = java::fetch_class("javax/xml/namespace/QName");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t javax::xml::namespace_::QName::hashCode() const {
    if (!::javax::xml::namespace_::QName::_class) ::javax::xml::namespace_::QName::_class = java::fetch_class("javax/xml/namespace/QName");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String javax::xml::namespace_::QName::toString() const {
    if (!::javax::xml::namespace_::QName::_class) ::javax::xml::namespace_::QName::_class = java::fetch_class("javax/xml/namespace/QName");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::javax::xml::namespace_::QName javax::xml::namespace_::QName::valueOf(const ::java::lang::String& arg0){
    if (!::javax::xml::namespace_::QName::_class) ::javax::xml::namespace_::QName::_class = java::fetch_class("javax/xml/namespace/QName");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Ljavax/xml/namespace/QName;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::javax::xml::namespace_::QName _ret(ret);
    return _ret;
}

::java::lang::String javax::xml::namespace_::NamespaceContext::getNamespaceURI(const ::java::lang::String& arg0) const {
    if (!::javax::xml::namespace_::NamespaceContext::_class) ::javax::xml::namespace_::NamespaceContext::_class = java::fetch_class("javax/xml/namespace/NamespaceContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String javax::xml::namespace_::NamespaceContext::getPrefix(const ::java::lang::String& arg0) const {
    if (!::javax::xml::namespace_::NamespaceContext::_class) ::javax::xml::namespace_::NamespaceContext::_class = java::fetch_class("javax/xml/namespace/NamespaceContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrefix", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::Iterator javax::xml::namespace_::NamespaceContext::getPrefixes(const ::java::lang::String& arg0) const {
    if (!::javax::xml::namespace_::NamespaceContext::_class) ::javax::xml::namespace_::NamespaceContext::_class = java::fetch_class("javax/xml/namespace/NamespaceContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrefixes", "(Ljava/lang/String;)Ljava/util/Iterator;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

