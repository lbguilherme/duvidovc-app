#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace graphics { class BitmapFactory_Options; } }
namespace android { namespace graphics { class BitmapRegionDecoder; } }
namespace android { namespace graphics { class Rect; } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace graphics {
class BitmapRegionDecoder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BitmapRegionDecoder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BitmapRegionDecoder(const ::android::graphics::BitmapRegionDecoder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BitmapRegionDecoder(::android::graphics::BitmapRegionDecoder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::BitmapRegionDecoder& operator=(const ::android::graphics::BitmapRegionDecoder& x) {obj = x.obj; return *this;}
    ::android::graphics::BitmapRegionDecoder& operator=(::android::graphics::BitmapRegionDecoder&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::graphics::BitmapRegionDecoder newInstance(const std::vector< int8_t>&, int32_t, int32_t, bool);
    static ::android::graphics::BitmapRegionDecoder newInstance(const ::java::io::FileDescriptor&, bool);
    static ::android::graphics::BitmapRegionDecoder newInstance(const ::java::io::InputStream&, bool);
    static ::android::graphics::BitmapRegionDecoder newInstance(const ::java::lang::String&, bool);
    ::android::graphics::Bitmap decodeRegion(const ::android::graphics::Rect&, const ::android::graphics::BitmapFactory_Options&) const ;
    int32_t getWidth() const ;
    int32_t getHeight() const ;
    void recycle() const ;
    bool isRecycled() const ;

};
}
}


