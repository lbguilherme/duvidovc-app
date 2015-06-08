#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class View_OnTouchListener; } }
namespace android { namespace widget { class PopupWindow_OnDismissListener; } }

namespace android {
namespace widget {
class PopupWindow : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PopupWindow(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PopupWindow(const ::android::widget::PopupWindow& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PopupWindow(::android::widget::PopupWindow&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::PopupWindow& operator=(const ::android::widget::PopupWindow& x) {obj = x.obj; return *this;}
    ::android::widget::PopupWindow& operator=(::android::widget::PopupWindow&& x) {obj = std::move(x.obj); return *this;}
    
    PopupWindow(const ::android::content::Context&);
    PopupWindow(const ::android::content::Context&, const ::android::util::AttributeSet&);
    PopupWindow(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    PopupWindow(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t, int32_t);
    PopupWindow();
    PopupWindow(const ::android::view::View&);
    PopupWindow(int32_t, int32_t);
    PopupWindow(const ::android::view::View&, int32_t, int32_t);
    PopupWindow(const ::android::view::View&, int32_t, int32_t, bool);
    ::android::graphics::drawable::Drawable getBackground() const;
    void setBackgroundDrawable(const ::android::graphics::drawable::Drawable&) const;
    int32_t getAnimationStyle() const;
    void setIgnoreCheekPress() const;
    void setAnimationStyle(int32_t) const;
    ::android::view::View getContentView() const;
    void setContentView(const ::android::view::View&) const;
    void setTouchInterceptor(const ::android::view::View_OnTouchListener&) const;
    bool isFocusable() const;
    void setFocusable(bool) const;
    int32_t getInputMethodMode() const;
    void setInputMethodMode(int32_t) const;
    void setSoftInputMode(int32_t) const;
    int32_t getSoftInputMode() const;
    bool isTouchable() const;
    void setTouchable(bool) const;
    bool isOutsideTouchable() const;
    void setOutsideTouchable(bool) const;
    bool isClippingEnabled() const;
    void setClippingEnabled(bool) const;
    bool isSplitTouchEnabled() const;
    void setSplitTouchEnabled(bool) const;
    void setWindowLayoutMode(int32_t, int32_t) const;
    int32_t getHeight() const;
    void setHeight(int32_t) const;
    int32_t getWidth() const;
    void setWidth(int32_t) const;
    bool isShowing() const;
    void showAtLocation(const ::android::view::View&, int32_t, int32_t, int32_t) const;
    void showAsDropDown(const ::android::view::View&) const;
    void showAsDropDown(const ::android::view::View&, int32_t, int32_t) const;
    bool isAboveAnchor() const;
    int32_t getMaxAvailableHeight(const ::android::view::View&) const;
    int32_t getMaxAvailableHeight(const ::android::view::View&, int32_t) const;
    void dismiss() const;
    void setOnDismissListener(const ::android::widget::PopupWindow_OnDismissListener&) const;
    void update() const;
    void update(int32_t, int32_t) const;
    void update(int32_t, int32_t, int32_t, int32_t) const;
    void update(int32_t, int32_t, int32_t, int32_t, bool) const;
    void update(const ::android::view::View&, int32_t, int32_t) const;
    void update(const ::android::view::View&, int32_t, int32_t, int32_t, int32_t) const;

};
}
}

#include "android.widget.PopupWindow_OnDismissListener.hpp"

