#include "java-core.hpp"
#include <memory>
#include "android.sax.Element.hpp"
#include "android.sax.ElementListener.hpp"
#include "android.sax.EndElementListener.hpp"
#include "android.sax.EndTextElementListener.hpp"
#include "android.sax.RootElement.hpp"
#include "android.sax.StartElementListener.hpp"
#include "android.sax.TextElementListener.hpp"
#include "java.lang.String.hpp"
#include "org.xml.sax.Attributes.hpp"
#include "org.xml.sax.ContentHandler.hpp"

jclass android::sax::StartElementListener::_class = nullptr;
jclass android::sax::Element::_class = nullptr;
jclass android::sax::ElementListener::_class = nullptr;
jclass android::sax::EndTextElementListener::_class = nullptr;
jclass android::sax::TextElementListener::_class = nullptr;
jclass android::sax::EndElementListener::_class = nullptr;
jclass android::sax::RootElement::_class = nullptr;

void android::sax::StartElementListener::start(const ::org::xml::sax::Attributes& arg0) const {
    if (!::android::sax::StartElementListener::_class) ::android::sax::StartElementListener::_class = java::fetch_class("android/sax/StartElementListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "(Lorg/xml/sax/Attributes;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::sax::Element android::sax::Element::getChild(const ::java::lang::String& arg0) const {
    if (!::android::sax::Element::_class) ::android::sax::Element::_class = java::fetch_class("android/sax/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChild", "(Ljava/lang/String;)Landroid/sax/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::sax::Element _ret(ret);
    return _ret;
}

::android::sax::Element android::sax::Element::getChild(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::sax::Element::_class) ::android::sax::Element::_class = java::fetch_class("android/sax/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChild", "(Ljava/lang/String;Ljava/lang/String;)Landroid/sax/Element;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::sax::Element _ret(ret);
    return _ret;
}

::android::sax::Element android::sax::Element::requireChild(const ::java::lang::String& arg0) const {
    if (!::android::sax::Element::_class) ::android::sax::Element::_class = java::fetch_class("android/sax/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "requireChild", "(Ljava/lang/String;)Landroid/sax/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::sax::Element _ret(ret);
    return _ret;
}

::android::sax::Element android::sax::Element::requireChild(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::sax::Element::_class) ::android::sax::Element::_class = java::fetch_class("android/sax/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "requireChild", "(Ljava/lang/String;Ljava/lang/String;)Landroid/sax/Element;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::sax::Element _ret(ret);
    return _ret;
}

void android::sax::Element::setElementListener(const ::android::sax::ElementListener& arg0) const {
    if (!::android::sax::Element::_class) ::android::sax::Element::_class = java::fetch_class("android/sax/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "setElementListener", "(Landroid/sax/ElementListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::sax::Element::setTextElementListener(const ::android::sax::TextElementListener& arg0) const {
    if (!::android::sax::Element::_class) ::android::sax::Element::_class = java::fetch_class("android/sax/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextElementListener", "(Landroid/sax/TextElementListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::sax::Element::setStartElementListener(const ::android::sax::StartElementListener& arg0) const {
    if (!::android::sax::Element::_class) ::android::sax::Element::_class = java::fetch_class("android/sax/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStartElementListener", "(Landroid/sax/StartElementListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::sax::Element::setEndElementListener(const ::android::sax::EndElementListener& arg0) const {
    if (!::android::sax::Element::_class) ::android::sax::Element::_class = java::fetch_class("android/sax/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEndElementListener", "(Landroid/sax/EndElementListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::sax::Element::setEndTextElementListener(const ::android::sax::EndTextElementListener& arg0) const {
    if (!::android::sax::Element::_class) ::android::sax::Element::_class = java::fetch_class("android/sax/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEndTextElementListener", "(Landroid/sax/EndTextElementListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::sax::Element::toString() const {
    if (!::android::sax::Element::_class) ::android::sax::Element::_class = java::fetch_class("android/sax/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::sax::EndTextElementListener::end(const ::java::lang::String& arg0) const {
    if (!::android::sax::EndTextElementListener::_class) ::android::sax::EndTextElementListener::_class = java::fetch_class("android/sax/EndTextElementListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "end", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::sax::EndElementListener::end() const {
    if (!::android::sax::EndElementListener::_class) ::android::sax::EndElementListener::_class = java::fetch_class("android/sax/EndElementListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "end", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::sax::RootElement::RootElement(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::android::sax::Element((jobject)0) {
    if (!::android::sax::RootElement::_class) ::android::sax::RootElement::_class = java::fetch_class("android/sax/RootElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::sax::RootElement::RootElement(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::sax::Element((jobject)0) {
    if (!::android::sax::RootElement::_class) ::android::sax::RootElement::_class = java::fetch_class("android/sax/RootElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::org::xml::sax::ContentHandler android::sax::RootElement::getContentHandler() const {
    if (!::android::sax::RootElement::_class) ::android::sax::RootElement::_class = java::fetch_class("android/sax/RootElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentHandler", "()Lorg/xml/sax/ContentHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::xml::sax::ContentHandler _ret(ret);
    return _ret;
}

