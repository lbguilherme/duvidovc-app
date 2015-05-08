#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { class Uri; } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace internal {
class Utility_DialogFeatureConfig : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Utility_DialogFeatureConfig(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Utility_DialogFeatureConfig(const ::com::facebook::internal::Utility_DialogFeatureConfig& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Utility_DialogFeatureConfig(::com::facebook::internal::Utility_DialogFeatureConfig&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::Utility_DialogFeatureConfig& operator=(const ::com::facebook::internal::Utility_DialogFeatureConfig& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::Utility_DialogFeatureConfig& operator=(::com::facebook::internal::Utility_DialogFeatureConfig&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getDialogName() const ;
    ::java::lang::String getFeatureName() const ;
    ::android::net::Uri getFallbackUrl() const ;
    std::vector< int32_t> getVersionSpec() const ;

};
}
}
}


