#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace com { namespace facebook { namespace internal { class AttributionIdentifiers; } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace internal {
class AttributionIdentifiers : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AttributionIdentifiers(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AttributionIdentifiers(const ::com::facebook::internal::AttributionIdentifiers& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AttributionIdentifiers(::com::facebook::internal::AttributionIdentifiers&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::AttributionIdentifiers& operator=(const ::com::facebook::internal::AttributionIdentifiers& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::AttributionIdentifiers& operator=(::com::facebook::internal::AttributionIdentifiers&& x) {obj = std::move(x.obj); return *this;}
    
    AttributionIdentifiers();
    static ::com::facebook::internal::AttributionIdentifiers getAttributionIdentifiers(const ::android::content::Context&);
    ::java::lang::String getAttributionId() const ;
    ::java::lang::String getAndroidAdvertiserId() const ;
    bool isTrackingLimited() const ;

};
}
}
}


