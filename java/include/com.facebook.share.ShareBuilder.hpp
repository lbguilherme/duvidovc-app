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
namespace share {
class ShareBuilder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareBuilder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareBuilder(const ::com::facebook::share::ShareBuilder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ShareBuilder(::com::facebook::share::ShareBuilder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::ShareBuilder& operator=(const ::com::facebook::share::ShareBuilder& x) {obj = x.obj; return *this;}
    ::com::facebook::share::ShareBuilder& operator=(::com::facebook::share::ShareBuilder&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object build() const;

};
}
}
}


