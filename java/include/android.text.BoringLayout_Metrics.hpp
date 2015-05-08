#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.Paint_FontMetricsInt.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace text {
class BoringLayout_Metrics : public virtual ::java::lang::Object,
                             public virtual ::android::graphics::Paint_FontMetricsInt {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BoringLayout_Metrics(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::Paint_FontMetricsInt(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BoringLayout_Metrics(const ::android::text::BoringLayout_Metrics& x) : ::java::lang::Object((jobject)0), ::android::graphics::Paint_FontMetricsInt((jobject)0) {obj = x.obj;}
    BoringLayout_Metrics(::android::text::BoringLayout_Metrics&& x) : ::java::lang::Object((jobject)0), ::android::graphics::Paint_FontMetricsInt((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::BoringLayout_Metrics& operator=(const ::android::text::BoringLayout_Metrics& x) {obj = x.obj; return *this;}
    ::android::text::BoringLayout_Metrics& operator=(::android::text::BoringLayout_Metrics&& x) {obj = std::move(x.obj); return *this;}
    
    BoringLayout_Metrics();
    ::java::lang::String toString() const ;

};
}
}


