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
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class View; } }
namespace android { namespace widget { class AdapterView_OnItemClickListener; } }
namespace android { namespace widget { class AdapterView_OnItemSelectedListener; } }
namespace android { namespace widget { class ListAdapter; } }
namespace android { namespace widget { class ListView; } }
namespace android { namespace widget { class PopupWindow_OnDismissListener; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace widget {
class ListPopupWindow : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ListPopupWindow(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ListPopupWindow(const ::android::widget::ListPopupWindow& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ListPopupWindow(::android::widget::ListPopupWindow&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::ListPopupWindow& operator=(const ::android::widget::ListPopupWindow& x) {obj = x.obj; return *this;}
    ::android::widget::ListPopupWindow& operator=(::android::widget::ListPopupWindow&& x) {obj = std::move(x.obj); return *this;}
    
    ListPopupWindow(const ::android::content::Context&);
    ListPopupWindow(const ::android::content::Context&, const ::android::util::AttributeSet&);
    ListPopupWindow(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    ListPopupWindow(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t, int32_t);
    void setAdapter(const ::android::widget::ListAdapter&) const;
    void setPromptPosition(int32_t) const;
    int32_t getPromptPosition() const;
    void setModal(bool) const;
    bool isModal() const;
    void setSoftInputMode(int32_t) const;
    int32_t getSoftInputMode() const;
    void setListSelector(const ::android::graphics::drawable::Drawable&) const;
    ::android::graphics::drawable::Drawable getBackground() const;
    void setBackgroundDrawable(const ::android::graphics::drawable::Drawable&) const;
    void setAnimationStyle(int32_t) const;
    int32_t getAnimationStyle() const;
    ::android::view::View getAnchorView() const;
    void setAnchorView(const ::android::view::View&) const;
    int32_t getHorizontalOffset() const;
    void setHorizontalOffset(int32_t) const;
    int32_t getVerticalOffset() const;
    void setVerticalOffset(int32_t) const;
    int32_t getWidth() const;
    void setWidth(int32_t) const;
    void setContentWidth(int32_t) const;
    int32_t getHeight() const;
    void setHeight(int32_t) const;
    void setOnItemClickListener(const ::android::widget::AdapterView_OnItemClickListener&) const;
    void setOnItemSelectedListener(const ::android::widget::AdapterView_OnItemSelectedListener&) const;
    void setPromptView(const ::android::view::View&) const;
    void postShow() const;
    void show() const;
    void dismiss() const;
    void setOnDismissListener(const ::android::widget::PopupWindow_OnDismissListener&) const;
    void setInputMethodMode(int32_t) const;
    int32_t getInputMethodMode() const;
    void setSelection(int32_t) const;
    void clearListSelection() const;
    bool isShowing() const;
    bool isInputMethodNotNeeded() const;
    bool performItemClick(int32_t) const;
    ::java::lang::Object getSelectedItem() const;
    int32_t getSelectedItemPosition() const;
    int64_t getSelectedItemId() const;
    ::android::view::View getSelectedView() const;
    ::android::widget::ListView getListView() const;
    bool onKeyDown(int32_t, const ::android::view::KeyEvent&) const;
    bool onKeyUp(int32_t, const ::android::view::KeyEvent&) const;
    bool onKeyPreIme(int32_t, const ::android::view::KeyEvent&) const;

};
}
}


