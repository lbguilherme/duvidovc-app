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
class TextViewCompat_TextViewCompatImpl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextViewCompat_TextViewCompatImpl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextViewCompat_TextViewCompatImpl(const ::android::support::v4::widget::TextViewCompat_TextViewCompatImpl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TextViewCompat_TextViewCompatImpl(::android::support::v4::widget::TextViewCompat_TextViewCompatImpl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::TextViewCompat_TextViewCompatImpl& operator=(const ::android::support::v4::widget::TextViewCompat_TextViewCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::TextViewCompat_TextViewCompatImpl& operator=(::android::support::v4::widget::TextViewCompat_TextViewCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    void setCompoundDrawablesRelative(const ::android::widget::TextView&, const ::android::graphics::drawable::Drawable&, const ::android::graphics::drawable::Drawable&, const ::android::graphics::drawable::Drawable&, const ::android::graphics::drawable::Drawable&) const;
    void setCompoundDrawablesRelativeWithIntrinsicBounds(const ::android::widget::TextView&, const ::android::graphics::drawable::Drawable&, const ::android::graphics::drawable::Drawable&, const ::android::graphics::drawable::Drawable&, const ::android::graphics::drawable::Drawable&) const;
    void setCompoundDrawablesRelativeWithIntrinsicBounds(const ::android::widget::TextView&, int32_t, int32_t, int32_t, int32_t) const;

};
}
}
}
}


