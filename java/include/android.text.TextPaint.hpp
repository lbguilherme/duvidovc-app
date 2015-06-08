#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.Paint.hpp"

namespace android { namespace graphics { class Paint; } }
namespace android { namespace text { class TextPaint; } }

namespace android {
namespace text {
class TextPaint : public virtual ::java::lang::Object,
                  public virtual ::android::graphics::Paint {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextPaint(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::Paint(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextPaint(const ::android::text::TextPaint& x) : ::java::lang::Object((jobject)0), ::android::graphics::Paint((jobject)0) {obj = x.obj;}
    TextPaint(::android::text::TextPaint&& x) : ::java::lang::Object((jobject)0), ::android::graphics::Paint((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::TextPaint& operator=(const ::android::text::TextPaint& x) {obj = x.obj; return *this;}
    ::android::text::TextPaint& operator=(::android::text::TextPaint&& x) {obj = std::move(x.obj); return *this;}
    
    TextPaint();
    TextPaint(int32_t);
    TextPaint(const ::android::graphics::Paint&);
    void set(const ::android::text::TextPaint&) const;

};
}
}


