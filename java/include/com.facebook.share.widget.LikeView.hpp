#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.FrameLayout.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace support { namespace v4 { namespace app { class Fragment; } } } }
namespace android { namespace util { class AttributeSet; } }
namespace com { namespace facebook { namespace share { namespace widget { class LikeView_AuxiliaryViewPosition; } } } }
namespace com { namespace facebook { namespace share { namespace widget { class LikeView_HorizontalAlignment; } } } }
namespace com { namespace facebook { namespace share { namespace widget { class LikeView_ObjectType; } } } }
namespace com { namespace facebook { namespace share { namespace widget { class LikeView_OnErrorListener; } } } }
namespace com { namespace facebook { namespace share { namespace widget { class LikeView_Style; } } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace share {
namespace widget {
class LikeView : public virtual ::java::lang::Object,
                 public virtual ::android::widget::FrameLayout {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LikeView(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::FrameLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LikeView(const ::com::facebook::share::widget::LikeView& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {obj = x.obj;}
    LikeView(::com::facebook::share::widget::LikeView&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::widget::LikeView& operator=(const ::com::facebook::share::widget::LikeView& x) {obj = x.obj; return *this;}
    ::com::facebook::share::widget::LikeView& operator=(::com::facebook::share::widget::LikeView&& x) {obj = std::move(x.obj); return *this;}
    
    LikeView(const ::android::content::Context&);
    LikeView(const ::android::content::Context&, const ::android::util::AttributeSet&);
    void setObjectIdAndType(const ::java::lang::String&, const ::com::facebook::share::widget::LikeView_ObjectType&) const ;
    void setLikeViewStyle(const ::com::facebook::share::widget::LikeView_Style&) const ;
    void setAuxiliaryViewPosition(const ::com::facebook::share::widget::LikeView_AuxiliaryViewPosition&) const ;
    void setHorizontalAlignment(const ::com::facebook::share::widget::LikeView_HorizontalAlignment&) const ;
    void setForegroundColor(int32_t) const ;
    void setOnErrorListener(const ::com::facebook::share::widget::LikeView_OnErrorListener&) const ;
    ::com::facebook::share::widget::LikeView_OnErrorListener getOnErrorListener() const ;
    void setFragment(const ::android::support::v4::app::Fragment&) const ;
    void setEnabled(bool) const ;

};
}
}
}
}

#include "com.facebook.share.widget.LikeView_AuxiliaryViewPosition.hpp"
#include "com.facebook.share.widget.LikeView_HorizontalAlignment.hpp"
#include "com.facebook.share.widget.LikeView_LikeActionControllerCreationCallback.hpp"
#include "com.facebook.share.widget.LikeView_LikeControllerBroadcastReceiver.hpp"
#include "com.facebook.share.widget.LikeView_ObjectType.hpp"
#include "com.facebook.share.widget.LikeView_OnErrorListener.hpp"
#include "com.facebook.share.widget.LikeView_Style.hpp"

