#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Rect; } }
namespace android { namespace view { class FocusFinder; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }

namespace android {
namespace view {
class FocusFinder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FocusFinder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FocusFinder(const ::android::view::FocusFinder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FocusFinder(::android::view::FocusFinder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::FocusFinder& operator=(const ::android::view::FocusFinder& x) {obj = x.obj; return *this;}
    ::android::view::FocusFinder& operator=(::android::view::FocusFinder&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::view::FocusFinder getInstance();
    ::android::view::View findNextFocus(const ::android::view::ViewGroup&, const ::android::view::View&, int32_t) const;
    ::android::view::View findNextFocusFromRect(const ::android::view::ViewGroup&, const ::android::graphics::Rect&, int32_t) const;
    ::android::view::View findNearestTouchable(const ::android::view::ViewGroup&, int32_t, int32_t, int32_t, const std::vector< int32_t>&) const;

};
}
}


