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
namespace android { namespace support { namespace v4 { namespace widget { class DrawerLayout_DrawerListener; } } } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup_LayoutParams; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class DrawerLayout : public virtual ::java::lang::Object,
                     public virtual ::android::view::ViewGroup {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrawerLayout(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrawerLayout(const ::android::support::v4::widget::DrawerLayout& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj;}
    DrawerLayout(::android::support::v4::widget::DrawerLayout&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::DrawerLayout& operator=(const ::android::support::v4::widget::DrawerLayout& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::DrawerLayout& operator=(::android::support::v4::widget::DrawerLayout&& x) {obj = std::move(x.obj); return *this;}
    
    DrawerLayout(const ::android::content::Context&);
    DrawerLayout(const ::android::content::Context&, const ::android::util::AttributeSet&);
    DrawerLayout(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    void setChildInsets(const ::java::lang::Object&, bool) const ;
    void setDrawerShadow(const ::android::graphics::drawable::Drawable&, int32_t) const ;
    void setDrawerShadow(int32_t, int32_t) const ;
    void setScrimColor(int32_t) const ;
    void setDrawerListener(const ::android::support::v4::widget::DrawerLayout_DrawerListener&) const ;
    void setDrawerLockMode(int32_t) const ;
    void setDrawerLockMode(int32_t, int32_t) const ;
    void setDrawerLockMode(int32_t, const ::android::view::View&) const ;
    int32_t getDrawerLockMode(int32_t) const ;
    int32_t getDrawerLockMode(const ::android::view::View&) const ;
    void setDrawerTitle(int32_t, const ::java::lang::CharSequence&) const ;
    ::java::lang::CharSequence getDrawerTitle(int32_t) const ;
    void requestLayout() const ;
    void computeScroll() const ;
    void setStatusBarBackground(const ::android::graphics::drawable::Drawable&) const ;
    ::android::graphics::drawable::Drawable getStatusBarBackgroundDrawable() const ;
    void setStatusBarBackground(int32_t) const ;
    void setStatusBarBackgroundColor(int32_t) const ;
    void onDraw(const ::android::graphics::Canvas&) const ;
    bool onInterceptTouchEvent(const ::android::view::MotionEvent&) const ;
    bool onTouchEvent(const ::android::view::MotionEvent&) const ;
    void requestDisallowInterceptTouchEvent(bool) const ;
    void closeDrawers() const ;
    void openDrawer(const ::android::view::View&) const ;
    void openDrawer(int32_t) const ;
    void closeDrawer(const ::android::view::View&) const ;
    void closeDrawer(int32_t) const ;
    bool isDrawerOpen(const ::android::view::View&) const ;
    bool isDrawerOpen(int32_t) const ;
    bool isDrawerVisible(const ::android::view::View&) const ;
    bool isDrawerVisible(int32_t) const ;
    ::android::view::ViewGroup_LayoutParams generateLayoutParams(const ::android::util::AttributeSet&) const ;
    bool onKeyDown(int32_t, const ::android::view::KeyEvent&) const ;
    bool onKeyUp(int32_t, const ::android::view::KeyEvent&) const ;
    void addView(const ::android::view::View&, int32_t, const ::android::view::ViewGroup_LayoutParams&) const ;

};
}
}
}
}

#include "android.support.v4.widget.DrawerLayout_AccessibilityDelegate.hpp"
#include "android.support.v4.widget.DrawerLayout_ChildAccessibilityDelegate.hpp"
#include "android.support.v4.widget.DrawerLayout_DrawerLayoutCompatImpl.hpp"
#include "android.support.v4.widget.DrawerLayout_DrawerLayoutCompatImplApi21.hpp"
#include "android.support.v4.widget.DrawerLayout_DrawerLayoutCompatImplBase.hpp"
#include "android.support.v4.widget.DrawerLayout_DrawerListener.hpp"
#include "android.support.v4.widget.DrawerLayout_EdgeGravity.hpp"
#include "android.support.v4.widget.DrawerLayout_LayoutParams.hpp"
#include "android.support.v4.widget.DrawerLayout_LockMode.hpp"
#include "android.support.v4.widget.DrawerLayout_SavedState.hpp"
#include "android.support.v4.widget.DrawerLayout_SimpleDrawerListener.hpp"
#include "android.support.v4.widget.DrawerLayout_State.hpp"
#include "android.support.v4.widget.DrawerLayout_ViewDragCallback.hpp"

