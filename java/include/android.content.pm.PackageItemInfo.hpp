#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { namespace pm { class PackageManager; } } }
namespace android { namespace content { namespace res { class XmlResourceParser; } } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
namespace pm {
class PackageItemInfo : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PackageItemInfo(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PackageItemInfo(const ::android::content::pm::PackageItemInfo& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PackageItemInfo(::android::content::pm::PackageItemInfo&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::pm::PackageItemInfo& operator=(const ::android::content::pm::PackageItemInfo& x) {obj = x.obj; return *this;}
    ::android::content::pm::PackageItemInfo& operator=(::android::content::pm::PackageItemInfo&& x) {obj = std::move(x.obj); return *this;}
    
    PackageItemInfo();
    ::java::lang::CharSequence loadLabel(const ::android::content::pm::PackageManager&) const ;
    ::android::graphics::drawable::Drawable loadIcon(const ::android::content::pm::PackageManager&) const ;
    ::android::graphics::drawable::Drawable loadLogo(const ::android::content::pm::PackageManager&) const ;
    ::android::content::res::XmlResourceParser loadXmlMetaData(const ::android::content::pm::PackageManager&, const ::java::lang::String&) const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}
}

#include "android.content.pm.PackageItemInfo_DisplayNameComparator.hpp"

