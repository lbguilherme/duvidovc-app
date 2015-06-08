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
namespace support {
namespace v4 {
namespace view {
class NestedScrollingParentHelper : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NestedScrollingParentHelper(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NestedScrollingParentHelper(const ::android::support::v4::view::NestedScrollingParentHelper& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NestedScrollingParentHelper(::android::support::v4::view::NestedScrollingParentHelper&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::NestedScrollingParentHelper& operator=(const ::android::support::v4::view::NestedScrollingParentHelper& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::NestedScrollingParentHelper& operator=(::android::support::v4::view::NestedScrollingParentHelper&& x) {obj = std::move(x.obj); return *this;}
    
    NestedScrollingParentHelper(const ::android::view::ViewGroup&);
    void onNestedScrollAccepted(const ::android::view::View&, const ::android::view::View&, int32_t) const;
    int32_t getNestedScrollAxes() const;
    void onStopNestedScroll(const ::android::view::View&) const;

};
}
}
}
}


