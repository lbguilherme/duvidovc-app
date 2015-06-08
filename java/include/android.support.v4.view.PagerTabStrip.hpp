#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.PagerTitleStrip.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class MotionEvent; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class PagerTabStrip : public virtual ::java::lang::Object,
                      public virtual ::android::support::v4::view::PagerTitleStrip {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PagerTabStrip(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::support::v4::view::PagerTitleStrip(_obj), ::android::support::v4::view::ViewPager_Decor(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PagerTabStrip(const ::android::support::v4::view::PagerTabStrip& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::support::v4::view::PagerTitleStrip((jobject)0), ::android::support::v4::view::ViewPager_Decor((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj;}
    PagerTabStrip(::android::support::v4::view::PagerTabStrip&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::support::v4::view::PagerTitleStrip((jobject)0), ::android::support::v4::view::ViewPager_Decor((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::PagerTabStrip& operator=(const ::android::support::v4::view::PagerTabStrip& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::PagerTabStrip& operator=(::android::support::v4::view::PagerTabStrip&& x) {obj = std::move(x.obj); return *this;}
    
    PagerTabStrip(const ::android::content::Context&);
    PagerTabStrip(const ::android::content::Context&, const ::android::util::AttributeSet&);
    void setTabIndicatorColor(int32_t) const;
    void setTabIndicatorColorResource(int32_t) const;
    int32_t getTabIndicatorColor() const;
    void setPadding(int32_t, int32_t, int32_t, int32_t) const;
    void setTextSpacing(int32_t) const;
    void setBackgroundDrawable(const ::android::graphics::drawable::Drawable&) const;
    void setBackgroundColor(int32_t) const;
    void setBackgroundResource(int32_t) const;
    void setDrawFullUnderline(bool) const;
    bool getDrawFullUnderline() const;
    bool onTouchEvent(const ::android::view::MotionEvent&) const;

};
}
}
}
}


