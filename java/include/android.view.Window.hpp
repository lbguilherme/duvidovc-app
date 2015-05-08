#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace content { namespace res { class Configuration; } } }
namespace android { namespace content { namespace res { class TypedArray; } } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class IBinder; } }
namespace android { namespace view { class InputQueue_Callback; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class LayoutInflater; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class SurfaceHolder_Callback2; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup_LayoutParams; } }
namespace android { namespace view { class Window; } }
namespace android { namespace view { class Window_Callback; } }
namespace android { namespace view { class WindowManager; } }
namespace android { namespace view { class WindowManager_LayoutParams; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace view {
class Window : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Window(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Window(const ::android::view::Window& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Window(::android::view::Window&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::Window& operator=(const ::android::view::Window& x) {obj = x.obj; return *this;}
    ::android::view::Window& operator=(::android::view::Window&& x) {obj = std::move(x.obj); return *this;}
    
    Window(const ::android::content::Context&);
    ::android::content::Context getContext() const ;
    ::android::content::res::TypedArray getWindowStyle() const ;
    void setContainer(const ::android::view::Window&) const ;
    ::android::view::Window getContainer() const ;
    bool hasChildren() const ;
    void setWindowManager(const ::android::view::WindowManager&, const ::android::os::IBinder&, const ::java::lang::String&) const ;
    void setWindowManager(const ::android::view::WindowManager&, const ::android::os::IBinder&, const ::java::lang::String&, bool) const ;
    ::android::view::WindowManager getWindowManager() const ;
    void setCallback(const ::android::view::Window_Callback&) const ;
    ::android::view::Window_Callback getCallback() const ;
    void takeSurface(const ::android::view::SurfaceHolder_Callback2&) const ;
    void takeInputQueue(const ::android::view::InputQueue_Callback&) const ;
    bool isFloating() const ;
    void setLayout(int32_t, int32_t) const ;
    void setGravity(int32_t) const ;
    void setType(int32_t) const ;
    void setFormat(int32_t) const ;
    void setWindowAnimations(int32_t) const ;
    void setSoftInputMode(int32_t) const ;
    void addFlags(int32_t) const ;
    void clearFlags(int32_t) const ;
    void setFlags(int32_t, int32_t) const ;
    void setDimAmount(float) const ;
    void setAttributes(const ::android::view::WindowManager_LayoutParams&) const ;
    ::android::view::WindowManager_LayoutParams getAttributes() const ;
    bool requestFeature(int32_t) const ;
    void makeActive() const ;
    bool isActive() const ;
    ::android::view::View findViewById(int32_t) const ;
    void setContentView(int32_t) const ;
    void setContentView(const ::android::view::View&) const ;
    void setContentView(const ::android::view::View&, const ::android::view::ViewGroup_LayoutParams&) const ;
    void addContentView(const ::android::view::View&, const ::android::view::ViewGroup_LayoutParams&) const ;
    ::android::view::View getCurrentFocus() const ;
    ::android::view::LayoutInflater getLayoutInflater() const ;
    void setTitle(const ::java::lang::CharSequence&) const ;
    void setTitleColor(int32_t) const ;
    void openPanel(int32_t, const ::android::view::KeyEvent&) const ;
    void closePanel(int32_t) const ;
    void togglePanel(int32_t, const ::android::view::KeyEvent&) const ;
    void invalidatePanelMenu(int32_t) const ;
    bool performPanelShortcut(int32_t, int32_t, const ::android::view::KeyEvent&, int32_t) const ;
    bool performPanelIdentifierAction(int32_t, int32_t, int32_t) const ;
    void closeAllPanels() const ;
    bool performContextMenuIdentifierAction(int32_t, int32_t) const ;
    void onConfigurationChanged(const ::android::content::res::Configuration&) const ;
    void setBackgroundDrawableResource(int32_t) const ;
    void setBackgroundDrawable(const ::android::graphics::drawable::Drawable&) const ;
    void setFeatureDrawableResource(int32_t, int32_t) const ;
    void setFeatureDrawableUri(int32_t, const ::android::net::Uri&) const ;
    void setFeatureDrawable(int32_t, const ::android::graphics::drawable::Drawable&) const ;
    void setFeatureDrawableAlpha(int32_t, int32_t) const ;
    void setFeatureInt(int32_t, int32_t) const ;
    void takeKeyEvents(bool) const ;
    bool superDispatchKeyEvent(const ::android::view::KeyEvent&) const ;
    bool superDispatchKeyShortcutEvent(const ::android::view::KeyEvent&) const ;
    bool superDispatchTouchEvent(const ::android::view::MotionEvent&) const ;
    bool superDispatchTrackballEvent(const ::android::view::MotionEvent&) const ;
    bool superDispatchGenericMotionEvent(const ::android::view::MotionEvent&) const ;
    ::android::view::View getDecorView() const ;
    ::android::view::View peekDecorView() const ;
    ::android::os::Bundle saveHierarchyState() const ;
    void restoreHierarchyState(const ::android::os::Bundle&) const ;
    bool hasFeature(int32_t) const ;
    void setChildDrawable(int32_t, const ::android::graphics::drawable::Drawable&) const ;
    void setChildInt(int32_t, int32_t) const ;
    bool isShortcutKey(int32_t, const ::android::view::KeyEvent&) const ;
    void setVolumeControlStream(int32_t) const ;
    int32_t getVolumeControlStream() const ;
    void setUiOptions(int32_t) const ;
    void setUiOptions(int32_t, int32_t) const ;

};
}
}

#include "android.view.Window_Callback.hpp"

