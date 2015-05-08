#include "java-core.hpp"
#include <memory>
#include "java.lang.Class.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.concurrent.atomic.AtomicBoolean.hpp"
#include "java.util.concurrent.atomic.AtomicInteger.hpp"
#include "java.util.concurrent.atomic.AtomicIntegerArray.hpp"
#include "java.util.concurrent.atomic.AtomicIntegerFieldUpdater.hpp"
#include "java.util.concurrent.atomic.AtomicLong.hpp"
#include "java.util.concurrent.atomic.AtomicLongArray.hpp"
#include "java.util.concurrent.atomic.AtomicLongFieldUpdater.hpp"
#include "java.util.concurrent.atomic.AtomicMarkableReference.hpp"
#include "java.util.concurrent.atomic.AtomicReference.hpp"
#include "java.util.concurrent.atomic.AtomicReferenceArray.hpp"
#include "java.util.concurrent.atomic.AtomicReferenceFieldUpdater.hpp"
#include "java.util.concurrent.atomic.AtomicStampedReference.hpp"

jclass java::util::concurrent::atomic::AtomicMarkableReference::_class = nullptr;
jclass java::util::concurrent::atomic::AtomicIntegerArray::_class = nullptr;
jclass java::util::concurrent::atomic::AtomicLongArray::_class = nullptr;
jclass java::util::concurrent::atomic::AtomicLongFieldUpdater::_class = nullptr;
jclass java::util::concurrent::atomic::AtomicStampedReference::_class = nullptr;
jclass java::util::concurrent::atomic::AtomicReferenceArray::_class = nullptr;
jclass java::util::concurrent::atomic::AtomicIntegerFieldUpdater::_class = nullptr;
jclass java::util::concurrent::atomic::AtomicBoolean::_class = nullptr;
jclass java::util::concurrent::atomic::AtomicInteger::_class = nullptr;
jclass java::util::concurrent::atomic::AtomicReference::_class = nullptr;
jclass java::util::concurrent::atomic::AtomicLong::_class = nullptr;
jclass java::util::concurrent::atomic::AtomicReferenceFieldUpdater::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::atomic::AtomicMarkableReference::AtomicMarkableReference(const ::java::lang::Object& arg0, bool arg1) : ::java::lang::Object((jobject)0) {
    if (!::java::util::concurrent::atomic::AtomicMarkableReference::_class) ::java::util::concurrent::atomic::AtomicMarkableReference::_class = java::fetch_class("java/util/concurrent/atomic/AtomicMarkableReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::Object java::util::concurrent::atomic::AtomicMarkableReference::getReference() const {
    if (!::java::util::concurrent::atomic::AtomicMarkableReference::_class) ::java::util::concurrent::atomic::AtomicMarkableReference::_class = java::fetch_class("java/util/concurrent/atomic/AtomicMarkableReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReference", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::concurrent::atomic::AtomicMarkableReference::isMarked() const {
    if (!::java::util::concurrent::atomic::AtomicMarkableReference::_class) ::java::util::concurrent::atomic::AtomicMarkableReference::_class = java::fetch_class("java/util/concurrent/atomic/AtomicMarkableReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMarked", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Object java::util::concurrent::atomic::AtomicMarkableReference::get(const std::vector< bool>& arg0) const {
    if (!::java::util::concurrent::atomic::AtomicMarkableReference::_class) ::java::util::concurrent::atomic::AtomicMarkableReference::_class = java::fetch_class("java/util/concurrent/atomic/AtomicMarkableReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "([Z)Ljava/lang/Object;");
    jbooleanArray _arg0 = java::jni->NewBooleanArray(arg0.size());
    unsigned arg0s = arg0.size();
    std::unique_ptr<bool[]> arg0t(new bool[arg0s]);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      arg0t[arg0i] = arg0[arg0i];
    }
    java::jni->SetBooleanArrayRegion(_arg0, 0, arg0s, (const jboolean*)arg0t.get());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::concurrent::atomic::AtomicMarkableReference::weakCompareAndSet(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1, bool arg2, bool arg3) const {
    if (!::java::util::concurrent::atomic::AtomicMarkableReference::_class) ::java::util::concurrent::atomic::AtomicMarkableReference::_class = java::fetch_class("java/util/concurrent/atomic/AtomicMarkableReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "weakCompareAndSet", "(Ljava/lang/Object;Ljava/lang/Object;ZZ)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    bool _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool java::util::concurrent::atomic::AtomicMarkableReference::compareAndSet(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1, bool arg2, bool arg3) const {
    if (!::java::util::concurrent::atomic::AtomicMarkableReference::_class) ::java::util::concurrent::atomic::AtomicMarkableReference::_class = java::fetch_class("java/util/concurrent/atomic/AtomicMarkableReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareAndSet", "(Ljava/lang/Object;Ljava/lang/Object;ZZ)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    bool _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void java::util::concurrent::atomic::AtomicMarkableReference::set(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::java::util::concurrent::atomic::AtomicMarkableReference::_class) ::java::util::concurrent::atomic::AtomicMarkableReference::_class = java::fetch_class("java/util/concurrent/atomic/AtomicMarkableReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool java::util::concurrent::atomic::AtomicMarkableReference::attemptMark(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::java::util::concurrent::atomic::AtomicMarkableReference::_class) ::java::util::concurrent::atomic::AtomicMarkableReference::_class = java::fetch_class("java/util/concurrent/atomic/AtomicMarkableReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "attemptMark", "(Ljava/lang/Object;Z)Z");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::atomic::AtomicIntegerArray::AtomicIntegerArray(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::util::concurrent::atomic::AtomicIntegerArray::_class) ::java::util::concurrent::atomic::AtomicIntegerArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicIntegerArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::atomic::AtomicIntegerArray::AtomicIntegerArray(const std::vector< int32_t>& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::util::concurrent::atomic::AtomicIntegerArray::_class) ::java::util::concurrent::atomic::AtomicIntegerArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicIntegerArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([I)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t java::util::concurrent::atomic::AtomicIntegerArray::length() const {
    if (!::java::util::concurrent::atomic::AtomicIntegerArray::_class) ::java::util::concurrent::atomic::AtomicIntegerArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicIntegerArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::concurrent::atomic::AtomicIntegerArray::get(int32_t arg0) const {
    if (!::java::util::concurrent::atomic::AtomicIntegerArray::_class) ::java::util::concurrent::atomic::AtomicIntegerArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicIntegerArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void java::util::concurrent::atomic::AtomicIntegerArray::set(int32_t arg0, int32_t arg1) const {
    if (!::java::util::concurrent::atomic::AtomicIntegerArray::_class) ::java::util::concurrent::atomic::AtomicIntegerArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicIntegerArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::concurrent::atomic::AtomicIntegerArray::lazySet(int32_t arg0, int32_t arg1) const {
    if (!::java::util::concurrent::atomic::AtomicIntegerArray::_class) ::java::util::concurrent::atomic::AtomicIntegerArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicIntegerArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "lazySet", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t java::util::concurrent::atomic::AtomicIntegerArray::getAndSet(int32_t arg0, int32_t arg1) const {
    if (!::java::util::concurrent::atomic::AtomicIntegerArray::_class) ::java::util::concurrent::atomic::AtomicIntegerArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicIntegerArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndSet", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

bool java::util::concurrent::atomic::AtomicIntegerArray::compareAndSet(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::util::concurrent::atomic::AtomicIntegerArray::_class) ::java::util::concurrent::atomic::AtomicIntegerArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicIntegerArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareAndSet", "(III)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool java::util::concurrent::atomic::AtomicIntegerArray::weakCompareAndSet(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::util::concurrent::atomic::AtomicIntegerArray::_class) ::java::util::concurrent::atomic::AtomicIntegerArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicIntegerArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "weakCompareAndSet", "(III)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t java::util::concurrent::atomic::AtomicIntegerArray::getAndIncrement(int32_t arg0) const {
    if (!::java::util::concurrent::atomic::AtomicIntegerArray::_class) ::java::util::concurrent::atomic::AtomicIntegerArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicIntegerArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndIncrement", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::atomic::AtomicIntegerArray::getAndDecrement(int32_t arg0) const {
    if (!::java::util::concurrent::atomic::AtomicIntegerArray::_class) ::java::util::concurrent::atomic::AtomicIntegerArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicIntegerArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndDecrement", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::atomic::AtomicIntegerArray::getAndAdd(int32_t arg0, int32_t arg1) const {
    if (!::java::util::concurrent::atomic::AtomicIntegerArray::_class) ::java::util::concurrent::atomic::AtomicIntegerArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicIntegerArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndAdd", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t java::util::concurrent::atomic::AtomicIntegerArray::incrementAndGet(int32_t arg0) const {
    if (!::java::util::concurrent::atomic::AtomicIntegerArray::_class) ::java::util::concurrent::atomic::AtomicIntegerArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicIntegerArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "incrementAndGet", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::atomic::AtomicIntegerArray::decrementAndGet(int32_t arg0) const {
    if (!::java::util::concurrent::atomic::AtomicIntegerArray::_class) ::java::util::concurrent::atomic::AtomicIntegerArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicIntegerArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "decrementAndGet", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::atomic::AtomicIntegerArray::addAndGet(int32_t arg0, int32_t arg1) const {
    if (!::java::util::concurrent::atomic::AtomicIntegerArray::_class) ::java::util::concurrent::atomic::AtomicIntegerArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicIntegerArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAndGet", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String java::util::concurrent::atomic::AtomicIntegerArray::toString() const {
    if (!::java::util::concurrent::atomic::AtomicIntegerArray::_class) ::java::util::concurrent::atomic::AtomicIntegerArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicIntegerArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::atomic::AtomicLongArray::AtomicLongArray(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::util::concurrent::atomic::AtomicLongArray::_class) ::java::util::concurrent::atomic::AtomicLongArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLongArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::atomic::AtomicLongArray::AtomicLongArray(const std::vector< int64_t>& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::util::concurrent::atomic::AtomicLongArray::_class) ::java::util::concurrent::atomic::AtomicLongArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLongArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([J)V");
    jlongArray _arg0 = java::jni->NewLongArray(arg0.size());
    java::jni->SetLongArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t java::util::concurrent::atomic::AtomicLongArray::length() const {
    if (!::java::util::concurrent::atomic::AtomicLongArray::_class) ::java::util::concurrent::atomic::AtomicLongArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLongArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t java::util::concurrent::atomic::AtomicLongArray::get(int32_t arg0) const {
    if (!::java::util::concurrent::atomic::AtomicLongArray::_class) ::java::util::concurrent::atomic::AtomicLongArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLongArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

void java::util::concurrent::atomic::AtomicLongArray::set(int32_t arg0, int64_t arg1) const {
    if (!::java::util::concurrent::atomic::AtomicLongArray::_class) ::java::util::concurrent::atomic::AtomicLongArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLongArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(IJ)V");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::concurrent::atomic::AtomicLongArray::lazySet(int32_t arg0, int64_t arg1) const {
    if (!::java::util::concurrent::atomic::AtomicLongArray::_class) ::java::util::concurrent::atomic::AtomicLongArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLongArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "lazySet", "(IJ)V");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int64_t java::util::concurrent::atomic::AtomicLongArray::getAndSet(int32_t arg0, int64_t arg1) const {
    if (!::java::util::concurrent::atomic::AtomicLongArray::_class) ::java::util::concurrent::atomic::AtomicLongArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLongArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndSet", "(IJ)J");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

bool java::util::concurrent::atomic::AtomicLongArray::compareAndSet(int32_t arg0, int64_t arg1, int64_t arg2) const {
    if (!::java::util::concurrent::atomic::AtomicLongArray::_class) ::java::util::concurrent::atomic::AtomicLongArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLongArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareAndSet", "(IJJ)Z");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool java::util::concurrent::atomic::AtomicLongArray::weakCompareAndSet(int32_t arg0, int64_t arg1, int64_t arg2) const {
    if (!::java::util::concurrent::atomic::AtomicLongArray::_class) ::java::util::concurrent::atomic::AtomicLongArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLongArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "weakCompareAndSet", "(IJJ)Z");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

int64_t java::util::concurrent::atomic::AtomicLongArray::getAndIncrement(int32_t arg0) const {
    if (!::java::util::concurrent::atomic::AtomicLongArray::_class) ::java::util::concurrent::atomic::AtomicLongArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLongArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndIncrement", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t java::util::concurrent::atomic::AtomicLongArray::getAndDecrement(int32_t arg0) const {
    if (!::java::util::concurrent::atomic::AtomicLongArray::_class) ::java::util::concurrent::atomic::AtomicLongArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLongArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndDecrement", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t java::util::concurrent::atomic::AtomicLongArray::getAndAdd(int32_t arg0, int64_t arg1) const {
    if (!::java::util::concurrent::atomic::AtomicLongArray::_class) ::java::util::concurrent::atomic::AtomicLongArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLongArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndAdd", "(IJ)J");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

int64_t java::util::concurrent::atomic::AtomicLongArray::incrementAndGet(int32_t arg0) const {
    if (!::java::util::concurrent::atomic::AtomicLongArray::_class) ::java::util::concurrent::atomic::AtomicLongArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLongArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "incrementAndGet", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t java::util::concurrent::atomic::AtomicLongArray::decrementAndGet(int32_t arg0) const {
    if (!::java::util::concurrent::atomic::AtomicLongArray::_class) ::java::util::concurrent::atomic::AtomicLongArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLongArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "decrementAndGet", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t java::util::concurrent::atomic::AtomicLongArray::addAndGet(int32_t arg0, int64_t arg1) const {
    if (!::java::util::concurrent::atomic::AtomicLongArray::_class) ::java::util::concurrent::atomic::AtomicLongArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLongArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAndGet", "(IJ)J");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String java::util::concurrent::atomic::AtomicLongArray::toString() const {
    if (!::java::util::concurrent::atomic::AtomicLongArray::_class) ::java::util::concurrent::atomic::AtomicLongArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLongArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::concurrent::atomic::AtomicLongFieldUpdater java::util::concurrent::atomic::AtomicLongFieldUpdater::newUpdater(const ::java::lang::Class& arg0, const ::java::lang::String& arg1){
    if (!::java::util::concurrent::atomic::AtomicLongFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicLongFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLongFieldUpdater");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newUpdater", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicLongFieldUpdater;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::concurrent::atomic::AtomicLongFieldUpdater _ret(ret);
    return _ret;
}

bool java::util::concurrent::atomic::AtomicLongFieldUpdater::compareAndSet(const ::java::lang::Object& arg0, int64_t arg1, int64_t arg2) const {
    if (!::java::util::concurrent::atomic::AtomicLongFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicLongFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLongFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareAndSet", "(Ljava/lang/Object;JJ)Z");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool java::util::concurrent::atomic::AtomicLongFieldUpdater::weakCompareAndSet(const ::java::lang::Object& arg0, int64_t arg1, int64_t arg2) const {
    if (!::java::util::concurrent::atomic::AtomicLongFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicLongFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLongFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "weakCompareAndSet", "(Ljava/lang/Object;JJ)Z");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::util::concurrent::atomic::AtomicLongFieldUpdater::set(const ::java::lang::Object& arg0, int64_t arg1) const {
    if (!::java::util::concurrent::atomic::AtomicLongFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicLongFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLongFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Ljava/lang/Object;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::concurrent::atomic::AtomicLongFieldUpdater::lazySet(const ::java::lang::Object& arg0, int64_t arg1) const {
    if (!::java::util::concurrent::atomic::AtomicLongFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicLongFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLongFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "lazySet", "(Ljava/lang/Object;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int64_t java::util::concurrent::atomic::AtomicLongFieldUpdater::get(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::atomic::AtomicLongFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicLongFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLongFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/Object;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t java::util::concurrent::atomic::AtomicLongFieldUpdater::getAndSet(const ::java::lang::Object& arg0, int64_t arg1) const {
    if (!::java::util::concurrent::atomic::AtomicLongFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicLongFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLongFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndSet", "(Ljava/lang/Object;J)J");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

int64_t java::util::concurrent::atomic::AtomicLongFieldUpdater::getAndIncrement(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::atomic::AtomicLongFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicLongFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLongFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndIncrement", "(Ljava/lang/Object;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t java::util::concurrent::atomic::AtomicLongFieldUpdater::getAndDecrement(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::atomic::AtomicLongFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicLongFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLongFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndDecrement", "(Ljava/lang/Object;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t java::util::concurrent::atomic::AtomicLongFieldUpdater::getAndAdd(const ::java::lang::Object& arg0, int64_t arg1) const {
    if (!::java::util::concurrent::atomic::AtomicLongFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicLongFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLongFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndAdd", "(Ljava/lang/Object;J)J");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

int64_t java::util::concurrent::atomic::AtomicLongFieldUpdater::incrementAndGet(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::atomic::AtomicLongFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicLongFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLongFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "incrementAndGet", "(Ljava/lang/Object;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t java::util::concurrent::atomic::AtomicLongFieldUpdater::decrementAndGet(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::atomic::AtomicLongFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicLongFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLongFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "decrementAndGet", "(Ljava/lang/Object;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t java::util::concurrent::atomic::AtomicLongFieldUpdater::addAndGet(const ::java::lang::Object& arg0, int64_t arg1) const {
    if (!::java::util::concurrent::atomic::AtomicLongFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicLongFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLongFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAndGet", "(Ljava/lang/Object;J)J");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::atomic::AtomicStampedReference::AtomicStampedReference(const ::java::lang::Object& arg0, int32_t arg1) : ::java::lang::Object((jobject)0) {
    if (!::java::util::concurrent::atomic::AtomicStampedReference::_class) ::java::util::concurrent::atomic::AtomicStampedReference::_class = java::fetch_class("java/util/concurrent/atomic/AtomicStampedReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::Object java::util::concurrent::atomic::AtomicStampedReference::getReference() const {
    if (!::java::util::concurrent::atomic::AtomicStampedReference::_class) ::java::util::concurrent::atomic::AtomicStampedReference::_class = java::fetch_class("java/util/concurrent/atomic/AtomicStampedReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReference", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::concurrent::atomic::AtomicStampedReference::getStamp() const {
    if (!::java::util::concurrent::atomic::AtomicStampedReference::_class) ::java::util::concurrent::atomic::AtomicStampedReference::_class = java::fetch_class("java/util/concurrent/atomic/AtomicStampedReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStamp", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Object java::util::concurrent::atomic::AtomicStampedReference::get(const std::vector< int32_t>& arg0) const {
    if (!::java::util::concurrent::atomic::AtomicStampedReference::_class) ::java::util::concurrent::atomic::AtomicStampedReference::_class = java::fetch_class("java/util/concurrent/atomic/AtomicStampedReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "([I)Ljava/lang/Object;");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::concurrent::atomic::AtomicStampedReference::weakCompareAndSet(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1, int32_t arg2, int32_t arg3) const {
    if (!::java::util::concurrent::atomic::AtomicStampedReference::_class) ::java::util::concurrent::atomic::AtomicStampedReference::_class = java::fetch_class("java/util/concurrent/atomic/AtomicStampedReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "weakCompareAndSet", "(Ljava/lang/Object;Ljava/lang/Object;II)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool java::util::concurrent::atomic::AtomicStampedReference::compareAndSet(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1, int32_t arg2, int32_t arg3) const {
    if (!::java::util::concurrent::atomic::AtomicStampedReference::_class) ::java::util::concurrent::atomic::AtomicStampedReference::_class = java::fetch_class("java/util/concurrent/atomic/AtomicStampedReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareAndSet", "(Ljava/lang/Object;Ljava/lang/Object;II)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void java::util::concurrent::atomic::AtomicStampedReference::set(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::java::util::concurrent::atomic::AtomicStampedReference::_class) ::java::util::concurrent::atomic::AtomicStampedReference::_class = java::fetch_class("java/util/concurrent/atomic/AtomicStampedReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool java::util::concurrent::atomic::AtomicStampedReference::attemptStamp(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::java::util::concurrent::atomic::AtomicStampedReference::_class) ::java::util::concurrent::atomic::AtomicStampedReference::_class = java::fetch_class("java/util/concurrent/atomic/AtomicStampedReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "attemptStamp", "(Ljava/lang/Object;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::atomic::AtomicReferenceArray::AtomicReferenceArray(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::util::concurrent::atomic::AtomicReferenceArray::_class) ::java::util::concurrent::atomic::AtomicReferenceArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicReferenceArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::atomic::AtomicReferenceArray::AtomicReferenceArray(const std::vector< ::java::lang::Object>& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::util::concurrent::atomic::AtomicReferenceArray::_class) ::java::util::concurrent::atomic::AtomicReferenceArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicReferenceArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([Ljava/lang/Object;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t java::util::concurrent::atomic::AtomicReferenceArray::length() const {
    if (!::java::util::concurrent::atomic::AtomicReferenceArray::_class) ::java::util::concurrent::atomic::AtomicReferenceArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicReferenceArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Object java::util::concurrent::atomic::AtomicReferenceArray::get(int32_t arg0) const {
    if (!::java::util::concurrent::atomic::AtomicReferenceArray::_class) ::java::util::concurrent::atomic::AtomicReferenceArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicReferenceArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::util::concurrent::atomic::AtomicReferenceArray::set(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::concurrent::atomic::AtomicReferenceArray::_class) ::java::util::concurrent::atomic::AtomicReferenceArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicReferenceArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(ILjava/lang/Object;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::concurrent::atomic::AtomicReferenceArray::lazySet(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::concurrent::atomic::AtomicReferenceArray::_class) ::java::util::concurrent::atomic::AtomicReferenceArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicReferenceArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "lazySet", "(ILjava/lang/Object;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object java::util::concurrent::atomic::AtomicReferenceArray::getAndSet(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::concurrent::atomic::AtomicReferenceArray::_class) ::java::util::concurrent::atomic::AtomicReferenceArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicReferenceArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndSet", "(ILjava/lang/Object;)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::concurrent::atomic::AtomicReferenceArray::compareAndSet(int32_t arg0, const ::java::lang::Object& arg1, const ::java::lang::Object& arg2) const {
    if (!::java::util::concurrent::atomic::AtomicReferenceArray::_class) ::java::util::concurrent::atomic::AtomicReferenceArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicReferenceArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareAndSet", "(ILjava/lang/Object;Ljava/lang/Object;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool java::util::concurrent::atomic::AtomicReferenceArray::weakCompareAndSet(int32_t arg0, const ::java::lang::Object& arg1, const ::java::lang::Object& arg2) const {
    if (!::java::util::concurrent::atomic::AtomicReferenceArray::_class) ::java::util::concurrent::atomic::AtomicReferenceArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicReferenceArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "weakCompareAndSet", "(ILjava/lang/Object;Ljava/lang/Object;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::String java::util::concurrent::atomic::AtomicReferenceArray::toString() const {
    if (!::java::util::concurrent::atomic::AtomicReferenceArray::_class) ::java::util::concurrent::atomic::AtomicReferenceArray::_class = java::fetch_class("java/util/concurrent/atomic/AtomicReferenceArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::concurrent::atomic::AtomicIntegerFieldUpdater java::util::concurrent::atomic::AtomicIntegerFieldUpdater::newUpdater(const ::java::lang::Class& arg0, const ::java::lang::String& arg1){
    if (!::java::util::concurrent::atomic::AtomicIntegerFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicIntegerFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicIntegerFieldUpdater");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newUpdater", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicIntegerFieldUpdater;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::concurrent::atomic::AtomicIntegerFieldUpdater _ret(ret);
    return _ret;
}

bool java::util::concurrent::atomic::AtomicIntegerFieldUpdater::compareAndSet(const ::java::lang::Object& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::util::concurrent::atomic::AtomicIntegerFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicIntegerFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicIntegerFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareAndSet", "(Ljava/lang/Object;II)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool java::util::concurrent::atomic::AtomicIntegerFieldUpdater::weakCompareAndSet(const ::java::lang::Object& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::util::concurrent::atomic::AtomicIntegerFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicIntegerFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicIntegerFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "weakCompareAndSet", "(Ljava/lang/Object;II)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::util::concurrent::atomic::AtomicIntegerFieldUpdater::set(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::java::util::concurrent::atomic::AtomicIntegerFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicIntegerFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicIntegerFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::concurrent::atomic::AtomicIntegerFieldUpdater::lazySet(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::java::util::concurrent::atomic::AtomicIntegerFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicIntegerFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicIntegerFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "lazySet", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t java::util::concurrent::atomic::AtomicIntegerFieldUpdater::get(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::atomic::AtomicIntegerFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicIntegerFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicIntegerFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::atomic::AtomicIntegerFieldUpdater::getAndSet(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::java::util::concurrent::atomic::AtomicIntegerFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicIntegerFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicIntegerFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndSet", "(Ljava/lang/Object;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t java::util::concurrent::atomic::AtomicIntegerFieldUpdater::getAndIncrement(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::atomic::AtomicIntegerFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicIntegerFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicIntegerFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndIncrement", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::atomic::AtomicIntegerFieldUpdater::getAndDecrement(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::atomic::AtomicIntegerFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicIntegerFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicIntegerFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndDecrement", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::atomic::AtomicIntegerFieldUpdater::getAndAdd(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::java::util::concurrent::atomic::AtomicIntegerFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicIntegerFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicIntegerFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndAdd", "(Ljava/lang/Object;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t java::util::concurrent::atomic::AtomicIntegerFieldUpdater::incrementAndGet(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::atomic::AtomicIntegerFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicIntegerFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicIntegerFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "incrementAndGet", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::atomic::AtomicIntegerFieldUpdater::decrementAndGet(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::atomic::AtomicIntegerFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicIntegerFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicIntegerFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "decrementAndGet", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::atomic::AtomicIntegerFieldUpdater::addAndGet(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::java::util::concurrent::atomic::AtomicIntegerFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicIntegerFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicIntegerFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAndGet", "(Ljava/lang/Object;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::atomic::AtomicBoolean::AtomicBoolean(bool arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::util::concurrent::atomic::AtomicBoolean::_class) ::java::util::concurrent::atomic::AtomicBoolean::_class = java::fetch_class("java/util/concurrent/atomic/AtomicBoolean");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Z)V");
    bool _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::atomic::AtomicBoolean::AtomicBoolean() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::util::concurrent::atomic::AtomicBoolean::_class) ::java::util::concurrent::atomic::AtomicBoolean::_class = java::fetch_class("java/util/concurrent/atomic/AtomicBoolean");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool java::util::concurrent::atomic::AtomicBoolean::get() const {
    if (!::java::util::concurrent::atomic::AtomicBoolean::_class) ::java::util::concurrent::atomic::AtomicBoolean::_class = java::fetch_class("java/util/concurrent/atomic/AtomicBoolean");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::concurrent::atomic::AtomicBoolean::compareAndSet(bool arg0, bool arg1) const {
    if (!::java::util::concurrent::atomic::AtomicBoolean::_class) ::java::util::concurrent::atomic::AtomicBoolean::_class = java::fetch_class("java/util/concurrent/atomic/AtomicBoolean");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareAndSet", "(ZZ)Z");
    bool _arg0 = arg0;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool java::util::concurrent::atomic::AtomicBoolean::weakCompareAndSet(bool arg0, bool arg1) const {
    if (!::java::util::concurrent::atomic::AtomicBoolean::_class) ::java::util::concurrent::atomic::AtomicBoolean::_class = java::fetch_class("java/util/concurrent/atomic/AtomicBoolean");
    static jmethodID mid = java::jni->GetMethodID(_class, "weakCompareAndSet", "(ZZ)Z");
    bool _arg0 = arg0;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void java::util::concurrent::atomic::AtomicBoolean::set(bool arg0) const {
    if (!::java::util::concurrent::atomic::AtomicBoolean::_class) ::java::util::concurrent::atomic::AtomicBoolean::_class = java::fetch_class("java/util/concurrent/atomic/AtomicBoolean");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::concurrent::atomic::AtomicBoolean::lazySet(bool arg0) const {
    if (!::java::util::concurrent::atomic::AtomicBoolean::_class) ::java::util::concurrent::atomic::AtomicBoolean::_class = java::fetch_class("java/util/concurrent/atomic/AtomicBoolean");
    static jmethodID mid = java::jni->GetMethodID(_class, "lazySet", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::concurrent::atomic::AtomicBoolean::getAndSet(bool arg0) const {
    if (!::java::util::concurrent::atomic::AtomicBoolean::_class) ::java::util::concurrent::atomic::AtomicBoolean::_class = java::fetch_class("java/util/concurrent/atomic/AtomicBoolean");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndSet", "(Z)Z");
    bool _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String java::util::concurrent::atomic::AtomicBoolean::toString() const {
    if (!::java::util::concurrent::atomic::AtomicBoolean::_class) ::java::util::concurrent::atomic::AtomicBoolean::_class = java::fetch_class("java/util/concurrent/atomic/AtomicBoolean");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::atomic::AtomicInteger::AtomicInteger(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::util::concurrent::atomic::AtomicInteger::_class) ::java::util::concurrent::atomic::AtomicInteger::_class = java::fetch_class("java/util/concurrent/atomic/AtomicInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::atomic::AtomicInteger::AtomicInteger() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::util::concurrent::atomic::AtomicInteger::_class) ::java::util::concurrent::atomic::AtomicInteger::_class = java::fetch_class("java/util/concurrent/atomic/AtomicInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t java::util::concurrent::atomic::AtomicInteger::get() const {
    if (!::java::util::concurrent::atomic::AtomicInteger::_class) ::java::util::concurrent::atomic::AtomicInteger::_class = java::fetch_class("java/util/concurrent/atomic/AtomicInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::util::concurrent::atomic::AtomicInteger::set(int32_t arg0) const {
    if (!::java::util::concurrent::atomic::AtomicInteger::_class) ::java::util::concurrent::atomic::AtomicInteger::_class = java::fetch_class("java/util/concurrent/atomic/AtomicInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::concurrent::atomic::AtomicInteger::lazySet(int32_t arg0) const {
    if (!::java::util::concurrent::atomic::AtomicInteger::_class) ::java::util::concurrent::atomic::AtomicInteger::_class = java::fetch_class("java/util/concurrent/atomic/AtomicInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "lazySet", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::atomic::AtomicInteger::getAndSet(int32_t arg0) const {
    if (!::java::util::concurrent::atomic::AtomicInteger::_class) ::java::util::concurrent::atomic::AtomicInteger::_class = java::fetch_class("java/util/concurrent/atomic/AtomicInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndSet", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool java::util::concurrent::atomic::AtomicInteger::compareAndSet(int32_t arg0, int32_t arg1) const {
    if (!::java::util::concurrent::atomic::AtomicInteger::_class) ::java::util::concurrent::atomic::AtomicInteger::_class = java::fetch_class("java/util/concurrent/atomic/AtomicInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareAndSet", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool java::util::concurrent::atomic::AtomicInteger::weakCompareAndSet(int32_t arg0, int32_t arg1) const {
    if (!::java::util::concurrent::atomic::AtomicInteger::_class) ::java::util::concurrent::atomic::AtomicInteger::_class = java::fetch_class("java/util/concurrent/atomic/AtomicInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "weakCompareAndSet", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

int32_t java::util::concurrent::atomic::AtomicInteger::getAndIncrement() const {
    if (!::java::util::concurrent::atomic::AtomicInteger::_class) ::java::util::concurrent::atomic::AtomicInteger::_class = java::fetch_class("java/util/concurrent/atomic/AtomicInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndIncrement", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::concurrent::atomic::AtomicInteger::getAndDecrement() const {
    if (!::java::util::concurrent::atomic::AtomicInteger::_class) ::java::util::concurrent::atomic::AtomicInteger::_class = java::fetch_class("java/util/concurrent/atomic/AtomicInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndDecrement", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::concurrent::atomic::AtomicInteger::getAndAdd(int32_t arg0) const {
    if (!::java::util::concurrent::atomic::AtomicInteger::_class) ::java::util::concurrent::atomic::AtomicInteger::_class = java::fetch_class("java/util/concurrent/atomic/AtomicInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndAdd", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::atomic::AtomicInteger::incrementAndGet() const {
    if (!::java::util::concurrent::atomic::AtomicInteger::_class) ::java::util::concurrent::atomic::AtomicInteger::_class = java::fetch_class("java/util/concurrent/atomic/AtomicInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "incrementAndGet", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::concurrent::atomic::AtomicInteger::decrementAndGet() const {
    if (!::java::util::concurrent::atomic::AtomicInteger::_class) ::java::util::concurrent::atomic::AtomicInteger::_class = java::fetch_class("java/util/concurrent/atomic/AtomicInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "decrementAndGet", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::concurrent::atomic::AtomicInteger::addAndGet(int32_t arg0) const {
    if (!::java::util::concurrent::atomic::AtomicInteger::_class) ::java::util::concurrent::atomic::AtomicInteger::_class = java::fetch_class("java/util/concurrent/atomic/AtomicInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAndGet", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String java::util::concurrent::atomic::AtomicInteger::toString() const {
    if (!::java::util::concurrent::atomic::AtomicInteger::_class) ::java::util::concurrent::atomic::AtomicInteger::_class = java::fetch_class("java/util/concurrent/atomic/AtomicInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::util::concurrent::atomic::AtomicInteger::intValue() const {
    if (!::java::util::concurrent::atomic::AtomicInteger::_class) ::java::util::concurrent::atomic::AtomicInteger::_class = java::fetch_class("java/util/concurrent/atomic/AtomicInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "intValue", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t java::util::concurrent::atomic::AtomicInteger::longValue() const {
    if (!::java::util::concurrent::atomic::AtomicInteger::_class) ::java::util::concurrent::atomic::AtomicInteger::_class = java::fetch_class("java/util/concurrent/atomic/AtomicInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "longValue", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

float java::util::concurrent::atomic::AtomicInteger::floatValue() const {
    if (!::java::util::concurrent::atomic::AtomicInteger::_class) ::java::util::concurrent::atomic::AtomicInteger::_class = java::fetch_class("java/util/concurrent/atomic/AtomicInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "floatValue", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

double java::util::concurrent::atomic::AtomicInteger::doubleValue() const {
    if (!::java::util::concurrent::atomic::AtomicInteger::_class) ::java::util::concurrent::atomic::AtomicInteger::_class = java::fetch_class("java/util/concurrent/atomic/AtomicInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "doubleValue", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::atomic::AtomicReference::AtomicReference(const ::java::lang::Object& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::util::concurrent::atomic::AtomicReference::_class) ::java::util::concurrent::atomic::AtomicReference::_class = java::fetch_class("java/util/concurrent/atomic/AtomicReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::atomic::AtomicReference::AtomicReference() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::util::concurrent::atomic::AtomicReference::_class) ::java::util::concurrent::atomic::AtomicReference::_class = java::fetch_class("java/util/concurrent/atomic/AtomicReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::Object java::util::concurrent::atomic::AtomicReference::get() const {
    if (!::java::util::concurrent::atomic::AtomicReference::_class) ::java::util::concurrent::atomic::AtomicReference::_class = java::fetch_class("java/util/concurrent/atomic/AtomicReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::util::concurrent::atomic::AtomicReference::set(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::atomic::AtomicReference::_class) ::java::util::concurrent::atomic::AtomicReference::_class = java::fetch_class("java/util/concurrent/atomic/AtomicReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::concurrent::atomic::AtomicReference::lazySet(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::atomic::AtomicReference::_class) ::java::util::concurrent::atomic::AtomicReference::_class = java::fetch_class("java/util/concurrent/atomic/AtomicReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "lazySet", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::concurrent::atomic::AtomicReference::compareAndSet(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::concurrent::atomic::AtomicReference::_class) ::java::util::concurrent::atomic::AtomicReference::_class = java::fetch_class("java/util/concurrent/atomic/AtomicReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareAndSet", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool java::util::concurrent::atomic::AtomicReference::weakCompareAndSet(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::concurrent::atomic::AtomicReference::_class) ::java::util::concurrent::atomic::AtomicReference::_class = java::fetch_class("java/util/concurrent/atomic/AtomicReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "weakCompareAndSet", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object java::util::concurrent::atomic::AtomicReference::getAndSet(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::atomic::AtomicReference::_class) ::java::util::concurrent::atomic::AtomicReference::_class = java::fetch_class("java/util/concurrent/atomic/AtomicReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndSet", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::String java::util::concurrent::atomic::AtomicReference::toString() const {
    if (!::java::util::concurrent::atomic::AtomicReference::_class) ::java::util::concurrent::atomic::AtomicReference::_class = java::fetch_class("java/util/concurrent/atomic/AtomicReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::atomic::AtomicLong::AtomicLong(int64_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::util::concurrent::atomic::AtomicLong::_class) ::java::util::concurrent::atomic::AtomicLong::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLong");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(J)V");
    int64_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::atomic::AtomicLong::AtomicLong() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::util::concurrent::atomic::AtomicLong::_class) ::java::util::concurrent::atomic::AtomicLong::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLong");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int64_t java::util::concurrent::atomic::AtomicLong::get() const {
    if (!::java::util::concurrent::atomic::AtomicLong::_class) ::java::util::concurrent::atomic::AtomicLong::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLong");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void java::util::concurrent::atomic::AtomicLong::set(int64_t arg0) const {
    if (!::java::util::concurrent::atomic::AtomicLong::_class) ::java::util::concurrent::atomic::AtomicLong::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLong");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::concurrent::atomic::AtomicLong::lazySet(int64_t arg0) const {
    if (!::java::util::concurrent::atomic::AtomicLong::_class) ::java::util::concurrent::atomic::AtomicLong::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLong");
    static jmethodID mid = java::jni->GetMethodID(_class, "lazySet", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t java::util::concurrent::atomic::AtomicLong::getAndSet(int64_t arg0) const {
    if (!::java::util::concurrent::atomic::AtomicLong::_class) ::java::util::concurrent::atomic::AtomicLong::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLong");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndSet", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

bool java::util::concurrent::atomic::AtomicLong::compareAndSet(int64_t arg0, int64_t arg1) const {
    if (!::java::util::concurrent::atomic::AtomicLong::_class) ::java::util::concurrent::atomic::AtomicLong::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLong");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareAndSet", "(JJ)Z");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool java::util::concurrent::atomic::AtomicLong::weakCompareAndSet(int64_t arg0, int64_t arg1) const {
    if (!::java::util::concurrent::atomic::AtomicLong::_class) ::java::util::concurrent::atomic::AtomicLong::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLong");
    static jmethodID mid = java::jni->GetMethodID(_class, "weakCompareAndSet", "(JJ)Z");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

int64_t java::util::concurrent::atomic::AtomicLong::getAndIncrement() const {
    if (!::java::util::concurrent::atomic::AtomicLong::_class) ::java::util::concurrent::atomic::AtomicLong::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLong");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndIncrement", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t java::util::concurrent::atomic::AtomicLong::getAndDecrement() const {
    if (!::java::util::concurrent::atomic::AtomicLong::_class) ::java::util::concurrent::atomic::AtomicLong::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLong");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndDecrement", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t java::util::concurrent::atomic::AtomicLong::getAndAdd(int64_t arg0) const {
    if (!::java::util::concurrent::atomic::AtomicLong::_class) ::java::util::concurrent::atomic::AtomicLong::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLong");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndAdd", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t java::util::concurrent::atomic::AtomicLong::incrementAndGet() const {
    if (!::java::util::concurrent::atomic::AtomicLong::_class) ::java::util::concurrent::atomic::AtomicLong::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLong");
    static jmethodID mid = java::jni->GetMethodID(_class, "incrementAndGet", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t java::util::concurrent::atomic::AtomicLong::decrementAndGet() const {
    if (!::java::util::concurrent::atomic::AtomicLong::_class) ::java::util::concurrent::atomic::AtomicLong::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLong");
    static jmethodID mid = java::jni->GetMethodID(_class, "decrementAndGet", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t java::util::concurrent::atomic::AtomicLong::addAndGet(int64_t arg0) const {
    if (!::java::util::concurrent::atomic::AtomicLong::_class) ::java::util::concurrent::atomic::AtomicLong::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLong");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAndGet", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

::java::lang::String java::util::concurrent::atomic::AtomicLong::toString() const {
    if (!::java::util::concurrent::atomic::AtomicLong::_class) ::java::util::concurrent::atomic::AtomicLong::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLong");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::util::concurrent::atomic::AtomicLong::intValue() const {
    if (!::java::util::concurrent::atomic::AtomicLong::_class) ::java::util::concurrent::atomic::AtomicLong::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLong");
    static jmethodID mid = java::jni->GetMethodID(_class, "intValue", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t java::util::concurrent::atomic::AtomicLong::longValue() const {
    if (!::java::util::concurrent::atomic::AtomicLong::_class) ::java::util::concurrent::atomic::AtomicLong::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLong");
    static jmethodID mid = java::jni->GetMethodID(_class, "longValue", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

float java::util::concurrent::atomic::AtomicLong::floatValue() const {
    if (!::java::util::concurrent::atomic::AtomicLong::_class) ::java::util::concurrent::atomic::AtomicLong::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLong");
    static jmethodID mid = java::jni->GetMethodID(_class, "floatValue", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

double java::util::concurrent::atomic::AtomicLong::doubleValue() const {
    if (!::java::util::concurrent::atomic::AtomicLong::_class) ::java::util::concurrent::atomic::AtomicLong::_class = java::fetch_class("java/util/concurrent/atomic/AtomicLong");
    static jmethodID mid = java::jni->GetMethodID(_class, "doubleValue", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

::java::util::concurrent::atomic::AtomicReferenceFieldUpdater java::util::concurrent::atomic::AtomicReferenceFieldUpdater::newUpdater(const ::java::lang::Class& arg0, const ::java::lang::Class& arg1, const ::java::lang::String& arg2){
    if (!::java::util::concurrent::atomic::AtomicReferenceFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicReferenceFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicReferenceFieldUpdater");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newUpdater", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicReferenceFieldUpdater;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::util::concurrent::atomic::AtomicReferenceFieldUpdater _ret(ret);
    return _ret;
}

bool java::util::concurrent::atomic::AtomicReferenceFieldUpdater::compareAndSet(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1, const ::java::lang::Object& arg2) const {
    if (!::java::util::concurrent::atomic::AtomicReferenceFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicReferenceFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicReferenceFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareAndSet", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool java::util::concurrent::atomic::AtomicReferenceFieldUpdater::weakCompareAndSet(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1, const ::java::lang::Object& arg2) const {
    if (!::java::util::concurrent::atomic::AtomicReferenceFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicReferenceFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicReferenceFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "weakCompareAndSet", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::util::concurrent::atomic::AtomicReferenceFieldUpdater::set(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::concurrent::atomic::AtomicReferenceFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicReferenceFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicReferenceFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::concurrent::atomic::AtomicReferenceFieldUpdater::lazySet(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::concurrent::atomic::AtomicReferenceFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicReferenceFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicReferenceFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "lazySet", "(Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object java::util::concurrent::atomic::AtomicReferenceFieldUpdater::get(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::atomic::AtomicReferenceFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicReferenceFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicReferenceFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::atomic::AtomicReferenceFieldUpdater::getAndSet(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::concurrent::atomic::AtomicReferenceFieldUpdater::_class) ::java::util::concurrent::atomic::AtomicReferenceFieldUpdater::_class = java::fetch_class("java/util/concurrent/atomic/AtomicReferenceFieldUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

