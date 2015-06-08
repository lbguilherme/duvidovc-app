#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace service { namespace wallpaper { class WallpaperService; } } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class SurfaceHolder; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace service {
namespace wallpaper {
class WallpaperService_Engine : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WallpaperService_Engine(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WallpaperService_Engine(const ::android::service::wallpaper::WallpaperService_Engine& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WallpaperService_Engine(::android::service::wallpaper::WallpaperService_Engine&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::service::wallpaper::WallpaperService_Engine& operator=(const ::android::service::wallpaper::WallpaperService_Engine& x) {obj = x.obj; return *this;}
    ::android::service::wallpaper::WallpaperService_Engine& operator=(::android::service::wallpaper::WallpaperService_Engine&& x) {obj = std::move(x.obj); return *this;}
    
    WallpaperService_Engine(const ::android::service::wallpaper::WallpaperService&);
    ::android::view::SurfaceHolder getSurfaceHolder() const;
    int32_t getDesiredMinimumWidth() const;
    int32_t getDesiredMinimumHeight() const;
    bool isVisible() const;
    bool isPreview() const;
    void setTouchEventsEnabled(bool) const;
    void setOffsetNotificationsEnabled(bool) const;
    void onCreate(const ::android::view::SurfaceHolder&) const;
    void onDestroy() const;
    void onVisibilityChanged(bool) const;
    void onTouchEvent(const ::android::view::MotionEvent&) const;
    void onOffsetsChanged(float, float, float, float, int32_t, int32_t) const;
    ::android::os::Bundle onCommand(const ::java::lang::String&, int32_t, int32_t, int32_t, const ::android::os::Bundle&, bool) const;
    void onDesiredSizeChanged(int32_t, int32_t) const;
    void onSurfaceChanged(const ::android::view::SurfaceHolder&, int32_t, int32_t, int32_t) const;
    void onSurfaceRedrawNeeded(const ::android::view::SurfaceHolder&) const;
    void onSurfaceCreated(const ::android::view::SurfaceHolder&) const;
    void onSurfaceDestroyed(const ::android::view::SurfaceHolder&) const;

};
}
}
}


