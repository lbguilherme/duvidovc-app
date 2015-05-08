#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace media {
class ExifInterface : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ExifInterface(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ExifInterface(const ::android::media::ExifInterface& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ExifInterface(::android::media::ExifInterface&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::ExifInterface& operator=(const ::android::media::ExifInterface& x) {obj = x.obj; return *this;}
    ::android::media::ExifInterface& operator=(::android::media::ExifInterface&& x) {obj = std::move(x.obj); return *this;}
    
    ExifInterface(const ::java::lang::String&);
    ::java::lang::String getAttribute(const ::java::lang::String&) const ;
    int32_t getAttributeInt(const ::java::lang::String&, int32_t) const ;
    double getAttributeDouble(const ::java::lang::String&, double) const ;
    void setAttribute(const ::java::lang::String&, const ::java::lang::String&) const ;
    void saveAttributes() const ;
    bool hasThumbnail() const ;
    std::vector< int8_t> getThumbnail() const ;
    bool getLatLong(const std::vector< float>&) const ;
    double getAltitude(double) const ;

};
}
}


