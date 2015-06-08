#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace animation { class Animator; } }
namespace android { namespace animation { class LayoutTransition_TransitionListener; } }
namespace android { namespace animation { class TimeInterpolator; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }
namespace java { namespace util { class List; } }

namespace android {
namespace animation {
class LayoutTransition : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LayoutTransition(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LayoutTransition(const ::android::animation::LayoutTransition& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LayoutTransition(::android::animation::LayoutTransition&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::animation::LayoutTransition& operator=(const ::android::animation::LayoutTransition& x) {obj = x.obj; return *this;}
    ::android::animation::LayoutTransition& operator=(::android::animation::LayoutTransition&& x) {obj = std::move(x.obj); return *this;}
    
    LayoutTransition();
    void setDuration(int64_t) const;
    void setStartDelay(int32_t, int64_t) const;
    int64_t getStartDelay(int32_t) const;
    void setDuration(int32_t, int64_t) const;
    int64_t getDuration(int32_t) const;
    void setStagger(int32_t, int64_t) const;
    int64_t getStagger(int32_t) const;
    void setInterpolator(int32_t, const ::android::animation::TimeInterpolator&) const;
    ::android::animation::TimeInterpolator getInterpolator(int32_t) const;
    void setAnimator(int32_t, const ::android::animation::Animator&) const;
    ::android::animation::Animator getAnimator(int32_t) const;
    void setAnimateParentHierarchy(bool) const;
    bool isChangingLayout() const;
    bool isRunning() const;
    void addChild(const ::android::view::ViewGroup&, const ::android::view::View&) const;
    void showChild(const ::android::view::ViewGroup&, const ::android::view::View&) const;
    void removeChild(const ::android::view::ViewGroup&, const ::android::view::View&) const;
    void hideChild(const ::android::view::ViewGroup&, const ::android::view::View&) const;
    void addTransitionListener(const ::android::animation::LayoutTransition_TransitionListener&) const;
    void removeTransitionListener(const ::android::animation::LayoutTransition_TransitionListener&) const;
    ::java::util::List getTransitionListeners() const;

};
}
}

#include "android.animation.LayoutTransition_TransitionListener.hpp"

