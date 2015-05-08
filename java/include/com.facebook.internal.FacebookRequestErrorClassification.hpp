#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { class FacebookRequestError_Category; } }
namespace com { namespace facebook { namespace internal { class FacebookRequestErrorClassification; } } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Map; } }
namespace org { namespace json { class JSONArray; } }

namespace com {
namespace facebook {
namespace internal {
class FacebookRequestErrorClassification : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FacebookRequestErrorClassification(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FacebookRequestErrorClassification(const ::com::facebook::internal::FacebookRequestErrorClassification& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FacebookRequestErrorClassification(::com::facebook::internal::FacebookRequestErrorClassification&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::FacebookRequestErrorClassification& operator=(const ::com::facebook::internal::FacebookRequestErrorClassification& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::FacebookRequestErrorClassification& operator=(::com::facebook::internal::FacebookRequestErrorClassification&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::util::Map getOtherErrors() const ;
    ::java::util::Map getTransientErrors() const ;
    ::java::util::Map getLoginRecoverableErrors() const ;
    ::java::lang::String getRecoveryMessage(const ::com::facebook::FacebookRequestError_Category&) const ;
    ::com::facebook::FacebookRequestError_Category classify(int32_t, int32_t, bool) const ;
    static ::com::facebook::internal::FacebookRequestErrorClassification getDefaultErrorClassification();
    static ::com::facebook::internal::FacebookRequestErrorClassification createFromJSON(const ::org::json::JSONArray&);

};
}
}
}


