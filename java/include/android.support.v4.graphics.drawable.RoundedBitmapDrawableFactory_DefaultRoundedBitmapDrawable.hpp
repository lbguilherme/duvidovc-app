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
namespace drawable {
class RoundedBitmapDrawableFactory_DefaultRoundedBitmapDrawable : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RoundedBitmapDrawableFactory_DefaultRoundedBitmapDrawable(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RoundedBitmapDrawableFactory_DefaultRoundedBitmapDrawable(const ::android::support::v4::graphics::drawable::RoundedBitmapDrawableFactory_DefaultRoundedBitmapDrawable& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RoundedBitmapDrawableFactory_DefaultRoundedBitmapDrawable(::android::support::v4::graphics::drawable::RoundedBitmapDrawableFactory_DefaultRoundedBitmapDrawable&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::graphics::drawable::RoundedBitmapDrawableFactory_DefaultRoundedBitmapDrawable& operator=(const ::android::support::v4::graphics::drawable::RoundedBitmapDrawableFactory_DefaultRoundedBitmapDrawable& x) {obj = x.obj; return *this;}
    ::android::support::v4::graphics::drawable::RoundedBitmapDrawableFactory_DefaultRoundedBitmapDrawable& operator=(::android::support::v4::graphics::drawable::RoundedBitmapDrawableFactory_DefaultRoundedBitmapDrawable&& x) {obj = std::move(x.obj); return *this;}
    
    void setMipMap(bool) const ;
    bool hasMipMap() const ;

};
}
}
}
}
}


