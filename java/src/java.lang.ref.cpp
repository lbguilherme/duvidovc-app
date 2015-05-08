#include "java-core.hpp"
#include <memory>
#include "java.lang.Object.hpp"
#include "java.lang.ref.PhantomReference.hpp"
#include "java.lang.ref.Reference.hpp"
#include "java.lang.ref.ReferenceQueue.hpp"
#include "java.lang.ref.SoftReference.hpp"
#include "java.lang.ref.WeakReference.hpp"

jclass java::lang::ref::PhantomReference::_class = nullptr;
jclass java::lang::ref::SoftReference::_class = nullptr;
jclass java::lang::ref::ReferenceQueue::_class = nullptr;
jclass java::lang::ref::Reference::_class = nullptr;
jclass java::lang::ref::WeakReference::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ref::PhantomReference::PhantomReference(const ::java::lang::Object& arg0, const ::java::lang::ref::ReferenceQueue& arg1) : ::java::lang::Object((jobject)0), ::java::lang::ref::Reference((jobject)0) {
    if (!::java::lang::ref::PhantomReference::_class) ::java::lang::ref::PhantomReference::_class = java::fetch_class("java/lang/ref/PhantomReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::Object java::lang::ref::PhantomReference::get() const {
    if (!::java::lang::ref::PhantomReference::_class) ::java::lang::ref::PhantomReference::_class = java::fetch_class("java/lang/ref/PhantomReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ref::SoftReference::SoftReference(const ::java::lang::Object& arg0) : ::java::lang::Object((jobject)0), ::java::lang::ref::Reference((jobject)0) {
    if (!::java::lang::ref::SoftReference::_class) ::java::lang::ref::SoftReference::_class = java::fetch_class("java/lang/ref/SoftReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ref::SoftReference::SoftReference(const ::java::lang::Object& arg0, const ::java::lang::ref::ReferenceQueue& arg1) : ::java::lang::Object((jobject)0), ::java::lang::ref::Reference((jobject)0) {
    if (!::java::lang::ref::SoftReference::_class) ::java::lang::ref::SoftReference::_class = java::fetch_class("java/lang/ref/SoftReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ref::ReferenceQueue::ReferenceQueue() : ::java::lang::Object((jobject)0) {
    if (!::java::lang::ref::ReferenceQueue::_class) ::java::lang::ref::ReferenceQueue::_class = java::fetch_class("java/lang/ref/ReferenceQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::ref::Reference java::lang::ref::ReferenceQueue::poll() const {
    if (!::java::lang::ref::ReferenceQueue::_class) ::java::lang::ref::ReferenceQueue::_class = java::fetch_class("java/lang/ref/ReferenceQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "poll", "()Ljava/lang/ref/Reference;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::ref::Reference _ret(ret);
    return _ret;
}

::java::lang::ref::Reference java::lang::ref::ReferenceQueue::remove() const {
    if (!::java::lang::ref::ReferenceQueue::_class) ::java::lang::ref::ReferenceQueue::_class = java::fetch_class("java/lang/ref/ReferenceQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "()Ljava/lang/ref/Reference;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::ref::Reference _ret(ret);
    return _ret;
}

::java::lang::ref::Reference java::lang::ref::ReferenceQueue::remove(int64_t arg0) const {
    if (!::java::lang::ref::ReferenceQueue::_class) ::java::lang::ref::ReferenceQueue::_class = java::fetch_class("java/lang/ref/ReferenceQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(J)Ljava/lang/ref/Reference;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::ref::Reference _ret(ret);
    return _ret;
}

void java::lang::ref::Reference::clear() const {
    if (!::java::lang::ref::Reference::_class) ::java::lang::ref::Reference::_class = java::fetch_class("java/lang/ref/Reference");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::lang::ref::Reference::enqueue() const {
    if (!::java::lang::ref::Reference::_class) ::java::lang::ref::Reference::_class = java::fetch_class("java/lang/ref/Reference");
    static jmethodID mid = java::jni->GetMethodID(_class, "enqueue", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Object java::lang::ref::Reference::get() const {
    if (!::java::lang::ref::Reference::_class) ::java::lang::ref::Reference::_class = java::fetch_class("java/lang/ref/Reference");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::lang::ref::Reference::isEnqueued() const {
    if (!::java::lang::ref::Reference::_class) ::java::lang::ref::Reference::_class = java::fetch_class("java/lang/ref/Reference");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEnqueued", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ref::WeakReference::WeakReference(const ::java::lang::Object& arg0) : ::java::lang::Object((jobject)0), ::java::lang::ref::Reference((jobject)0) {
    if (!::java::lang::ref::WeakReference::_class) ::java::lang::ref::WeakReference::_class = java::fetch_class("java/lang/ref/WeakReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ref::WeakReference::WeakReference(const ::java::lang::Object& arg0, const ::java::lang::ref::ReferenceQueue& arg1) : ::java::lang::Object((jobject)0), ::java::lang::ref::Reference((jobject)0) {
    if (!::java::lang::ref::WeakReference::_class) ::java::lang::ref::WeakReference::_class = java::fetch_class("java/lang/ref/WeakReference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

