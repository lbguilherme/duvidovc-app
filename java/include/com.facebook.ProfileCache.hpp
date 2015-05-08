#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace com {
namespace facebook {
class ProfileCache : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProfileCache(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProfileCache(const ::com::facebook::ProfileCache& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ProfileCache(::com::facebook::ProfileCache&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::ProfileCache& operator=(const ::com::facebook::ProfileCache& x) {obj = x.obj; return *this;}
    ::com::facebook::ProfileCache& operator=(::com::facebook::ProfileCache&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


