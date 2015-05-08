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
namespace login {
class GetTokenClient : public virtual ::java::lang::Object,
                       public virtual ::com::facebook::internal::PlatformServiceClient {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GetTokenClient(jobject _obj) : ::java::lang::Object(_obj), ::android::content::ServiceConnection(_obj), ::com::facebook::internal::PlatformServiceClient(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GetTokenClient(const ::com::facebook::login::GetTokenClient& x) : ::java::lang::Object((jobject)0), ::android::content::ServiceConnection((jobject)0), ::com::facebook::internal::PlatformServiceClient((jobject)0) {obj = x.obj;}
    GetTokenClient(::com::facebook::login::GetTokenClient&& x) : ::java::lang::Object((jobject)0), ::android::content::ServiceConnection((jobject)0), ::com::facebook::internal::PlatformServiceClient((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::login::GetTokenClient& operator=(const ::com::facebook::login::GetTokenClient& x) {obj = x.obj; return *this;}
    ::com::facebook::login::GetTokenClient& operator=(::com::facebook::login::GetTokenClient&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


