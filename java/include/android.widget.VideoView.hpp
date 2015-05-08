#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.SurfaceView.hpp"
#include "android.widget.MediaController_MediaPlayerControl.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace media { class MediaPlayer_OnCompletionListener; } }
namespace android { namespace media { class MediaPlayer_OnErrorListener; } }
namespace android { namespace media { class MediaPlayer_OnPreparedListener; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace widget { class MediaController; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace widget {
class VideoView : public virtual ::java::lang::Object,
                  public virtual ::android::view::SurfaceView,
                  public virtual ::android::widget::MediaController_MediaPlayerControl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit VideoView(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::SurfaceView(_obj), ::android::view::View(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::MediaController_MediaPlayerControl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    VideoView(const ::android::widget::VideoView& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::SurfaceView((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::MediaController_MediaPlayerControl((jobject)0) {obj = x.obj;}
    VideoView(::android::widget::VideoView&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::SurfaceView((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::MediaController_MediaPlayerControl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::VideoView& operator=(const ::android::widget::VideoView& x) {obj = x.obj; return *this;}
    ::android::widget::VideoView& operator=(::android::widget::VideoView&& x) {obj = std::move(x.obj); return *this;}
    
    VideoView(const ::android::content::Context&);
    VideoView(const ::android::content::Context&, const ::android::util::AttributeSet&);
    VideoView(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    int32_t resolveAdjustedSize(int32_t, int32_t) const ;
    void setVideoPath(const ::java::lang::String&) const ;
    void setVideoURI(const ::android::net::Uri&) const ;
    void stopPlayback() const ;
    void setMediaController(const ::android::widget::MediaController&) const ;
    void setOnPreparedListener(const ::android::media::MediaPlayer_OnPreparedListener&) const ;
    void setOnCompletionListener(const ::android::media::MediaPlayer_OnCompletionListener&) const ;
    void setOnErrorListener(const ::android::media::MediaPlayer_OnErrorListener&) const ;
    bool onTouchEvent(const ::android::view::MotionEvent&) const ;
    bool onTrackballEvent(const ::android::view::MotionEvent&) const ;
    bool onKeyDown(int32_t, const ::android::view::KeyEvent&) const ;
    void start() const ;
    void pause() const ;
    void suspend() const ;
    void resume() const ;
    int32_t getDuration() const ;
    int32_t getCurrentPosition() const ;
    void seekTo(int32_t) const ;
    bool isPlaying() const ;
    int32_t getBufferPercentage() const ;
    bool canPause() const ;
    bool canSeekBackward() const ;
    bool canSeekForward() const ;

};
}
}


