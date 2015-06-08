#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class PendingIntent; } }
namespace android { namespace net { class VpnService; } }
namespace android { namespace net { class VpnService_Builder; } }
namespace android { namespace os { class ParcelFileDescriptor; } }
namespace java { namespace lang { class String; } }
namespace java { namespace net { class InetAddress; } }

namespace android {
namespace net {
class VpnService_Builder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit VpnService_Builder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    VpnService_Builder(const ::android::net::VpnService_Builder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    VpnService_Builder(::android::net::VpnService_Builder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::VpnService_Builder& operator=(const ::android::net::VpnService_Builder& x) {obj = x.obj; return *this;}
    ::android::net::VpnService_Builder& operator=(::android::net::VpnService_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    VpnService_Builder(const ::android::net::VpnService&);
    ::android::net::VpnService_Builder setSession(const ::java::lang::String&) const;
    ::android::net::VpnService_Builder setConfigureIntent(const ::android::app::PendingIntent&) const;
    ::android::net::VpnService_Builder setMtu(int32_t) const;
    ::android::net::VpnService_Builder addAddress(const ::java::net::InetAddress&, int32_t) const;
    ::android::net::VpnService_Builder addAddress(const ::java::lang::String&, int32_t) const;
    ::android::net::VpnService_Builder addRoute(const ::java::net::InetAddress&, int32_t) const;
    ::android::net::VpnService_Builder addRoute(const ::java::lang::String&, int32_t) const;
    ::android::net::VpnService_Builder addDnsServer(const ::java::net::InetAddress&) const;
    ::android::net::VpnService_Builder addDnsServer(const ::java::lang::String&) const;
    ::android::net::VpnService_Builder addSearchDomain(const ::java::lang::String&) const;
    ::android::os::ParcelFileDescriptor establish() const;

};
}
}


