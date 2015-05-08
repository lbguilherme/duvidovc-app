#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace vc {
namespace duvido {
class BuildConfig : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BuildConfig(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BuildConfig(const ::vc::duvido::BuildConfig& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BuildConfig(::vc::duvido::BuildConfig&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::vc::duvido::BuildConfig& operator=(const ::vc::duvido::BuildConfig& x) {obj = x.obj; return *this;}
    ::vc::duvido::BuildConfig& operator=(::vc::duvido::BuildConfig&& x) {obj = std::move(x.obj); return *this;}
    
    BuildConfig();

};
}
}


