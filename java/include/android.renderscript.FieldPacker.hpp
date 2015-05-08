#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace renderscript { class BaseObj; } }
namespace android { namespace renderscript { class Byte2; } }
namespace android { namespace renderscript { class Byte3; } }
namespace android { namespace renderscript { class Byte4; } }
namespace android { namespace renderscript { class Double2; } }
namespace android { namespace renderscript { class Double3; } }
namespace android { namespace renderscript { class Double4; } }
namespace android { namespace renderscript { class Float2; } }
namespace android { namespace renderscript { class Float3; } }
namespace android { namespace renderscript { class Float4; } }
namespace android { namespace renderscript { class Int2; } }
namespace android { namespace renderscript { class Int3; } }
namespace android { namespace renderscript { class Int4; } }
namespace android { namespace renderscript { class Long2; } }
namespace android { namespace renderscript { class Long3; } }
namespace android { namespace renderscript { class Long4; } }
namespace android { namespace renderscript { class Matrix2f; } }
namespace android { namespace renderscript { class Matrix3f; } }
namespace android { namespace renderscript { class Matrix4f; } }
namespace android { namespace renderscript { class Short2; } }
namespace android { namespace renderscript { class Short3; } }
namespace android { namespace renderscript { class Short4; } }

namespace android {
namespace renderscript {
class FieldPacker : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FieldPacker(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FieldPacker(const ::android::renderscript::FieldPacker& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FieldPacker(::android::renderscript::FieldPacker&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::FieldPacker& operator=(const ::android::renderscript::FieldPacker& x) {obj = x.obj; return *this;}
    ::android::renderscript::FieldPacker& operator=(::android::renderscript::FieldPacker&& x) {obj = std::move(x.obj); return *this;}
    
    FieldPacker(int32_t);
    void align(int32_t) const ;
    void reset() const ;
    void reset(int32_t) const ;
    void skip(int32_t) const ;
    void addI8(int8_t) const ;
    void addI16(int16_t) const ;
    void addI32(int32_t) const ;
    void addI64(int64_t) const ;
    void addU8(int16_t) const ;
    void addU16(int32_t) const ;
    void addU32(int64_t) const ;
    void addU64(int64_t) const ;
    void addF32(float) const ;
    void addF64(double) const ;
    void addObj(const ::android::renderscript::BaseObj&) const ;
    void addF32(const ::android::renderscript::Float2&) const ;
    void addF32(const ::android::renderscript::Float3&) const ;
    void addF32(const ::android::renderscript::Float4&) const ;
    void addF64(const ::android::renderscript::Double2&) const ;
    void addF64(const ::android::renderscript::Double3&) const ;
    void addF64(const ::android::renderscript::Double4&) const ;
    void addI8(const ::android::renderscript::Byte2&) const ;
    void addI8(const ::android::renderscript::Byte3&) const ;
    void addI8(const ::android::renderscript::Byte4&) const ;
    void addU8(const ::android::renderscript::Short2&) const ;
    void addU8(const ::android::renderscript::Short3&) const ;
    void addU8(const ::android::renderscript::Short4&) const ;
    void addI16(const ::android::renderscript::Short2&) const ;
    void addI16(const ::android::renderscript::Short3&) const ;
    void addI16(const ::android::renderscript::Short4&) const ;
    void addU16(const ::android::renderscript::Int2&) const ;
    void addU16(const ::android::renderscript::Int3&) const ;
    void addU16(const ::android::renderscript::Int4&) const ;
    void addI32(const ::android::renderscript::Int2&) const ;
    void addI32(const ::android::renderscript::Int3&) const ;
    void addI32(const ::android::renderscript::Int4&) const ;
    void addU32(const ::android::renderscript::Long2&) const ;
    void addU32(const ::android::renderscript::Long3&) const ;
    void addU32(const ::android::renderscript::Long4&) const ;
    void addI64(const ::android::renderscript::Long2&) const ;
    void addI64(const ::android::renderscript::Long3&) const ;
    void addI64(const ::android::renderscript::Long4&) const ;
    void addU64(const ::android::renderscript::Long2&) const ;
    void addU64(const ::android::renderscript::Long3&) const ;
    void addU64(const ::android::renderscript::Long4&) const ;
    void addMatrix(const ::android::renderscript::Matrix4f&) const ;
    void addMatrix(const ::android::renderscript::Matrix3f&) const ;
    void addMatrix(const ::android::renderscript::Matrix2f&) const ;
    void addBoolean(bool) const ;
    std::vector< int8_t> getData() const ;

};
}
}


