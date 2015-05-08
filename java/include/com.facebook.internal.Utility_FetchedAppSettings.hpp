#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { namespace internal { class FacebookRequestErrorClassification; } } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Map; } }

namespace com {
namespace facebook {
namespace internal {
class Utility_FetchedAppSettings : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Utility_FetchedAppSettings(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Utility_FetchedAppSettings(const ::com::facebook::internal::Utility_FetchedAppSettings& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Utility_FetchedAppSettings(::com::facebook::internal::Utility_FetchedAppSettings&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::Utility_FetchedAppSettings& operator=(const ::com::facebook::internal::Utility_FetchedAppSettings& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::Utility_FetchedAppSettings& operator=(::com::facebook::internal::Utility_FetchedAppSettings&& x) {obj = std::move(x.obj); return *this;}
    
    bool supportsImplicitLogging() const ;
    ::java::lang::String getNuxContent() const ;
    bool getNuxEnabled() const ;
    ::java::util::Map getDialogConfigurations() const ;
    ::com::facebook::internal::FacebookRequestErrorClassification getErrorClassification() const ;

};
}
}
}


