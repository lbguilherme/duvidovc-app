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
namespace internal {
class DialogFeature : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DialogFeature(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DialogFeature(const ::com::facebook::internal::DialogFeature& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DialogFeature(::com::facebook::internal::DialogFeature&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::DialogFeature& operator=(const ::com::facebook::internal::DialogFeature& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::DialogFeature& operator=(::com::facebook::internal::DialogFeature&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getAction() const;
    int32_t getMinVersion() const;
    ::java::lang::String name() const;

};
}
}
}


