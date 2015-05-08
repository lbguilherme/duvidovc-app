#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.style.DynamicDrawableSpan.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace net { class Uri; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace text {
namespace style {
class ImageSpan : public virtual ::java::lang::Object,
                  public virtual ::android::text::style::DynamicDrawableSpan {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ImageSpan(jobject _obj) : ::java::lang::Object(_obj), ::android::text::style::CharacterStyle(_obj), ::android::text::style::DynamicDrawableSpan(_obj), ::android::text::style::MetricAffectingSpan(_obj), ::android::text::style::ReplacementSpan(_obj), ::android::text::style::UpdateAppearance(_obj), ::android::text::style::UpdateLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ImageSpan(const ::android::text::style::ImageSpan& x) : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::DynamicDrawableSpan((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::ReplacementSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {obj = x.obj;}
    ImageSpan(::android::text::style::ImageSpan&& x) : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::DynamicDrawableSpan((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::ReplacementSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::style::ImageSpan& operator=(const ::android::text::style::ImageSpan& x) {obj = x.obj; return *this;}
    ::android::text::style::ImageSpan& operator=(::android::text::style::ImageSpan&& x) {obj = std::move(x.obj); return *this;}
    
    ImageSpan(const ::android::graphics::Bitmap&);
    ImageSpan(const ::android::graphics::Bitmap&, int32_t);
    ImageSpan(const ::android::content::Context&, const ::android::graphics::Bitmap&);
    ImageSpan(const ::android::content::Context&, const ::android::graphics::Bitmap&, int32_t);
    ImageSpan(const ::android::graphics::drawable::Drawable&);
    ImageSpan(const ::android::graphics::drawable::Drawable&, int32_t);
    ImageSpan(const ::android::graphics::drawable::Drawable&, const ::java::lang::String&);
    ImageSpan(const ::android::graphics::drawable::Drawable&, const ::java::lang::String&, int32_t);
    ImageSpan(const ::android::content::Context&, const ::android::net::Uri&);
    ImageSpan(const ::android::content::Context&, const ::android::net::Uri&, int32_t);
    ImageSpan(const ::android::content::Context&, int32_t);
    ImageSpan(const ::android::content::Context&, int32_t, int32_t);
    ::android::graphics::drawable::Drawable getDrawable() const ;
    ::java::lang::String getSource() const ;

};
}
}
}


