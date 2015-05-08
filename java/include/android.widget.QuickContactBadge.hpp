#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.View_OnClickListener.hpp"
#include "android.widget.ImageView.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace widget {
class QuickContactBadge : public virtual ::java::lang::Object,
                          public virtual ::android::view::View_OnClickListener,
                          public virtual ::android::widget::ImageView {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit QuickContactBadge(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::View_OnClickListener(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::ImageView(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    QuickContactBadge(const ::android::widget::QuickContactBadge& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::View_OnClickListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::ImageView((jobject)0) {obj = x.obj;}
    QuickContactBadge(::android::widget::QuickContactBadge&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::View_OnClickListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::ImageView((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::QuickContactBadge& operator=(const ::android::widget::QuickContactBadge& x) {obj = x.obj; return *this;}
    ::android::widget::QuickContactBadge& operator=(::android::widget::QuickContactBadge&& x) {obj = std::move(x.obj); return *this;}
    
    QuickContactBadge(const ::android::content::Context&);
    QuickContactBadge(const ::android::content::Context&, const ::android::util::AttributeSet&);
    QuickContactBadge(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    void setMode(int32_t) const ;
    void setImageToDefault() const ;
    void assignContactUri(const ::android::net::Uri&) const ;
    void assignContactFromEmail(const ::java::lang::String&, bool) const ;
    void assignContactFromPhone(const ::java::lang::String&, bool) const ;
    void onClick(const ::android::view::View&) const ;
    void setExcludeMimes(const std::vector< ::java::lang::String>&) const ;

};
}
}


