#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }
namespace java { namespace util { class Locale; } }

namespace android {
namespace location {
class Geocoder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Geocoder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Geocoder(const ::android::location::Geocoder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Geocoder(::android::location::Geocoder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::location::Geocoder& operator=(const ::android::location::Geocoder& x) {obj = x.obj; return *this;}
    ::android::location::Geocoder& operator=(::android::location::Geocoder&& x) {obj = std::move(x.obj); return *this;}
    
    Geocoder(const ::android::content::Context&, const ::java::util::Locale&);
    Geocoder(const ::android::content::Context&);
    static bool isPresent();
    ::java::util::List getFromLocation(double, double, int32_t) const;
    ::java::util::List getFromLocationName(const ::java::lang::String&, int32_t) const;
    ::java::util::List getFromLocationName(const ::java::lang::String&, int32_t, double, double, double, double) const;

};
}
}


