#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.internal.PlatformServiceClient.hpp"


namespace com {
namespace facebook {
namespace share {
namespace internal {
class LikeStatusClient : public virtual ::java::lang::Object,
                         public virtual ::com::facebook::internal::PlatformServiceClient {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LikeStatusClient(jobject _obj) : ::java::lang::Object(_obj), ::android::content::ServiceConnection(_obj), ::com::facebook::internal::PlatformServiceClient(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LikeStatusClient(const ::com::facebook::share::internal::LikeStatusClient& x) : ::java::lang::Object((jobject)0), ::android::content::ServiceConnection((jobject)0), ::com::facebook::internal::PlatformServiceClient((jobject)0) {obj = x.obj;}
    LikeStatusClient(::com::facebook::share::internal::LikeStatusClient&& x) : ::java::lang::Object((jobject)0), ::android::content::ServiceConnection((jobject)0), ::com::facebook::internal::PlatformServiceClient((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::internal::LikeStatusClient& operator=(const ::com::facebook::share::internal::LikeStatusClient& x) {obj = x.obj; return *this;}
    ::com::facebook::share::internal::LikeStatusClient& operator=(::com::facebook::share::internal::LikeStatusClient&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}


