#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.NoCopySpan.hpp"


namespace android {
namespace text {
class NoCopySpan_Concrete : public virtual ::java::lang::Object,
                            public virtual ::android::text::NoCopySpan {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NoCopySpan_Concrete(jobject _obj) : ::java::lang::Object(_obj), ::android::text::NoCopySpan(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NoCopySpan_Concrete(const ::android::text::NoCopySpan_Concrete& x) : ::java::lang::Object((jobject)0), ::android::text::NoCopySpan((jobject)0) {obj = x.obj;}
    NoCopySpan_Concrete(::android::text::NoCopySpan_Concrete&& x) : ::java::lang::Object((jobject)0), ::android::text::NoCopySpan((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::NoCopySpan_Concrete& operator=(const ::android::text::NoCopySpan_Concrete& x) {obj = x.obj; return *this;}
    ::android::text::NoCopySpan_Concrete& operator=(::android::text::NoCopySpan_Concrete&& x) {obj = std::move(x.obj); return *this;}
    
    NoCopySpan_Concrete();

};
}
}


