#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace com {
namespace facebook {
class ProfileManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProfileManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProfileManager(const ::com::facebook::ProfileManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ProfileManager(::com::facebook::ProfileManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::ProfileManager& operator=(const ::com::facebook::ProfileManager& x) {obj = x.obj; return *this;}
    ::com::facebook::ProfileManager& operator=(::com::facebook::ProfileManager&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


