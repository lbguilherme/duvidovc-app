#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class ActivityManager_MemoryInfo; } }
namespace android { namespace app { class PendingIntent; } }
namespace android { namespace content { class ComponentName; } }
namespace android { namespace content { namespace pm { class ConfigurationInfo; } } }
namespace android { namespace os { class Debug_MemoryInfo; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace android {
namespace app {
class ActivityManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ActivityManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ActivityManager(const ::android::app::ActivityManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ActivityManager(::android::app::ActivityManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::ActivityManager& operator=(const ::android::app::ActivityManager& x) {obj = x.obj; return *this;}
    ::android::app::ActivityManager& operator=(::android::app::ActivityManager&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getMemoryClass() const ;
    int32_t getLargeMemoryClass() const ;
    ::java::util::List getRecentTasks(int32_t, int32_t) const ;
    ::java::util::List getRunningTasks(int32_t) const ;
    void moveTaskToFront(int32_t, int32_t) const ;
    ::java::util::List getRunningServices(int32_t) const ;
    ::android::app::PendingIntent getRunningServiceControlPanel(const ::android::content::ComponentName&) const ;
    void getMemoryInfo(const ::android::app::ActivityManager_MemoryInfo&) const ;
    ::java::util::List getProcessesInErrorState() const ;
    ::java::util::List getRunningAppProcesses() const ;
    std::vector< ::android::os::Debug_MemoryInfo> getProcessMemoryInfo(const std::vector< int32_t>&) const ;
    void restartPackage(const ::java::lang::String&) const ;
    void killBackgroundProcesses(const ::java::lang::String&) const ;
    ::android::content::pm::ConfigurationInfo getDeviceConfigurationInfo() const ;
    int32_t getLauncherLargeIconDensity() const ;
    int32_t getLauncherLargeIconSize() const ;
    static bool isUserAMonkey();
    static bool isRunningInTestHarness();

};
}
}

#include "android.app.ActivityManager_MemoryInfo.hpp"
#include "android.app.ActivityManager_ProcessErrorStateInfo.hpp"
#include "android.app.ActivityManager_RecentTaskInfo.hpp"
#include "android.app.ActivityManager_RunningAppProcessInfo.hpp"
#include "android.app.ActivityManager_RunningServiceInfo.hpp"
#include "android.app.ActivityManager_RunningTaskInfo.hpp"

