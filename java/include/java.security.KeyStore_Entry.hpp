#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace java {
namespace security {
class KeyStore_Entry : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyStore_Entry(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyStore_Entry(const ::java::security::KeyStore_Entry& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeyStore_Entry(::java::security::KeyStore_Entry&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::KeyStore_Entry& operator=(const ::java::security::KeyStore_Entry& x) {obj = x.obj; return *this;}
    ::java::security::KeyStore_Entry& operator=(::java::security::KeyStore_Entry&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


