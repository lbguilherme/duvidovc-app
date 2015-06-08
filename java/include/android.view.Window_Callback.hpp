#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class ActionMode; } }
namespace android { namespace view { class ActionMode_Callback; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class Menu; } }
namespace android { namespace view { class MenuItem; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class WindowManager_LayoutParams; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }

namespace android {
namespace view {
class Window_Callback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Window_Callback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Window_Callback(const ::android::view::Window_Callback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Window_Callback(::android::view::Window_Callback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::Window_Callback& operator=(const ::android::view::Window_Callback& x) {obj = x.obj; return *this;}
    ::android::view::Window_Callback& operator=(::android::view::Window_Callback&& x) {obj = std::move(x.obj); return *this;}
    
    bool dispatchKeyEvent(const ::android::view::KeyEvent&) const;
    bool dispatchKeyShortcutEvent(const ::android::view::KeyEvent&) const;
    bool dispatchTouchEvent(const ::android::view::MotionEvent&) const;
    bool dispatchTrackballEvent(const ::android::view::MotionEvent&) const;
    bool dispatchGenericMotionEvent(const ::android::view::MotionEvent&) const;
    bool dispatchPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const;
    ::android::view::View onCreatePanelView(int32_t) const;
    bool onCreatePanelMenu(int32_t, const ::android::view::Menu&) const;
    bool onPreparePanel(int32_t, const ::android::view::View&, const ::android::view::Menu&) const;
    bool onMenuOpened(int32_t, const ::android::view::Menu&) const;
    bool onMenuItemSelected(int32_t, const ::android::view::MenuItem&) const;
    void onWindowAttributesChanged(const ::android::view::WindowManager_LayoutParams&) const;
    void onContentChanged() const;
    void onWindowFocusChanged(bool) const;
    void onAttachedToWindow() const;
    void onDetachedFromWindow() const;
    void onPanelClosed(int32_t, const ::android::view::Menu&) const;
    bool onSearchRequested() const;
    ::android::view::ActionMode onWindowStartingActionMode(const ::android::view::ActionMode_Callback&) const;
    void onActionModeStarted(const ::android::view::ActionMode&) const;
    void onActionModeFinished(const ::android::view::ActionMode&) const;

};
}
}


