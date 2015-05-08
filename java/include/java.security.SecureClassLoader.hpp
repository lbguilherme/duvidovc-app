#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.ClassLoader.hpp"


namespace java {
namespace security {
class SecureClassLoader : public virtual ::java::lang::Object,
                          public virtual ::java::lang::ClassLoader {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SecureClassLoader(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::ClassLoader(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SecureClassLoader(const ::java::security::SecureClassLoader& x) : ::java::lang::Object((jobject)0), ::java::lang::ClassLoader((jobject)0) {obj = x.obj;}
    SecureClassLoader(::java::security::SecureClassLoader&& x) : ::java::lang::Object((jobject)0), ::java::lang::ClassLoader((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::SecureClassLoader& operator=(const ::java::security::SecureClassLoader& x) {obj = x.obj; return *this;}
    ::java::security::SecureClassLoader& operator=(::java::security::SecureClassLoader&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


