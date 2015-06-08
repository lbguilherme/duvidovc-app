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
class ScrollingView : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ScrollingView(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ScrollingView(const ::android::support::v4::view::ScrollingView& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ScrollingView(::android::support::v4::view::ScrollingView&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ScrollingView& operator=(const ::android::support::v4::view::ScrollingView& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ScrollingView& operator=(::android::support::v4::view::ScrollingView&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t computeHorizontalScrollRange() const;
    int32_t computeHorizontalScrollOffset() const;
    int32_t computeHorizontalScrollExtent() const;
    int32_t computeVerticalScrollRange() const;
    int32_t computeVerticalScrollOffset() const;
    int32_t computeVerticalScrollExtent() const;

};
}
}
}
}


