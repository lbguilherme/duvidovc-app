#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.FrameLayout.hpp"

namespace android { namespace content { class Context; } }
namespace com { namespace facebook { namespace share { namespace internal { class LikeBoxCountView_LikeBoxCountViewCaretPosition; } } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace share {
namespace internal {
class LikeBoxCountView : public virtual ::java::lang::Object,
                         public virtual ::android::widget::FrameLayout {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LikeBoxCountView(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::FrameLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LikeBoxCountView(const ::com::facebook::share::internal::LikeBoxCountView& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {obj = x.obj;}
    LikeBoxCountView(::com::facebook::share::internal::LikeBoxCountView&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::internal::LikeBoxCountView& operator=(const ::com::facebook::share::internal::LikeBoxCountView& x) {obj = x.obj; return *this;}
    ::com::facebook::share::internal::LikeBoxCountView& operator=(::com::facebook::share::internal::LikeBoxCountView&& x) {obj = std::move(x.obj); return *this;}
    
    LikeBoxCountView(const ::android::content::Context&);
    void setText(const ::java::lang::String&) const ;
    void setCaretPosition(const ::com::facebook::share::internal::LikeBoxCountView_LikeBoxCountViewCaretPosition&) const ;

};
}
}
}
}

#include "com.facebook.share.internal.LikeBoxCountView_LikeBoxCountViewCaretPosition.hpp"

