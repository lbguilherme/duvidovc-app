#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace com {
namespace facebook {
namespace share {
namespace internal {
class LikeDialog_Result : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LikeDialog_Result(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LikeDialog_Result(const ::com::facebook::share::internal::LikeDialog_Result& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LikeDialog_Result(::com::facebook::share::internal::LikeDialog_Result&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::internal::LikeDialog_Result& operator=(const ::com::facebook::share::internal::LikeDialog_Result& x) {obj = x.obj; return *this;}
    ::com::facebook::share::internal::LikeDialog_Result& operator=(::com::facebook::share::internal::LikeDialog_Result&& x) {obj = std::move(x.obj); return *this;}
    
    LikeDialog_Result();

};
}
}
}
}


