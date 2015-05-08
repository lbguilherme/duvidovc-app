#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Handler.hpp"

namespace android { namespace os { class Message; } }

namespace com {
namespace facebook {
class AccessTokenManager_TokenRefreshRequestHandler : public virtual ::java::lang::Object,
                                                      public virtual ::android::os::Handler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessTokenManager_TokenRefreshRequestHandler(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Handler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessTokenManager_TokenRefreshRequestHandler(const ::com::facebook::AccessTokenManager_TokenRefreshRequestHandler& x) : ::java::lang::Object((jobject)0), ::android::os::Handler((jobject)0) {obj = x.obj;}
    AccessTokenManager_TokenRefreshRequestHandler(::com::facebook::AccessTokenManager_TokenRefreshRequestHandler&& x) : ::java::lang::Object((jobject)0), ::android::os::Handler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::AccessTokenManager_TokenRefreshRequestHandler& operator=(const ::com::facebook::AccessTokenManager_TokenRefreshRequestHandler& x) {obj = x.obj; return *this;}
    ::com::facebook::AccessTokenManager_TokenRefreshRequestHandler& operator=(::com::facebook::AccessTokenManager_TokenRefreshRequestHandler&& x) {obj = std::move(x.obj); return *this;}
    
    void handleMessage(const ::android::os::Message&) const ;

};
}
}


