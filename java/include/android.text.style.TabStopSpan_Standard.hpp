#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.style.TabStopSpan.hpp"


namespace android {
namespace text {
namespace style {
class TabStopSpan_Standard : public virtual ::java::lang::Object,
                             public virtual ::android::text::style::TabStopSpan {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TabStopSpan_Standard(jobject _obj) : ::java::lang::Object(_obj), ::android::text::style::ParagraphStyle(_obj), ::android::text::style::TabStopSpan(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TabStopSpan_Standard(const ::android::text::style::TabStopSpan_Standard& x) : ::java::lang::Object((jobject)0), ::android::text::style::ParagraphStyle((jobject)0), ::android::text::style::TabStopSpan((jobject)0) {obj = x.obj;}
    TabStopSpan_Standard(::android::text::style::TabStopSpan_Standard&& x) : ::java::lang::Object((jobject)0), ::android::text::style::ParagraphStyle((jobject)0), ::android::text::style::TabStopSpan((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::style::TabStopSpan_Standard& operator=(const ::android::text::style::TabStopSpan_Standard& x) {obj = x.obj; return *this;}
    ::android::text::style::TabStopSpan_Standard& operator=(::android::text::style::TabStopSpan_Standard&& x) {obj = std::move(x.obj); return *this;}
    
    TabStopSpan_Standard(int32_t);
    int32_t getTabStop() const;

};
}
}
}


