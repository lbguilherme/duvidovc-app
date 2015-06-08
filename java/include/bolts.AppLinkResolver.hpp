#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { class Uri; } }
namespace bolts { class Task; }

namespace bolts {
class AppLinkResolver : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AppLinkResolver(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AppLinkResolver(const ::bolts::AppLinkResolver& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AppLinkResolver(::bolts::AppLinkResolver&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::bolts::AppLinkResolver& operator=(const ::bolts::AppLinkResolver& x) {obj = x.obj; return *this;}
    ::bolts::AppLinkResolver& operator=(::bolts::AppLinkResolver&& x) {obj = std::move(x.obj); return *this;}
    
    ::bolts::Task getAppLinkFromUrlInBackground(const ::android::net::Uri&) const;

};
}


