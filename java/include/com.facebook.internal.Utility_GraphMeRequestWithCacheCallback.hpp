#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { class FacebookException; } }
namespace org { namespace json { class JSONObject; } }

namespace com {
namespace facebook {
namespace internal {
class Utility_GraphMeRequestWithCacheCallback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Utility_GraphMeRequestWithCacheCallback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Utility_GraphMeRequestWithCacheCallback(const ::com::facebook::internal::Utility_GraphMeRequestWithCacheCallback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Utility_GraphMeRequestWithCacheCallback(::com::facebook::internal::Utility_GraphMeRequestWithCacheCallback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::Utility_GraphMeRequestWithCacheCallback& operator=(const ::com::facebook::internal::Utility_GraphMeRequestWithCacheCallback& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::Utility_GraphMeRequestWithCacheCallback& operator=(::com::facebook::internal::Utility_GraphMeRequestWithCacheCallback&& x) {obj = std::move(x.obj); return *this;}
    
    void onSuccess(const ::org::json::JSONObject&) const;
    void onFailure(const ::com::facebook::FacebookException&) const;

};
}
}
}


