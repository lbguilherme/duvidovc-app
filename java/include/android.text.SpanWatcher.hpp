#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.NoCopySpan.hpp"

namespace android { namespace text { class Spannable; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace text {
class SpanWatcher : public virtual ::java::lang::Object,
                    public virtual ::android::text::NoCopySpan {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SpanWatcher(jobject _obj) : ::java::lang::Object(_obj), ::android::text::NoCopySpan(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SpanWatcher(const ::android::text::SpanWatcher& x) : ::java::lang::Object((jobject)0), ::android::text::NoCopySpan((jobject)0) {obj = x.obj;}
    SpanWatcher(::android::text::SpanWatcher&& x) : ::java::lang::Object((jobject)0), ::android::text::NoCopySpan((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::SpanWatcher& operator=(const ::android::text::SpanWatcher& x) {obj = x.obj; return *this;}
    ::android::text::SpanWatcher& operator=(::android::text::SpanWatcher&& x) {obj = std::move(x.obj); return *this;}
    
    void onSpanAdded(const ::android::text::Spannable&, const ::java::lang::Object&, int32_t, int32_t) const ;
    void onSpanRemoved(const ::android::text::Spannable&, const ::java::lang::Object&, int32_t, int32_t) const ;
    void onSpanChanged(const ::android::text::Spannable&, const ::java::lang::Object&, int32_t, int32_t, int32_t, int32_t) const ;

};
}
}


