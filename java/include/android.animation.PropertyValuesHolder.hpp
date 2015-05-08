#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"

namespace android { namespace animation { class Keyframe; } }
namespace android { namespace animation { class PropertyValuesHolder; } }
namespace android { namespace animation { class TypeEvaluator; } }
namespace android { namespace util { class Property; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace animation {
class PropertyValuesHolder : public virtual ::java::lang::Object,
                             public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PropertyValuesHolder(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PropertyValuesHolder(const ::android::animation::PropertyValuesHolder& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    PropertyValuesHolder(::android::animation::PropertyValuesHolder&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::animation::PropertyValuesHolder& operator=(const ::android::animation::PropertyValuesHolder& x) {obj = x.obj; return *this;}
    ::android::animation::PropertyValuesHolder& operator=(::android::animation::PropertyValuesHolder&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::animation::PropertyValuesHolder ofInt(const ::java::lang::String&, const std::vector< int32_t>&);
    static ::android::animation::PropertyValuesHolder ofInt(const ::android::util::Property&, const std::vector< int32_t>&);
    static ::android::animation::PropertyValuesHolder ofFloat(const ::java::lang::String&, const std::vector< float>&);
    static ::android::animation::PropertyValuesHolder ofFloat(const ::android::util::Property&, const std::vector< float>&);
    static ::android::animation::PropertyValuesHolder ofObject(const ::java::lang::String&, const ::android::animation::TypeEvaluator&, const std::vector< ::java::lang::Object>&);
    static ::android::animation::PropertyValuesHolder ofObject(const ::android::util::Property&, const ::android::animation::TypeEvaluator&, const std::vector< ::java::lang::Object>&);
    static ::android::animation::PropertyValuesHolder ofKeyframe(const ::java::lang::String&, const std::vector< ::android::animation::Keyframe>&);
    static ::android::animation::PropertyValuesHolder ofKeyframe(const ::android::util::Property&, const std::vector< ::android::animation::Keyframe>&);
    void setIntValues(const std::vector< int32_t>&) const ;
    void setFloatValues(const std::vector< float>&) const ;
    void setKeyframes(const std::vector< ::android::animation::Keyframe>&) const ;
    void setObjectValues(const std::vector< ::java::lang::Object>&) const ;
    ::android::animation::PropertyValuesHolder clone() const ;
    void setEvaluator(const ::android::animation::TypeEvaluator&) const ;
    void setPropertyName(const ::java::lang::String&) const ;
    void setProperty(const ::android::util::Property&) const ;
    ::java::lang::String getPropertyName() const ;
    ::java::lang::String toString() const ;

};
}
}


