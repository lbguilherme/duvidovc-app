#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { class Uri; } }
namespace java { namespace lang { class String; } }

namespace bolts {
class AppLink_Target : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AppLink_Target(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AppLink_Target(const ::bolts::AppLink_Target& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AppLink_Target(::bolts::AppLink_Target&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::bolts::AppLink_Target& operator=(const ::bolts::AppLink_Target& x) {obj = x.obj; return *this;}
    ::bolts::AppLink_Target& operator=(::bolts::AppLink_Target&& x) {obj = std::move(x.obj); return *this;}
    
    AppLink_Target(const ::java::lang::String&, const ::java::lang::String&, const ::android::net::Uri&, const ::java::lang::String&);
    ::android::net::Uri getUrl() const;
    ::java::lang::String getAppName() const;
    ::java::lang::String getClassName() const;
    ::java::lang::String getPackageName() const;

};
}


