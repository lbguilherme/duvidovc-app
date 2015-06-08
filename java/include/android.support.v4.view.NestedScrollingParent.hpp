#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class View; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class NestedScrollingParent : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NestedScrollingParent(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NestedScrollingParent(const ::android::support::v4::view::NestedScrollingParent& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NestedScrollingParent(::android::support::v4::view::NestedScrollingParent&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::NestedScrollingParent& operator=(const ::android::support::v4::view::NestedScrollingParent& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::NestedScrollingParent& operator=(::android::support::v4::view::NestedScrollingParent&& x) {obj = std::move(x.obj); return *this;}
    
    bool onStartNestedScroll(const ::android::view::View&, const ::android::view::View&, int32_t) const;
    void onNestedScrollAccepted(const ::android::view::View&, const ::android::view::View&, int32_t) const;
    void onStopNestedScroll(const ::android::view::View&) const;
    void onNestedScroll(const ::android::view::View&, int32_t, int32_t, int32_t, int32_t) const;
    void onNestedPreScroll(const ::android::view::View&, int32_t, int32_t, const std::vector< int32_t>&) const;
    bool onNestedFling(const ::android::view::View&, float, float, bool) const;
    bool onNestedPreFling(const ::android::view::View&, float, float) const;
    int32_t getNestedScrollAxes() const;

};
}
}
}
}


