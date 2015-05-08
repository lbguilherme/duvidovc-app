#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Comparator.hpp"

namespace android { namespace content { namespace pm { class PackageManager; } } }
namespace android { namespace content { namespace pm { class ResolveInfo; } } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace content {
namespace pm {
class ResolveInfo_DisplayNameComparator : public virtual ::java::lang::Object,
                                          public virtual ::java::util::Comparator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ResolveInfo_DisplayNameComparator(jobject _obj) : ::java::lang::Object(_obj), ::java::util::Comparator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ResolveInfo_DisplayNameComparator(const ::android::content::pm::ResolveInfo_DisplayNameComparator& x) : ::java::lang::Object((jobject)0), ::java::util::Comparator((jobject)0) {obj = x.obj;}
    ResolveInfo_DisplayNameComparator(::android::content::pm::ResolveInfo_DisplayNameComparator&& x) : ::java::lang::Object((jobject)0), ::java::util::Comparator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::pm::ResolveInfo_DisplayNameComparator& operator=(const ::android::content::pm::ResolveInfo_DisplayNameComparator& x) {obj = x.obj; return *this;}
    ::android::content::pm::ResolveInfo_DisplayNameComparator& operator=(::android::content::pm::ResolveInfo_DisplayNameComparator&& x) {obj = std::move(x.obj); return *this;}
    
    ResolveInfo_DisplayNameComparator(const ::android::content::pm::PackageManager&);
    int32_t compare(const ::android::content::pm::ResolveInfo&, const ::android::content::pm::ResolveInfo&) const ;
    int32_t compare(const ::java::lang::Object&, const ::java::lang::Object&) const ;

};
}
}
}


