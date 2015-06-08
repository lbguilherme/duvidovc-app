#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.animation.ValueAnimator.hpp"

namespace android { namespace animation { class ObjectAnimator; } }
namespace android { namespace animation { class PropertyValuesHolder; } }
namespace android { namespace animation { class TypeEvaluator; } }
namespace android { namespace util { class Property; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace animation {
class ObjectAnimator : public virtual ::java::lang::Object,
                       public virtual ::android::animation::ValueAnimator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ObjectAnimator(jobject _obj) : ::java::lang::Object(_obj), ::android::animation::Animator(_obj), ::android::animation::ValueAnimator(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ObjectAnimator(const ::android::animation::ObjectAnimator& x) : ::java::lang::Object((jobject)0), ::android::animation::Animator((jobject)0), ::android::animation::ValueAnimator((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    ObjectAnimator(::android::animation::ObjectAnimator&& x) : ::java::lang::Object((jobject)0), ::android::animation::Animator((jobject)0), ::android::animation::ValueAnimator((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::animation::ObjectAnimator& operator=(const ::android::animation::ObjectAnimator& x) {obj = x.obj; return *this;}
    ::android::animation::ObjectAnimator& operator=(::android::animation::ObjectAnimator&& x) {obj = std::move(x.obj); return *this;}
    
    ObjectAnimator();
    void setPropertyName(const ::java::lang::String&) const;
    void setProperty(const ::android::util::Property&) const;
    ::java::lang::String getPropertyName() const;
    static ::android::animation::ObjectAnimator ofInt(const ::java::lang::Object&, const ::java::lang::String&, const std::vector< int32_t>&);
    static ::android::animation::ObjectAnimator ofInt(const ::java::lang::Object&, const ::android::util::Property&, const std::vector< int32_t>&);
    static ::android::animation::ObjectAnimator ofFloat(const ::java::lang::Object&, const ::java::lang::String&, const std::vector< float>&);
    static ::android::animation::ObjectAnimator ofFloat(const ::java::lang::Object&, const ::android::util::Property&, const std::vector< float>&);
    static ::android::animation::ObjectAnimator ofObject(const ::java::lang::Object&, const ::java::lang::String&, const ::android::animation::TypeEvaluator&, const std::vector< ::java::lang::Object>&);
    static ::android::animation::ObjectAnimator ofObject(const ::java::lang::Object&, const ::android::util::Property&, const ::android::animation::TypeEvaluator&, const std::vector< ::java::lang::Object>&);
    static ::android::animation::ObjectAnimator ofPropertyValuesHolder(const ::java::lang::Object&, const std::vector< ::android::animation::PropertyValuesHolder>&);
    void setIntValues(const std::vector< int32_t>&) const;
    void setFloatValues(const std::vector< float>&) const;
    void setObjectValues(const std::vector< ::java::lang::Object>&) const;
    void start() const;
    ::android::animation::ObjectAnimator setDuration(int64_t) const;
    ::java::lang::Object getTarget() const;
    void setTarget(const ::java::lang::Object&) const;
    void setupStartValues() const;
    void setupEndValues() const;
    ::android::animation::ObjectAnimator clone() const;
    ::java::lang::String toString() const;

};
}
}


