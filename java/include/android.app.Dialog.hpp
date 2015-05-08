#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.DialogInterface.hpp"
#include "android.view.KeyEvent_Callback.hpp"
#include "android.view.View_OnCreateContextMenuListener.hpp"
#include "android.view.Window_Callback.hpp"

namespace android { namespace app { class ActionBar; } }
namespace android { namespace app { class Activity; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class DialogInterface_OnCancelListener; } }
namespace android { namespace content { class DialogInterface_OnDismissListener; } }
namespace android { namespace content { class DialogInterface_OnKeyListener; } }
namespace android { namespace content { class DialogInterface_OnShowListener; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class Message; } }
namespace android { namespace view { class ActionMode; } }
namespace android { namespace view { class ActionMode_Callback; } }
namespace android { namespace view { class ContextMenu; } }
namespace android { namespace view { class ContextMenu_ContextMenuInfo; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class LayoutInflater; } }
namespace android { namespace view { class Menu; } }
namespace android { namespace view { class MenuItem; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup_LayoutParams; } }
namespace android { namespace view { class Window; } }
namespace android { namespace view { class WindowManager_LayoutParams; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace app {
class Dialog : public virtual ::java::lang::Object,
               public virtual ::android::content::DialogInterface,
               public virtual ::android::view::KeyEvent_Callback,
               public virtual ::android::view::View_OnCreateContextMenuListener,
               public virtual ::android::view::Window_Callback {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Dialog(jobject _obj) : ::java::lang::Object(_obj), ::android::content::DialogInterface(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View_OnCreateContextMenuListener(_obj), ::android::view::Window_Callback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Dialog(const ::android::app::Dialog& x) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {obj = x.obj;}
    Dialog(::android::app::Dialog&& x) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::Dialog& operator=(const ::android::app::Dialog& x) {obj = x.obj; return *this;}
    ::android::app::Dialog& operator=(::android::app::Dialog&& x) {obj = std::move(x.obj); return *this;}
    
    Dialog(const ::android::content::Context&);
    Dialog(const ::android::content::Context&, int32_t);
    ::android::content::Context getContext() const ;
    ::android::app::ActionBar getActionBar() const ;
    void setOwnerActivity(const ::android::app::Activity&) const ;
    ::android::app::Activity getOwnerActivity() const ;
    bool isShowing() const ;
    void show() const ;
    void hide() const ;
    void dismiss() const ;
    ::android::os::Bundle onSaveInstanceState() const ;
    void onRestoreInstanceState(const ::android::os::Bundle&) const ;
    ::android::view::Window getWindow() const ;
    ::android::view::View getCurrentFocus() const ;
    ::android::view::View findViewById(int32_t) const ;
    void setContentView(int32_t) const ;
    void setContentView(const ::android::view::View&) const ;
    void setContentView(const ::android::view::View&, const ::android::view::ViewGroup_LayoutParams&) const ;
    void addContentView(const ::android::view::View&, const ::android::view::ViewGroup_LayoutParams&) const ;
    void setTitle(const ::java::lang::CharSequence&) const ;
    void setTitle(int32_t) const ;
    bool onKeyDown(int32_t, const ::android::view::KeyEvent&) const ;
    bool onKeyLongPress(int32_t, const ::android::view::KeyEvent&) const ;
    bool onKeyUp(int32_t, const ::android::view::KeyEvent&) const ;
    bool onKeyMultiple(int32_t, int32_t, const ::android::view::KeyEvent&) const ;
    void onBackPressed() const ;
    bool onKeyShortcut(int32_t, const ::android::view::KeyEvent&) const ;
    bool onTouchEvent(const ::android::view::MotionEvent&) const ;
    bool onTrackballEvent(const ::android::view::MotionEvent&) const ;
    bool onGenericMotionEvent(const ::android::view::MotionEvent&) const ;
    void onWindowAttributesChanged(const ::android::view::WindowManager_LayoutParams&) const ;
    void onContentChanged() const ;
    void onWindowFocusChanged(bool) const ;
    void onAttachedToWindow() const ;
    void onDetachedFromWindow() const ;
    bool dispatchKeyEvent(const ::android::view::KeyEvent&) const ;
    bool dispatchKeyShortcutEvent(const ::android::view::KeyEvent&) const ;
    bool dispatchTouchEvent(const ::android::view::MotionEvent&) const ;
    bool dispatchTrackballEvent(const ::android::view::MotionEvent&) const ;
    bool dispatchGenericMotionEvent(const ::android::view::MotionEvent&) const ;
    bool dispatchPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const ;
    ::android::view::View onCreatePanelView(int32_t) const ;
    bool onCreatePanelMenu(int32_t, const ::android::view::Menu&) const ;
    bool onPreparePanel(int32_t, const ::android::view::View&, const ::android::view::Menu&) const ;
    bool onMenuOpened(int32_t, const ::android::view::Menu&) const ;
    bool onMenuItemSelected(int32_t, const ::android::view::MenuItem&) const ;
    void onPanelClosed(int32_t, const ::android::view::Menu&) const ;
    bool onCreateOptionsMenu(const ::android::view::Menu&) const ;
    bool onPrepareOptionsMenu(const ::android::view::Menu&) const ;
    bool onOptionsItemSelected(const ::android::view::MenuItem&) const ;
    void onOptionsMenuClosed(const ::android::view::Menu&) const ;
    void openOptionsMenu() const ;
    void closeOptionsMenu() const ;
    void invalidateOptionsMenu() const ;
    void onCreateContextMenu(const ::android::view::ContextMenu&, const ::android::view::View&, const ::android::view::ContextMenu_ContextMenuInfo&) const ;
    void registerForContextMenu(const ::android::view::View&) const ;
    void unregisterForContextMenu(const ::android::view::View&) const ;
    void openContextMenu(const ::android::view::View&) const ;
    bool onContextItemSelected(const ::android::view::MenuItem&) const ;
    void onContextMenuClosed(const ::android::view::Menu&) const ;
    bool onSearchRequested() const ;
    ::android::view::ActionMode onWindowStartingActionMode(const ::android::view::ActionMode_Callback&) const ;
    void onActionModeStarted(const ::android::view::ActionMode&) const ;
    void onActionModeFinished(const ::android::view::ActionMode&) const ;
    void takeKeyEvents(bool) const ;
    bool requestWindowFeature(int32_t) const ;
    void setFeatureDrawableResource(int32_t, int32_t) const ;
    void setFeatureDrawableUri(int32_t, const ::android::net::Uri&) const ;
    void setFeatureDrawable(int32_t, const ::android::graphics::drawable::Drawable&) const ;
    void setFeatureDrawableAlpha(int32_t, int32_t) const ;
    ::android::view::LayoutInflater getLayoutInflater() const ;
    void setCancelable(bool) const ;
    void setCanceledOnTouchOutside(bool) const ;
    void cancel() const ;
    void setOnCancelListener(const ::android::content::DialogInterface_OnCancelListener&) const ;
    void setCancelMessage(const ::android::os::Message&) const ;
    void setOnDismissListener(const ::android::content::DialogInterface_OnDismissListener&) const ;
    void setOnShowListener(const ::android::content::DialogInterface_OnShowListener&) const ;
    void setDismissMessage(const ::android::os::Message&) const ;
    void setVolumeControlStream(int32_t) const ;
    int32_t getVolumeControlStream() const ;
    void setOnKeyListener(const ::android::content::DialogInterface_OnKeyListener&) const ;

};
}
}


