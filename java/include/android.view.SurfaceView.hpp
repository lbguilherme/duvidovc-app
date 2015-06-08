#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.View.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class Region; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class SurfaceHolder; } }

namespace android {
namespace view {
class SurfaceView : public virtual ::java::lang::Object,
                    public virtual ::android::view::View {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SurfaceView(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SurfaceView(const ::android::view::SurfaceView& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj;}
    SurfaceView(::android::view::SurfaceView&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::SurfaceView& operator=(const ::android::view::SurfaceView& x) {obj = x.obj; return *this;}
    ::android::view::SurfaceView& operator=(::android::view::SurfaceView&& x) {obj = std::move(x.obj); return *this;}
    
    SurfaceView(const ::android::content::Context&);
    SurfaceView(const ::android::content::Context&, const ::android::util::AttributeSet&);
    SurfaceView(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    ::android::view::SurfaceHolder getHolder() const;
    void setVisibility(int32_t) const;
    bool gatherTransparentRegion(const ::android::graphics::Region&) const;
    void draw(const ::android::graphics::Canvas&) const;
    void setZOrderMediaOverlay(bool) const;
    void setZOrderOnTop(bool) const;

};
}
}


