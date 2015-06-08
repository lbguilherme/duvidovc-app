#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "bolts.AppLinkResolver.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace net { class Uri; } }
namespace bolts { class Task; }

namespace bolts {
class WebViewAppLinkResolver : public virtual ::java::lang::Object,
                               public virtual ::bolts::AppLinkResolver {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WebViewAppLinkResolver(jobject _obj) : ::java::lang::Object(_obj), ::bolts::AppLinkResolver(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WebViewAppLinkResolver(const ::bolts::WebViewAppLinkResolver& x) : ::java::lang::Object((jobject)0), ::bolts::AppLinkResolver((jobject)0) {obj = x.obj;}
    WebViewAppLinkResolver(::bolts::WebViewAppLinkResolver&& x) : ::java::lang::Object((jobject)0), ::bolts::AppLinkResolver((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::bolts::WebViewAppLinkResolver& operator=(const ::bolts::WebViewAppLinkResolver& x) {obj = x.obj; return *this;}
    ::bolts::WebViewAppLinkResolver& operator=(::bolts::WebViewAppLinkResolver&& x) {obj = std::move(x.obj); return *this;}
    
    WebViewAppLinkResolver(const ::android::content::Context&);
    ::bolts::Task getAppLinkFromUrlInBackground(const ::android::net::Uri&) const;

};
}


