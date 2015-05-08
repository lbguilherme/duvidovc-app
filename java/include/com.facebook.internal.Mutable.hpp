#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }

namespace com {
namespace facebook {
namespace internal {
class Mutable : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Mutable(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Mutable(const ::com::facebook::internal::Mutable& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Mutable(::com::facebook::internal::Mutable&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::Mutable& operator=(const ::com::facebook::internal::Mutable& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::Mutable& operator=(::com::facebook::internal::Mutable&& x) {obj = std::move(x.obj); return *this;}
    
    Mutable(const ::java::lang::Object&);

};
}
}
}


