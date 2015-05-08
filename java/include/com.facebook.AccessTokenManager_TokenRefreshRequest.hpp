#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.ServiceConnection.hpp"

namespace android { namespace content { class ComponentName; } }
namespace android { namespace os { class IBinder; } }

namespace com {
namespace facebook {
class AccessTokenManager_TokenRefreshRequest : public virtual ::java::lang::Object,
                                               public virtual ::android::content::ServiceConnection {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessTokenManager_TokenRefreshRequest(jobject _obj) : ::java::lang::Object(_obj), ::android::content::ServiceConnection(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessTokenManager_TokenRefreshRequest(const ::com::facebook::AccessTokenManager_TokenRefreshRequest& x) : ::java::lang::Object((jobject)0), ::android::content::ServiceConnection((jobject)0) {obj = x.obj;}
    AccessTokenManager_TokenRefreshRequest(::com::facebook::AccessTokenManager_TokenRefreshRequest&& x) : ::java::lang::Object((jobject)0), ::android::content::ServiceConnection((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::AccessTokenManager_TokenRefreshRequest& operator=(const ::com::facebook::AccessTokenManager_TokenRefreshRequest& x) {obj = x.obj; return *this;}
    ::com::facebook::AccessTokenManager_TokenRefreshRequest& operator=(::com::facebook::AccessTokenManager_TokenRefreshRequest&& x) {obj = std::move(x.obj); return *this;}
    
    void bind() const ;
    void onServiceConnected(const ::android::content::ComponentName&, const ::android::os::IBinder&) const ;
    void onServiceDisconnected(const ::android::content::ComponentName&) const ;

};
}
}


