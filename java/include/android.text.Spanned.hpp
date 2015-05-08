#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.CharSequence.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace text {
class Spanned : public virtual ::java::lang::Object,
                public virtual ::java::lang::CharSequence {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Spanned(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::CharSequence(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Spanned(const ::android::text::Spanned& x) : ::java::lang::Object((jobject)0), ::java::lang::CharSequence((jobject)0) {obj = x.obj;}
    Spanned(::android::text::Spanned&& x) : ::java::lang::Object((jobject)0), ::java::lang::CharSequence((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::Spanned& operator=(const ::android::text::Spanned& x) {obj = x.obj; return *this;}
    ::android::text::Spanned& operator=(::android::text::Spanned&& x) {obj = std::move(x.obj); return *this;}
    
    std::vector< ::java::lang::Object> getSpans(int32_t, int32_t, const ::java::lang::Class&) const ;
    int32_t getSpanStart(const ::java::lang::Object&) const ;
    int32_t getSpanEnd(const ::java::lang::Object&) const ;
    int32_t getSpanFlags(const ::java::lang::Object&) const ;
    int32_t nextSpanTransition(int32_t, int32_t, const ::java::lang::Class&) const ;

};
}
}


