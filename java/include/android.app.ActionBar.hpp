#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class ActionBar_LayoutParams; } }
namespace android { namespace app { class ActionBar_OnMenuVisibilityListener; } }
namespace android { namespace app { class ActionBar_OnNavigationListener; } }
namespace android { namespace app { class ActionBar_Tab; } }
namespace android { namespace content { class Context; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace view { class View; } }
namespace android { namespace widget { class SpinnerAdapter; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace app {
class ActionBar : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ActionBar(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ActionBar(const ::android::app::ActionBar& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ActionBar(::android::app::ActionBar&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::ActionBar& operator=(const ::android::app::ActionBar& x) {obj = x.obj; return *this;}
    ::android::app::ActionBar& operator=(::android::app::ActionBar&& x) {obj = std::move(x.obj); return *this;}
    
    ActionBar();
    void setCustomView(const ::android::view::View&) const;
    void setCustomView(const ::android::view::View&, const ::android::app::ActionBar_LayoutParams&) const;
    void setCustomView(int32_t) const;
    void setIcon(int32_t) const;
    void setIcon(const ::android::graphics::drawable::Drawable&) const;
    void setLogo(int32_t) const;
    void setLogo(const ::android::graphics::drawable::Drawable&) const;
    void setListNavigationCallbacks(const ::android::widget::SpinnerAdapter&, const ::android::app::ActionBar_OnNavigationListener&) const;
    void setSelectedNavigationItem(int32_t) const;
    int32_t getSelectedNavigationIndex() const;
    int32_t getNavigationItemCount() const;
    void setTitle(const ::java::lang::CharSequence&) const;
    void setTitle(int32_t) const;
    void setSubtitle(const ::java::lang::CharSequence&) const;
    void setSubtitle(int32_t) const;
    void setDisplayOptions(int32_t) const;
    void setDisplayOptions(int32_t, int32_t) const;
    void setDisplayUseLogoEnabled(bool) const;
    void setDisplayShowHomeEnabled(bool) const;
    void setDisplayHomeAsUpEnabled(bool) const;
    void setDisplayShowTitleEnabled(bool) const;
    void setDisplayShowCustomEnabled(bool) const;
    void setBackgroundDrawable(const ::android::graphics::drawable::Drawable&) const;
    void setStackedBackgroundDrawable(const ::android::graphics::drawable::Drawable&) const;
    void setSplitBackgroundDrawable(const ::android::graphics::drawable::Drawable&) const;
    ::android::view::View getCustomView() const;
    ::java::lang::CharSequence getTitle() const;
    ::java::lang::CharSequence getSubtitle() const;
    int32_t getNavigationMode() const;
    void setNavigationMode(int32_t) const;
    int32_t getDisplayOptions() const;
    ::android::app::ActionBar_Tab newTab() const;
    void addTab(const ::android::app::ActionBar_Tab&) const;
    void addTab(const ::android::app::ActionBar_Tab&, bool) const;
    void addTab(const ::android::app::ActionBar_Tab&, int32_t) const;
    void addTab(const ::android::app::ActionBar_Tab&, int32_t, bool) const;
    void removeTab(const ::android::app::ActionBar_Tab&) const;
    void removeTabAt(int32_t) const;
    void removeAllTabs() const;
    void selectTab(const ::android::app::ActionBar_Tab&) const;
    ::android::app::ActionBar_Tab getSelectedTab() const;
    ::android::app::ActionBar_Tab getTabAt(int32_t) const;
    int32_t getTabCount() const;
    int32_t getHeight() const;
    void show() const;
    void hide() const;
    bool isShowing() const;
    void addOnMenuVisibilityListener(const ::android::app::ActionBar_OnMenuVisibilityListener&) const;
    void removeOnMenuVisibilityListener(const ::android::app::ActionBar_OnMenuVisibilityListener&) const;
    void setHomeButtonEnabled(bool) const;
    ::android::content::Context getThemedContext() const;

};
}
}

#include "android.app.ActionBar_LayoutParams.hpp"
#include "android.app.ActionBar_OnMenuVisibilityListener.hpp"
#include "android.app.ActionBar_OnNavigationListener.hpp"
#include "android.app.ActionBar_Tab.hpp"
#include "android.app.ActionBar_TabListener.hpp"

