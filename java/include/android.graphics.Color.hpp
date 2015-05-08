#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace graphics {
class Color : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Color(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Color(const ::android::graphics::Color& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Color(::android::graphics::Color&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::Color& operator=(const ::android::graphics::Color& x) {obj = x.obj; return *this;}
    ::android::graphics::Color& operator=(::android::graphics::Color&& x) {obj = std::move(x.obj); return *this;}
    
    Color();
    static int32_t alpha(int32_t);
    static int32_t red(int32_t);
    static int32_t green(int32_t);
    static int32_t blue(int32_t);
    static int32_t rgb(int32_t, int32_t, int32_t);
    static int32_t argb(int32_t, int32_t, int32_t, int32_t);
    static int32_t parseColor(const ::java::lang::String&);
    static void RGBToHSV(int32_t, int32_t, int32_t, const std::vector< float>&);
    static void colorToHSV(int32_t, const std::vector< float>&);
    static int32_t HSVToColor(const std::vector< float>&);
    static int32_t HSVToColor(int32_t, const std::vector< float>&);

};
}
}


