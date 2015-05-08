#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.FrameLayout.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class View_OnClickListener; } }
namespace android { namespace widget { class MediaController_MediaPlayerControl; } }

namespace android {
namespace widget {
class MediaController : public virtual ::java::lang::Object,
                        public virtual ::android::widget::FrameLayout {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaController(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::FrameLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaController(const ::android::widget::MediaController& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {obj = x.obj;}
    MediaController(::android::widget::MediaController&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::MediaController& operator=(const ::android::widget::MediaController& x) {obj = x.obj; return *this;}
    ::android::widget::MediaController& operator=(::android::widget::MediaController&& x) {obj = std::move(x.obj); return *this;}
    
    MediaController(const ::android::content::Context&, const ::android::util::AttributeSet&);
    MediaController(const ::android::content::Context&, bool);
    MediaController(const ::android::content::Context&);
    void onFinishInflate() const ;
    void setMediaPlayer(const ::android::widget::MediaController_MediaPlayerControl&) const ;
    void setAnchorView(const ::android::view::View&) const ;
    void show() const ;
    void show(int32_t) const ;
    bool isShowing() const ;
    void hide() const ;
    bool onTouchEvent(const ::android::view::MotionEvent&) const ;
    bool onTrackballEvent(const ::android::view::MotionEvent&) const ;
    bool dispatchKeyEvent(const ::android::view::KeyEvent&) const ;
    void setEnabled(bool) const ;
    void setPrevNextListeners(const ::android::view::View_OnClickListener&, const ::android::view::View_OnClickListener&) const ;

};
}
}

#include "android.widget.MediaController_MediaPlayerControl.hpp"

