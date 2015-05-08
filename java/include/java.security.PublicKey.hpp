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
class PublicKey : public virtual ::java::lang::Object,
                  public virtual ::java::security::Key {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PublicKey(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::security::Key(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PublicKey(const ::java::security::PublicKey& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Key((jobject)0) {obj = x.obj;}
    PublicKey(::java::security::PublicKey&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Key((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::PublicKey& operator=(const ::java::security::PublicKey& x) {obj = x.obj; return *this;}
    ::java::security::PublicKey& operator=(::java::security::PublicKey&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


