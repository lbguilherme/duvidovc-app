#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace text {
class SpannableStringInternal : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SpannableStringInternal(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SpannableStringInternal(const ::android::text::SpannableStringInternal& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SpannableStringInternal(::android::text::SpannableStringInternal&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::SpannableStringInternal& operator=(const ::android::text::SpannableStringInternal& x) {obj = x.obj; return *this;}
    ::android::text::SpannableStringInternal& operator=(::android::text::SpannableStringInternal&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t length() const ;
    uint16_t charAt(int32_t) const ;
    ::java::lang::String toString() const ;
    void getChars(int32_t, int32_t, const std::vector< uint16_t>&, int32_t) const ;
    int32_t getSpanStart(const ::java::lang::Object&) const ;
    int32_t getSpanEnd(const ::java::lang::Object&) const ;
    int32_t getSpanFlags(const ::java::lang::Object&) const ;
    std::vector< ::java::lang::Object> getSpans(int32_t, int32_t, const ::java::lang::Class&) const ;
    int32_t nextSpanTransition(int32_t, int32_t, const ::java::lang::Class&) const ;

};
}
}


