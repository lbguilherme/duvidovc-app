#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.Activity.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace app { class Dialog; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace content { namespace res { class Configuration; } } }
namespace android { namespace content { namespace res { class Resources_Theme; } } }
namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace graphics { class Canvas; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class ContextMenu; } }
namespace android { namespace view { class ContextMenu_ContextMenuInfo; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class Menu; } }
namespace android { namespace view { class MenuItem; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class WindowManager_LayoutParams; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace org {
namespace qtproject {
namespace qt5 {
namespace android {
namespace bindings {
class QtActivity : public virtual ::java::lang::Object,
                   public virtual ::android::app::Activity {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit QtActivity(jobject _obj) : ::java::lang::Object(_obj), ::android::app::Activity(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::content::Context(_obj), ::android::content::ContextWrapper(_obj), ::android::view::ContextThemeWrapper(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::LayoutInflater_Factory(_obj), ::android::view::LayoutInflater_Factory2(_obj), ::android::view::View_OnCreateContextMenuListener(_obj), ::android::view::Window_Callback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    QtActivity(const ::org::qtproject::qt5::android::bindings::QtActivity& x) : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {obj = x.obj;}
    QtActivity(::org::qtproject::qt5::android::bindings::QtActivity&& x) : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::qtproject::qt5::android::bindings::QtActivity& operator=(const ::org::qtproject::qt5::android::bindings::QtActivity& x) {obj = x.obj; return *this;}
    ::org::qtproject::qt5::android::bindings::QtActivity& operator=(::org::qtproject::qt5::android::bindings::QtActivity&& x) {obj = std::move(x.obj); return *this;}
    
    QtActivity();
    bool dispatchKeyEvent(const ::android::view::KeyEvent&) const;
    bool super_dispatchKeyEvent(const ::android::view::KeyEvent&) const;
    bool dispatchPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const;
    bool super_dispatchPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const;
    bool dispatchTouchEvent(const ::android::view::MotionEvent&) const;
    bool super_dispatchTouchEvent(const ::android::view::MotionEvent&) const;
    bool dispatchTrackballEvent(const ::android::view::MotionEvent&) const;
    bool super_dispatchTrackballEvent(const ::android::view::MotionEvent&) const;
    void super_onActivityResult(int32_t, int32_t, const ::android::content::Intent&) const;
    void super_onApplyThemeResource(const ::android::content::res::Resources_Theme&, int32_t, bool) const;
    void super_onChildTitleChanged(const ::android::app::Activity&, const ::java::lang::CharSequence&) const;
    void onConfigurationChanged(const ::android::content::res::Configuration&) const;
    void super_onConfigurationChanged(const ::android::content::res::Configuration&) const;
    void onContentChanged() const;
    void super_onContentChanged() const;
    bool onContextItemSelected(const ::android::view::MenuItem&) const;
    bool super_onContextItemSelected(const ::android::view::MenuItem&) const;
    void onContextMenuClosed(const ::android::view::Menu&) const;
    void super_onContextMenuClosed(const ::android::view::Menu&) const;
    void onCreate(const ::android::os::Bundle&) const;
    void onCreateContextMenu(const ::android::view::ContextMenu&, const ::android::view::View&, const ::android::view::ContextMenu_ContextMenuInfo&) const;
    void super_onCreateContextMenu(const ::android::view::ContextMenu&, const ::android::view::View&, const ::android::view::ContextMenu_ContextMenuInfo&) const;
    ::java::lang::CharSequence onCreateDescription() const;
    ::java::lang::CharSequence super_onCreateDescription() const;
    ::android::app::Dialog super_onCreateDialog(int32_t) const;
    bool onCreateOptionsMenu(const ::android::view::Menu&) const;
    bool super_onCreateOptionsMenu(const ::android::view::Menu&) const;
    bool onCreatePanelMenu(int32_t, const ::android::view::Menu&) const;
    bool super_onCreatePanelMenu(int32_t, const ::android::view::Menu&) const;
    ::android::view::View onCreatePanelView(int32_t) const;
    ::android::view::View super_onCreatePanelView(int32_t) const;
    bool onCreateThumbnail(const ::android::graphics::Bitmap&, const ::android::graphics::Canvas&) const;
    bool super_onCreateThumbnail(const ::android::graphics::Bitmap&, const ::android::graphics::Canvas&) const;
    ::android::view::View onCreateView(const ::java::lang::String&, const ::android::content::Context&, const ::android::util::AttributeSet&) const;
    ::android::view::View super_onCreateView(const ::java::lang::String&, const ::android::content::Context&, const ::android::util::AttributeSet&) const;
    bool onKeyDown(int32_t, const ::android::view::KeyEvent&) const;
    bool super_onKeyDown(int32_t, const ::android::view::KeyEvent&) const;
    bool onKeyMultiple(int32_t, int32_t, const ::android::view::KeyEvent&) const;
    bool super_onKeyMultiple(int32_t, int32_t, const ::android::view::KeyEvent&) const;
    bool onKeyUp(int32_t, const ::android::view::KeyEvent&) const;
    bool super_onKeyUp(int32_t, const ::android::view::KeyEvent&) const;
    void onLowMemory() const;
    bool onMenuItemSelected(int32_t, const ::android::view::MenuItem&) const;
    bool super_onMenuItemSelected(int32_t, const ::android::view::MenuItem&) const;
    bool onMenuOpened(int32_t, const ::android::view::Menu&) const;
    bool super_onMenuOpened(int32_t, const ::android::view::Menu&) const;
    void super_onNewIntent(const ::android::content::Intent&) const;
    bool onOptionsItemSelected(const ::android::view::MenuItem&) const;
    bool super_onOptionsItemSelected(const ::android::view::MenuItem&) const;
    void onOptionsMenuClosed(const ::android::view::Menu&) const;
    void super_onOptionsMenuClosed(const ::android::view::Menu&) const;
    void onPanelClosed(int32_t, const ::android::view::Menu&) const;
    void super_onPanelClosed(int32_t, const ::android::view::Menu&) const;
    void super_onPrepareDialog(int32_t, const ::android::app::Dialog&) const;
    bool onPrepareOptionsMenu(const ::android::view::Menu&) const;
    bool super_onPrepareOptionsMenu(const ::android::view::Menu&) const;
    bool onPreparePanel(int32_t, const ::android::view::View&, const ::android::view::Menu&) const;
    bool super_onPreparePanel(int32_t, const ::android::view::View&, const ::android::view::Menu&) const;
    void super_onRestoreInstanceState(const ::android::os::Bundle&) const;
    ::java::lang::Object onRetainNonConfigurationInstance() const;
    ::java::lang::Object super_onRetainNonConfigurationInstance() const;
    void super_onSaveInstanceState(const ::android::os::Bundle&) const;
    bool onSearchRequested() const;
    bool super_onSearchRequested() const;
    void super_onTitleChanged(const ::java::lang::CharSequence&, int32_t) const;
    bool onTouchEvent(const ::android::view::MotionEvent&) const;
    bool super_onTouchEvent(const ::android::view::MotionEvent&) const;
    bool onTrackballEvent(const ::android::view::MotionEvent&) const;
    bool super_onTrackballEvent(const ::android::view::MotionEvent&) const;
    void onUserInteraction() const;
    void super_onUserInteraction() const;
    void super_onUserLeaveHint() const;
    void onWindowAttributesChanged(const ::android::view::WindowManager_LayoutParams&) const;
    void super_onWindowAttributesChanged(const ::android::view::WindowManager_LayoutParams&) const;
    void onWindowFocusChanged(bool) const;
    void super_onWindowFocusChanged(bool) const;
    void onAttachedToWindow() const;
    void super_onAttachedToWindow() const;
    void onBackPressed() const;
    void super_onBackPressed() const;
    void onDetachedFromWindow() const;
    void super_onDetachedFromWindow() const;
    bool onKeyLongPress(int32_t, const ::android::view::KeyEvent&) const;
    bool super_onKeyLongPress(int32_t, const ::android::view::KeyEvent&) const;
    ::android::app::Dialog super_onCreateDialog(int32_t, const ::android::os::Bundle&) const;
    void super_onPrepareDialog(int32_t, const ::android::app::Dialog&, const ::android::os::Bundle&) const;

};
}
}
}
}
}


