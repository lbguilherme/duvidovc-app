#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.ComponentCallbacks2.hpp"
#include "android.view.ContextThemeWrapper.hpp"
#include "android.view.KeyEvent_Callback.hpp"
#include "android.view.LayoutInflater_Factory2.hpp"
#include "android.view.View_OnCreateContextMenuListener.hpp"
#include "android.view.Window_Callback.hpp"

namespace android { namespace app { class ActionBar; } }
namespace android { namespace app { class Activity; } }
namespace android { namespace app { class Application; } }
namespace android { namespace app { class Fragment; } }
namespace android { namespace app { class FragmentManager; } }
namespace android { namespace app { class LoaderManager; } }
namespace android { namespace app { class PendingIntent; } }
namespace android { namespace content { class ComponentName; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace content { class IntentSender; } }
namespace android { namespace content { class SharedPreferences; } }
namespace android { namespace content { namespace res { class Configuration; } } }
namespace android { namespace database { class Cursor; } }
namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class ActionMode; } }
namespace android { namespace view { class ActionMode_Callback; } }
namespace android { namespace view { class ContextMenu; } }
namespace android { namespace view { class ContextMenu_ContextMenuInfo; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class LayoutInflater; } }
namespace android { namespace view { class Menu; } }
namespace android { namespace view { class MenuInflater; } }
namespace android { namespace view { class MenuItem; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup_LayoutParams; } }
namespace android { namespace view { class Window; } }
namespace android { namespace view { class WindowManager; } }
namespace android { namespace view { class WindowManager_LayoutParams; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace io { class PrintWriter; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class Runnable; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace app {
class Activity : public virtual ::java::lang::Object,
                 public virtual ::android::content::ComponentCallbacks2,
                 public virtual ::android::view::ContextThemeWrapper,
                 public virtual ::android::view::KeyEvent_Callback,
                 public virtual ::android::view::LayoutInflater_Factory2,
                 public virtual ::android::view::View_OnCreateContextMenuListener,
                 public virtual ::android::view::Window_Callback {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Activity(jobject _obj) : ::java::lang::Object(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::content::Context(_obj), ::android::content::ContextWrapper(_obj), ::android::view::ContextThemeWrapper(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::LayoutInflater_Factory(_obj), ::android::view::LayoutInflater_Factory2(_obj), ::android::view::View_OnCreateContextMenuListener(_obj), ::android::view::Window_Callback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Activity(const ::android::app::Activity& x) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {obj = x.obj;}
    Activity(::android::app::Activity&& x) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::Activity& operator=(const ::android::app::Activity& x) {obj = x.obj; return *this;}
    ::android::app::Activity& operator=(::android::app::Activity&& x) {obj = std::move(x.obj); return *this;}
    
    Activity();
    ::android::content::Intent getIntent() const;
    void setIntent(const ::android::content::Intent&) const;
    ::android::app::Application getApplication() const;
    bool isChild() const;
    ::android::app::Activity getParent() const;
    ::android::view::WindowManager getWindowManager() const;
    ::android::view::Window getWindow() const;
    ::android::app::LoaderManager getLoaderManager() const;
    ::android::view::View getCurrentFocus() const;
    bool onCreateThumbnail(const ::android::graphics::Bitmap&, const ::android::graphics::Canvas&) const;
    ::java::lang::CharSequence onCreateDescription() const;
    void onConfigurationChanged(const ::android::content::res::Configuration&) const;
    int32_t getChangingConfigurations() const;
    ::java::lang::Object getLastNonConfigurationInstance() const;
    ::java::lang::Object onRetainNonConfigurationInstance() const;
    void onLowMemory() const;
    void onTrimMemory(int32_t) const;
    ::android::app::FragmentManager getFragmentManager() const;
    void onAttachFragment(const ::android::app::Fragment&) const;
    ::android::database::Cursor managedQuery(const ::android::net::Uri&, const std::vector< ::java::lang::String>&, const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::java::lang::String&) const;
    void startManagingCursor(const ::android::database::Cursor&) const;
    void stopManagingCursor(const ::android::database::Cursor&) const;
    ::android::view::View findViewById(int32_t) const;
    ::android::app::ActionBar getActionBar() const;
    void setContentView(int32_t) const;
    void setContentView(const ::android::view::View&) const;
    void setContentView(const ::android::view::View&, const ::android::view::ViewGroup_LayoutParams&) const;
    void addContentView(const ::android::view::View&, const ::android::view::ViewGroup_LayoutParams&) const;
    void setFinishOnTouchOutside(bool) const;
    void setDefaultKeyMode(int32_t) const;
    bool onKeyDown(int32_t, const ::android::view::KeyEvent&) const;
    bool onKeyLongPress(int32_t, const ::android::view::KeyEvent&) const;
    bool onKeyUp(int32_t, const ::android::view::KeyEvent&) const;
    bool onKeyMultiple(int32_t, int32_t, const ::android::view::KeyEvent&) const;
    void onBackPressed() const;
    bool onKeyShortcut(int32_t, const ::android::view::KeyEvent&) const;
    bool onTouchEvent(const ::android::view::MotionEvent&) const;
    bool onTrackballEvent(const ::android::view::MotionEvent&) const;
    bool onGenericMotionEvent(const ::android::view::MotionEvent&) const;
    void onUserInteraction() const;
    void onWindowAttributesChanged(const ::android::view::WindowManager_LayoutParams&) const;
    void onContentChanged() const;
    void onWindowFocusChanged(bool) const;
    void onAttachedToWindow() const;
    void onDetachedFromWindow() const;
    bool hasWindowFocus() const;
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
    void onPanelClosed(int32_t, const ::android::view::Menu&) const;
    void invalidateOptionsMenu() const;
    bool onCreateOptionsMenu(const ::android::view::Menu&) const;
    bool onPrepareOptionsMenu(const ::android::view::Menu&) const;
    bool onOptionsItemSelected(const ::android::view::MenuItem&) const;
    void onOptionsMenuClosed(const ::android::view::Menu&) const;
    void openOptionsMenu() const;
    void closeOptionsMenu() const;
    void onCreateContextMenu(const ::android::view::ContextMenu&, const ::android::view::View&, const ::android::view::ContextMenu_ContextMenuInfo&) const;
    void registerForContextMenu(const ::android::view::View&) const;
    void unregisterForContextMenu(const ::android::view::View&) const;
    void openContextMenu(const ::android::view::View&) const;
    void closeContextMenu() const;
    bool onContextItemSelected(const ::android::view::MenuItem&) const;
    void onContextMenuClosed(const ::android::view::Menu&) const;
    void showDialog(int32_t) const;
    bool showDialog(int32_t, const ::android::os::Bundle&) const;
    void dismissDialog(int32_t) const;
    void removeDialog(int32_t) const;
    bool onSearchRequested() const;
    void startSearch(const ::java::lang::String&, bool, const ::android::os::Bundle&, bool) const;
    void triggerSearch(const ::java::lang::String&, const ::android::os::Bundle&) const;
    void takeKeyEvents(bool) const;
    bool requestWindowFeature(int32_t) const;
    void setFeatureDrawableResource(int32_t, int32_t) const;
    void setFeatureDrawableUri(int32_t, const ::android::net::Uri&) const;
    void setFeatureDrawable(int32_t, const ::android::graphics::drawable::Drawable&) const;
    void setFeatureDrawableAlpha(int32_t, int32_t) const;
    ::android::view::LayoutInflater getLayoutInflater() const;
    ::android::view::MenuInflater getMenuInflater() const;
    void startActivityForResult(const ::android::content::Intent&, int32_t) const;
    void startIntentSenderForResult(const ::android::content::IntentSender&, int32_t, const ::android::content::Intent&, int32_t, int32_t, int32_t) const;
    void startActivity(const ::android::content::Intent&) const;
    void startActivities(const std::vector< ::android::content::Intent>&) const;
    void startIntentSender(const ::android::content::IntentSender&, const ::android::content::Intent&, int32_t, int32_t, int32_t) const;
    bool startActivityIfNeeded(const ::android::content::Intent&, int32_t) const;
    bool startNextMatchingActivity(const ::android::content::Intent&) const;
    void startActivityFromChild(const ::android::app::Activity&, const ::android::content::Intent&, int32_t) const;
    void startActivityFromFragment(const ::android::app::Fragment&, const ::android::content::Intent&, int32_t) const;
    void startIntentSenderFromChild(const ::android::app::Activity&, const ::android::content::IntentSender&, int32_t, const ::android::content::Intent&, int32_t, int32_t, int32_t) const;
    void overridePendingTransition(int32_t, int32_t) const;
    void setResult(int32_t) const;
    void setResult(int32_t, const ::android::content::Intent&) const;
    ::java::lang::String getCallingPackage() const;
    ::android::content::ComponentName getCallingActivity() const;
    void setVisible(bool) const;
    bool isFinishing() const;
    bool isChangingConfigurations() const;
    void recreate() const;
    void finish() const;
    void finishFromChild(const ::android::app::Activity&) const;
    void finishActivity(int32_t) const;
    void finishActivityFromChild(const ::android::app::Activity&, int32_t) const;
    ::android::app::PendingIntent createPendingResult(int32_t, const ::android::content::Intent&, int32_t) const;
    void setRequestedOrientation(int32_t) const;
    int32_t getRequestedOrientation() const;
    int32_t getTaskId() const;
    bool isTaskRoot() const;
    bool moveTaskToBack(bool) const;
    ::java::lang::String getLocalClassName() const;
    ::android::content::ComponentName getComponentName() const;
    ::android::content::SharedPreferences getPreferences(int32_t) const;
    ::java::lang::Object getSystemService(const ::java::lang::String&) const;
    void setTitle(const ::java::lang::CharSequence&) const;
    void setTitle(int32_t) const;
    void setTitleColor(int32_t) const;
    ::java::lang::CharSequence getTitle() const;
    int32_t getTitleColor() const;
    void setProgressBarVisibility(bool) const;
    void setProgressBarIndeterminateVisibility(bool) const;
    void setProgressBarIndeterminate(bool) const;
    void setProgress(int32_t) const;
    void setSecondaryProgress(int32_t) const;
    void setVolumeControlStream(int32_t) const;
    int32_t getVolumeControlStream() const;
    void runOnUiThread(const ::java::lang::Runnable&) const;
    ::android::view::View onCreateView(const ::java::lang::String&, const ::android::content::Context&, const ::android::util::AttributeSet&) const;
    ::android::view::View onCreateView(const ::android::view::View&, const ::java::lang::String&, const ::android::content::Context&, const ::android::util::AttributeSet&) const;
    void dump(const ::java::lang::String&, const ::java::io::FileDescriptor&, const ::java::io::PrintWriter&, const std::vector< ::java::lang::String>&) const;
    ::android::view::ActionMode startActionMode(const ::android::view::ActionMode_Callback&) const;
    ::android::view::ActionMode onWindowStartingActionMode(const ::android::view::ActionMode_Callback&) const;
    void onActionModeStarted(const ::android::view::ActionMode&) const;
    void onActionModeFinished(const ::android::view::ActionMode&) const;

};
}
}


