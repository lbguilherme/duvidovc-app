#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.renderscript.BaseObj.hpp"

namespace android { namespace content { namespace res { class Resources; } } }
namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace renderscript { class Allocation; } }
namespace android { namespace renderscript { class Allocation_MipmapControl; } }
namespace android { namespace renderscript { class BaseObj; } }
namespace android { namespace renderscript { class Element; } }
namespace android { namespace renderscript { class FieldPacker; } }
namespace android { namespace renderscript { class RenderScript; } }
namespace android { namespace renderscript { class Type; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace renderscript {
class Allocation : public virtual ::java::lang::Object,
                   public virtual ::android::renderscript::BaseObj {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Allocation(jobject _obj) : ::java::lang::Object(_obj), ::android::renderscript::BaseObj(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Allocation(const ::android::renderscript::Allocation& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0) {obj = x.obj;}
    Allocation(::android::renderscript::Allocation&& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Allocation& operator=(const ::android::renderscript::Allocation& x) {obj = x.obj; return *this;}
    ::android::renderscript::Allocation& operator=(::android::renderscript::Allocation&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::renderscript::Type getType() const;
    void syncAll(int32_t) const;
    void copyFrom(const std::vector< ::android::renderscript::BaseObj>&) const;
    void copyFromUnchecked(const std::vector< int32_t>&) const;
    void copyFromUnchecked(const std::vector< int16_t>&) const;
    void copyFromUnchecked(const std::vector< int8_t>&) const;
    void copyFromUnchecked(const std::vector< float>&) const;
    void copyFrom(const std::vector< int32_t>&) const;
    void copyFrom(const std::vector< int16_t>&) const;
    void copyFrom(const std::vector< int8_t>&) const;
    void copyFrom(const std::vector< float>&) const;
    void copyFrom(const ::android::graphics::Bitmap&) const;
    void setFromFieldPacker(int32_t, const ::android::renderscript::FieldPacker&) const;
    void setFromFieldPacker(int32_t, int32_t, const ::android::renderscript::FieldPacker&) const;
    void generateMipmaps() const;
    void copy1DRangeFromUnchecked(int32_t, int32_t, const std::vector< int32_t>&) const;
    void copy1DRangeFromUnchecked(int32_t, int32_t, const std::vector< int16_t>&) const;
    void copy1DRangeFromUnchecked(int32_t, int32_t, const std::vector< int8_t>&) const;
    void copy1DRangeFromUnchecked(int32_t, int32_t, const std::vector< float>&) const;
    void copy1DRangeFrom(int32_t, int32_t, const std::vector< int32_t>&) const;
    void copy1DRangeFrom(int32_t, int32_t, const std::vector< int16_t>&) const;
    void copy1DRangeFrom(int32_t, int32_t, const std::vector< int8_t>&) const;
    void copy1DRangeFrom(int32_t, int32_t, const std::vector< float>&) const;
    void copy1DRangeFrom(int32_t, int32_t, const ::android::renderscript::Allocation&, int32_t) const;
    void copy2DRangeFrom(int32_t, int32_t, int32_t, int32_t, const std::vector< int8_t>&) const;
    void copy2DRangeFrom(int32_t, int32_t, int32_t, int32_t, const std::vector< int16_t>&) const;
    void copy2DRangeFrom(int32_t, int32_t, int32_t, int32_t, const std::vector< int32_t>&) const;
    void copy2DRangeFrom(int32_t, int32_t, int32_t, int32_t, const std::vector< float>&) const;
    void copy2DRangeFrom(int32_t, int32_t, int32_t, int32_t, const ::android::renderscript::Allocation&, int32_t, int32_t) const;
    void copy2DRangeFrom(int32_t, int32_t, const ::android::graphics::Bitmap&) const;
    void copyTo(const ::android::graphics::Bitmap&) const;
    void copyTo(const std::vector< int8_t>&) const;
    void copyTo(const std::vector< int16_t>&) const;
    void copyTo(const std::vector< int32_t>&) const;
    void copyTo(const std::vector< float>&) const;
    void resize(int32_t) const;
    static ::android::renderscript::Allocation createTyped(const ::android::renderscript::RenderScript&, const ::android::renderscript::Type&, const ::android::renderscript::Allocation_MipmapControl&, int32_t);
    static ::android::renderscript::Allocation createTyped(const ::android::renderscript::RenderScript&, const ::android::renderscript::Type&, int32_t);
    static ::android::renderscript::Allocation createTyped(const ::android::renderscript::RenderScript&, const ::android::renderscript::Type&);
    static ::android::renderscript::Allocation createSized(const ::android::renderscript::RenderScript&, const ::android::renderscript::Element&, int32_t, int32_t);
    static ::android::renderscript::Allocation createSized(const ::android::renderscript::RenderScript&, const ::android::renderscript::Element&, int32_t);
    static ::android::renderscript::Allocation createFromBitmap(const ::android::renderscript::RenderScript&, const ::android::graphics::Bitmap&, const ::android::renderscript::Allocation_MipmapControl&, int32_t);
    static ::android::renderscript::Allocation createFromBitmap(const ::android::renderscript::RenderScript&, const ::android::graphics::Bitmap&);
    static ::android::renderscript::Allocation createCubemapFromBitmap(const ::android::renderscript::RenderScript&, const ::android::graphics::Bitmap&, const ::android::renderscript::Allocation_MipmapControl&, int32_t);
    static ::android::renderscript::Allocation createCubemapFromBitmap(const ::android::renderscript::RenderScript&, const ::android::graphics::Bitmap&);
    static ::android::renderscript::Allocation createCubemapFromCubeFaces(const ::android::renderscript::RenderScript&, const ::android::graphics::Bitmap&, const ::android::graphics::Bitmap&, const ::android::graphics::Bitmap&, const ::android::graphics::Bitmap&, const ::android::graphics::Bitmap&, const ::android::graphics::Bitmap&, const ::android::renderscript::Allocation_MipmapControl&, int32_t);
    static ::android::renderscript::Allocation createCubemapFromCubeFaces(const ::android::renderscript::RenderScript&, const ::android::graphics::Bitmap&, const ::android::graphics::Bitmap&, const ::android::graphics::Bitmap&, const ::android::graphics::Bitmap&, const ::android::graphics::Bitmap&, const ::android::graphics::Bitmap&);
    static ::android::renderscript::Allocation createFromBitmapResource(const ::android::renderscript::RenderScript&, const ::android::content::res::Resources&, int32_t, const ::android::renderscript::Allocation_MipmapControl&, int32_t);
    static ::android::renderscript::Allocation createFromBitmapResource(const ::android::renderscript::RenderScript&, const ::android::content::res::Resources&, int32_t);
    static ::android::renderscript::Allocation createFromString(const ::android::renderscript::RenderScript&, const ::java::lang::String&, int32_t);

};
}
}

#include "android.renderscript.Allocation_MipmapControl.hpp"

