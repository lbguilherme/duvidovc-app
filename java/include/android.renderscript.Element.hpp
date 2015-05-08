#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.renderscript.BaseObj.hpp"

namespace android { namespace renderscript { class Element; } }
namespace android { namespace renderscript { class Element_DataKind; } }
namespace android { namespace renderscript { class Element_DataType; } }
namespace android { namespace renderscript { class RenderScript; } }

namespace android {
namespace renderscript {
class Element : public virtual ::java::lang::Object,
                public virtual ::android::renderscript::BaseObj {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Element(jobject _obj) : ::java::lang::Object(_obj), ::android::renderscript::BaseObj(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Element(const ::android::renderscript::Element& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0) {obj = x.obj;}
    Element(::android::renderscript::Element&& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Element& operator=(const ::android::renderscript::Element& x) {obj = x.obj; return *this;}
    ::android::renderscript::Element& operator=(::android::renderscript::Element&& x) {obj = std::move(x.obj); return *this;}
    
    bool isComplex() const ;
    static ::android::renderscript::Element BOOLEAN(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element U8(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element I8(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element U16(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element I16(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element U32(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element I32(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element U64(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element I64(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element F32(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element F64(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element ELEMENT(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element TYPE(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element ALLOCATION(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element SAMPLER(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element SCRIPT(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element MESH(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element PROGRAM_FRAGMENT(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element PROGRAM_VERTEX(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element PROGRAM_RASTER(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element PROGRAM_STORE(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element A_8(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element RGB_565(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element RGB_888(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element RGBA_5551(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element RGBA_4444(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element RGBA_8888(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element F32_2(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element F32_3(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element F32_4(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element F64_2(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element F64_3(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element F64_4(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element U8_2(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element U8_3(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element U8_4(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element I8_2(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element I8_3(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element I8_4(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element U16_2(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element U16_3(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element U16_4(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element I16_2(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element I16_3(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element I16_4(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element U32_2(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element U32_3(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element U32_4(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element I32_2(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element I32_3(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element I32_4(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element U64_2(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element U64_3(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element U64_4(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element I64_2(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element I64_3(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element I64_4(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element MATRIX_4X4(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element MATRIX4X4(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element MATRIX_3X3(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element MATRIX_2X2(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Element createVector(const ::android::renderscript::RenderScript&, const ::android::renderscript::Element_DataType&, int32_t);
    static ::android::renderscript::Element createPixel(const ::android::renderscript::RenderScript&, const ::android::renderscript::Element_DataType&, const ::android::renderscript::Element_DataKind&);
    bool isCompatible(const ::android::renderscript::Element&) const ;

};
}
}

#include "android.renderscript.Element_Builder.hpp"
#include "android.renderscript.Element_DataKind.hpp"
#include "android.renderscript.Element_DataType.hpp"

