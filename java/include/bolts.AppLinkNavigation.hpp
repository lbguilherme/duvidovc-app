#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Bundle; } }
namespace bolts { class AppLink; }
namespace bolts { class AppLinkNavigation_NavigationResult; }
namespace bolts { class AppLinkResolver; }
namespace bolts { class Task; }
namespace java { namespace lang { class String; } }
namespace java { namespace net { class URL; } }

namespace bolts {
class AppLinkNavigation : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AppLinkNavigation(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AppLinkNavigation(const ::bolts::AppLinkNavigation& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AppLinkNavigation(::bolts::AppLinkNavigation&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::bolts::AppLinkNavigation& operator=(const ::bolts::AppLinkNavigation& x) {obj = x.obj; return *this;}
    ::bolts::AppLinkNavigation& operator=(::bolts::AppLinkNavigation&& x) {obj = std::move(x.obj); return *this;}
    
    AppLinkNavigation(const ::bolts::AppLink&, const ::android::os::Bundle&, const ::android::os::Bundle&);
    ::bolts::AppLink getAppLink() const ;
    ::android::os::Bundle getAppLinkData() const ;
    ::android::os::Bundle getExtras() const ;
    ::bolts::AppLinkNavigation_NavigationResult navigate(const ::android::content::Context&) const ;
    static void setDefaultResolver(const ::bolts::AppLinkResolver&);
    static ::bolts::AppLinkResolver getDefaultResolver();
    static ::bolts::AppLinkNavigation_NavigationResult navigate(const ::android::content::Context&, const ::bolts::AppLink&);
    static ::bolts::Task navigateInBackground(const ::android::content::Context&, const ::android::net::Uri&, const ::bolts::AppLinkResolver&);
    static ::bolts::Task navigateInBackground(const ::android::content::Context&, const ::java::net::URL&, const ::bolts::AppLinkResolver&);
    static ::bolts::Task navigateInBackground(const ::android::content::Context&, const ::java::lang::String&, const ::bolts::AppLinkResolver&);
    static ::bolts::Task navigateInBackground(const ::android::content::Context&, const ::android::net::Uri&);
    static ::bolts::Task navigateInBackground(const ::android::content::Context&, const ::java::net::URL&);
    static ::bolts::Task navigateInBackground(const ::android::content::Context&, const ::java::lang::String&);

};
}

#include "bolts.AppLinkNavigation_NavigationResult.hpp"

