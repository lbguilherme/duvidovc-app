#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.CharSequence.hpp"


namespace android {
namespace text {
class GetChars : public virtual ::java::lang::Object,
                 public virtual ::java::lang::CharSequence {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GetChars(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::CharSequence(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GetChars(const ::android::text::GetChars& x) : ::java::lang::Object((jobject)0), ::java::lang::CharSequence((jobject)0) {obj = x.obj;}
    GetChars(::android::text::GetChars&& x) : ::java::lang::Object((jobject)0), ::java::lang::CharSequence((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::GetChars& operator=(const ::android::text::GetChars& x) {obj = x.obj; return *this;}
    ::android::text::GetChars& operator=(::android::text::GetChars&& x) {obj = std::move(x.obj); return *this;}
    
    void getChars(int32_t, int32_t, const std::vector< uint16_t>&, int32_t) const ;

};
}
}


