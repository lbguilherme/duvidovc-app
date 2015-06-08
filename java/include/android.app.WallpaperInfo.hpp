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
namespace android { namespace content { namespace pm { class PackageManager; } } }
namespace android { namespace content { namespace pm { class ResolveInfo; } } }
namespace android { namespace content { namespace pm { class ServiceInfo; } } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace os { class Parcel; } }
namespace android { namespace util { class Printer; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace app {
class WallpaperInfo : public virtual ::java::lang::Object,
                      public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WallpaperInfo(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WallpaperInfo(const ::android::app::WallpaperInfo& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    WallpaperInfo(::android::app::WallpaperInfo&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::WallpaperInfo& operator=(const ::android::app::WallpaperInfo& x) {obj = x.obj; return *this;}
    ::android::app::WallpaperInfo& operator=(::android::app::WallpaperInfo&& x) {obj = std::move(x.obj); return *this;}
    
    WallpaperInfo(const ::android::content::Context&, const ::android::content::pm::ResolveInfo&);
    ::java::lang::String getPackageName() const;
    ::java::lang::String getServiceName() const;
    ::android::content::pm::ServiceInfo getServiceInfo() const;
    ::android::content::ComponentName getComponent() const;
    ::java::lang::CharSequence loadLabel(const ::android::content::pm::PackageManager&) const;
    ::android::graphics::drawable::Drawable loadIcon(const ::android::content::pm::PackageManager&) const;
    ::android::graphics::drawable::Drawable loadThumbnail(const ::android::content::pm::PackageManager&) const;
    ::java::lang::CharSequence loadAuthor(const ::android::content::pm::PackageManager&) const;
    ::java::lang::CharSequence loadDescription(const ::android::content::pm::PackageManager&) const;
    ::java::lang::String getSettingsActivity() const;
    void dump(const ::android::util::Printer&, const ::java::lang::String&) const;
    ::java::lang::String toString() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    int32_t describeContents() const;

};
}
}


