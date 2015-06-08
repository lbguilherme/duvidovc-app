#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { namespace concurrent { namespace atomic { class AtomicReferenceFieldUpdater; } } } }

namespace java {
namespace util {
namespace concurrent {
namespace atomic {
class AtomicReferenceFieldUpdater : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AtomicReferenceFieldUpdater(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AtomicReferenceFieldUpdater(const ::java::util::concurrent::atomic::AtomicReferenceFieldUpdater& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AtomicReferenceFieldUpdater(::java::util::concurrent::atomic::AtomicReferenceFieldUpdater&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::atomic::AtomicReferenceFieldUpdater& operator=(const ::java::util::concurrent::atomic::AtomicReferenceFieldUpdater& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::atomic::AtomicReferenceFieldUpdater& operator=(::java::util::concurrent::atomic::AtomicReferenceFieldUpdater&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::util::concurrent::atomic::AtomicReferenceFieldUpdater newUpdater(const ::java::lang::Class&, const ::java::lang::Class&, const ::java::lang::String&);
    bool compareAndSet(const ::java::lang::Object&, const ::java::lang::Object&, const ::java::lang::Object&) const;
    bool weakCompareAndSet(const ::java::lang::Object&, const ::java::lang::Object&, const ::java::lang::Object&) const;
    void set(const ::java::lang::Object&, const ::java::lang::Object&) const;
    void lazySet(const ::java::lang::Object&, const ::java::lang::Object&) const;
    ::java::lang::Object get(const ::java::lang::Object&) const;
    ::java::lang::Object getAndSet(const ::java::lang::Object&, const ::java::lang::Object&) const;

};
}
}
}
}


