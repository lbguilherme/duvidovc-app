#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace content { class ComponentName; } }
namespace android { namespace content { namespace pm { class PackageManager; } } }
namespace android { namespace content { namespace pm { class ServiceInfo; } } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace os { class Parcel; } }
namespace android { namespace view { namespace textservice { class SpellCheckerSubtype; } } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace view {
namespace textservice {
class SpellCheckerInfo : public virtual ::java::lang::Object,
                         public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SpellCheckerInfo(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SpellCheckerInfo(const ::android::view::textservice::SpellCheckerInfo& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    SpellCheckerInfo(::android::view::textservice::SpellCheckerInfo&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::textservice::SpellCheckerInfo& operator=(const ::android::view::textservice::SpellCheckerInfo& x) {obj = x.obj; return *this;}
    ::android::view::textservice::SpellCheckerInfo& operator=(::android::view::textservice::SpellCheckerInfo&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getId() const;
    ::android::content::ComponentName getComponent() const;
    ::java::lang::String getPackageName() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    ::java::lang::CharSequence loadLabel(const ::android::content::pm::PackageManager&) const;
    ::android::graphics::drawable::Drawable loadIcon(const ::android::content::pm::PackageManager&) const;
    ::android::content::pm::ServiceInfo getServiceInfo() const;
    ::java::lang::String getSettingsActivity() const;
    int32_t getSubtypeCount() const;
    ::android::view::textservice::SpellCheckerSubtype getSubtypeAt(int32_t) const;
    int32_t describeContents() const;

};
}
}
}


