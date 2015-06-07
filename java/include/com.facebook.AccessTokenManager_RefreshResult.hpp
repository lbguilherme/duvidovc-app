#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace com {
namespace facebook {
class AccessTokenManager_RefreshResult : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessTokenManager_RefreshResult(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessTokenManager_RefreshResult(const ::com::facebook::AccessTokenManager_RefreshResult& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AccessTokenManager_RefreshResult(::com::facebook::AccessTokenManager_RefreshResult&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::AccessTokenManager_RefreshResult& operator=(const ::com::facebook::AccessTokenManager_RefreshResult& x) {obj = x.obj; return *this;}
    ::com::facebook::AccessTokenManager_RefreshResult& operator=(::com::facebook::AccessTokenManager_RefreshResult&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


