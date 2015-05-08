#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace drm {
class ProcessedData : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProcessedData(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProcessedData(const ::android::drm::ProcessedData& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ProcessedData(::android::drm::ProcessedData&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::drm::ProcessedData& operator=(const ::android::drm::ProcessedData& x) {obj = x.obj; return *this;}
    ::android::drm::ProcessedData& operator=(::android::drm::ProcessedData&& x) {obj = std::move(x.obj); return *this;}
    
    std::vector< int8_t> getData() const ;
    ::java::lang::String getAccountId() const ;
    ::java::lang::String getSubscriptionId() const ;

};
}
}


