#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Bundle; } }

namespace com {
namespace facebook {
namespace internal {
class PlatformServiceClient_CompletedListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PlatformServiceClient_CompletedListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PlatformServiceClient_CompletedListener(const ::com::facebook::internal::PlatformServiceClient_CompletedListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PlatformServiceClient_CompletedListener(::com::facebook::internal::PlatformServiceClient_CompletedListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::PlatformServiceClient_CompletedListener& operator=(const ::com::facebook::internal::PlatformServiceClient_CompletedListener& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::PlatformServiceClient_CompletedListener& operator=(::com::facebook::internal::PlatformServiceClient_CompletedListener&& x) {obj = std::move(x.obj); return *this;}
    
    void completed(const ::android::os::Bundle&) const;

};
}
}
}


