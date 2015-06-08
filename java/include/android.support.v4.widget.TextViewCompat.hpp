#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace widget { class TextView; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class TextViewCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextViewCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextViewCompat(const ::android::support::v4::widget::TextViewCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TextViewCompat(::android::support::v4::widget::TextViewCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::TextViewCompat& operator=(const ::android::support::v4::widget::TextViewCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::TextViewCompat& operator=(::android::support::v4::widget::TextViewCompat&& x) {obj = std::move(x.obj); return *this;}
    
    static void setCompoundDrawablesRelative(const ::android::widget::TextView&, const ::android::graphics::drawable::Drawable&, const ::android::graphics::drawable::Drawable&, const ::android::graphics::drawable::Drawable&, const ::android::graphics::drawable::Drawable&);
    static void setCompoundDrawablesRelativeWithIntrinsicBounds(const ::android::widget::TextView&, const ::android::graphics::drawable::Drawable&, const ::android::graphics::drawable::Drawable&, const ::android::graphics::drawable::Drawable&, const ::android::graphics::drawable::Drawable&);
    static void setCompoundDrawablesRelativeWithIntrinsicBounds(const ::android::widget::TextView&, int32_t, int32_t, int32_t, int32_t);

};
}
}
}
}

#include "android.support.v4.widget.TextViewCompat_BaseTextViewCompatImpl.hpp"
#include "android.support.v4.widget.TextViewCompat_JbMr1TextViewCompatImpl.hpp"
#include "android.support.v4.widget.TextViewCompat_JbMr2TextViewCompatImpl.hpp"
#include "android.support.v4.widget.TextViewCompat_TextViewCompatImpl.hpp"
