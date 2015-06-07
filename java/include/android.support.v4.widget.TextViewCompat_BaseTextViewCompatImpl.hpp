#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.widget.TextViewCompat_TextViewCompatImpl.hpp"

namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace widget { class TextView; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class TextViewCompat_BaseTextViewCompatImpl : public virtual ::java::lang::Object,
                                              public virtual ::android::support::v4::widget::TextViewCompat_TextViewCompatImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextViewCompat_BaseTextViewCompatImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::widget::TextViewCompat_TextViewCompatImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextViewCompat_BaseTextViewCompatImpl(const ::android::support::v4::widget::TextViewCompat_BaseTextViewCompatImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::TextViewCompat_TextViewCompatImpl((jobject)0) {obj = x.obj;}
    TextViewCompat_BaseTextViewCompatImpl(::android::support::v4::widget::TextViewCompat_BaseTextViewCompatImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::TextViewCompat_TextViewCompatImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::TextViewCompat_BaseTextViewCompatImpl& operator=(const ::android::support::v4::widget::TextViewCompat_BaseTextViewCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::TextViewCompat_BaseTextViewCompatImpl& operator=(::android::support::v4::widget::TextViewCompat_BaseTextViewCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    void setCompoundDrawablesRelative(const ::android::widget::TextView&, const ::android::graphics::drawable::Drawable&, const ::android::graphics::drawable::Drawable&, const ::android::graphics::drawable::Drawable&, const ::android::graphics::drawable::Drawable&) const ;
    void setCompoundDrawablesRelativeWithIntrinsicBounds(const ::android::widget::TextView&, const ::android::graphics::drawable::Drawable&, const ::android::graphics::drawable::Drawable&, const ::android::graphics::drawable::Drawable&, const ::android::graphics::drawable::Drawable&) const ;
    void setCompoundDrawablesRelativeWithIntrinsicBounds(const ::android::widget::TextView&, int32_t, int32_t, int32_t, int32_t) const ;

};
}
}
}
}


