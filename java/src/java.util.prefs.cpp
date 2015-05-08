#include "java-core.hpp"
#include <memory>
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.lang.Class.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"
#include "java.util.prefs.AbstractPreferences.hpp"
#include "java.util.prefs.BackingStoreException.hpp"
#include "java.util.prefs.InvalidPreferencesFormatException.hpp"
#include "java.util.prefs.NodeChangeEvent.hpp"
#include "java.util.prefs.NodeChangeListener.hpp"
#include "java.util.prefs.PreferenceChangeEvent.hpp"
#include "java.util.prefs.PreferenceChangeListener.hpp"
#include "java.util.prefs.Preferences.hpp"
#include "java.util.prefs.PreferencesFactory.hpp"

jclass java::util::prefs::PreferenceChangeEvent::_class = nullptr;
jclass java::util::prefs::PreferenceChangeListener::_class = nullptr;
jclass java::util::prefs::NodeChangeEvent::_class = nullptr;
jclass java::util::prefs::NodeChangeListener::_class = nullptr;
jclass java::util::prefs::BackingStoreException::_class = nullptr;
jclass java::util::prefs::Preferences::_class = nullptr;
jclass java::util::prefs::PreferencesFactory::_class = nullptr;
jclass java::util::prefs::InvalidPreferencesFormatException::_class = nullptr;
jclass java::util::prefs::AbstractPreferences::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::prefs::PreferenceChangeEvent::PreferenceChangeEvent(const ::java::util::prefs::Preferences& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::EventObject((jobject)0) {
    if (!::java::util::prefs::PreferenceChangeEvent::_class) ::java::util::prefs::PreferenceChangeEvent::_class = java::fetch_class("java/util/prefs/PreferenceChangeEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/prefs/Preferences;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::java::lang::String java::util::prefs::PreferenceChangeEvent::getKey() const {
    if (!::java::util::prefs::PreferenceChangeEvent::_class) ::java::util::prefs::PreferenceChangeEvent::_class = java::fetch_class("java/util/prefs/PreferenceChangeEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKey", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::prefs::PreferenceChangeEvent::getNewValue() const {
    if (!::java::util::prefs::PreferenceChangeEvent::_class) ::java::util::prefs::PreferenceChangeEvent::_class = java::fetch_class("java/util/prefs/PreferenceChangeEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNewValue", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::prefs::Preferences java::util::prefs::PreferenceChangeEvent::getNode() const {
    if (!::java::util::prefs::PreferenceChangeEvent::_class) ::java::util::prefs::PreferenceChangeEvent::_class = java::fetch_class("java/util/prefs/PreferenceChangeEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNode", "()Ljava/util/prefs/Preferences;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::prefs::Preferences _ret(ret);
    return _ret;
}

void java::util::prefs::PreferenceChangeListener::preferenceChange(const ::java::util::prefs::PreferenceChangeEvent& arg0) const {
    if (!::java::util::prefs::PreferenceChangeListener::_class) ::java::util::prefs::PreferenceChangeListener::_class = java::fetch_class("java/util/prefs/PreferenceChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "preferenceChange", "(Ljava/util/prefs/PreferenceChangeEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::prefs::NodeChangeEvent::NodeChangeEvent(const ::java::util::prefs::Preferences& arg0, const ::java::util::prefs::Preferences& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::EventObject((jobject)0) {
    if (!::java::util::prefs::NodeChangeEvent::_class) ::java::util::prefs::NodeChangeEvent::_class = java::fetch_class("java/util/prefs/NodeChangeEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/prefs/Preferences;Ljava/util/prefs/Preferences;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::util::prefs::Preferences java::util::prefs::NodeChangeEvent::getParent() const {
    if (!::java::util::prefs::NodeChangeEvent::_class) ::java::util::prefs::NodeChangeEvent::_class = java::fetch_class("java/util/prefs/NodeChangeEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParent", "()Ljava/util/prefs/Preferences;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::prefs::Preferences _ret(ret);
    return _ret;
}

::java::util::prefs::Preferences java::util::prefs::NodeChangeEvent::getChild() const {
    if (!::java::util::prefs::NodeChangeEvent::_class) ::java::util::prefs::NodeChangeEvent::_class = java::fetch_class("java/util/prefs/NodeChangeEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChild", "()Ljava/util/prefs/Preferences;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::prefs::Preferences _ret(ret);
    return _ret;
}

void java::util::prefs::NodeChangeListener::childAdded(const ::java::util::prefs::NodeChangeEvent& arg0) const {
    if (!::java::util::prefs::NodeChangeListener::_class) ::java::util::prefs::NodeChangeListener::_class = java::fetch_class("java/util/prefs/NodeChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "childAdded", "(Ljava/util/prefs/NodeChangeEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::prefs::NodeChangeListener::childRemoved(const ::java::util::prefs::NodeChangeEvent& arg0) const {
    if (!::java::util::prefs::NodeChangeListener::_class) ::java::util::prefs::NodeChangeListener::_class = java::fetch_class("java/util/prefs/NodeChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "childRemoved", "(Ljava/util/prefs/NodeChangeEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::prefs::BackingStoreException::BackingStoreException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::prefs::BackingStoreException::_class) ::java::util::prefs::BackingStoreException::_class = java::fetch_class("java/util/prefs/BackingStoreException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::prefs::BackingStoreException::BackingStoreException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::prefs::BackingStoreException::_class) ::java::util::prefs::BackingStoreException::_class = java::fetch_class("java/util/prefs/BackingStoreException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String java::util::prefs::Preferences::absolutePath() const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "absolutePath", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> java::util::prefs::Preferences::childrenNames() const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "childrenNames", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void java::util::prefs::Preferences::clear() const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::prefs::Preferences::exportNode(const ::java::io::OutputStream& arg0) const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "exportNode", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::prefs::Preferences::exportSubtree(const ::java::io::OutputStream& arg0) const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "exportSubtree", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::prefs::Preferences::flush() const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String java::util::prefs::Preferences::get(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::util::prefs::Preferences::getBoolean(const ::java::lang::String& arg0, bool arg1) const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBoolean", "(Ljava/lang/String;Z)Z");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

std::vector< int8_t> java::util::prefs::Preferences::getByteArray(const ::java::lang::String& arg0, const std::vector< int8_t>& arg1) const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "getByteArray", "(Ljava/lang/String;[B)[B");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

double java::util::prefs::Preferences::getDouble(const ::java::lang::String& arg0, double arg1) const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDouble", "(Ljava/lang/String;D)D");
    jobject _arg0 = arg0.obj;
    double _arg1 = arg1;
    return java::jni->CallDoubleMethod(obj, mid, _arg0, _arg1);
}

float java::util::prefs::Preferences::getFloat(const ::java::lang::String& arg0, float arg1) const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFloat", "(Ljava/lang/String;F)F");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

int32_t java::util::prefs::Preferences::getInt(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInt", "(Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int64_t java::util::prefs::Preferences::getLong(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLong", "(Ljava/lang/String;J)J");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

void java::util::prefs::Preferences::importPreferences(const ::java::io::InputStream& arg0){
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "importPreferences", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

bool java::util::prefs::Preferences::isUserNode() const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "isUserNode", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

std::vector< ::java::lang::String> java::util::prefs::Preferences::keys() const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "keys", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::String java::util::prefs::Preferences::name() const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "name", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::prefs::Preferences java::util::prefs::Preferences::node(const ::java::lang::String& arg0) const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "node", "(Ljava/lang/String;)Ljava/util/prefs/Preferences;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::prefs::Preferences _ret(ret);
    return _ret;
}

bool java::util::prefs::Preferences::nodeExists(const ::java::lang::String& arg0) const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "nodeExists", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::util::prefs::Preferences java::util::prefs::Preferences::parent() const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "parent", "()Ljava/util/prefs/Preferences;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::prefs::Preferences _ret(ret);
    return _ret;
}

void java::util::prefs::Preferences::put(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::prefs::Preferences::putBoolean(const ::java::lang::String& arg0, bool arg1) const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "putBoolean", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::prefs::Preferences::putByteArray(const ::java::lang::String& arg0, const std::vector< int8_t>& arg1) const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "putByteArray", "(Ljava/lang/String;[B)V");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::prefs::Preferences::putDouble(const ::java::lang::String& arg0, double arg1) const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "putDouble", "(Ljava/lang/String;D)V");
    jobject _arg0 = arg0.obj;
    double _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::prefs::Preferences::putFloat(const ::java::lang::String& arg0, float arg1) const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "putFloat", "(Ljava/lang/String;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::prefs::Preferences::putInt(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "putInt", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::prefs::Preferences::putLong(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "putLong", "(Ljava/lang/String;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::prefs::Preferences::remove(const ::java::lang::String& arg0) const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::prefs::Preferences::removeNode() const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeNode", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::prefs::Preferences::addNodeChangeListener(const ::java::util::prefs::NodeChangeListener& arg0) const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "addNodeChangeListener", "(Ljava/util/prefs/NodeChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::prefs::Preferences::addPreferenceChangeListener(const ::java::util::prefs::PreferenceChangeListener& arg0) const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPreferenceChangeListener", "(Ljava/util/prefs/PreferenceChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::prefs::Preferences::removeNodeChangeListener(const ::java::util::prefs::NodeChangeListener& arg0) const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeNodeChangeListener", "(Ljava/util/prefs/NodeChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::prefs::Preferences::removePreferenceChangeListener(const ::java::util::prefs::PreferenceChangeListener& arg0) const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "removePreferenceChangeListener", "(Ljava/util/prefs/PreferenceChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::prefs::Preferences::sync() const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "sync", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::util::prefs::Preferences java::util::prefs::Preferences::systemNodeForPackage(const ::java::lang::Class& arg0){
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "systemNodeForPackage", "(Ljava/lang/Class;)Ljava/util/prefs/Preferences;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::prefs::Preferences _ret(ret);
    return _ret;
}

::java::util::prefs::Preferences java::util::prefs::Preferences::systemRoot(){
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "systemRoot", "()Ljava/util/prefs/Preferences;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::prefs::Preferences _ret(ret);
    return _ret;
}

::java::util::prefs::Preferences java::util::prefs::Preferences::userNodeForPackage(const ::java::lang::Class& arg0){
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "userNodeForPackage", "(Ljava/lang/Class;)Ljava/util/prefs/Preferences;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::prefs::Preferences _ret(ret);
    return _ret;
}

::java::util::prefs::Preferences java::util::prefs::Preferences::userRoot(){
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "userRoot", "()Ljava/util/prefs/Preferences;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::prefs::Preferences _ret(ret);
    return _ret;
}

::java::lang::String java::util::prefs::Preferences::toString() const {
    if (!::java::util::prefs::Preferences::_class) ::java::util::prefs::Preferences::_class = java::fetch_class("java/util/prefs/Preferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::prefs::Preferences java::util::prefs::PreferencesFactory::userRoot() const {
    if (!::java::util::prefs::PreferencesFactory::_class) ::java::util::prefs::PreferencesFactory::_class = java::fetch_class("java/util/prefs/PreferencesFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "userRoot", "()Ljava/util/prefs/Preferences;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::prefs::Preferences _ret(ret);
    return _ret;
}

::java::util::prefs::Preferences java::util::prefs::PreferencesFactory::systemRoot() const {
    if (!::java::util::prefs::PreferencesFactory::_class) ::java::util::prefs::PreferencesFactory::_class = java::fetch_class("java/util/prefs/PreferencesFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "systemRoot", "()Ljava/util/prefs/Preferences;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::prefs::Preferences _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::prefs::InvalidPreferencesFormatException::InvalidPreferencesFormatException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::prefs::InvalidPreferencesFormatException::_class) ::java::util::prefs::InvalidPreferencesFormatException::_class = java::fetch_class("java/util/prefs/InvalidPreferencesFormatException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::prefs::InvalidPreferencesFormatException::InvalidPreferencesFormatException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::prefs::InvalidPreferencesFormatException::_class) ::java::util::prefs::InvalidPreferencesFormatException::_class = java::fetch_class("java/util/prefs/InvalidPreferencesFormatException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::prefs::InvalidPreferencesFormatException::InvalidPreferencesFormatException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::prefs::InvalidPreferencesFormatException::_class) ::java::util::prefs::InvalidPreferencesFormatException::_class = java::fetch_class("java/util/prefs/InvalidPreferencesFormatException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String java::util::prefs::AbstractPreferences::absolutePath() const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "absolutePath", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> java::util::prefs::AbstractPreferences::childrenNames() const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "childrenNames", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void java::util::prefs::AbstractPreferences::clear() const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::prefs::AbstractPreferences::exportNode(const ::java::io::OutputStream& arg0) const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "exportNode", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::prefs::AbstractPreferences::exportSubtree(const ::java::io::OutputStream& arg0) const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "exportSubtree", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::prefs::AbstractPreferences::flush() const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String java::util::prefs::AbstractPreferences::get(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::util::prefs::AbstractPreferences::getBoolean(const ::java::lang::String& arg0, bool arg1) const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBoolean", "(Ljava/lang/String;Z)Z");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

std::vector< int8_t> java::util::prefs::AbstractPreferences::getByteArray(const ::java::lang::String& arg0, const std::vector< int8_t>& arg1) const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "getByteArray", "(Ljava/lang/String;[B)[B");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

double java::util::prefs::AbstractPreferences::getDouble(const ::java::lang::String& arg0, double arg1) const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDouble", "(Ljava/lang/String;D)D");
    jobject _arg0 = arg0.obj;
    double _arg1 = arg1;
    return java::jni->CallDoubleMethod(obj, mid, _arg0, _arg1);
}

float java::util::prefs::AbstractPreferences::getFloat(const ::java::lang::String& arg0, float arg1) const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFloat", "(Ljava/lang/String;F)F");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

int32_t java::util::prefs::AbstractPreferences::getInt(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInt", "(Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int64_t java::util::prefs::AbstractPreferences::getLong(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLong", "(Ljava/lang/String;J)J");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

bool java::util::prefs::AbstractPreferences::isUserNode() const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "isUserNode", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

std::vector< ::java::lang::String> java::util::prefs::AbstractPreferences::keys() const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "keys", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::String java::util::prefs::AbstractPreferences::name() const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "name", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::prefs::Preferences java::util::prefs::AbstractPreferences::node(const ::java::lang::String& arg0) const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "node", "(Ljava/lang/String;)Ljava/util/prefs/Preferences;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::prefs::Preferences _ret(ret);
    return _ret;
}

bool java::util::prefs::AbstractPreferences::nodeExists(const ::java::lang::String& arg0) const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "nodeExists", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::util::prefs::Preferences java::util::prefs::AbstractPreferences::parent() const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "parent", "()Ljava/util/prefs/Preferences;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::prefs::Preferences _ret(ret);
    return _ret;
}

void java::util::prefs::AbstractPreferences::put(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::prefs::AbstractPreferences::putBoolean(const ::java::lang::String& arg0, bool arg1) const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "putBoolean", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::prefs::AbstractPreferences::putByteArray(const ::java::lang::String& arg0, const std::vector< int8_t>& arg1) const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "putByteArray", "(Ljava/lang/String;[B)V");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::prefs::AbstractPreferences::putDouble(const ::java::lang::String& arg0, double arg1) const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "putDouble", "(Ljava/lang/String;D)V");
    jobject _arg0 = arg0.obj;
    double _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::prefs::AbstractPreferences::putFloat(const ::java::lang::String& arg0, float arg1) const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "putFloat", "(Ljava/lang/String;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::prefs::AbstractPreferences::putInt(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "putInt", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::prefs::AbstractPreferences::putLong(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "putLong", "(Ljava/lang/String;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::prefs::AbstractPreferences::remove(const ::java::lang::String& arg0) const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::prefs::AbstractPreferences::removeNode() const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeNode", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::prefs::AbstractPreferences::addNodeChangeListener(const ::java::util::prefs::NodeChangeListener& arg0) const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "addNodeChangeListener", "(Ljava/util/prefs/NodeChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::prefs::AbstractPreferences::addPreferenceChangeListener(const ::java::util::prefs::PreferenceChangeListener& arg0) const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPreferenceChangeListener", "(Ljava/util/prefs/PreferenceChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::prefs::AbstractPreferences::removeNodeChangeListener(const ::java::util::prefs::NodeChangeListener& arg0) const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeNodeChangeListener", "(Ljava/util/prefs/NodeChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::prefs::AbstractPreferences::removePreferenceChangeListener(const ::java::util::prefs::PreferenceChangeListener& arg0) const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "removePreferenceChangeListener", "(Ljava/util/prefs/PreferenceChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::prefs::AbstractPreferences::sync() const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "sync", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String java::util::prefs::AbstractPreferences::toString() const {
    if (!::java::util::prefs::AbstractPreferences::_class) ::java::util::prefs::AbstractPreferences::_class = java::fetch_class("java/util/prefs/AbstractPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

