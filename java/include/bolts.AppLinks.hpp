#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Bundle; } }

namespace bolts {
class AppLinks : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AppLinks(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AppLinks(const ::bolts::AppLinks& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AppLinks(::bolts::AppLinks&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::bolts::AppLinks& operator=(const ::bolts::AppLinks& x) {obj = x.obj; return *this;}
    ::bolts::AppLinks& operator=(::bolts::AppLinks&& x) {obj = std::move(x.obj); return *this;}
    
    AppLinks();
    static ::android::os::Bundle getAppLinkData(const ::android::content::Intent&);
    static ::android::os::Bundle getAppLinkExtras(const ::android::content::Intent&);
    static ::android::net::Uri getTargetUrl(const ::android::content::Intent&);
    static ::android::net::Uri getTargetUrlFromInboundIntent(const ::android::content::Context&, const ::android::content::Intent&);

};
}


