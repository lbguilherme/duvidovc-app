#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.View.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class Canvas; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewStub_OnInflateListener; } }

namespace android {
namespace view {
class ViewStub : public virtual ::java::lang::Object,
                 public virtual ::android::view::View {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewStub(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewStub(const ::android::view::ViewStub& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj;}
    ViewStub(::android::view::ViewStub&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ViewStub& operator=(const ::android::view::ViewStub& x) {obj = x.obj; return *this;}
    ::android::view::ViewStub& operator=(::android::view::ViewStub&& x) {obj = std::move(x.obj); return *this;}
    
    ViewStub(const ::android::content::Context&);
    ViewStub(const ::android::content::Context&, int32_t);
    ViewStub(const ::android::content::Context&, const ::android::util::AttributeSet&);
    ViewStub(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    int32_t getInflatedId() const ;
    void setInflatedId(int32_t) const ;
    int32_t getLayoutResource() const ;
    void setLayoutResource(int32_t) const ;
    void draw(const ::android::graphics::Canvas&) const ;
    void setVisibility(int32_t) const ;
    ::android::view::View inflate() const ;
    void setOnInflateListener(const ::android::view::ViewStub_OnInflateListener&) const ;

};
}
}

#include "android.view.ViewStub_OnInflateListener.hpp"

