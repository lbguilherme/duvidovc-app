#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace com {
namespace facebook {
class BuildConfig : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BuildConfig(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BuildConfig(const ::com::facebook::BuildConfig& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BuildConfig(::com::facebook::BuildConfig&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::BuildConfig& operator=(const ::com::facebook::BuildConfig& x) {obj = x.obj; return *this;}
    ::com::facebook::BuildConfig& operator=(::com::facebook::BuildConfig&& x) {obj = std::move(x.obj); return *this;}
    
    BuildConfig();

};
}
}


