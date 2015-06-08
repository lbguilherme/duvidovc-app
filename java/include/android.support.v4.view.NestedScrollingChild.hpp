#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace support {
namespace v4 {
namespace view {
class NestedScrollingChild : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NestedScrollingChild(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NestedScrollingChild(const ::android::support::v4::view::NestedScrollingChild& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NestedScrollingChild(::android::support::v4::view::NestedScrollingChild&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::NestedScrollingChild& operator=(const ::android::support::v4::view::NestedScrollingChild& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::NestedScrollingChild& operator=(::android::support::v4::view::NestedScrollingChild&& x) {obj = std::move(x.obj); return *this;}
    
    void setNestedScrollingEnabled(bool) const;
    bool isNestedScrollingEnabled() const;
    bool startNestedScroll(int32_t) const;
    void stopNestedScroll() const;
    bool hasNestedScrollingParent() const;
    bool dispatchNestedScroll(int32_t, int32_t, int32_t, int32_t, const std::vector< int32_t>&) const;
    bool dispatchNestedPreScroll(int32_t, int32_t, const std::vector< int32_t>&, const std::vector< int32_t>&) const;
    bool dispatchNestedFling(float, float, bool) const;
    bool dispatchNestedPreFling(float, float) const;

};
}
}
}
}


