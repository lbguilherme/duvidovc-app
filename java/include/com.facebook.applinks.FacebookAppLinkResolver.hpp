#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "bolts.AppLinkResolver.hpp"

namespace android { namespace net { class Uri; } }
namespace bolts { class Task; }
namespace java { namespace util { class List; } }

namespace com {
namespace facebook {
namespace applinks {
class FacebookAppLinkResolver : public virtual ::java::lang::Object,
                                public virtual ::bolts::AppLinkResolver {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FacebookAppLinkResolver(jobject _obj) : ::java::lang::Object(_obj), ::bolts::AppLinkResolver(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FacebookAppLinkResolver(const ::com::facebook::applinks::FacebookAppLinkResolver& x) : ::java::lang::Object((jobject)0), ::bolts::AppLinkResolver((jobject)0) {obj = x.obj;}
    FacebookAppLinkResolver(::com::facebook::applinks::FacebookAppLinkResolver&& x) : ::java::lang::Object((jobject)0), ::bolts::AppLinkResolver((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::applinks::FacebookAppLinkResolver& operator=(const ::com::facebook::applinks::FacebookAppLinkResolver& x) {obj = x.obj; return *this;}
    ::com::facebook::applinks::FacebookAppLinkResolver& operator=(::com::facebook::applinks::FacebookAppLinkResolver&& x) {obj = std::move(x.obj); return *this;}
    
    FacebookAppLinkResolver();
    ::bolts::Task getAppLinkFromUrlInBackground(const ::android::net::Uri&) const ;
    ::bolts::Task getAppLinkFromUrlsInBackground(const ::java::util::List&) const ;

};
}
}
}


