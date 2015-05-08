#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace share {
class Sharer_Result : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Sharer_Result(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Sharer_Result(const ::com::facebook::share::Sharer_Result& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Sharer_Result(::com::facebook::share::Sharer_Result&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::Sharer_Result& operator=(const ::com::facebook::share::Sharer_Result& x) {obj = x.obj; return *this;}
    ::com::facebook::share::Sharer_Result& operator=(::com::facebook::share::Sharer_Result&& x) {obj = std::move(x.obj); return *this;}
    
    Sharer_Result(const ::java::lang::String&);
    ::java::lang::String getPostId() const ;

};
}
}
}


