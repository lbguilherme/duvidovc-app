#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.Activity.hpp"
#include "android.view.InputQueue_Callback.hpp"
#include "android.view.SurfaceHolder_Callback2.hpp"
#include "android.view.ViewTreeObserver_OnGlobalLayoutListener.hpp"

namespace android { namespace content { namespace res { class Configuration; } } }
namespace android { namespace view { class InputQueue; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class SurfaceHolder; } }

namespace android {
namespace app {
class NativeActivity : public virtual ::java::lang::Object,
                       public virtual ::android::app::Activity,
                       public virtual ::android::view::InputQueue_Callback,
                       public virtual ::android::view::SurfaceHolder_Callback2,
                       public virtual ::android::view::ViewTreeObserver_OnGlobalLayoutListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NativeActivity(jobject _obj) : ::java::lang::Object(_obj), ::android::app::Activity(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::content::Context(_obj), ::android::content::ContextWrapper(_obj), ::android::view::ContextThemeWrapper(_obj), ::android::view::InputQueue_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::LayoutInflater_Factory(_obj), ::android::view::LayoutInflater_Factory2(_obj), ::android::view::SurfaceHolder_Callback(_obj), ::android::view::SurfaceHolder_Callback2(_obj), ::android::view::View_OnCreateContextMenuListener(_obj), ::android::view::ViewTreeObserver_OnGlobalLayoutListener(_obj), ::android::view::Window_Callback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NativeActivity(const ::android::app::NativeActivity& x) : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::InputQueue_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::SurfaceHolder_Callback((jobject)0), ::android::view::SurfaceHolder_Callback2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::ViewTreeObserver_OnGlobalLayoutListener((jobject)0), ::android::view::Window_Callback((jobject)0) {obj = x.obj;}
    NativeActivity(::android::app::NativeActivity&& x) : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::InputQueue_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::SurfaceHolder_Callback((jobject)0), ::android::view::SurfaceHolder_Callback2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::ViewTreeObserver_OnGlobalLayoutListener((jobject)0), ::android::view::Window_Callback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::NativeActivity& operator=(const ::android::app::NativeActivity& x) {obj = x.obj; return *this;}
    ::android::app::NativeActivity& operator=(::android::app::NativeActivity&& x) {obj = std::move(x.obj); return *this;}
    
    NativeActivity();
    void onConfigurationChanged(const ::android::content::res::Configuration&) const;
    void onLowMemory() const;
    void onWindowFocusChanged(bool) const;
    bool dispatchKeyEvent(const ::android::view::KeyEvent&) const;
    void surfaceCreated(const ::android::view::SurfaceHolder&) const;
    void surfaceChanged(const ::android::view::SurfaceHolder&, int32_t, int32_t, int32_t) const;
    void surfaceRedrawNeeded(const ::android::view::SurfaceHolder&) const;
    void surfaceDestroyed(const ::android::view::SurfaceHolder&) const;
    void onInputQueueCreated(const ::android::view::InputQueue&) const;
    void onInputQueueDestroyed(const ::android::view::InputQueue&) const;
    void onGlobalLayout() const;

};
}
}


