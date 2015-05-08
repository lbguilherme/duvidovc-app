#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { namespace res { class ColorStateList; } } }
namespace android { namespace content { namespace res { class Resources; } } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace util { class TypedValue; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
namespace res {
class TypedArray : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TypedArray(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TypedArray(const ::android::content::res::TypedArray& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TypedArray(::android::content::res::TypedArray&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::res::TypedArray& operator=(const ::android::content::res::TypedArray& x) {obj = x.obj; return *this;}
    ::android::content::res::TypedArray& operator=(::android::content::res::TypedArray&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t length() const ;
    int32_t getIndexCount() const ;
    int32_t getIndex(int32_t) const ;
    ::android::content::res::Resources getResources() const ;
    ::java::lang::CharSequence getText(int32_t) const ;
    ::java::lang::String getString(int32_t) const ;
    ::java::lang::String getNonResourceString(int32_t) const ;
    bool getBoolean(int32_t, bool) const ;
    int32_t getInt(int32_t, int32_t) const ;
    float getFloat(int32_t, float) const ;
    int32_t getColor(int32_t, int32_t) const ;
    ::android::content::res::ColorStateList getColorStateList(int32_t) const ;
    int32_t getInteger(int32_t, int32_t) const ;
    float getDimension(int32_t, float) const ;
    int32_t getDimensionPixelOffset(int32_t, int32_t) const ;
    int32_t getDimensionPixelSize(int32_t, int32_t) const ;
    int32_t getLayoutDimension(int32_t, const ::java::lang::String&) const ;
    int32_t getLayoutDimension(int32_t, int32_t) const ;
    float getFraction(int32_t, int32_t, int32_t, float) const ;
    int32_t getResourceId(int32_t, int32_t) const ;
    ::android::graphics::drawable::Drawable getDrawable(int32_t) const ;
    std::vector< ::java::lang::CharSequence> getTextArray(int32_t) const ;
    bool getValue(int32_t, const ::android::util::TypedValue&) const ;
    bool hasValue(int32_t) const ;
    ::android::util::TypedValue peekValue(int32_t) const ;
    ::java::lang::String getPositionDescription() const ;
    void recycle() const ;
    ::java::lang::String toString() const ;

};
}
}
}


