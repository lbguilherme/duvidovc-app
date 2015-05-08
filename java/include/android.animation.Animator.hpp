#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"

namespace android { namespace animation { class Animator; } }
namespace android { namespace animation { class Animator_AnimatorListener; } }
namespace android { namespace animation { class TimeInterpolator; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace util { class ArrayList; } }

namespace android {
namespace animation {
class Animator : public virtual ::java::lang::Object,
                 public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Animator(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Animator(const ::android::animation::Animator& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    Animator(::android::animation::Animator&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::animation::Animator& operator=(const ::android::animation::Animator& x) {obj = x.obj; return *this;}
    ::android::animation::Animator& operator=(::android::animation::Animator&& x) {obj = std::move(x.obj); return *this;}
    
    Animator();
    void start() const ;
    void cancel() const ;
    void end() const ;
    int64_t getStartDelay() const ;
    void setStartDelay(int64_t) const ;
    ::android::animation::Animator setDuration(int64_t) const ;
    int64_t getDuration() const ;
    void setInterpolator(const ::android::animation::TimeInterpolator&) const ;
    bool isRunning() const ;
    bool isStarted() const ;
    void addListener(const ::android::animation::Animator_AnimatorListener&) const ;
    void removeListener(const ::android::animation::Animator_AnimatorListener&) const ;
    ::java::util::ArrayList getListeners() const ;
    void removeAllListeners() const ;
    ::android::animation::Animator clone() const ;
    void setupStartValues() const ;
    void setupEndValues() const ;
    void setTarget(const ::java::lang::Object&) const ;

};
}
}

#include "android.animation.Animator_AnimatorListener.hpp"

