#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.ViewGroup.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace os { class Parcelable; } }
namespace android { namespace support { namespace v4 { namespace view { class PagerAdapter; } } } }
namespace android { namespace support { namespace v4 { namespace view { class ViewPager_OnPageChangeListener; } } } }
namespace android { namespace support { namespace v4 { namespace view { class ViewPager_PageTransformer; } } } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup_LayoutParams; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }
namespace java { namespace util { class ArrayList; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewPager : public virtual ::java::lang::Object,
                  public virtual ::android::view::ViewGroup {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewPager(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewPager(const ::android::support::v4::view::ViewPager& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj;}
    ViewPager(::android::support::v4::view::ViewPager&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewPager& operator=(const ::android::support::v4::view::ViewPager& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewPager& operator=(::android::support::v4::view::ViewPager&& x) {obj = std::move(x.obj); return *this;}
    
    ViewPager(const ::android::content::Context&);
    ViewPager(const ::android::content::Context&, const ::android::util::AttributeSet&);
    void setAdapter(const ::android::support::v4::view::PagerAdapter&) const;
    ::android::support::v4::view::PagerAdapter getAdapter() const;
    void setCurrentItem(int32_t) const;
    void setCurrentItem(int32_t, bool) const;
    int32_t getCurrentItem() const;
    void setOnPageChangeListener(const ::android::support::v4::view::ViewPager_OnPageChangeListener&) const;
    void setPageTransformer(bool, const ::android::support::v4::view::ViewPager_PageTransformer&) const;
    int32_t getOffscreenPageLimit() const;
    void setOffscreenPageLimit(int32_t) const;
    void setPageMargin(int32_t) const;
    int32_t getPageMargin() const;
    void setPageMarginDrawable(const ::android::graphics::drawable::Drawable&) const;
    void setPageMarginDrawable(int32_t) const;
    ::android::os::Parcelable onSaveInstanceState() const;
    void onRestoreInstanceState(const ::android::os::Parcelable&) const;
    void addView(const ::android::view::View&, int32_t, const ::android::view::ViewGroup_LayoutParams&) const;
    void removeView(const ::android::view::View&) const;
    void computeScroll() const;
    bool onInterceptTouchEvent(const ::android::view::MotionEvent&) const;
    bool onTouchEvent(const ::android::view::MotionEvent&) const;
    void draw(const ::android::graphics::Canvas&) const;
    bool beginFakeDrag() const;
    void endFakeDrag() const;
    void fakeDragBy(float) const;
    bool isFakeDragging() const;
    bool canScrollHorizontally(int32_t) const;
    bool dispatchKeyEvent(const ::android::view::KeyEvent&) const;
    bool executeKeyEvent(const ::android::view::KeyEvent&) const;
    bool arrowScroll(int32_t) const;
    void addFocusables(const ::java::util::ArrayList&, int32_t, int32_t) const;
    void addTouchables(const ::java::util::ArrayList&) const;
    bool dispatchPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const;
    ::android::view::ViewGroup_LayoutParams generateLayoutParams(const ::android::util::AttributeSet&) const;

};
}
}
}
}

#include "android.support.v4.view.ViewPager_Decor.hpp"
#include "android.support.v4.view.ViewPager_ItemInfo.hpp"
#include "android.support.v4.view.ViewPager_LayoutParams.hpp"
#include "android.support.v4.view.ViewPager_MyAccessibilityDelegate.hpp"
#include "android.support.v4.view.ViewPager_OnAdapterChangeListener.hpp"
#include "android.support.v4.view.ViewPager_OnPageChangeListener.hpp"
#include "android.support.v4.view.ViewPager_PageTransformer.hpp"
#include "android.support.v4.view.ViewPager_PagerObserver.hpp"
#include "android.support.v4.view.ViewPager_SavedState.hpp"
#include "android.support.v4.view.ViewPager_SimpleOnPageChangeListener.hpp"
#include "android.support.v4.view.ViewPager_ViewPositionComparator.hpp"

