#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }

namespace android {
namespace test {
class ViewAsserts : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewAsserts(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewAsserts(const ::android::test::ViewAsserts& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewAsserts(::android::test::ViewAsserts&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::ViewAsserts& operator=(const ::android::test::ViewAsserts& x) {obj = x.obj; return *this;}
    ::android::test::ViewAsserts& operator=(::android::test::ViewAsserts&& x) {obj = std::move(x.obj); return *this;}
    
    static void assertOnScreen(const ::android::view::View&, const ::android::view::View&);
    static void assertOffScreenBelow(const ::android::view::View&, const ::android::view::View&);
    static void assertOffScreenAbove(const ::android::view::View&, const ::android::view::View&);
    static void assertHasScreenCoordinates(const ::android::view::View&, const ::android::view::View&, int32_t, int32_t);
    static void assertBaselineAligned(const ::android::view::View&, const ::android::view::View&);
    static void assertRightAligned(const ::android::view::View&, const ::android::view::View&);
    static void assertRightAligned(const ::android::view::View&, const ::android::view::View&, int32_t);
    static void assertLeftAligned(const ::android::view::View&, const ::android::view::View&);
    static void assertLeftAligned(const ::android::view::View&, const ::android::view::View&, int32_t);
    static void assertBottomAligned(const ::android::view::View&, const ::android::view::View&);
    static void assertBottomAligned(const ::android::view::View&, const ::android::view::View&, int32_t);
    static void assertTopAligned(const ::android::view::View&, const ::android::view::View&);
    static void assertTopAligned(const ::android::view::View&, const ::android::view::View&, int32_t);
    static void assertHorizontalCenterAligned(const ::android::view::View&, const ::android::view::View&);
    static void assertVerticalCenterAligned(const ::android::view::View&, const ::android::view::View&);
    static void assertGroupIntegrity(const ::android::view::ViewGroup&);
    static void assertGroupContains(const ::android::view::ViewGroup&, const ::android::view::View&);
    static void assertGroupNotContains(const ::android::view::ViewGroup&, const ::android::view::View&);

};
}
}


