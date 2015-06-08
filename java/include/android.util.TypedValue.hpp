#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace util { class DisplayMetrics; } }
namespace android { namespace util { class TypedValue; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace util {
class TypedValue : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TypedValue(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TypedValue(const ::android::util::TypedValue& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TypedValue(::android::util::TypedValue&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::TypedValue& operator=(const ::android::util::TypedValue& x) {obj = x.obj; return *this;}
    ::android::util::TypedValue& operator=(::android::util::TypedValue&& x) {obj = std::move(x.obj); return *this;}
    
    TypedValue();
    float getFloat() const;
    static float complexToFloat(int32_t);
    static float complexToDimension(int32_t, const ::android::util::DisplayMetrics&);
    static int32_t complexToDimensionPixelOffset(int32_t, const ::android::util::DisplayMetrics&);
    static int32_t complexToDimensionPixelSize(int32_t, const ::android::util::DisplayMetrics&);
    static float complexToDimensionNoisy(int32_t, const ::android::util::DisplayMetrics&);
    static float applyDimension(int32_t, float, const ::android::util::DisplayMetrics&);
    float getDimension(const ::android::util::DisplayMetrics&) const;
    static float complexToFraction(int32_t, float, float);
    float getFraction(float, float) const;
    ::java::lang::CharSequence coerceToString() const;
    static ::java::lang::String coerceToString(int32_t, int32_t);
    void setTo(const ::android::util::TypedValue&) const;
    ::java::lang::String toString() const;

};
}
}


