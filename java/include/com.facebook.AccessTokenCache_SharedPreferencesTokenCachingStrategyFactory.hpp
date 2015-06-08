#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { class LegacyTokenHelper; } }

namespace com {
namespace facebook {
class AccessTokenCache_SharedPreferencesTokenCachingStrategyFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessTokenCache_SharedPreferencesTokenCachingStrategyFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessTokenCache_SharedPreferencesTokenCachingStrategyFactory(const ::com::facebook::AccessTokenCache_SharedPreferencesTokenCachingStrategyFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AccessTokenCache_SharedPreferencesTokenCachingStrategyFactory(::com::facebook::AccessTokenCache_SharedPreferencesTokenCachingStrategyFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::AccessTokenCache_SharedPreferencesTokenCachingStrategyFactory& operator=(const ::com::facebook::AccessTokenCache_SharedPreferencesTokenCachingStrategyFactory& x) {obj = x.obj; return *this;}
    ::com::facebook::AccessTokenCache_SharedPreferencesTokenCachingStrategyFactory& operator=(::com::facebook::AccessTokenCache_SharedPreferencesTokenCachingStrategyFactory&& x) {obj = std::move(x.obj); return *this;}
    
    ::com::facebook::LegacyTokenHelper create() const;

};
}
}


