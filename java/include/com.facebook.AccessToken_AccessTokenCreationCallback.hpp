#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { class AccessToken; } }
namespace com { namespace facebook { class FacebookException; } }

namespace com {
namespace facebook {
class AccessToken_AccessTokenCreationCallback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessToken_AccessTokenCreationCallback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessToken_AccessTokenCreationCallback(const ::com::facebook::AccessToken_AccessTokenCreationCallback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AccessToken_AccessTokenCreationCallback(::com::facebook::AccessToken_AccessTokenCreationCallback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::AccessToken_AccessTokenCreationCallback& operator=(const ::com::facebook::AccessToken_AccessTokenCreationCallback& x) {obj = x.obj; return *this;}
    ::com::facebook::AccessToken_AccessTokenCreationCallback& operator=(::com::facebook::AccessToken_AccessTokenCreationCallback&& x) {obj = std::move(x.obj); return *this;}
    
    void onSuccess(const ::com::facebook::AccessToken&) const;
    void onError(const ::com::facebook::FacebookException&) const;

};
}
}


