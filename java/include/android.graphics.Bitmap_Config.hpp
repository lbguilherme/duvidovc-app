#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace graphics { class Bitmap_Config; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace graphics {
class Bitmap_Config : public virtual ::java::lang::Object,
                      public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Bitmap_Config(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Bitmap_Config(const ::android::graphics::Bitmap_Config& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    Bitmap_Config(::android::graphics::Bitmap_Config&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::Bitmap_Config& operator=(const ::android::graphics::Bitmap_Config& x) {obj = x.obj; return *this;}
    ::android::graphics::Bitmap_Config& operator=(::android::graphics::Bitmap_Config&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::graphics::Bitmap_Config> values();
    static ::android::graphics::Bitmap_Config valueOf(const ::java::lang::String&);

};
}
}


