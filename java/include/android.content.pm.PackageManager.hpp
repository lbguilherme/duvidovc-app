#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class ComponentName; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace content { class IntentFilter; } }
namespace android { namespace content { namespace pm { class ActivityInfo; } } }
namespace android { namespace content { namespace pm { class ApplicationInfo; } } }
namespace android { namespace content { namespace pm { class FeatureInfo; } } }
namespace android { namespace content { namespace pm { class InstrumentationInfo; } } }
namespace android { namespace content { namespace pm { class PackageInfo; } } }
namespace android { namespace content { namespace pm { class PermissionGroupInfo; } } }
namespace android { namespace content { namespace pm { class PermissionInfo; } } }
namespace android { namespace content { namespace pm { class ProviderInfo; } } }
namespace android { namespace content { namespace pm { class ResolveInfo; } } }
namespace android { namespace content { namespace pm { class ServiceInfo; } } }
namespace android { namespace content { namespace res { class Resources; } } }
namespace android { namespace content { namespace res { class XmlResourceParser; } } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace android {
namespace content {
namespace pm {
class PackageManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PackageManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PackageManager(const ::android::content::pm::PackageManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PackageManager(::android::content::pm::PackageManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::pm::PackageManager& operator=(const ::android::content::pm::PackageManager& x) {obj = x.obj; return *this;}
    ::android::content::pm::PackageManager& operator=(::android::content::pm::PackageManager&& x) {obj = std::move(x.obj); return *this;}
    
    PackageManager();
    ::android::content::pm::PackageInfo getPackageInfo(const ::java::lang::String&, int32_t) const ;
    std::vector< ::java::lang::String> currentToCanonicalPackageNames(const std::vector< ::java::lang::String>&) const ;
    std::vector< ::java::lang::String> canonicalToCurrentPackageNames(const std::vector< ::java::lang::String>&) const ;
    ::android::content::Intent getLaunchIntentForPackage(const ::java::lang::String&) const ;
    std::vector< int32_t> getPackageGids(const ::java::lang::String&) const ;
    ::android::content::pm::PermissionInfo getPermissionInfo(const ::java::lang::String&, int32_t) const ;
    ::java::util::List queryPermissionsByGroup(const ::java::lang::String&, int32_t) const ;
    ::android::content::pm::PermissionGroupInfo getPermissionGroupInfo(const ::java::lang::String&, int32_t) const ;
    ::java::util::List getAllPermissionGroups(int32_t) const ;
    ::android::content::pm::ApplicationInfo getApplicationInfo(const ::java::lang::String&, int32_t) const ;
    ::android::content::pm::ActivityInfo getActivityInfo(const ::android::content::ComponentName&, int32_t) const ;
    ::android::content::pm::ActivityInfo getReceiverInfo(const ::android::content::ComponentName&, int32_t) const ;
    ::android::content::pm::ServiceInfo getServiceInfo(const ::android::content::ComponentName&, int32_t) const ;
    ::android::content::pm::ProviderInfo getProviderInfo(const ::android::content::ComponentName&, int32_t) const ;
    ::java::util::List getInstalledPackages(int32_t) const ;
    int32_t checkPermission(const ::java::lang::String&, const ::java::lang::String&) const ;
    bool addPermission(const ::android::content::pm::PermissionInfo&) const ;
    bool addPermissionAsync(const ::android::content::pm::PermissionInfo&) const ;
    void removePermission(const ::java::lang::String&) const ;
    int32_t checkSignatures(const ::java::lang::String&, const ::java::lang::String&) const ;
    int32_t checkSignatures(int32_t, int32_t) const ;
    std::vector< ::java::lang::String> getPackagesForUid(int32_t) const ;
    ::java::lang::String getNameForUid(int32_t) const ;
    ::java::util::List getInstalledApplications(int32_t) const ;
    std::vector< ::java::lang::String> getSystemSharedLibraryNames() const ;
    std::vector< ::android::content::pm::FeatureInfo> getSystemAvailableFeatures() const ;
    bool hasSystemFeature(const ::java::lang::String&) const ;
    ::android::content::pm::ResolveInfo resolveActivity(const ::android::content::Intent&, int32_t) const ;
    ::java::util::List queryIntentActivities(const ::android::content::Intent&, int32_t) const ;
    ::java::util::List queryIntentActivityOptions(const ::android::content::ComponentName&, const std::vector< ::android::content::Intent>&, const ::android::content::Intent&, int32_t) const ;
    ::java::util::List queryBroadcastReceivers(const ::android::content::Intent&, int32_t) const ;
    ::android::content::pm::ResolveInfo resolveService(const ::android::content::Intent&, int32_t) const ;
    ::java::util::List queryIntentServices(const ::android::content::Intent&, int32_t) const ;
    ::android::content::pm::ProviderInfo resolveContentProvider(const ::java::lang::String&, int32_t) const ;
    ::java::util::List queryContentProviders(const ::java::lang::String&, int32_t, int32_t) const ;
    ::android::content::pm::InstrumentationInfo getInstrumentationInfo(const ::android::content::ComponentName&, int32_t) const ;
    ::java::util::List queryInstrumentation(const ::java::lang::String&, int32_t) const ;
    ::android::graphics::drawable::Drawable getDrawable(const ::java::lang::String&, int32_t, const ::android::content::pm::ApplicationInfo&) const ;
    ::android::graphics::drawable::Drawable getActivityIcon(const ::android::content::ComponentName&) const ;
    ::android::graphics::drawable::Drawable getActivityIcon(const ::android::content::Intent&) const ;
    ::android::graphics::drawable::Drawable getDefaultActivityIcon() const ;
    ::android::graphics::drawable::Drawable getApplicationIcon(const ::android::content::pm::ApplicationInfo&) const ;
    ::android::graphics::drawable::Drawable getApplicationIcon(const ::java::lang::String&) const ;
    ::android::graphics::drawable::Drawable getActivityLogo(const ::android::content::ComponentName&) const ;
    ::android::graphics::drawable::Drawable getActivityLogo(const ::android::content::Intent&) const ;
    ::android::graphics::drawable::Drawable getApplicationLogo(const ::android::content::pm::ApplicationInfo&) const ;
    ::android::graphics::drawable::Drawable getApplicationLogo(const ::java::lang::String&) const ;
    ::java::lang::CharSequence getText(const ::java::lang::String&, int32_t, const ::android::content::pm::ApplicationInfo&) const ;
    ::android::content::res::XmlResourceParser getXml(const ::java::lang::String&, int32_t, const ::android::content::pm::ApplicationInfo&) const ;
    ::java::lang::CharSequence getApplicationLabel(const ::android::content::pm::ApplicationInfo&) const ;
    ::android::content::res::Resources getResourcesForActivity(const ::android::content::ComponentName&) const ;
    ::android::content::res::Resources getResourcesForApplication(const ::android::content::pm::ApplicationInfo&) const ;
    ::android::content::res::Resources getResourcesForApplication(const ::java::lang::String&) const ;
    ::android::content::pm::PackageInfo getPackageArchiveInfo(const ::java::lang::String&, int32_t) const ;
    void verifyPendingInstall(int32_t, int32_t) const ;
    void setInstallerPackageName(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::java::lang::String getInstallerPackageName(const ::java::lang::String&) const ;
    void addPackageToPreferred(const ::java::lang::String&) const ;
    void removePackageFromPreferred(const ::java::lang::String&) const ;
    ::java::util::List getPreferredPackages(int32_t) const ;
    void addPreferredActivity(const ::android::content::IntentFilter&, int32_t, const std::vector< ::android::content::ComponentName>&, const ::android::content::ComponentName&) const ;
    void clearPackagePreferredActivities(const ::java::lang::String&) const ;
    int32_t getPreferredActivities(const ::java::util::List&, const ::java::util::List&, const ::java::lang::String&) const ;
    void setComponentEnabledSetting(const ::android::content::ComponentName&, int32_t, int32_t) const ;
    int32_t getComponentEnabledSetting(const ::android::content::ComponentName&) const ;
    void setApplicationEnabledSetting(const ::java::lang::String&, int32_t, int32_t) const ;
    int32_t getApplicationEnabledSetting(const ::java::lang::String&) const ;
    bool isSafeMode() const ;

};
}
}
}

#include "android.content.pm.PackageManager_NameNotFoundException.hpp"

