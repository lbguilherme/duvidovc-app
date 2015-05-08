#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace app { class Application; } }
namespace android { namespace app { class Instrumentation_ActivityMonitor; } }
namespace android { namespace app { class Instrumentation_ActivityResult; } }
namespace android { namespace content { class ComponentName; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace content { class IntentFilter; } }
namespace android { namespace content { namespace pm { class ActivityInfo; } } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class IBinder; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class MotionEvent; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class ClassLoader; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class Runnable; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace android {
namespace app {
class Instrumentation : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Instrumentation(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Instrumentation(const ::android::app::Instrumentation& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Instrumentation(::android::app::Instrumentation&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::Instrumentation& operator=(const ::android::app::Instrumentation& x) {obj = x.obj; return *this;}
    ::android::app::Instrumentation& operator=(::android::app::Instrumentation&& x) {obj = std::move(x.obj); return *this;}
    
    Instrumentation();
    void onCreate(const ::android::os::Bundle&) const ;
    void start() const ;
    void onStart() const ;
    bool onException(const ::java::lang::Object&, const ::java::lang::Throwable&) const ;
    void sendStatus(int32_t, const ::android::os::Bundle&) const ;
    void finish(int32_t, const ::android::os::Bundle&) const ;
    void setAutomaticPerformanceSnapshots() const ;
    void startPerformanceSnapshot() const ;
    void endPerformanceSnapshot() const ;
    void onDestroy() const ;
    ::android::content::Context getContext() const ;
    ::android::content::ComponentName getComponentName() const ;
    ::android::content::Context getTargetContext() const ;
    bool isProfiling() const ;
    void startProfiling() const ;
    void stopProfiling() const ;
    void setInTouchMode(bool) const ;
    void waitForIdle(const ::java::lang::Runnable&) const ;
    void waitForIdleSync() const ;
    void runOnMainSync(const ::java::lang::Runnable&) const ;
    ::android::app::Activity startActivitySync(const ::android::content::Intent&) const ;
    void addMonitor(const ::android::app::Instrumentation_ActivityMonitor&) const ;
    ::android::app::Instrumentation_ActivityMonitor addMonitor(const ::android::content::IntentFilter&, const ::android::app::Instrumentation_ActivityResult&, bool) const ;
    ::android::app::Instrumentation_ActivityMonitor addMonitor(const ::java::lang::String&, const ::android::app::Instrumentation_ActivityResult&, bool) const ;
    bool checkMonitorHit(const ::android::app::Instrumentation_ActivityMonitor&, int32_t) const ;
    ::android::app::Activity waitForMonitor(const ::android::app::Instrumentation_ActivityMonitor&) const ;
    ::android::app::Activity waitForMonitorWithTimeout(const ::android::app::Instrumentation_ActivityMonitor&, int64_t) const ;
    void removeMonitor(const ::android::app::Instrumentation_ActivityMonitor&) const ;
    bool invokeMenuActionSync(const ::android::app::Activity&, int32_t, int32_t) const ;
    bool invokeContextMenuAction(const ::android::app::Activity&, int32_t, int32_t) const ;
    void sendStringSync(const ::java::lang::String&) const ;
    void sendKeySync(const ::android::view::KeyEvent&) const ;
    void sendKeyDownUpSync(int32_t) const ;
    void sendCharacterSync(int32_t) const ;
    void sendPointerSync(const ::android::view::MotionEvent&) const ;
    void sendTrackballEventSync(const ::android::view::MotionEvent&) const ;
    ::android::app::Application newApplication(const ::java::lang::ClassLoader&, const ::java::lang::String&, const ::android::content::Context&) const ;
    static ::android::app::Application newApplication(const ::java::lang::Class&, const ::android::content::Context&);
    void callApplicationOnCreate(const ::android::app::Application&) const ;
    ::android::app::Activity newActivity(const ::java::lang::Class&, const ::android::content::Context&, const ::android::os::IBinder&, const ::android::app::Application&, const ::android::content::Intent&, const ::android::content::pm::ActivityInfo&, const ::java::lang::CharSequence&, const ::android::app::Activity&, const ::java::lang::String&, const ::java::lang::Object&) const ;
    ::android::app::Activity newActivity(const ::java::lang::ClassLoader&, const ::java::lang::String&, const ::android::content::Intent&) const ;
    void callActivityOnCreate(const ::android::app::Activity&, const ::android::os::Bundle&) const ;
    void callActivityOnDestroy(const ::android::app::Activity&) const ;
    void callActivityOnRestoreInstanceState(const ::android::app::Activity&, const ::android::os::Bundle&) const ;
    void callActivityOnPostCreate(const ::android::app::Activity&, const ::android::os::Bundle&) const ;
    void callActivityOnNewIntent(const ::android::app::Activity&, const ::android::content::Intent&) const ;
    void callActivityOnStart(const ::android::app::Activity&) const ;
    void callActivityOnRestart(const ::android::app::Activity&) const ;
    void callActivityOnResume(const ::android::app::Activity&) const ;
    void callActivityOnStop(const ::android::app::Activity&) const ;
    void callActivityOnSaveInstanceState(const ::android::app::Activity&, const ::android::os::Bundle&) const ;
    void callActivityOnPause(const ::android::app::Activity&) const ;
    void callActivityOnUserLeaving(const ::android::app::Activity&) const ;
    void startAllocCounting() const ;
    void stopAllocCounting() const ;
    ::android::os::Bundle getAllocCounts() const ;
    ::android::os::Bundle getBinderCounts() const ;

};
}
}

#include "android.app.Instrumentation_ActivityMonitor.hpp"
#include "android.app.Instrumentation_ActivityResult.hpp"

