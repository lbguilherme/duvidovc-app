#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace content { class ComponentName; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { namespace pm { class ActivityInfo; } } }
namespace android { namespace content { namespace pm { class PackageManager; } } }
namespace android { namespace content { namespace pm { class ResolveInfo; } } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace os { class Parcel; } }
namespace android { namespace util { class Printer; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace app {
namespace admin {
class DeviceAdminInfo : public virtual ::java::lang::Object,
                        public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DeviceAdminInfo(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DeviceAdminInfo(const ::android::app::admin::DeviceAdminInfo& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    DeviceAdminInfo(::android::app::admin::DeviceAdminInfo&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::admin::DeviceAdminInfo& operator=(const ::android::app::admin::DeviceAdminInfo& x) {obj = x.obj; return *this;}
    ::android::app::admin::DeviceAdminInfo& operator=(::android::app::admin::DeviceAdminInfo&& x) {obj = std::move(x.obj); return *this;}
    
    DeviceAdminInfo(const ::android::content::Context&, const ::android::content::pm::ResolveInfo&);
    ::java::lang::String getPackageName() const;
    ::java::lang::String getReceiverName() const;
    ::android::content::pm::ActivityInfo getActivityInfo() const;
    ::android::content::ComponentName getComponent() const;
    ::java::lang::CharSequence loadLabel(const ::android::content::pm::PackageManager&) const;
    ::java::lang::CharSequence loadDescription(const ::android::content::pm::PackageManager&) const;
    ::android::graphics::drawable::Drawable loadIcon(const ::android::content::pm::PackageManager&) const;
    bool isVisible() const;
    bool usesPolicy(int32_t) const;
    ::java::lang::String getTagForPolicy(int32_t) const;
    void dump(const ::android::util::Printer&, const ::java::lang::String&) const;
    ::java::lang::String toString() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    int32_t describeContents() const;

};
}
}
}


