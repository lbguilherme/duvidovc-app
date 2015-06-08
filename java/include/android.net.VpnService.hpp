#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.Service.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace os { class IBinder; } }
namespace java { namespace net { class DatagramSocket; } }
namespace java { namespace net { class Socket; } }

namespace android {
namespace net {
class VpnService : public virtual ::java::lang::Object,
                   public virtual ::android::app::Service {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit VpnService(jobject _obj) : ::java::lang::Object(_obj), ::android::app::Service(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::content::Context(_obj), ::android::content::ContextWrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    VpnService(const ::android::net::VpnService& x) : ::java::lang::Object((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj;}
    VpnService(::android::net::VpnService&& x) : ::java::lang::Object((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::VpnService& operator=(const ::android::net::VpnService& x) {obj = x.obj; return *this;}
    ::android::net::VpnService& operator=(::android::net::VpnService&& x) {obj = std::move(x.obj); return *this;}
    
    VpnService();
    static ::android::content::Intent prepare(const ::android::content::Context&);
    bool protect(int32_t) const;
    bool protect(const ::java::net::Socket&) const;
    bool protect(const ::java::net::DatagramSocket&) const;
    ::android::os::IBinder onBind(const ::android::content::Intent&) const;
    void onRevoke() const;

};
}
}

#include "android.net.VpnService_Builder.hpp"

