#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Map.hpp"

namespace java { namespace lang { class Object; } }

namespace java {
namespace util {
namespace concurrent {
class ConcurrentMap : public virtual ::java::lang::Object,
                      public virtual ::java::util::Map {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConcurrentMap(jobject _obj) : ::java::lang::Object(_obj), ::java::util::Map(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConcurrentMap(const ::java::util::concurrent::ConcurrentMap& x) : ::java::lang::Object((jobject)0), ::java::util::Map((jobject)0) {obj = x.obj;}
    ConcurrentMap(::java::util::concurrent::ConcurrentMap&& x) : ::java::lang::Object((jobject)0), ::java::util::Map((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::ConcurrentMap& operator=(const ::java::util::concurrent::ConcurrentMap& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::ConcurrentMap& operator=(::java::util::concurrent::ConcurrentMap&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object putIfAbsent(const ::java::lang::Object&, const ::java::lang::Object&) const;
    bool remove(const ::java::lang::Object&, const ::java::lang::Object&) const;
    bool replace(const ::java::lang::Object&, const ::java::lang::Object&, const ::java::lang::Object&) const;
    ::java::lang::Object replace(const ::java::lang::Object&, const ::java::lang::Object&) const;

};
}
}
}


