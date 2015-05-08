#include "java-core.hpp"
#include <memory>
#include "dalvik.system.BaseDexClassLoader.hpp"
#include "dalvik.system.DexClassLoader.hpp"
#include "dalvik.system.DexFile.hpp"
#include "dalvik.system.PathClassLoader.hpp"
#include "java.io.File.hpp"
#include "java.lang.Class.hpp"
#include "java.lang.ClassLoader.hpp"
#include "java.lang.String.hpp"
#include "java.util.Enumeration.hpp"

jclass dalvik::system::BaseDexClassLoader::_class = nullptr;
jclass dalvik::system::DexFile::_class = nullptr;
jclass dalvik::system::DexClassLoader::_class = nullptr;
jclass dalvik::system::PathClassLoader::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::dalvik::system::BaseDexClassLoader::BaseDexClassLoader(const ::java::lang::String& arg0, const ::java::io::File& arg1, const ::java::lang::String& arg2, const ::java::lang::ClassLoader& arg3) : ::java::lang::Object((jobject)0), ::java::lang::ClassLoader((jobject)0) {
    if (!::dalvik::system::BaseDexClassLoader::_class) ::dalvik::system::BaseDexClassLoader::_class = java::fetch_class("dalvik/system/BaseDexClassLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/io/File;Ljava/lang/String;Ljava/lang/ClassLoader;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::java::lang::String dalvik::system::BaseDexClassLoader::findLibrary(const ::java::lang::String& arg0) const {
    if (!::dalvik::system::BaseDexClassLoader::_class) ::dalvik::system::BaseDexClassLoader::_class = java::fetch_class("dalvik/system/BaseDexClassLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "findLibrary", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String dalvik::system::BaseDexClassLoader::toString() const {
    if (!::dalvik::system::BaseDexClassLoader::_class) ::dalvik::system::BaseDexClassLoader::_class = java::fetch_class("dalvik/system/BaseDexClassLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::dalvik::system::DexFile::DexFile(const ::java::io::File& arg0) : ::java::lang::Object((jobject)0) {
    if (!::dalvik::system::DexFile::_class) ::dalvik::system::DexFile::_class = java::fetch_class("dalvik/system/DexFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/File;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::dalvik::system::DexFile::DexFile(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0) {
    if (!::dalvik::system::DexFile::_class) ::dalvik::system::DexFile::_class = java::fetch_class("dalvik/system/DexFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::dalvik::system::DexFile dalvik::system::DexFile::loadDex(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2){
    if (!::dalvik::system::DexFile::_class) ::dalvik::system::DexFile::_class = java::fetch_class("dalvik/system/DexFile");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "loadDex", "(Ljava/lang/String;Ljava/lang/String;I)Ldalvik/system/DexFile;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::dalvik::system::DexFile _ret(ret);
    return _ret;
}

::java::lang::String dalvik::system::DexFile::getName() const {
    if (!::dalvik::system::DexFile::_class) ::dalvik::system::DexFile::_class = java::fetch_class("dalvik/system/DexFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void dalvik::system::DexFile::close() const {
    if (!::dalvik::system::DexFile::_class) ::dalvik::system::DexFile::_class = java::fetch_class("dalvik/system/DexFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::Class dalvik::system::DexFile::loadClass(const ::java::lang::String& arg0, const ::java::lang::ClassLoader& arg1) const {
    if (!::dalvik::system::DexFile::_class) ::dalvik::system::DexFile::_class = java::fetch_class("dalvik/system/DexFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadClass", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Class _ret(ret);
    return _ret;
}

::java::util::Enumeration dalvik::system::DexFile::entries() const {
    if (!::dalvik::system::DexFile::_class) ::dalvik::system::DexFile::_class = java::fetch_class("dalvik/system/DexFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "entries", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

bool dalvik::system::DexFile::isDexOptNeeded(const ::java::lang::String& arg0){
    if (!::dalvik::system::DexFile::_class) ::dalvik::system::DexFile::_class = java::fetch_class("dalvik/system/DexFile");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isDexOptNeeded", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::dalvik::system::DexClassLoader::DexClassLoader(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::ClassLoader& arg3) : ::java::lang::Object((jobject)0), ::dalvik::system::BaseDexClassLoader((jobject)0), ::java::lang::ClassLoader((jobject)0) {
    if (!::dalvik::system::DexClassLoader::_class) ::dalvik::system::DexClassLoader::_class = java::fetch_class("dalvik/system/DexClassLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::dalvik::system::PathClassLoader::PathClassLoader(const ::java::lang::String& arg0, const ::java::lang::ClassLoader& arg1) : ::java::lang::Object((jobject)0), ::dalvik::system::BaseDexClassLoader((jobject)0), ::java::lang::ClassLoader((jobject)0) {
    if (!::dalvik::system::PathClassLoader::_class) ::dalvik::system::PathClassLoader::_class = java::fetch_class("dalvik/system/PathClassLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/ClassLoader;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::dalvik::system::PathClassLoader::PathClassLoader(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::ClassLoader& arg2) : ::java::lang::Object((jobject)0), ::dalvik::system::BaseDexClassLoader((jobject)0), ::java::lang::ClassLoader((jobject)0) {
    if (!::dalvik::system::PathClassLoader::_class) ::dalvik::system::PathClassLoader::_class = java::fetch_class("dalvik/system/PathClassLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

