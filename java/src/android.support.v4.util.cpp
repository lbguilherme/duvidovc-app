#include "java-core.hpp"
#include <memory>
#include "android.support.v4.util.ArrayMap.hpp"
#include "android.support.v4.util.AtomicFile.hpp"
#include "android.support.v4.util.CircularArray.hpp"
#include "android.support.v4.util.ContainerHelpers.hpp"
#include "android.support.v4.util.DebugUtils.hpp"
#include "android.support.v4.util.LogWriter.hpp"
#include "android.support.v4.util.LongSparseArray.hpp"
#include "android.support.v4.util.LruCache.hpp"
#include "android.support.v4.util.MapCollections.hpp"
#include "android.support.v4.util.Pair.hpp"
#include "android.support.v4.util.Pools.hpp"
#include "android.support.v4.util.SimpleArrayMap.hpp"
#include "android.support.v4.util.SparseArrayCompat.hpp"
#include "android.support.v4.util.TimeUtils.hpp"
#include "java.io.File.hpp"
#include "java.io.FileInputStream.hpp"
#include "java.io.FileOutputStream.hpp"
#include "java.io.PrintWriter.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.lang.StringBuilder.hpp"
#include "java.util.Collection.hpp"
#include "java.util.Iterator.hpp"
#include "java.util.Map.hpp"
#include "java.util.Set.hpp"

jclass android::support::v4::util::LruCache::_class = nullptr;
jclass android::support::v4::util::ContainerHelpers::_class = nullptr;
jclass android::support::v4::util::Pools_SynchronizedPool::_class = nullptr;
jclass android::support::v4::util::Pools_SimplePool::_class = nullptr;
jclass android::support::v4::util::MapCollections_MapIterator::_class = nullptr;
jclass android::support::v4::util::AtomicFile::_class = nullptr;
jclass android::support::v4::util::TimeUtils::_class = nullptr;
jclass android::support::v4::util::Pools_Pool::_class = nullptr;
jclass android::support::v4::util::Pair::_class = nullptr;
jclass android::support::v4::util::MapCollections_ValuesCollection::_class = nullptr;
jclass android::support::v4::util::MapCollections_ArrayIterator::_class = nullptr;
jclass android::support::v4::util::LogWriter::_class = nullptr;
jclass android::support::v4::util::MapCollections_KeySet::_class = nullptr;
jclass android::support::v4::util::Pools::_class = nullptr;
jclass android::support::v4::util::ArrayMap::_class = nullptr;
jclass android::support::v4::util::CircularArray::_class = nullptr;
jclass android::support::v4::util::DebugUtils::_class = nullptr;
jclass android::support::v4::util::MapCollections::_class = nullptr;
jclass android::support::v4::util::SparseArrayCompat::_class = nullptr;
jclass android::support::v4::util::MapCollections_EntrySet::_class = nullptr;
jclass android::support::v4::util::LongSparseArray::_class = nullptr;
jclass android::support::v4::util::SimpleArrayMap::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::util::LruCache::LruCache(int32_t arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::util::LruCache::_class) ::android::support::v4::util::LruCache::_class = java::fetch_class("android/support/v4/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::support::v4::util::LruCache::resize(int32_t arg0) const {
    if (!::android::support::v4::util::LruCache::_class) ::android::support::v4::util::LruCache::_class = java::fetch_class("android/support/v4/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "resize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::util::LruCache::get(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::util::LruCache::_class) ::android::support::v4::util::LruCache::_class = java::fetch_class("android/support/v4/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::util::LruCache::put(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::util::LruCache::_class) ::android::support::v4::util::LruCache::_class = java::fetch_class("android/support/v4/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::util::LruCache::trimToSize(int32_t arg0) const {
    if (!::android::support::v4::util::LruCache::_class) ::android::support::v4::util::LruCache::_class = java::fetch_class("android/support/v4/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "trimToSize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::util::LruCache::remove(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::util::LruCache::_class) ::android::support::v4::util::LruCache::_class = java::fetch_class("android/support/v4/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::util::LruCache::evictAll() const {
    if (!::android::support::v4::util::LruCache::_class) ::android::support::v4::util::LruCache::_class = java::fetch_class("android/support/v4/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "evictAll", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::support::v4::util::LruCache::size() const {
    if (!::android::support::v4::util::LruCache::_class) ::android::support::v4::util::LruCache::_class = java::fetch_class("android/support/v4/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::util::LruCache::maxSize() const {
    if (!::android::support::v4::util::LruCache::_class) ::android::support::v4::util::LruCache::_class = java::fetch_class("android/support/v4/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "maxSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::util::LruCache::hitCount() const {
    if (!::android::support::v4::util::LruCache::_class) ::android::support::v4::util::LruCache::_class = java::fetch_class("android/support/v4/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "hitCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::util::LruCache::missCount() const {
    if (!::android::support::v4::util::LruCache::_class) ::android::support::v4::util::LruCache::_class = java::fetch_class("android/support/v4/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "missCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::util::LruCache::createCount() const {
    if (!::android::support::v4::util::LruCache::_class) ::android::support::v4::util::LruCache::_class = java::fetch_class("android/support/v4/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "createCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::util::LruCache::putCount() const {
    if (!::android::support::v4::util::LruCache::_class) ::android::support::v4::util::LruCache::_class = java::fetch_class("android/support/v4/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "putCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::util::LruCache::evictionCount() const {
    if (!::android::support::v4::util::LruCache::_class) ::android::support::v4::util::LruCache::_class = java::fetch_class("android/support/v4/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "evictionCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::Map android::support::v4::util::LruCache::snapshot() const {
    if (!::android::support::v4::util::LruCache::_class) ::android::support::v4::util::LruCache::_class = java::fetch_class("android/support/v4/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "snapshot", "()Ljava/util/Map;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::util::LruCache::toString() const {
    if (!::android::support::v4::util::LruCache::_class) ::android::support::v4::util::LruCache::_class = java::fetch_class("android/support/v4/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::support::v4::util::ContainerHelpers::idealIntArraySize(int32_t arg0){
    if (!::android::support::v4::util::ContainerHelpers::_class) ::android::support::v4::util::ContainerHelpers::_class = java::fetch_class("android/support/v4/util/ContainerHelpers");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "idealIntArraySize", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::support::v4::util::ContainerHelpers::idealLongArraySize(int32_t arg0){
    if (!::android::support::v4::util::ContainerHelpers::_class) ::android::support::v4::util::ContainerHelpers::_class = java::fetch_class("android/support/v4/util/ContainerHelpers");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "idealLongArraySize", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::support::v4::util::ContainerHelpers::idealByteArraySize(int32_t arg0){
    if (!::android::support::v4::util::ContainerHelpers::_class) ::android::support::v4::util::ContainerHelpers::_class = java::fetch_class("android/support/v4/util/ContainerHelpers");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "idealByteArraySize", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

bool android::support::v4::util::ContainerHelpers::equal(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1){
    if (!::android::support::v4::util::ContainerHelpers::_class) ::android::support::v4::util::ContainerHelpers::_class = java::fetch_class("android/support/v4/util/ContainerHelpers");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "equal", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::util::Pools_SynchronizedPool::Pools_SynchronizedPool(int32_t arg0) : ::java::lang::Object((jobject)0), ::android::support::v4::util::Pools_Pool((jobject)0), ::android::support::v4::util::Pools_SimplePool((jobject)0) {
    if (!::android::support::v4::util::Pools_SynchronizedPool::_class) ::android::support::v4::util::Pools_SynchronizedPool::_class = java::fetch_class("android/support/v4/util/Pools$SynchronizedPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Object android::support::v4::util::Pools_SynchronizedPool::acquire() const {
    if (!::android::support::v4::util::Pools_SynchronizedPool::_class) ::android::support::v4::util::Pools_SynchronizedPool::_class = java::fetch_class("android/support/v4/util/Pools$SynchronizedPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "acquire", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool android::support::v4::util::Pools_SynchronizedPool::release(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::util::Pools_SynchronizedPool::_class) ::android::support::v4::util::Pools_SynchronizedPool::_class = java::fetch_class("android/support/v4/util/Pools$SynchronizedPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::util::Pools_SimplePool::Pools_SimplePool(int32_t arg0) : ::java::lang::Object((jobject)0), ::android::support::v4::util::Pools_Pool((jobject)0) {
    if (!::android::support::v4::util::Pools_SimplePool::_class) ::android::support::v4::util::Pools_SimplePool::_class = java::fetch_class("android/support/v4/util/Pools$SimplePool");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Object android::support::v4::util::Pools_SimplePool::acquire() const {
    if (!::android::support::v4::util::Pools_SimplePool::_class) ::android::support::v4::util::Pools_SimplePool::_class = java::fetch_class("android/support/v4/util/Pools$SimplePool");
    static jmethodID mid = java::jni->GetMethodID(_class, "acquire", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool android::support::v4::util::Pools_SimplePool::release(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::util::Pools_SimplePool::_class) ::android::support::v4::util::Pools_SimplePool::_class = java::fetch_class("android/support/v4/util/Pools$SimplePool");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::util::MapCollections_MapIterator::hasNext() const {
    if (!::android::support::v4::util::MapCollections_MapIterator::_class) ::android::support::v4::util::MapCollections_MapIterator::_class = java::fetch_class("android/support/v4/util/MapCollections$MapIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNext", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::util::Map_Entry android::support::v4::util::MapCollections_MapIterator::next() const {
    if (!::android::support::v4::util::MapCollections_MapIterator::_class) ::android::support::v4::util::MapCollections_MapIterator::_class = java::fetch_class("android/support/v4/util/MapCollections$MapIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "next", "()Ljava/util/Map$Entry;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map_Entry _ret(ret);
    return _ret;
}

void android::support::v4::util::MapCollections_MapIterator::remove() const {
    if (!::android::support::v4::util::MapCollections_MapIterator::_class) ::android::support::v4::util::MapCollections_MapIterator::_class = java::fetch_class("android/support/v4/util/MapCollections$MapIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::support::v4::util::MapCollections_MapIterator::equals(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::util::MapCollections_MapIterator::_class) ::android::support::v4::util::MapCollections_MapIterator::_class = java::fetch_class("android/support/v4/util/MapCollections$MapIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::support::v4::util::MapCollections_MapIterator::hashCode() const {
    if (!::android::support::v4::util::MapCollections_MapIterator::_class) ::android::support::v4::util::MapCollections_MapIterator::_class = java::fetch_class("android/support/v4/util/MapCollections$MapIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::support::v4::util::MapCollections_MapIterator::toString() const {
    if (!::android::support::v4::util::MapCollections_MapIterator::_class) ::android::support::v4::util::MapCollections_MapIterator::_class = java::fetch_class("android/support/v4/util/MapCollections$MapIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::util::AtomicFile::AtomicFile(const ::java::io::File& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::util::AtomicFile::_class) ::android::support::v4::util::AtomicFile::_class = java::fetch_class("android/support/v4/util/AtomicFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/File;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::io::File android::support::v4::util::AtomicFile::getBaseFile() const {
    if (!::android::support::v4::util::AtomicFile::_class) ::android::support::v4::util::AtomicFile::_class = java::fetch_class("android/support/v4/util/AtomicFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBaseFile", "()Ljava/io/File;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::File _ret(ret);
    return _ret;
}

void android::support::v4::util::AtomicFile::delete_() const {
    if (!::android::support::v4::util::AtomicFile::_class) ::android::support::v4::util::AtomicFile::_class = java::fetch_class("android/support/v4/util/AtomicFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "delete_", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::io::FileOutputStream android::support::v4::util::AtomicFile::startWrite() const {
    if (!::android::support::v4::util::AtomicFile::_class) ::android::support::v4::util::AtomicFile::_class = java::fetch_class("android/support/v4/util/AtomicFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "startWrite", "()Ljava/io/FileOutputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::FileOutputStream _ret(ret);
    return _ret;
}

void android::support::v4::util::AtomicFile::finishWrite(const ::java::io::FileOutputStream& arg0) const {
    if (!::android::support::v4::util::AtomicFile::_class) ::android::support::v4::util::AtomicFile::_class = java::fetch_class("android/support/v4/util/AtomicFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "finishWrite", "(Ljava/io/FileOutputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::util::AtomicFile::failWrite(const ::java::io::FileOutputStream& arg0) const {
    if (!::android::support::v4::util::AtomicFile::_class) ::android::support::v4::util::AtomicFile::_class = java::fetch_class("android/support/v4/util/AtomicFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "failWrite", "(Ljava/io/FileOutputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::io::FileInputStream android::support::v4::util::AtomicFile::openRead() const {
    if (!::android::support::v4::util::AtomicFile::_class) ::android::support::v4::util::AtomicFile::_class = java::fetch_class("android/support/v4/util/AtomicFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "openRead", "()Ljava/io/FileInputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::FileInputStream _ret(ret);
    return _ret;
}

std::vector< int8_t> android::support::v4::util::AtomicFile::readFully() const {
    if (!::android::support::v4::util::AtomicFile::_class) ::android::support::v4::util::AtomicFile::_class = java::fetch_class("android/support/v4/util/AtomicFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFully", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::util::TimeUtils::TimeUtils() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::util::TimeUtils::_class) ::android::support::v4::util::TimeUtils::_class = java::fetch_class("android/support/v4/util/TimeUtils");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::support::v4::util::TimeUtils::formatDuration(int64_t arg0, const ::java::lang::StringBuilder& arg1){
    if (!::android::support::v4::util::TimeUtils::_class) ::android::support::v4::util::TimeUtils::_class = java::fetch_class("android/support/v4/util/TimeUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatDuration", "(JLjava/lang/StringBuilder;)V");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::util::TimeUtils::formatDuration(int64_t arg0, const ::java::io::PrintWriter& arg1, int32_t arg2){
    if (!::android::support::v4::util::TimeUtils::_class) ::android::support::v4::util::TimeUtils::_class = java::fetch_class("android/support/v4/util/TimeUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatDuration", "(JLjava/io/PrintWriter;I)V");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::util::TimeUtils::formatDuration(int64_t arg0, const ::java::io::PrintWriter& arg1){
    if (!::android::support::v4::util::TimeUtils::_class) ::android::support::v4::util::TimeUtils::_class = java::fetch_class("android/support/v4/util/TimeUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatDuration", "(JLjava/io/PrintWriter;)V");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::util::TimeUtils::formatDuration(int64_t arg0, int64_t arg1, const ::java::io::PrintWriter& arg2){
    if (!::android::support::v4::util::TimeUtils::_class) ::android::support::v4::util::TimeUtils::_class = java::fetch_class("android/support/v4/util/TimeUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatDuration", "(JJLjava/io/PrintWriter;)V");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

::java::lang::Object android::support::v4::util::Pools_Pool::acquire() const {
    if (!::android::support::v4::util::Pools_Pool::_class) ::android::support::v4::util::Pools_Pool::_class = java::fetch_class("android/support/v4/util/Pools$Pool");
    static jmethodID mid = java::jni->GetMethodID(_class, "acquire", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool android::support::v4::util::Pools_Pool::release(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::util::Pools_Pool::_class) ::android::support::v4::util::Pools_Pool::_class = java::fetch_class("android/support/v4/util/Pools$Pool");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::util::Pair::Pair(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::util::Pair::_class) ::android::support::v4::util::Pair::_class = java::fetch_class("android/support/v4/util/Pair");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool android::support::v4::util::Pair::equals(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::util::Pair::_class) ::android::support::v4::util::Pair::_class = java::fetch_class("android/support/v4/util/Pair");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::support::v4::util::Pair::hashCode() const {
    if (!::android::support::v4::util::Pair::_class) ::android::support::v4::util::Pair::_class = java::fetch_class("android/support/v4/util/Pair");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::support::v4::util::Pair android::support::v4::util::Pair::create(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1){
    if (!::android::support::v4::util::Pair::_class) ::android::support::v4::util::Pair::_class = java::fetch_class("android/support/v4/util/Pair");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create", "(Ljava/lang/Object;Ljava/lang/Object;)Landroid/support/v4/util/Pair;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::support::v4::util::Pair _ret(ret);
    return _ret;
}

bool android::support::v4::util::MapCollections_ValuesCollection::addAll(const ::java::util::Collection& arg0) const {
    if (!::android::support::v4::util::MapCollections_ValuesCollection::_class) ::android::support::v4::util::MapCollections_ValuesCollection::_class = java::fetch_class("android/support/v4/util/MapCollections$ValuesCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::util::MapCollections_ValuesCollection::clear() const {
    if (!::android::support::v4::util::MapCollections_ValuesCollection::_class) ::android::support::v4::util::MapCollections_ValuesCollection::_class = java::fetch_class("android/support/v4/util/MapCollections$ValuesCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::support::v4::util::MapCollections_ValuesCollection::contains(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::util::MapCollections_ValuesCollection::_class) ::android::support::v4::util::MapCollections_ValuesCollection::_class = java::fetch_class("android/support/v4/util/MapCollections$ValuesCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::util::MapCollections_ValuesCollection::containsAll(const ::java::util::Collection& arg0) const {
    if (!::android::support::v4::util::MapCollections_ValuesCollection::_class) ::android::support::v4::util::MapCollections_ValuesCollection::_class = java::fetch_class("android/support/v4/util/MapCollections$ValuesCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::util::MapCollections_ValuesCollection::isEmpty() const {
    if (!::android::support::v4::util::MapCollections_ValuesCollection::_class) ::android::support::v4::util::MapCollections_ValuesCollection::_class = java::fetch_class("android/support/v4/util/MapCollections$ValuesCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::util::Iterator android::support::v4::util::MapCollections_ValuesCollection::iterator() const {
    if (!::android::support::v4::util::MapCollections_ValuesCollection::_class) ::android::support::v4::util::MapCollections_ValuesCollection::_class = java::fetch_class("android/support/v4/util/MapCollections$ValuesCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

bool android::support::v4::util::MapCollections_ValuesCollection::remove(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::util::MapCollections_ValuesCollection::_class) ::android::support::v4::util::MapCollections_ValuesCollection::_class = java::fetch_class("android/support/v4/util/MapCollections$ValuesCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::util::MapCollections_ValuesCollection::removeAll(const ::java::util::Collection& arg0) const {
    if (!::android::support::v4::util::MapCollections_ValuesCollection::_class) ::android::support::v4::util::MapCollections_ValuesCollection::_class = java::fetch_class("android/support/v4/util/MapCollections$ValuesCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::util::MapCollections_ValuesCollection::retainAll(const ::java::util::Collection& arg0) const {
    if (!::android::support::v4::util::MapCollections_ValuesCollection::_class) ::android::support::v4::util::MapCollections_ValuesCollection::_class = java::fetch_class("android/support/v4/util/MapCollections$ValuesCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "retainAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::support::v4::util::MapCollections_ValuesCollection::size() const {
    if (!::android::support::v4::util::MapCollections_ValuesCollection::_class) ::android::support::v4::util::MapCollections_ValuesCollection::_class = java::fetch_class("android/support/v4/util/MapCollections$ValuesCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< ::java::lang::Object> android::support::v4::util::MapCollections_ValuesCollection::toArray() const {
    if (!::android::support::v4::util::MapCollections_ValuesCollection::_class) ::android::support::v4::util::MapCollections_ValuesCollection::_class = java::fetch_class("android/support/v4/util/MapCollections$ValuesCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "()[Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::Object> android::support::v4::util::MapCollections_ValuesCollection::toArray(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::android::support::v4::util::MapCollections_ValuesCollection::_class) ::android::support::v4::util::MapCollections_ValuesCollection::_class = java::fetch_class("android/support/v4/util/MapCollections$ValuesCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool android::support::v4::util::MapCollections_ArrayIterator::hasNext() const {
    if (!::android::support::v4::util::MapCollections_ArrayIterator::_class) ::android::support::v4::util::MapCollections_ArrayIterator::_class = java::fetch_class("android/support/v4/util/MapCollections$ArrayIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNext", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Object android::support::v4::util::MapCollections_ArrayIterator::next() const {
    if (!::android::support::v4::util::MapCollections_ArrayIterator::_class) ::android::support::v4::util::MapCollections_ArrayIterator::_class = java::fetch_class("android/support/v4/util/MapCollections$ArrayIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "next", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::util::MapCollections_ArrayIterator::remove() const {
    if (!::android::support::v4::util::MapCollections_ArrayIterator::_class) ::android::support::v4::util::MapCollections_ArrayIterator::_class = java::fetch_class("android/support/v4/util/MapCollections$ArrayIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::util::LogWriter::LogWriter(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {
    if (!::android::support::v4::util::LogWriter::_class) ::android::support::v4::util::LogWriter::_class = java::fetch_class("android/support/v4/util/LogWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::support::v4::util::LogWriter::close() const {
    if (!::android::support::v4::util::LogWriter::_class) ::android::support::v4::util::LogWriter::_class = java::fetch_class("android/support/v4/util/LogWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::util::LogWriter::flush() const {
    if (!::android::support::v4::util::LogWriter::_class) ::android::support::v4::util::LogWriter::_class = java::fetch_class("android/support/v4/util/LogWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::util::LogWriter::write(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::util::LogWriter::_class) ::android::support::v4::util::LogWriter::_class = java::fetch_class("android/support/v4/util/LogWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::support::v4::util::MapCollections_KeySet::addAll(const ::java::util::Collection& arg0) const {
    if (!::android::support::v4::util::MapCollections_KeySet::_class) ::android::support::v4::util::MapCollections_KeySet::_class = java::fetch_class("android/support/v4/util/MapCollections$KeySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::util::MapCollections_KeySet::clear() const {
    if (!::android::support::v4::util::MapCollections_KeySet::_class) ::android::support::v4::util::MapCollections_KeySet::_class = java::fetch_class("android/support/v4/util/MapCollections$KeySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::support::v4::util::MapCollections_KeySet::contains(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::util::MapCollections_KeySet::_class) ::android::support::v4::util::MapCollections_KeySet::_class = java::fetch_class("android/support/v4/util/MapCollections$KeySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::util::MapCollections_KeySet::containsAll(const ::java::util::Collection& arg0) const {
    if (!::android::support::v4::util::MapCollections_KeySet::_class) ::android::support::v4::util::MapCollections_KeySet::_class = java::fetch_class("android/support/v4/util/MapCollections$KeySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::util::MapCollections_KeySet::isEmpty() const {
    if (!::android::support::v4::util::MapCollections_KeySet::_class) ::android::support::v4::util::MapCollections_KeySet::_class = java::fetch_class("android/support/v4/util/MapCollections$KeySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::util::Iterator android::support::v4::util::MapCollections_KeySet::iterator() const {
    if (!::android::support::v4::util::MapCollections_KeySet::_class) ::android::support::v4::util::MapCollections_KeySet::_class = java::fetch_class("android/support/v4/util/MapCollections$KeySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

bool android::support::v4::util::MapCollections_KeySet::remove(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::util::MapCollections_KeySet::_class) ::android::support::v4::util::MapCollections_KeySet::_class = java::fetch_class("android/support/v4/util/MapCollections$KeySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::util::MapCollections_KeySet::removeAll(const ::java::util::Collection& arg0) const {
    if (!::android::support::v4::util::MapCollections_KeySet::_class) ::android::support::v4::util::MapCollections_KeySet::_class = java::fetch_class("android/support/v4/util/MapCollections$KeySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::util::MapCollections_KeySet::retainAll(const ::java::util::Collection& arg0) const {
    if (!::android::support::v4::util::MapCollections_KeySet::_class) ::android::support::v4::util::MapCollections_KeySet::_class = java::fetch_class("android/support/v4/util/MapCollections$KeySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "retainAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::support::v4::util::MapCollections_KeySet::size() const {
    if (!::android::support::v4::util::MapCollections_KeySet::_class) ::android::support::v4::util::MapCollections_KeySet::_class = java::fetch_class("android/support/v4/util/MapCollections$KeySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< ::java::lang::Object> android::support::v4::util::MapCollections_KeySet::toArray() const {
    if (!::android::support::v4::util::MapCollections_KeySet::_class) ::android::support::v4::util::MapCollections_KeySet::_class = java::fetch_class("android/support/v4/util/MapCollections$KeySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "()[Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::Object> android::support::v4::util::MapCollections_KeySet::toArray(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::android::support::v4::util::MapCollections_KeySet::_class) ::android::support::v4::util::MapCollections_KeySet::_class = java::fetch_class("android/support/v4/util/MapCollections$KeySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool android::support::v4::util::MapCollections_KeySet::equals(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::util::MapCollections_KeySet::_class) ::android::support::v4::util::MapCollections_KeySet::_class = java::fetch_class("android/support/v4/util/MapCollections$KeySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::support::v4::util::MapCollections_KeySet::hashCode() const {
    if (!::android::support::v4::util::MapCollections_KeySet::_class) ::android::support::v4::util::MapCollections_KeySet::_class = java::fetch_class("android/support/v4/util/MapCollections$KeySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::util::ArrayMap::ArrayMap() : ::java::lang::Object((jobject)0), ::android::support::v4::util::SimpleArrayMap((jobject)0), ::java::util::Map((jobject)0) {
    if (!::android::support::v4::util::ArrayMap::_class) ::android::support::v4::util::ArrayMap::_class = java::fetch_class("android/support/v4/util/ArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::util::ArrayMap::ArrayMap(int32_t arg0) : ::java::lang::Object((jobject)0), ::android::support::v4::util::SimpleArrayMap((jobject)0), ::java::util::Map((jobject)0) {
    if (!::android::support::v4::util::ArrayMap::_class) ::android::support::v4::util::ArrayMap::_class = java::fetch_class("android/support/v4/util/ArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::util::ArrayMap::ArrayMap(const ::android::support::v4::util::SimpleArrayMap& arg0) : ::java::lang::Object((jobject)0), ::android::support::v4::util::SimpleArrayMap((jobject)0), ::java::util::Map((jobject)0) {
    if (!::android::support::v4::util::ArrayMap::_class) ::android::support::v4::util::ArrayMap::_class = java::fetch_class("android/support/v4/util/ArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/util/SimpleArrayMap;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool android::support::v4::util::ArrayMap::containsAll(const ::java::util::Collection& arg0) const {
    if (!::android::support::v4::util::ArrayMap::_class) ::android::support::v4::util::ArrayMap::_class = java::fetch_class("android/support/v4/util/ArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::util::ArrayMap::putAll(const ::java::util::Map& arg0) const {
    if (!::android::support::v4::util::ArrayMap::_class) ::android::support::v4::util::ArrayMap::_class = java::fetch_class("android/support/v4/util/ArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "putAll", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::util::ArrayMap::removeAll(const ::java::util::Collection& arg0) const {
    if (!::android::support::v4::util::ArrayMap::_class) ::android::support::v4::util::ArrayMap::_class = java::fetch_class("android/support/v4/util/ArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::util::ArrayMap::retainAll(const ::java::util::Collection& arg0) const {
    if (!::android::support::v4::util::ArrayMap::_class) ::android::support::v4::util::ArrayMap::_class = java::fetch_class("android/support/v4/util/ArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "retainAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::util::Set android::support::v4::util::ArrayMap::entrySet() const {
    if (!::android::support::v4::util::ArrayMap::_class) ::android::support::v4::util::ArrayMap::_class = java::fetch_class("android/support/v4/util/ArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "entrySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::Set android::support::v4::util::ArrayMap::keySet() const {
    if (!::android::support::v4::util::ArrayMap::_class) ::android::support::v4::util::ArrayMap::_class = java::fetch_class("android/support/v4/util/ArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "keySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::Collection android::support::v4::util::ArrayMap::values() const {
    if (!::android::support::v4::util::ArrayMap::_class) ::android::support::v4::util::ArrayMap::_class = java::fetch_class("android/support/v4/util/ArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "values", "()Ljava/util/Collection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Collection _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::util::CircularArray::CircularArray() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::util::CircularArray::_class) ::android::support::v4::util::CircularArray::_class = java::fetch_class("android/support/v4/util/CircularArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::util::CircularArray::CircularArray(int32_t arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::util::CircularArray::_class) ::android::support::v4::util::CircularArray::_class = java::fetch_class("android/support/v4/util/CircularArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::support::v4::util::CircularArray::addFirst(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::util::CircularArray::_class) ::android::support::v4::util::CircularArray::_class = java::fetch_class("android/support/v4/util/CircularArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "addFirst", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::util::CircularArray::addLast(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::util::CircularArray::_class) ::android::support::v4::util::CircularArray::_class = java::fetch_class("android/support/v4/util/CircularArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "addLast", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::util::CircularArray::popFirst() const {
    if (!::android::support::v4::util::CircularArray::_class) ::android::support::v4::util::CircularArray::_class = java::fetch_class("android/support/v4/util/CircularArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "popFirst", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::util::CircularArray::popLast() const {
    if (!::android::support::v4::util::CircularArray::_class) ::android::support::v4::util::CircularArray::_class = java::fetch_class("android/support/v4/util/CircularArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "popLast", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::util::CircularArray::getFirst() const {
    if (!::android::support::v4::util::CircularArray::_class) ::android::support::v4::util::CircularArray::_class = java::fetch_class("android/support/v4/util/CircularArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFirst", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::util::CircularArray::getLast() const {
    if (!::android::support::v4::util::CircularArray::_class) ::android::support::v4::util::CircularArray::_class = java::fetch_class("android/support/v4/util/CircularArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLast", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::util::CircularArray::get(int32_t arg0) const {
    if (!::android::support::v4::util::CircularArray::_class) ::android::support::v4::util::CircularArray::_class = java::fetch_class("android/support/v4/util/CircularArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t android::support::v4::util::CircularArray::size() const {
    if (!::android::support::v4::util::CircularArray::_class) ::android::support::v4::util::CircularArray::_class = java::fetch_class("android/support/v4/util/CircularArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::support::v4::util::CircularArray::isEmpty() const {
    if (!::android::support::v4::util::CircularArray::_class) ::android::support::v4::util::CircularArray::_class = java::fetch_class("android/support/v4/util/CircularArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::util::DebugUtils::DebugUtils() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::util::DebugUtils::_class) ::android::support::v4::util::DebugUtils::_class = java::fetch_class("android/support/v4/util/DebugUtils");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::support::v4::util::DebugUtils::buildShortClassTag(const ::java::lang::Object& arg0, const ::java::lang::StringBuilder& arg1){
    if (!::android::support::v4::util::DebugUtils::_class) ::android::support::v4::util::DebugUtils::_class = java::fetch_class("android/support/v4/util/DebugUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "buildShortClassTag", "(Ljava/lang/Object;Ljava/lang/StringBuilder;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

bool android::support::v4::util::MapCollections::containsAllHelper(const ::java::util::Map& arg0, const ::java::util::Collection& arg1){
    if (!::android::support::v4::util::MapCollections::_class) ::android::support::v4::util::MapCollections::_class = java::fetch_class("android/support/v4/util/MapCollections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "containsAllHelper", "(Ljava/util/Map;Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool android::support::v4::util::MapCollections::removeAllHelper(const ::java::util::Map& arg0, const ::java::util::Collection& arg1){
    if (!::android::support::v4::util::MapCollections::_class) ::android::support::v4::util::MapCollections::_class = java::fetch_class("android/support/v4/util/MapCollections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "removeAllHelper", "(Ljava/util/Map;Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool android::support::v4::util::MapCollections::retainAllHelper(const ::java::util::Map& arg0, const ::java::util::Collection& arg1){
    if (!::android::support::v4::util::MapCollections::_class) ::android::support::v4::util::MapCollections::_class = java::fetch_class("android/support/v4/util/MapCollections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "retainAllHelper", "(Ljava/util/Map;Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

std::vector< ::java::lang::Object> android::support::v4::util::MapCollections::toArrayHelper(int32_t arg0) const {
    if (!::android::support::v4::util::MapCollections::_class) ::android::support::v4::util::MapCollections::_class = java::fetch_class("android/support/v4/util/MapCollections");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArrayHelper", "(I)[Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::Object> android::support::v4::util::MapCollections::toArrayHelper(const std::vector< ::java::lang::Object>& arg0, int32_t arg1) const {
    if (!::android::support::v4::util::MapCollections::_class) ::android::support::v4::util::MapCollections::_class = java::fetch_class("android/support/v4/util/MapCollections");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArrayHelper", "([Ljava/lang/Object;I)[Ljava/lang/Object;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool android::support::v4::util::MapCollections::equalsSetHelper(const ::java::util::Set& arg0, const ::java::lang::Object& arg1){
    if (!::android::support::v4::util::MapCollections::_class) ::android::support::v4::util::MapCollections::_class = java::fetch_class("android/support/v4/util/MapCollections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "equalsSetHelper", "(Ljava/util/Set;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

::java::util::Set android::support::v4::util::MapCollections::getEntrySet() const {
    if (!::android::support::v4::util::MapCollections::_class) ::android::support::v4::util::MapCollections::_class = java::fetch_class("android/support/v4/util/MapCollections");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEntrySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::Set android::support::v4::util::MapCollections::getKeySet() const {
    if (!::android::support::v4::util::MapCollections::_class) ::android::support::v4::util::MapCollections::_class = java::fetch_class("android/support/v4/util/MapCollections");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::Collection android::support::v4::util::MapCollections::getValues() const {
    if (!::android::support::v4::util::MapCollections::_class) ::android::support::v4::util::MapCollections::_class = java::fetch_class("android/support/v4/util/MapCollections");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValues", "()Ljava/util/Collection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Collection _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::util::SparseArrayCompat::SparseArrayCompat() : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::support::v4::util::SparseArrayCompat::_class) ::android::support::v4::util::SparseArrayCompat::_class = java::fetch_class("android/support/v4/util/SparseArrayCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::util::SparseArrayCompat::SparseArrayCompat(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::support::v4::util::SparseArrayCompat::_class) ::android::support::v4::util::SparseArrayCompat::_class = java::fetch_class("android/support/v4/util/SparseArrayCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::support::v4::util::SparseArrayCompat android::support::v4::util::SparseArrayCompat::clone() const {
    if (!::android::support::v4::util::SparseArrayCompat::_class) ::android::support::v4::util::SparseArrayCompat::_class = java::fetch_class("android/support/v4/util/SparseArrayCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Landroid/support/v4/util/SparseArrayCompat;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::util::SparseArrayCompat _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::util::SparseArrayCompat::get(int32_t arg0) const {
    if (!::android::support::v4::util::SparseArrayCompat::_class) ::android::support::v4::util::SparseArrayCompat::_class = java::fetch_class("android/support/v4/util/SparseArrayCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::util::SparseArrayCompat::get(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::util::SparseArrayCompat::_class) ::android::support::v4::util::SparseArrayCompat::_class = java::fetch_class("android/support/v4/util/SparseArrayCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(ILjava/lang/Object;)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::util::SparseArrayCompat::delete_(int32_t arg0) const {
    if (!::android::support::v4::util::SparseArrayCompat::_class) ::android::support::v4::util::SparseArrayCompat::_class = java::fetch_class("android/support/v4/util/SparseArrayCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "delete_", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::util::SparseArrayCompat::remove(int32_t arg0) const {
    if (!::android::support::v4::util::SparseArrayCompat::_class) ::android::support::v4::util::SparseArrayCompat::_class = java::fetch_class("android/support/v4/util/SparseArrayCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::util::SparseArrayCompat::removeAt(int32_t arg0) const {
    if (!::android::support::v4::util::SparseArrayCompat::_class) ::android::support::v4::util::SparseArrayCompat::_class = java::fetch_class("android/support/v4/util/SparseArrayCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAt", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::util::SparseArrayCompat::removeAtRange(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::util::SparseArrayCompat::_class) ::android::support::v4::util::SparseArrayCompat::_class = java::fetch_class("android/support/v4/util/SparseArrayCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAtRange", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::util::SparseArrayCompat::put(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::util::SparseArrayCompat::_class) ::android::support::v4::util::SparseArrayCompat::_class = java::fetch_class("android/support/v4/util/SparseArrayCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(ILjava/lang/Object;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::util::SparseArrayCompat::size() const {
    if (!::android::support::v4::util::SparseArrayCompat::_class) ::android::support::v4::util::SparseArrayCompat::_class = java::fetch_class("android/support/v4/util/SparseArrayCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::util::SparseArrayCompat::keyAt(int32_t arg0) const {
    if (!::android::support::v4::util::SparseArrayCompat::_class) ::android::support::v4::util::SparseArrayCompat::_class = java::fetch_class("android/support/v4/util/SparseArrayCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "keyAt", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::util::SparseArrayCompat::valueAt(int32_t arg0) const {
    if (!::android::support::v4::util::SparseArrayCompat::_class) ::android::support::v4::util::SparseArrayCompat::_class = java::fetch_class("android/support/v4/util/SparseArrayCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "valueAt", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::util::SparseArrayCompat::setValueAt(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::util::SparseArrayCompat::_class) ::android::support::v4::util::SparseArrayCompat::_class = java::fetch_class("android/support/v4/util/SparseArrayCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setValueAt", "(ILjava/lang/Object;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::util::SparseArrayCompat::indexOfKey(int32_t arg0) const {
    if (!::android::support::v4::util::SparseArrayCompat::_class) ::android::support::v4::util::SparseArrayCompat::_class = java::fetch_class("android/support/v4/util/SparseArrayCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOfKey", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::util::SparseArrayCompat::indexOfValue(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::util::SparseArrayCompat::_class) ::android::support::v4::util::SparseArrayCompat::_class = java::fetch_class("android/support/v4/util/SparseArrayCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOfValue", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::util::SparseArrayCompat::clear() const {
    if (!::android::support::v4::util::SparseArrayCompat::_class) ::android::support::v4::util::SparseArrayCompat::_class = java::fetch_class("android/support/v4/util/SparseArrayCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::util::SparseArrayCompat::append(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::util::SparseArrayCompat::_class) ::android::support::v4::util::SparseArrayCompat::_class = java::fetch_class("android/support/v4/util/SparseArrayCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(ILjava/lang/Object;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::support::v4::util::SparseArrayCompat::toString() const {
    if (!::android::support::v4::util::SparseArrayCompat::_class) ::android::support::v4::util::SparseArrayCompat::_class = java::fetch_class("android/support/v4/util/SparseArrayCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::support::v4::util::MapCollections_EntrySet::add(const ::java::util::Map_Entry& arg0) const {
    if (!::android::support::v4::util::MapCollections_EntrySet::_class) ::android::support::v4::util::MapCollections_EntrySet::_class = java::fetch_class("android/support/v4/util/MapCollections$EntrySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/util/Map$Entry;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::util::MapCollections_EntrySet::addAll(const ::java::util::Collection& arg0) const {
    if (!::android::support::v4::util::MapCollections_EntrySet::_class) ::android::support::v4::util::MapCollections_EntrySet::_class = java::fetch_class("android/support/v4/util/MapCollections$EntrySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::util::MapCollections_EntrySet::clear() const {
    if (!::android::support::v4::util::MapCollections_EntrySet::_class) ::android::support::v4::util::MapCollections_EntrySet::_class = java::fetch_class("android/support/v4/util/MapCollections$EntrySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::support::v4::util::MapCollections_EntrySet::contains(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::util::MapCollections_EntrySet::_class) ::android::support::v4::util::MapCollections_EntrySet::_class = java::fetch_class("android/support/v4/util/MapCollections$EntrySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::util::MapCollections_EntrySet::containsAll(const ::java::util::Collection& arg0) const {
    if (!::android::support::v4::util::MapCollections_EntrySet::_class) ::android::support::v4::util::MapCollections_EntrySet::_class = java::fetch_class("android/support/v4/util/MapCollections$EntrySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::util::MapCollections_EntrySet::isEmpty() const {
    if (!::android::support::v4::util::MapCollections_EntrySet::_class) ::android::support::v4::util::MapCollections_EntrySet::_class = java::fetch_class("android/support/v4/util/MapCollections$EntrySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::util::Iterator android::support::v4::util::MapCollections_EntrySet::iterator() const {
    if (!::android::support::v4::util::MapCollections_EntrySet::_class) ::android::support::v4::util::MapCollections_EntrySet::_class = java::fetch_class("android/support/v4/util/MapCollections$EntrySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

bool android::support::v4::util::MapCollections_EntrySet::remove(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::util::MapCollections_EntrySet::_class) ::android::support::v4::util::MapCollections_EntrySet::_class = java::fetch_class("android/support/v4/util/MapCollections$EntrySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::util::MapCollections_EntrySet::removeAll(const ::java::util::Collection& arg0) const {
    if (!::android::support::v4::util::MapCollections_EntrySet::_class) ::android::support::v4::util::MapCollections_EntrySet::_class = java::fetch_class("android/support/v4/util/MapCollections$EntrySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::util::MapCollections_EntrySet::retainAll(const ::java::util::Collection& arg0) const {
    if (!::android::support::v4::util::MapCollections_EntrySet::_class) ::android::support::v4::util::MapCollections_EntrySet::_class = java::fetch_class("android/support/v4/util/MapCollections$EntrySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "retainAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::support::v4::util::MapCollections_EntrySet::size() const {
    if (!::android::support::v4::util::MapCollections_EntrySet::_class) ::android::support::v4::util::MapCollections_EntrySet::_class = java::fetch_class("android/support/v4/util/MapCollections$EntrySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< ::java::lang::Object> android::support::v4::util::MapCollections_EntrySet::toArray() const {
    if (!::android::support::v4::util::MapCollections_EntrySet::_class) ::android::support::v4::util::MapCollections_EntrySet::_class = java::fetch_class("android/support/v4/util/MapCollections$EntrySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "()[Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::Object> android::support::v4::util::MapCollections_EntrySet::toArray(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::android::support::v4::util::MapCollections_EntrySet::_class) ::android::support::v4::util::MapCollections_EntrySet::_class = java::fetch_class("android/support/v4/util/MapCollections$EntrySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool android::support::v4::util::MapCollections_EntrySet::equals(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::util::MapCollections_EntrySet::_class) ::android::support::v4::util::MapCollections_EntrySet::_class = java::fetch_class("android/support/v4/util/MapCollections$EntrySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::support::v4::util::MapCollections_EntrySet::hashCode() const {
    if (!::android::support::v4::util::MapCollections_EntrySet::_class) ::android::support::v4::util::MapCollections_EntrySet::_class = java::fetch_class("android/support/v4/util/MapCollections$EntrySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::support::v4::util::MapCollections_EntrySet::add(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::util::MapCollections_EntrySet::_class) ::android::support::v4::util::MapCollections_EntrySet::_class = java::fetch_class("android/support/v4/util/MapCollections$EntrySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::util::LongSparseArray::LongSparseArray() : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::support::v4::util::LongSparseArray::_class) ::android::support::v4::util::LongSparseArray::_class = java::fetch_class("android/support/v4/util/LongSparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::util::LongSparseArray::LongSparseArray(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::support::v4::util::LongSparseArray::_class) ::android::support::v4::util::LongSparseArray::_class = java::fetch_class("android/support/v4/util/LongSparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::support::v4::util::LongSparseArray android::support::v4::util::LongSparseArray::clone() const {
    if (!::android::support::v4::util::LongSparseArray::_class) ::android::support::v4::util::LongSparseArray::_class = java::fetch_class("android/support/v4/util/LongSparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Landroid/support/v4/util/LongSparseArray;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::util::LongSparseArray _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::util::LongSparseArray::get(int64_t arg0) const {
    if (!::android::support::v4::util::LongSparseArray::_class) ::android::support::v4::util::LongSparseArray::_class = java::fetch_class("android/support/v4/util/LongSparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(J)Ljava/lang/Object;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::util::LongSparseArray::get(int64_t arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::util::LongSparseArray::_class) ::android::support::v4::util::LongSparseArray::_class = java::fetch_class("android/support/v4/util/LongSparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(JLjava/lang/Object;)Ljava/lang/Object;");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::util::LongSparseArray::delete_(int64_t arg0) const {
    if (!::android::support::v4::util::LongSparseArray::_class) ::android::support::v4::util::LongSparseArray::_class = java::fetch_class("android/support/v4/util/LongSparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "delete_", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::util::LongSparseArray::remove(int64_t arg0) const {
    if (!::android::support::v4::util::LongSparseArray::_class) ::android::support::v4::util::LongSparseArray::_class = java::fetch_class("android/support/v4/util/LongSparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::util::LongSparseArray::removeAt(int32_t arg0) const {
    if (!::android::support::v4::util::LongSparseArray::_class) ::android::support::v4::util::LongSparseArray::_class = java::fetch_class("android/support/v4/util/LongSparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAt", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::util::LongSparseArray::put(int64_t arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::util::LongSparseArray::_class) ::android::support::v4::util::LongSparseArray::_class = java::fetch_class("android/support/v4/util/LongSparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(JLjava/lang/Object;)V");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::util::LongSparseArray::size() const {
    if (!::android::support::v4::util::LongSparseArray::_class) ::android::support::v4::util::LongSparseArray::_class = java::fetch_class("android/support/v4/util/LongSparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t android::support::v4::util::LongSparseArray::keyAt(int32_t arg0) const {
    if (!::android::support::v4::util::LongSparseArray::_class) ::android::support::v4::util::LongSparseArray::_class = java::fetch_class("android/support/v4/util/LongSparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "keyAt", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::util::LongSparseArray::valueAt(int32_t arg0) const {
    if (!::android::support::v4::util::LongSparseArray::_class) ::android::support::v4::util::LongSparseArray::_class = java::fetch_class("android/support/v4/util/LongSparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "valueAt", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::util::LongSparseArray::setValueAt(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::util::LongSparseArray::_class) ::android::support::v4::util::LongSparseArray::_class = java::fetch_class("android/support/v4/util/LongSparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "setValueAt", "(ILjava/lang/Object;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::util::LongSparseArray::indexOfKey(int64_t arg0) const {
    if (!::android::support::v4::util::LongSparseArray::_class) ::android::support::v4::util::LongSparseArray::_class = java::fetch_class("android/support/v4/util/LongSparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOfKey", "(J)I");
    int64_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::util::LongSparseArray::indexOfValue(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::util::LongSparseArray::_class) ::android::support::v4::util::LongSparseArray::_class = java::fetch_class("android/support/v4/util/LongSparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOfValue", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::util::LongSparseArray::clear() const {
    if (!::android::support::v4::util::LongSparseArray::_class) ::android::support::v4::util::LongSparseArray::_class = java::fetch_class("android/support/v4/util/LongSparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::util::LongSparseArray::append(int64_t arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::util::LongSparseArray::_class) ::android::support::v4::util::LongSparseArray::_class = java::fetch_class("android/support/v4/util/LongSparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(JLjava/lang/Object;)V");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::support::v4::util::LongSparseArray::toString() const {
    if (!::android::support::v4::util::LongSparseArray::_class) ::android::support::v4::util::LongSparseArray::_class = java::fetch_class("android/support/v4/util/LongSparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::util::SimpleArrayMap::SimpleArrayMap() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::util::SimpleArrayMap::_class) ::android::support::v4::util::SimpleArrayMap::_class = java::fetch_class("android/support/v4/util/SimpleArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::util::SimpleArrayMap::SimpleArrayMap(int32_t arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::util::SimpleArrayMap::_class) ::android::support::v4::util::SimpleArrayMap::_class = java::fetch_class("android/support/v4/util/SimpleArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::support::v4::util::SimpleArrayMap::clear() const {
    if (!::android::support::v4::util::SimpleArrayMap::_class) ::android::support::v4::util::SimpleArrayMap::_class = java::fetch_class("android/support/v4/util/SimpleArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::util::SimpleArrayMap::ensureCapacity(int32_t arg0) const {
    if (!::android::support::v4::util::SimpleArrayMap::_class) ::android::support::v4::util::SimpleArrayMap::_class = java::fetch_class("android/support/v4/util/SimpleArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "ensureCapacity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::util::SimpleArrayMap::containsKey(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::util::SimpleArrayMap::_class) ::android::support::v4::util::SimpleArrayMap::_class = java::fetch_class("android/support/v4/util/SimpleArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsKey", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::support::v4::util::SimpleArrayMap::indexOfKey(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::util::SimpleArrayMap::_class) ::android::support::v4::util::SimpleArrayMap::_class = java::fetch_class("android/support/v4/util/SimpleArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOfKey", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::support::v4::util::SimpleArrayMap::containsValue(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::util::SimpleArrayMap::_class) ::android::support::v4::util::SimpleArrayMap::_class = java::fetch_class("android/support/v4/util/SimpleArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsValue", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::util::SimpleArrayMap::get(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::util::SimpleArrayMap::_class) ::android::support::v4::util::SimpleArrayMap::_class = java::fetch_class("android/support/v4/util/SimpleArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::util::SimpleArrayMap::keyAt(int32_t arg0) const {
    if (!::android::support::v4::util::SimpleArrayMap::_class) ::android::support::v4::util::SimpleArrayMap::_class = java::fetch_class("android/support/v4/util/SimpleArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "keyAt", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::util::SimpleArrayMap::valueAt(int32_t arg0) const {
    if (!::android::support::v4::util::SimpleArrayMap::_class) ::android::support::v4::util::SimpleArrayMap::_class = java::fetch_class("android/support/v4/util/SimpleArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "valueAt", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::util::SimpleArrayMap::setValueAt(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::util::SimpleArrayMap::_class) ::android::support::v4::util::SimpleArrayMap::_class = java::fetch_class("android/support/v4/util/SimpleArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "setValueAt", "(ILjava/lang/Object;)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool android::support::v4::util::SimpleArrayMap::isEmpty() const {
    if (!::android::support::v4::util::SimpleArrayMap::_class) ::android::support::v4::util::SimpleArrayMap::_class = java::fetch_class("android/support/v4/util/SimpleArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Object android::support::v4::util::SimpleArrayMap::put(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::util::SimpleArrayMap::_class) ::android::support::v4::util::SimpleArrayMap::_class = java::fetch_class("android/support/v4/util/SimpleArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::util::SimpleArrayMap::putAll(const ::android::support::v4::util::SimpleArrayMap& arg0) const {
    if (!::android::support::v4::util::SimpleArrayMap::_class) ::android::support::v4::util::SimpleArrayMap::_class = java::fetch_class("android/support/v4/util/SimpleArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "putAll", "(Landroid/support/v4/util/SimpleArrayMap;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::util::SimpleArrayMap::remove(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::util::SimpleArrayMap::_class) ::android::support::v4::util::SimpleArrayMap::_class = java::fetch_class("android/support/v4/util/SimpleArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::util::SimpleArrayMap::removeAt(int32_t arg0) const {
    if (!::android::support::v4::util::SimpleArrayMap::_class) ::android::support::v4::util::SimpleArrayMap::_class = java::fetch_class("android/support/v4/util/SimpleArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAt", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t android::support::v4::util::SimpleArrayMap::size() const {
    if (!::android::support::v4::util::SimpleArrayMap::_class) ::android::support::v4::util::SimpleArrayMap::_class = java::fetch_class("android/support/v4/util/SimpleArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::support::v4::util::SimpleArrayMap::equals(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::util::SimpleArrayMap::_class) ::android::support::v4::util::SimpleArrayMap::_class = java::fetch_class("android/support/v4/util/SimpleArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::support::v4::util::SimpleArrayMap::hashCode() const {
    if (!::android::support::v4::util::SimpleArrayMap::_class) ::android::support::v4::util::SimpleArrayMap::_class = java::fetch_class("android/support/v4/util/SimpleArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::support::v4::util::SimpleArrayMap::toString() const {
    if (!::android::support::v4::util::SimpleArrayMap::_class) ::android::support::v4::util::SimpleArrayMap::_class = java::fetch_class("android/support/v4/util/SimpleArrayMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

