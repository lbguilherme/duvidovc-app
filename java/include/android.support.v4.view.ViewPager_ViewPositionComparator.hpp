#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Comparator.hpp"

namespace android { namespace view { class View; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewPager_ViewPositionComparator : public virtual ::java::lang::Object,
                                         public virtual ::java::util::Comparator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewPager_ViewPositionComparator(jobject _obj) : ::java::lang::Object(_obj), ::java::util::Comparator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewPager_ViewPositionComparator(const ::android::support::v4::view::ViewPager_ViewPositionComparator& x) : ::java::lang::Object((jobject)0), ::java::util::Comparator((jobject)0) {obj = x.obj;}
    ViewPager_ViewPositionComparator(::android::support::v4::view::ViewPager_ViewPositionComparator&& x) : ::java::lang::Object((jobject)0), ::java::util::Comparator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewPager_ViewPositionComparator& operator=(const ::android::support::v4::view::ViewPager_ViewPositionComparator& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewPager_ViewPositionComparator& operator=(::android::support::v4::view::ViewPager_ViewPositionComparator&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t compare(const ::android::view::View&, const ::android::view::View&) const;
    int32_t compare(const ::java::lang::Object&, const ::java::lang::Object&) const;

};
}
}
}
}


