#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class WallpaperInfo; } }
namespace android { namespace app { class WallpaperManager; } }
namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class IBinder; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace app {
class WallpaperManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WallpaperManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WallpaperManager(const ::android::app::WallpaperManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WallpaperManager(::android::app::WallpaperManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::WallpaperManager& operator=(const ::android::app::WallpaperManager& x) {obj = x.obj; return *this;}
    ::android::app::WallpaperManager& operator=(::android::app::WallpaperManager&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::app::WallpaperManager getInstance(const ::android::content::Context&);
    ::android::graphics::drawable::Drawable getDrawable() const;
    ::android::graphics::drawable::Drawable peekDrawable() const;
    ::android::graphics::drawable::Drawable getFastDrawable() const;
    ::android::graphics::drawable::Drawable peekFastDrawable() const;
    void forgetLoadedWallpaper() const;
    ::android::app::WallpaperInfo getWallpaperInfo() const;
    void setResource(int32_t) const;
    void setBitmap(const ::android::graphics::Bitmap&) const;
    void setStream(const ::java::io::InputStream&) const;
    int32_t getDesiredMinimumWidth() const;
    int32_t getDesiredMinimumHeight() const;
    void suggestDesiredDimensions(int32_t, int32_t) const;
    void setWallpaperOffsets(const ::android::os::IBinder&, float, float) const;
    void setWallpaperOffsetSteps(float, float) const;
    void sendWallpaperCommand(const ::android::os::IBinder&, const ::java::lang::String&, int32_t, int32_t, int32_t, const ::android::os::Bundle&) const;
    void clearWallpaperOffsets(const ::android::os::IBinder&) const;
    void clear() const;

};
}
}


