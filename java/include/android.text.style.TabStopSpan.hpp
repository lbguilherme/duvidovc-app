#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.style.ParagraphStyle.hpp"


namespace android {
namespace text {
namespace style {
class TabStopSpan : public virtual ::java::lang::Object,
                    public virtual ::android::text::style::ParagraphStyle {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TabStopSpan(jobject _obj) : ::java::lang::Object(_obj), ::android::text::style::ParagraphStyle(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TabStopSpan(const ::android::text::style::TabStopSpan& x) : ::java::lang::Object((jobject)0), ::android::text::style::ParagraphStyle((jobject)0) {obj = x.obj;}
    TabStopSpan(::android::text::style::TabStopSpan&& x) : ::java::lang::Object((jobject)0), ::android::text::style::ParagraphStyle((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::style::TabStopSpan& operator=(const ::android::text::style::TabStopSpan& x) {obj = x.obj; return *this;}
    ::android::text::style::TabStopSpan& operator=(::android::text::style::TabStopSpan&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getTabStop() const ;

};
}
}
}

#include "android.text.style.TabStopSpan_Standard.hpp"

