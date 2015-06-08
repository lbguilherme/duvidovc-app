#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.pm.PackageItemInfo.hpp"

namespace android { namespace content { namespace pm { class PackageManager; } } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace content {
namespace pm {
class ComponentInfo : public virtual ::java::lang::Object,
                      public virtual ::android::content::pm::PackageItemInfo {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ComponentInfo(jobject _obj) : ::java::lang::Object(_obj), ::android::content::pm::PackageItemInfo(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ComponentInfo(const ::android::content::pm::ComponentInfo& x) : ::java::lang::Object((jobject)0), ::android::content::pm::PackageItemInfo((jobject)0) {obj = x.obj;}
    ComponentInfo(::android::content::pm::ComponentInfo&& x) : ::java::lang::Object((jobject)0), ::android::content::pm::PackageItemInfo((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::pm::ComponentInfo& operator=(const ::android::content::pm::ComponentInfo& x) {obj = x.obj; return *this;}
    ::android::content::pm::ComponentInfo& operator=(::android::content::pm::ComponentInfo&& x) {obj = std::move(x.obj); return *this;}
    
    ComponentInfo();
    ::java::lang::CharSequence loadLabel(const ::android::content::pm::PackageManager&) const;
    bool isEnabled() const;
    int32_t getIconResource() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;

};
}
}
}


