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
class Utility_Predicate : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Utility_Predicate(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Utility_Predicate(const ::com::facebook::internal::Utility_Predicate& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Utility_Predicate(::com::facebook::internal::Utility_Predicate&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::Utility_Predicate& operator=(const ::com::facebook::internal::Utility_Predicate& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::Utility_Predicate& operator=(::com::facebook::internal::Utility_Predicate&& x) {obj = std::move(x.obj); return *this;}
    
    bool apply(const ::java::lang::Object&) const ;

};
}
}
}


