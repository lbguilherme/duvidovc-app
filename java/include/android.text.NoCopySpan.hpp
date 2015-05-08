#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace text {
class NoCopySpan : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NoCopySpan(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NoCopySpan(const ::android::text::NoCopySpan& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NoCopySpan(::android::text::NoCopySpan&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::NoCopySpan& operator=(const ::android::text::NoCopySpan& x) {obj = x.obj; return *this;}
    ::android::text::NoCopySpan& operator=(::android::text::NoCopySpan&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}

#include "android.text.NoCopySpan_Concrete.hpp"

