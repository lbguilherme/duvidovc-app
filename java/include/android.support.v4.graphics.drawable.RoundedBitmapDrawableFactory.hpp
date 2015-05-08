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
class RoundedBitmapDrawableFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RoundedBitmapDrawableFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RoundedBitmapDrawableFactory(const ::android::support::v4::graphics::drawable::RoundedBitmapDrawableFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RoundedBitmapDrawableFactory(::android::support::v4::graphics::drawable::RoundedBitmapDrawableFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::graphics::drawable::RoundedBitmapDrawableFactory& operator=(const ::android::support::v4::graphics::drawable::RoundedBitmapDrawableFactory& x) {obj = x.obj; return *this;}
    ::android::support::v4::graphics::drawable::RoundedBitmapDrawableFactory& operator=(::android::support::v4::graphics::drawable::RoundedBitmapDrawableFactory&& x) {obj = std::move(x.obj); return *this;}
    
    RoundedBitmapDrawableFactory();

};
}
}
}
}
}

#include "android.support.v4.graphics.drawable.RoundedBitmapDrawableFactory_DefaultRoundedBitmapDrawable.hpp"

