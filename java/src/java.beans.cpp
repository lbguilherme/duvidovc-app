#include "java-core.hpp"
#include <memory>
#include "java.beans.IndexedPropertyChangeEvent.hpp"
#include "java.beans.PropertyChangeEvent.hpp"
#include "java.beans.PropertyChangeListener.hpp"
#include "java.beans.PropertyChangeListenerProxy.hpp"
#include "java.beans.PropertyChangeSupport.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"

jclass java::beans::PropertyChangeSupport::_class = nullptr;
jclass java::beans::PropertyChangeListenerProxy::_class = nullptr;
jclass java::beans::PropertyChangeEvent::_class = nullptr;
jclass java::beans::PropertyChangeListener::_class = nullptr;
jclass java::beans::IndexedPropertyChangeEvent::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::beans::PropertyChangeSupport::PropertyChangeSupport(const ::java::lang::Object& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::beans::PropertyChangeSupport::_class) ::java::beans::PropertyChangeSupport::_class = java::fetch_class("java/beans/PropertyChangeSupport");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::beans::PropertyChangeSupport::firePropertyChange(const ::java::lang::String& arg0, const ::java::lang::Object& arg1, const ::java::lang::Object& arg2) const {
    if (!::java::beans::PropertyChangeSupport::_class) ::java::beans::PropertyChangeSupport::_class = java::fetch_class("java/beans/PropertyChangeSupport");
    static jmethodID mid = java::jni->GetMethodID(_class, "firePropertyChange", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::beans::PropertyChangeSupport::fireIndexedPropertyChange(const ::java::lang::String& arg0, int32_t arg1, const ::java::lang::Object& arg2, const ::java::lang::Object& arg3) const {
    if (!::java::beans::PropertyChangeSupport::_class) ::java::beans::PropertyChangeSupport::_class = java::fetch_class("java/beans/PropertyChangeSupport");
    static jmethodID mid = java::jni->GetMethodID(_class, "fireIndexedPropertyChange", "(Ljava/lang/String;ILjava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void java::beans::PropertyChangeSupport::removePropertyChangeListener(const ::java::lang::String& arg0, const ::java::beans::PropertyChangeListener& arg1) const {
    if (!::java::beans::PropertyChangeSupport::_class) ::java::beans::PropertyChangeSupport::_class = java::fetch_class("java/beans/PropertyChangeSupport");
    static jmethodID mid = java::jni->GetMethodID(_class, "removePropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::beans::PropertyChangeSupport::addPropertyChangeListener(const ::java::lang::String& arg0, const ::java::beans::PropertyChangeListener& arg1) const {
    if (!::java::beans::PropertyChangeSupport::_class) ::java::beans::PropertyChangeSupport::_class = java::fetch_class("java/beans/PropertyChangeSupport");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

std::vector< ::java::beans::PropertyChangeListener> java::beans::PropertyChangeSupport::getPropertyChangeListeners(const ::java::lang::String& arg0) const {
    if (!::java::beans::PropertyChangeSupport::_class) ::java::beans::PropertyChangeSupport::_class = java::fetch_class("java/beans/PropertyChangeSupport");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPropertyChangeListeners", "(Ljava/lang/String;)[Ljava/beans/PropertyChangeListener;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::beans::PropertyChangeListener> _ret(rets, ::java::beans::PropertyChangeListener((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::beans::PropertyChangeListener retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void java::beans::PropertyChangeSupport::firePropertyChange(const ::java::lang::String& arg0, bool arg1, bool arg2) const {
    if (!::java::beans::PropertyChangeSupport::_class) ::java::beans::PropertyChangeSupport::_class = java::fetch_class("java/beans/PropertyChangeSupport");
    static jmethodID mid = java::jni->GetMethodID(_class, "firePropertyChange", "(Ljava/lang/String;ZZ)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    bool _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::beans::PropertyChangeSupport::fireIndexedPropertyChange(const ::java::lang::String& arg0, int32_t arg1, bool arg2, bool arg3) const {
    if (!::java::beans::PropertyChangeSupport::_class) ::java::beans::PropertyChangeSupport::_class = java::fetch_class("java/beans/PropertyChangeSupport");
    static jmethodID mid = java::jni->GetMethodID(_class, "fireIndexedPropertyChange", "(Ljava/lang/String;IZZ)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    bool _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void java::beans::PropertyChangeSupport::firePropertyChange(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::beans::PropertyChangeSupport::_class) ::java::beans::PropertyChangeSupport::_class = java::fetch_class("java/beans/PropertyChangeSupport");
    static jmethodID mid = java::jni->GetMethodID(_class, "firePropertyChange", "(Ljava/lang/String;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::beans::PropertyChangeSupport::fireIndexedPropertyChange(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::java::beans::PropertyChangeSupport::_class) ::java::beans::PropertyChangeSupport::_class = java::fetch_class("java/beans/PropertyChangeSupport");
    static jmethodID mid = java::jni->GetMethodID(_class, "fireIndexedPropertyChange", "(Ljava/lang/String;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool java::beans::PropertyChangeSupport::hasListeners(const ::java::lang::String& arg0) const {
    if (!::java::beans::PropertyChangeSupport::_class) ::java::beans::PropertyChangeSupport::_class = java::fetch_class("java/beans/PropertyChangeSupport");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasListeners", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::beans::PropertyChangeSupport::removePropertyChangeListener(const ::java::beans::PropertyChangeListener& arg0) const {
    if (!::java::beans::PropertyChangeSupport::_class) ::java::beans::PropertyChangeSupport::_class = java::fetch_class("java/beans/PropertyChangeSupport");
    static jmethodID mid = java::jni->GetMethodID(_class, "removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::beans::PropertyChangeSupport::addPropertyChangeListener(const ::java::beans::PropertyChangeListener& arg0) const {
    if (!::java::beans::PropertyChangeSupport::_class) ::java::beans::PropertyChangeSupport::_class = java::fetch_class("java/beans/PropertyChangeSupport");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::java::beans::PropertyChangeListener> java::beans::PropertyChangeSupport::getPropertyChangeListeners() const {
    if (!::java::beans::PropertyChangeSupport::_class) ::java::beans::PropertyChangeSupport::_class = java::fetch_class("java/beans/PropertyChangeSupport");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPropertyChangeListeners", "()[Ljava/beans/PropertyChangeListener;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::beans::PropertyChangeListener> _ret(rets, ::java::beans::PropertyChangeListener((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::beans::PropertyChangeListener retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void java::beans::PropertyChangeSupport::firePropertyChange(const ::java::beans::PropertyChangeEvent& arg0) const {
    if (!::java::beans::PropertyChangeSupport::_class) ::java::beans::PropertyChangeSupport::_class = java::fetch_class("java/beans/PropertyChangeSupport");
    static jmethodID mid = java::jni->GetMethodID(_class, "firePropertyChange", "(Ljava/beans/PropertyChangeEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::beans::PropertyChangeListenerProxy::PropertyChangeListenerProxy(const ::java::lang::String& arg0, const ::java::beans::PropertyChangeListener& arg1) : ::java::lang::Object((jobject)0), ::java::beans::PropertyChangeListener((jobject)0), ::java::util::EventListener((jobject)0), ::java::util::EventListenerProxy((jobject)0) {
    if (!::java::beans::PropertyChangeListenerProxy::_class) ::java::beans::PropertyChangeListenerProxy::_class = java::fetch_class("java/beans/PropertyChangeListenerProxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String java::beans::PropertyChangeListenerProxy::getPropertyName() const {
    if (!::java::beans::PropertyChangeListenerProxy::_class) ::java::beans::PropertyChangeListenerProxy::_class = java::fetch_class("java/beans/PropertyChangeListenerProxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPropertyName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::beans::PropertyChangeListenerProxy::propertyChange(const ::java::beans::PropertyChangeEvent& arg0) const {
    if (!::java::beans::PropertyChangeListenerProxy::_class) ::java::beans::PropertyChangeListenerProxy::_class = java::fetch_class("java/beans/PropertyChangeListenerProxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "propertyChange", "(Ljava/beans/PropertyChangeEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::beans::PropertyChangeEvent::PropertyChangeEvent(const ::java::lang::Object& arg0, const ::java::lang::String& arg1, const ::java::lang::Object& arg2, const ::java::lang::Object& arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::EventObject((jobject)0) {
    if (!::java::beans::PropertyChangeEvent::_class) ::java::beans::PropertyChangeEvent::_class = java::fetch_class("java/beans/PropertyChangeEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::java::lang::String java::beans::PropertyChangeEvent::getPropertyName() const {
    if (!::java::beans::PropertyChangeEvent::_class) ::java::beans::PropertyChangeEvent::_class = java::fetch_class("java/beans/PropertyChangeEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPropertyName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::beans::PropertyChangeEvent::setPropagationId(const ::java::lang::Object& arg0) const {
    if (!::java::beans::PropertyChangeEvent::_class) ::java::beans::PropertyChangeEvent::_class = java::fetch_class("java/beans/PropertyChangeEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPropagationId", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object java::beans::PropertyChangeEvent::getPropagationId() const {
    if (!::java::beans::PropertyChangeEvent::_class) ::java::beans::PropertyChangeEvent::_class = java::fetch_class("java/beans/PropertyChangeEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPropagationId", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::beans::PropertyChangeEvent::getOldValue() const {
    if (!::java::beans::PropertyChangeEvent::_class) ::java::beans::PropertyChangeEvent::_class = java::fetch_class("java/beans/PropertyChangeEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOldValue", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::beans::PropertyChangeEvent::getNewValue() const {
    if (!::java::beans::PropertyChangeEvent::_class) ::java::beans::PropertyChangeEvent::_class = java::fetch_class("java/beans/PropertyChangeEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNewValue", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::beans::PropertyChangeListener::propertyChange(const ::java::beans::PropertyChangeEvent& arg0) const {
    if (!::java::beans::PropertyChangeListener::_class) ::java::beans::PropertyChangeListener::_class = java::fetch_class("java/beans/PropertyChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "propertyChange", "(Ljava/beans/PropertyChangeEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::beans::IndexedPropertyChangeEvent::IndexedPropertyChangeEvent(const ::java::lang::Object& arg0, const ::java::lang::String& arg1, const ::java::lang::Object& arg2, const ::java::lang::Object& arg3, int32_t arg4) : ::java::lang::Object((jobject)0), ::java::beans::PropertyChangeEvent((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::EventObject((jobject)0) {
    if (!::java::beans::IndexedPropertyChangeEvent::_class) ::java::beans::IndexedPropertyChangeEvent::_class = java::fetch_class("java/beans/IndexedPropertyChangeEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    int32_t _arg4 = arg4;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

int32_t java::beans::IndexedPropertyChangeEvent::getIndex() const {
    if (!::java::beans::IndexedPropertyChangeEvent::_class) ::java::beans::IndexedPropertyChangeEvent::_class = java::fetch_class("java/beans/IndexedPropertyChangeEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

