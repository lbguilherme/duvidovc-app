#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace webkit {
class GeolocationPermissions_Callback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GeolocationPermissions_Callback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GeolocationPermissions_Callback(const ::android::webkit::GeolocationPermissions_Callback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GeolocationPermissions_Callback(::android::webkit::GeolocationPermissions_Callback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::GeolocationPermissions_Callback& operator=(const ::android::webkit::GeolocationPermissions_Callback& x) {obj = x.obj; return *this;}
    ::android::webkit::GeolocationPermissions_Callback& operator=(::android::webkit::GeolocationPermissions_Callback&& x) {obj = std::move(x.obj); return *this;}
    
    void invoke(const ::java::lang::String&, bool, bool) const;

};
}
}


