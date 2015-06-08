#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class LauncherActivity; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }

namespace android {
namespace app {
class LauncherActivity_IconResizer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LauncherActivity_IconResizer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LauncherActivity_IconResizer(const ::android::app::LauncherActivity_IconResizer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LauncherActivity_IconResizer(::android::app::LauncherActivity_IconResizer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::LauncherActivity_IconResizer& operator=(const ::android::app::LauncherActivity_IconResizer& x) {obj = x.obj; return *this;}
    ::android::app::LauncherActivity_IconResizer& operator=(::android::app::LauncherActivity_IconResizer&& x) {obj = std::move(x.obj); return *this;}
    
    LauncherActivity_IconResizer(const ::android::app::LauncherActivity&);
    ::android::graphics::drawable::Drawable createIconThumbnail(const ::android::graphics::drawable::Drawable&) const;

};
}
}


