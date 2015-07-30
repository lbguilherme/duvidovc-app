#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace vc {
namespace duvido {
class Manifest : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Manifest(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Manifest(const ::vc::duvido::Manifest& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Manifest(::vc::duvido::Manifest&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::vc::duvido::Manifest& operator=(const ::vc::duvido::Manifest& x) {obj = x.obj; return *this;}
    ::vc::duvido::Manifest& operator=(::vc::duvido::Manifest&& x) {obj = std::move(x.obj); return *this;}
    
    Manifest();

};
}
}

#include "vc.duvido.Manifest_permission.hpp"

