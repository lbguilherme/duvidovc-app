#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class Paint; } }
namespace android { namespace graphics { class Rect; } }
namespace android { namespace graphics { class RectF; } }
namespace android { namespace graphics { class Region; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace graphics {
class NinePatch : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NinePatch(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NinePatch(const ::android::graphics::NinePatch& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NinePatch(::android::graphics::NinePatch&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::NinePatch& operator=(const ::android::graphics::NinePatch& x) {obj = x.obj; return *this;}
    ::android::graphics::NinePatch& operator=(::android::graphics::NinePatch&& x) {obj = std::move(x.obj); return *this;}
    
    NinePatch(const ::android::graphics::Bitmap&, const std::vector< int8_t>&, const ::java::lang::String&);
    void setPaint(const ::android::graphics::Paint&) const;
    void draw(const ::android::graphics::Canvas&, const ::android::graphics::RectF&) const;
    void draw(const ::android::graphics::Canvas&, const ::android::graphics::Rect&) const;
    void draw(const ::android::graphics::Canvas&, const ::android::graphics::Rect&, const ::android::graphics::Paint&) const;
    int32_t getDensity() const;
    int32_t getWidth() const;
    int32_t getHeight() const;
    bool hasAlpha() const;
    ::android::graphics::Region getTransparentRegion(const ::android::graphics::Rect&) const;
    static bool isNinePatchChunk(const std::vector< int8_t>&);

};
}
}


