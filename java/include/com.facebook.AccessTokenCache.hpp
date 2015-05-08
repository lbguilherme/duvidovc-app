#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { class AccessToken; } }

namespace com {
namespace facebook {
class AccessTokenCache : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessTokenCache(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessTokenCache(const ::com::facebook::AccessTokenCache& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AccessTokenCache(::com::facebook::AccessTokenCache&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::AccessTokenCache& operator=(const ::com::facebook::AccessTokenCache& x) {obj = x.obj; return *this;}
    ::com::facebook::AccessTokenCache& operator=(::com::facebook::AccessTokenCache&& x) {obj = std::move(x.obj); return *this;}
    
    AccessTokenCache();
    ::com::facebook::AccessToken load() const ;
    void save(const ::com::facebook::AccessToken&) const ;
    void clear() const ;

};
}
}

#include "com.facebook.AccessTokenCache_SharedPreferencesTokenCachingStrategyFactory.hpp"

