#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace support {
namespace v4 {
namespace graphics {
class ColorUtils : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ColorUtils(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ColorUtils(const ::android::support::v4::graphics::ColorUtils& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ColorUtils(::android::support::v4::graphics::ColorUtils&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::graphics::ColorUtils& operator=(const ::android::support::v4::graphics::ColorUtils& x) {obj = x.obj; return *this;}
    ::android::support::v4::graphics::ColorUtils& operator=(::android::support::v4::graphics::ColorUtils&& x) {obj = std::move(x.obj); return *this;}
    
    static int32_t compositeColors(int32_t, int32_t);
    static double calculateLuminance(int32_t);
    static double calculateContrast(int32_t, int32_t);
    static int32_t calculateMinimumAlpha(int32_t, int32_t, float);
    static void RGBToHSL(int32_t, int32_t, int32_t, const std::vector< float>&);
    static void colorToHSL(int32_t, const std::vector< float>&);
    static int32_t HSLToColor(const std::vector< float>&);
    static int32_t setAlphaComponent(int32_t, int32_t);

};
}
}
}
}


