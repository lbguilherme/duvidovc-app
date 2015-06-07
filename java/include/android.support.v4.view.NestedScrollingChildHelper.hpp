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
class NestedScrollingChildHelper : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NestedScrollingChildHelper(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NestedScrollingChildHelper(const ::android::support::v4::view::NestedScrollingChildHelper& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NestedScrollingChildHelper(::android::support::v4::view::NestedScrollingChildHelper&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::NestedScrollingChildHelper& operator=(const ::android::support::v4::view::NestedScrollingChildHelper& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::NestedScrollingChildHelper& operator=(::android::support::v4::view::NestedScrollingChildHelper&& x) {obj = std::move(x.obj); return *this;}
    
    NestedScrollingChildHelper(const ::android::view::View&);
    void setNestedScrollingEnabled(bool) const ;
    bool isNestedScrollingEnabled() const ;
    bool hasNestedScrollingParent() const ;
    bool startNestedScroll(int32_t) const ;
    void stopNestedScroll() const ;
    bool dispatchNestedScroll(int32_t, int32_t, int32_t, int32_t, const std::vector< int32_t>&) const ;
    bool dispatchNestedPreScroll(int32_t, int32_t, const std::vector< int32_t>&, const std::vector< int32_t>&) const ;
    bool dispatchNestedFling(float, float, bool) const ;
    bool dispatchNestedPreFling(float, float) const ;
    void onDetachedFromWindow() const ;
    void onStopNestedScroll(const ::android::view::View&) const ;

};
}
}
}
}


