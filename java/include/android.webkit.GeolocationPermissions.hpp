#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace webkit { class GeolocationPermissions; } }
namespace android { namespace webkit { class ValueCallback; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace webkit {
class GeolocationPermissions : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GeolocationPermissions(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GeolocationPermissions(const ::android::webkit::GeolocationPermissions& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GeolocationPermissions(::android::webkit::GeolocationPermissions&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::GeolocationPermissions& operator=(const ::android::webkit::GeolocationPermissions& x) {obj = x.obj; return *this;}
    ::android::webkit::GeolocationPermissions& operator=(::android::webkit::GeolocationPermissions&& x) {obj = std::move(x.obj); return *this;}
    
    GeolocationPermissions();
    static ::android::webkit::GeolocationPermissions getInstance();
    void getOrigins(const ::android::webkit::ValueCallback&) const;
    void getAllowed(const ::java::lang::String&, const ::android::webkit::ValueCallback&) const;
    void clear(const ::java::lang::String&) const;
    void allow(const ::java::lang::String&) const;
    void clearAll() const;

};
}
}

#include "android.webkit.GeolocationPermissions_Callback.hpp"

