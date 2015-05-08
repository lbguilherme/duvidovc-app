#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { namespace res { class Resources; } } }
namespace android { namespace content { namespace res { class Resources_Theme; } } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }

namespace android {
namespace support {
namespace v4 {
namespace content {
namespace res {
class ResourcesCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ResourcesCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ResourcesCompat(const ::android::support::v4::content::res::ResourcesCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ResourcesCompat(::android::support::v4::content::res::ResourcesCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::content::res::ResourcesCompat& operator=(const ::android::support::v4::content::res::ResourcesCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::content::res::ResourcesCompat& operator=(::android::support::v4::content::res::ResourcesCompat&& x) {obj = std::move(x.obj); return *this;}
    
    ResourcesCompat();
    static ::android::graphics::drawable::Drawable getDrawable(const ::android::content::res::Resources&, int32_t, const ::android::content::res::Resources_Theme&);
    static ::android::graphics::drawable::Drawable getDrawableForDensity(const ::android::content::res::Resources&, int32_t, int32_t, const ::android::content::res::Resources_Theme&);

};
}
}
}
}
}


