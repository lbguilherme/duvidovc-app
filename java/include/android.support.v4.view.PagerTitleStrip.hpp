#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.ViewPager_Decor.hpp"
#include "android.view.ViewGroup.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class PagerTitleStrip : public virtual ::java::lang::Object,
                        public virtual ::android::support::v4::view::ViewPager_Decor,
                        public virtual ::android::view::ViewGroup {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PagerTitleStrip(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::support::v4::view::ViewPager_Decor(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PagerTitleStrip(const ::android::support::v4::view::PagerTitleStrip& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::support::v4::view::ViewPager_Decor((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj;}
    PagerTitleStrip(::android::support::v4::view::PagerTitleStrip&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::support::v4::view::ViewPager_Decor((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::PagerTitleStrip& operator=(const ::android::support::v4::view::PagerTitleStrip& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::PagerTitleStrip& operator=(::android::support::v4::view::PagerTitleStrip&& x) {obj = std::move(x.obj); return *this;}
    
    PagerTitleStrip(const ::android::content::Context&);
    PagerTitleStrip(const ::android::content::Context&, const ::android::util::AttributeSet&);
    void setTextSpacing(int32_t) const;
    int32_t getTextSpacing() const;
    void setNonPrimaryAlpha(float) const;
    void setTextColor(int32_t) const;
    void setTextSize(int32_t, float) const;
    void setGravity(int32_t) const;
    void requestLayout() const;

};
}
}
}
}

#include "android.support.v4.view.PagerTitleStrip_PageListener.hpp"
#include "android.support.v4.view.PagerTitleStrip_PagerTitleStripImpl.hpp"
#include "android.support.v4.view.PagerTitleStrip_PagerTitleStripImplBase.hpp"
#include "android.support.v4.view.PagerTitleStrip_PagerTitleStripImplIcs.hpp"

