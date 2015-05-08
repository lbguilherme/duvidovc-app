#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace util {
class AttributeSet : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AttributeSet(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AttributeSet(const ::android::util::AttributeSet& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AttributeSet(::android::util::AttributeSet&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::AttributeSet& operator=(const ::android::util::AttributeSet& x) {obj = x.obj; return *this;}
    ::android::util::AttributeSet& operator=(::android::util::AttributeSet&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getAttributeCount() const ;
    ::java::lang::String getAttributeName(int32_t) const ;
    ::java::lang::String getAttributeValue(int32_t) const ;
    ::java::lang::String getAttributeValue(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::java::lang::String getPositionDescription() const ;
    int32_t getAttributeNameResource(int32_t) const ;
    int32_t getAttributeListValue(const ::java::lang::String&, const ::java::lang::String&, const std::vector< ::java::lang::String>&, int32_t) const ;
    bool getAttributeBooleanValue(const ::java::lang::String&, const ::java::lang::String&, bool) const ;
    int32_t getAttributeResourceValue(const ::java::lang::String&, const ::java::lang::String&, int32_t) const ;
    int32_t getAttributeIntValue(const ::java::lang::String&, const ::java::lang::String&, int32_t) const ;
    int32_t getAttributeUnsignedIntValue(const ::java::lang::String&, const ::java::lang::String&, int32_t) const ;
    float getAttributeFloatValue(const ::java::lang::String&, const ::java::lang::String&, float) const ;
    int32_t getAttributeListValue(int32_t, const std::vector< ::java::lang::String>&, int32_t) const ;
    bool getAttributeBooleanValue(int32_t, bool) const ;
    int32_t getAttributeResourceValue(int32_t, int32_t) const ;
    int32_t getAttributeIntValue(int32_t, int32_t) const ;
    int32_t getAttributeUnsignedIntValue(int32_t, int32_t) const ;
    float getAttributeFloatValue(int32_t, float) const ;
    ::java::lang::String getIdAttribute() const ;
    ::java::lang::String getClassAttribute() const ;
    int32_t getIdAttributeResourceValue(int32_t) const ;
    int32_t getStyleAttribute() const ;

};
}
}


