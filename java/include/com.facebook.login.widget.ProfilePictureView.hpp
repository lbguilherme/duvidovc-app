#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.FrameLayout.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace util { class AttributeSet; } }
namespace com { namespace facebook { namespace login { namespace widget { class ProfilePictureView_OnErrorListener; } } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace login {
namespace widget {
class ProfilePictureView : public virtual ::java::lang::Object,
                           public virtual ::android::widget::FrameLayout {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProfilePictureView(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::FrameLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProfilePictureView(const ::com::facebook::login::widget::ProfilePictureView& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {obj = x.obj;}
    ProfilePictureView(::com::facebook::login::widget::ProfilePictureView&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::login::widget::ProfilePictureView& operator=(const ::com::facebook::login::widget::ProfilePictureView& x) {obj = x.obj; return *this;}
    ::com::facebook::login::widget::ProfilePictureView& operator=(::com::facebook::login::widget::ProfilePictureView&& x) {obj = std::move(x.obj); return *this;}
    
    ProfilePictureView(const ::android::content::Context&);
    ProfilePictureView(const ::android::content::Context&, const ::android::util::AttributeSet&);
    ProfilePictureView(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    int32_t getPresetSize() const ;
    void setPresetSize(int32_t) const ;
    bool isCropped() const ;
    void setCropped(bool) const ;
    ::java::lang::String getProfileId() const ;
    void setProfileId(const ::java::lang::String&) const ;
    ::com::facebook::login::widget::ProfilePictureView_OnErrorListener getOnErrorListener() const ;
    void setOnErrorListener(const ::com::facebook::login::widget::ProfilePictureView_OnErrorListener&) const ;
    void setDefaultProfilePicture(const ::android::graphics::Bitmap&) const ;

};
}
}
}
}

#include "com.facebook.login.widget.ProfilePictureView_OnErrorListener.hpp"

