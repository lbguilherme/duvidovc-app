#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { class Uri; } }
namespace java { namespace util { class List; } }

namespace bolts {
class AppLink : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AppLink(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AppLink(const ::bolts::AppLink& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AppLink(::bolts::AppLink&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::bolts::AppLink& operator=(const ::bolts::AppLink& x) {obj = x.obj; return *this;}
    ::bolts::AppLink& operator=(::bolts::AppLink&& x) {obj = std::move(x.obj); return *this;}
    
    AppLink(const ::android::net::Uri&, const ::java::util::List&, const ::android::net::Uri&);
    ::android::net::Uri getSourceUrl() const;
    ::java::util::List getTargets() const;
    ::android::net::Uri getWebUrl() const;

};
}

#include "bolts.AppLink_Target.hpp"

