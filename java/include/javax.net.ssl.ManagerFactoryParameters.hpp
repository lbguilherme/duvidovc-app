#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace javax {
namespace net {
namespace ssl {
class ManagerFactoryParameters : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ManagerFactoryParameters(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ManagerFactoryParameters(const ::javax::net::ssl::ManagerFactoryParameters& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ManagerFactoryParameters(::javax::net::ssl::ManagerFactoryParameters&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::ManagerFactoryParameters& operator=(const ::javax::net::ssl::ManagerFactoryParameters& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::ManagerFactoryParameters& operator=(::javax::net::ssl::ManagerFactoryParameters&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


