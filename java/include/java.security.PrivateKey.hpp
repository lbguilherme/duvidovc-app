#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.Key.hpp"


namespace java {
namespace security {
class PrivateKey : public virtual ::java::lang::Object,
                   public virtual ::java::security::Key {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PrivateKey(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::security::Key(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PrivateKey(const ::java::security::PrivateKey& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Key((jobject)0) {obj = x.obj;}
    PrivateKey(::java::security::PrivateKey&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Key((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::PrivateKey& operator=(const ::java::security::PrivateKey& x) {obj = x.obj; return *this;}
    ::java::security::PrivateKey& operator=(::java::security::PrivateKey&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


