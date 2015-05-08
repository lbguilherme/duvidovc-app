#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"

namespace android { namespace animation { class Keyframe; } }
namespace android { namespace animation { class TimeInterpolator; } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace animation {
class Keyframe : public virtual ::java::lang::Object,
                 public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Keyframe(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Keyframe(const ::android::animation::Keyframe& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    Keyframe(::android::animation::Keyframe&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::animation::Keyframe& operator=(const ::android::animation::Keyframe& x) {obj = x.obj; return *this;}
    ::android::animation::Keyframe& operator=(::android::animation::Keyframe&& x) {obj = std::move(x.obj); return *this;}
    
    Keyframe();
    static ::android::animation::Keyframe ofInt(float, int32_t);
    static ::android::animation::Keyframe ofInt(float);
    static ::android::animation::Keyframe ofFloat(float, float);
    static ::android::animation::Keyframe ofFloat(float);
    static ::android::animation::Keyframe ofObject(float, const ::java::lang::Object&);
    static ::android::animation::Keyframe ofObject(float);
    bool hasValue() const ;
    ::java::lang::Object getValue() const ;
    void setValue(const ::java::lang::Object&) const ;
    float getFraction() const ;
    void setFraction(float) const ;
    ::android::animation::TimeInterpolator getInterpolator() const ;
    void setInterpolator(const ::android::animation::TimeInterpolator&) const ;
    ::java::lang::Class getType() const ;
    ::android::animation::Keyframe clone() const ;

};
}
}


