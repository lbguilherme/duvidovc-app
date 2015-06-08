#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Comparator.hpp"

namespace android { namespace content { namespace pm { class PackageItemInfo; } } }
namespace android { namespace content { namespace pm { class PackageManager; } } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace content {
namespace pm {
class PackageItemInfo_DisplayNameComparator : public virtual ::java::lang::Object,
                                              public virtual ::java::util::Comparator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PackageItemInfo_DisplayNameComparator(jobject _obj) : ::java::lang::Object(_obj), ::java::util::Comparator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PackageItemInfo_DisplayNameComparator(const ::android::content::pm::PackageItemInfo_DisplayNameComparator& x) : ::java::lang::Object((jobject)0), ::java::util::Comparator((jobject)0) {obj = x.obj;}
    PackageItemInfo_DisplayNameComparator(::android::content::pm::PackageItemInfo_DisplayNameComparator&& x) : ::java::lang::Object((jobject)0), ::java::util::Comparator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::pm::PackageItemInfo_DisplayNameComparator& operator=(const ::android::content::pm::PackageItemInfo_DisplayNameComparator& x) {obj = x.obj; return *this;}
    ::android::content::pm::PackageItemInfo_DisplayNameComparator& operator=(::android::content::pm::PackageItemInfo_DisplayNameComparator&& x) {obj = std::move(x.obj); return *this;}
    
    PackageItemInfo_DisplayNameComparator(const ::android::content::pm::PackageManager&);
    int32_t compare(const ::android::content::pm::PackageItemInfo&, const ::android::content::pm::PackageItemInfo&) const;
    int32_t compare(const ::java::lang::Object&, const ::java::lang::Object&) const;

};
}
}
}


