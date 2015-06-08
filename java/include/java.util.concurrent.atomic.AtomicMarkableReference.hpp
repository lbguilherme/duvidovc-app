#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }

namespace java {
namespace util {
namespace concurrent {
namespace atomic {
class AtomicMarkableReference : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AtomicMarkableReference(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AtomicMarkableReference(const ::java::util::concurrent::atomic::AtomicMarkableReference& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AtomicMarkableReference(::java::util::concurrent::atomic::AtomicMarkableReference&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::atomic::AtomicMarkableReference& operator=(const ::java::util::concurrent::atomic::AtomicMarkableReference& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::atomic::AtomicMarkableReference& operator=(::java::util::concurrent::atomic::AtomicMarkableReference&& x) {obj = std::move(x.obj); return *this;}
    
    AtomicMarkableReference(const ::java::lang::Object&, bool);
    ::java::lang::Object getReference() const;
    bool isMarked() const;
    ::java::lang::Object get(const std::vector< bool>&) const;
    bool weakCompareAndSet(const ::java::lang::Object&, const ::java::lang::Object&, bool, bool) const;
    bool compareAndSet(const ::java::lang::Object&, const ::java::lang::Object&, bool, bool) const;
    void set(const ::java::lang::Object&, bool) const;
    bool attemptMark(const ::java::lang::Object&, bool) const;

};
}
}
}
}


