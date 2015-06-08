#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.Rasterizer.hpp"

namespace android { namespace graphics { class Paint; } }

namespace android {
namespace graphics {
class LayerRasterizer : public virtual ::java::lang::Object,
                        public virtual ::android::graphics::Rasterizer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LayerRasterizer(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::Rasterizer(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LayerRasterizer(const ::android::graphics::LayerRasterizer& x) : ::java::lang::Object((jobject)0), ::android::graphics::Rasterizer((jobject)0) {obj = x.obj;}
    LayerRasterizer(::android::graphics::LayerRasterizer&& x) : ::java::lang::Object((jobject)0), ::android::graphics::Rasterizer((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::LayerRasterizer& operator=(const ::android::graphics::LayerRasterizer& x) {obj = x.obj; return *this;}
    ::android::graphics::LayerRasterizer& operator=(::android::graphics::LayerRasterizer&& x) {obj = std::move(x.obj); return *this;}
    
    LayerRasterizer();
    void addLayer(const ::android::graphics::Paint&, float, float) const;
    void addLayer(const ::android::graphics::Paint&) const;

};
}
}


