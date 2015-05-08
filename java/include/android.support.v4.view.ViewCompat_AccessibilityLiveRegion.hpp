#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.annotation.Annotation.hpp"


namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewCompat_AccessibilityLiveRegion : public virtual ::java::lang::Object,
                                           public virtual ::java::lang::annotation::Annotation {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewCompat_AccessibilityLiveRegion(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::annotation::Annotation(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewCompat_AccessibilityLiveRegion(const ::android::support::v4::view::ViewCompat_AccessibilityLiveRegion& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj;}
    ViewCompat_AccessibilityLiveRegion(::android::support::v4::view::ViewCompat_AccessibilityLiveRegion&& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewCompat_AccessibilityLiveRegion& operator=(const ::android::support::v4::view::ViewCompat_AccessibilityLiveRegion& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewCompat_AccessibilityLiveRegion& operator=(::android::support::v4::view::ViewCompat_AccessibilityLiveRegion&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}


