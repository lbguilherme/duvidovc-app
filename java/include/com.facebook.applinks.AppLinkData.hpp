#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace content { class Context; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Bundle; } }
namespace com { namespace facebook { namespace applinks { class AppLinkData; } } }
namespace com { namespace facebook { namespace applinks { class AppLinkData_CompletionHandler; } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace applinks {
class AppLinkData : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AppLinkData(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AppLinkData(const ::com::facebook::applinks::AppLinkData& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AppLinkData(::com::facebook::applinks::AppLinkData&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::applinks::AppLinkData& operator=(const ::com::facebook::applinks::AppLinkData& x) {obj = x.obj; return *this;}
    ::com::facebook::applinks::AppLinkData& operator=(::com::facebook::applinks::AppLinkData&& x) {obj = std::move(x.obj); return *this;}
    
    static void fetchDeferredAppLinkData(const ::android::content::Context&, const ::com::facebook::applinks::AppLinkData_CompletionHandler&);
    static void fetchDeferredAppLinkData(const ::android::content::Context&, const ::java::lang::String&, const ::com::facebook::applinks::AppLinkData_CompletionHandler&);
    static ::com::facebook::applinks::AppLinkData createFromActivity(const ::android::app::Activity&);
    ::android::net::Uri getTargetUri() const ;
    ::java::lang::String getRef() const ;
    ::android::os::Bundle getArgumentBundle() const ;
    ::android::os::Bundle getRefererData() const ;

};
}
}
}

#include "com.facebook.applinks.AppLinkData_CompletionHandler.hpp"

