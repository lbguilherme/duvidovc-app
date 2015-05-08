#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.ServiceConnection.hpp"

namespace android { namespace content { class ComponentName; } }
namespace android { namespace content { class Context; } }
namespace android { namespace os { class IBinder; } }
namespace com { namespace facebook { namespace internal { class PlatformServiceClient_CompletedListener; } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace internal {
class PlatformServiceClient : public virtual ::java::lang::Object,
                              public virtual ::android::content::ServiceConnection {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PlatformServiceClient(jobject _obj) : ::java::lang::Object(_obj), ::android::content::ServiceConnection(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PlatformServiceClient(const ::com::facebook::internal::PlatformServiceClient& x) : ::java::lang::Object((jobject)0), ::android::content::ServiceConnection((jobject)0) {obj = x.obj;}
    PlatformServiceClient(::com::facebook::internal::PlatformServiceClient&& x) : ::java::lang::Object((jobject)0), ::android::content::ServiceConnection((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::PlatformServiceClient& operator=(const ::com::facebook::internal::PlatformServiceClient& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::PlatformServiceClient& operator=(::com::facebook::internal::PlatformServiceClient&& x) {obj = std::move(x.obj); return *this;}
    
    PlatformServiceClient(const ::android::content::Context&, int32_t, int32_t, int32_t, const ::java::lang::String&);
    void setCompletedListener(const ::com::facebook::internal::PlatformServiceClient_CompletedListener&) const ;
    bool start() const ;
    void cancel() const ;
    void onServiceConnected(const ::android::content::ComponentName&, const ::android::os::IBinder&) const ;
    void onServiceDisconnected(const ::android::content::ComponentName&) const ;

};
}
}
}

#include "com.facebook.internal.PlatformServiceClient_CompletedListener.hpp"

