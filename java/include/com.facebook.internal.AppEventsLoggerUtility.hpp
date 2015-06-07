#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace com { namespace facebook { namespace internal { class AppEventsLoggerUtility_GraphAPIActivityType; } } }
namespace com { namespace facebook { namespace internal { class AttributionIdentifiers; } } }
namespace java { namespace lang { class String; } }
namespace org { namespace json { class JSONObject; } }

namespace com {
namespace facebook {
namespace internal {
class AppEventsLoggerUtility : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AppEventsLoggerUtility(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AppEventsLoggerUtility(const ::com::facebook::internal::AppEventsLoggerUtility& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AppEventsLoggerUtility(::com::facebook::internal::AppEventsLoggerUtility&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::AppEventsLoggerUtility& operator=(const ::com::facebook::internal::AppEventsLoggerUtility& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::AppEventsLoggerUtility& operator=(::com::facebook::internal::AppEventsLoggerUtility&& x) {obj = std::move(x.obj); return *this;}
    
    AppEventsLoggerUtility();
    static ::org::json::JSONObject getJSONObjectForGraphAPICall(const ::com::facebook::internal::AppEventsLoggerUtility_GraphAPIActivityType&, const ::com::facebook::internal::AttributionIdentifiers&, const ::java::lang::String&, bool, const ::android::content::Context&);

};
}
}
}

#include "com.facebook.internal.AppEventsLoggerUtility_GraphAPIActivityType.hpp"

