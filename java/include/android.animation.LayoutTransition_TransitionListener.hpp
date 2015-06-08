#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace animation { class LayoutTransition; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }

namespace android {
namespace animation {
class LayoutTransition_TransitionListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LayoutTransition_TransitionListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LayoutTransition_TransitionListener(const ::android::animation::LayoutTransition_TransitionListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LayoutTransition_TransitionListener(::android::animation::LayoutTransition_TransitionListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::animation::LayoutTransition_TransitionListener& operator=(const ::android::animation::LayoutTransition_TransitionListener& x) {obj = x.obj; return *this;}
    ::android::animation::LayoutTransition_TransitionListener& operator=(::android::animation::LayoutTransition_TransitionListener&& x) {obj = std::move(x.obj); return *this;}
    
    void startTransition(const ::android::animation::LayoutTransition&, const ::android::view::ViewGroup&, const ::android::view::View&, int32_t) const;
    void endTransition(const ::android::animation::LayoutTransition&, const ::android::view::ViewGroup&, const ::android::view::View&, int32_t) const;

};
}
}


