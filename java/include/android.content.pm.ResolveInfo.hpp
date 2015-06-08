#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace content { namespace pm { class PackageManager; } } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace os { class Parcel; } }
namespace android { namespace util { class Printer; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
namespace pm {
class ResolveInfo : public virtual ::java::lang::Object,
                    public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ResolveInfo(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ResolveInfo(const ::android::content::pm::ResolveInfo& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    ResolveInfo(::android::content::pm::ResolveInfo&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::pm::ResolveInfo& operator=(const ::android::content::pm::ResolveInfo& x) {obj = x.obj; return *this;}
    ::android::content::pm::ResolveInfo& operator=(::android::content::pm::ResolveInfo&& x) {obj = std::move(x.obj); return *this;}
    
    ResolveInfo();
    ::java::lang::CharSequence loadLabel(const ::android::content::pm::PackageManager&) const;
    ::android::graphics::drawable::Drawable loadIcon(const ::android::content::pm::PackageManager&) const;
    int32_t getIconResource() const;
    void dump(const ::android::util::Printer&, const ::java::lang::String&) const;
    ::java::lang::String toString() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;

};
}
}
}

#include "android.content.pm.ResolveInfo_DisplayNameComparator.hpp"

