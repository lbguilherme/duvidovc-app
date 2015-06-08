#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Intent; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace view { class ActionProvider; } }
namespace android { namespace view { class ContextMenu_ContextMenuInfo; } }
namespace android { namespace view { class MenuItem; } }
namespace android { namespace view { class MenuItem_OnActionExpandListener; } }
namespace android { namespace view { class MenuItem_OnMenuItemClickListener; } }
namespace android { namespace view { class SubMenu; } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace view {
class MenuItem : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MenuItem(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MenuItem(const ::android::view::MenuItem& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MenuItem(::android::view::MenuItem&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::MenuItem& operator=(const ::android::view::MenuItem& x) {obj = x.obj; return *this;}
    ::android::view::MenuItem& operator=(::android::view::MenuItem&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getItemId() const;
    int32_t getGroupId() const;
    int32_t getOrder() const;
    ::android::view::MenuItem setTitle(const ::java::lang::CharSequence&) const;
    ::android::view::MenuItem setTitle(int32_t) const;
    ::java::lang::CharSequence getTitle() const;
    ::android::view::MenuItem setTitleCondensed(const ::java::lang::CharSequence&) const;
    ::java::lang::CharSequence getTitleCondensed() const;
    ::android::view::MenuItem setIcon(const ::android::graphics::drawable::Drawable&) const;
    ::android::view::MenuItem setIcon(int32_t) const;
    ::android::graphics::drawable::Drawable getIcon() const;
    ::android::view::MenuItem setIntent(const ::android::content::Intent&) const;
    ::android::content::Intent getIntent() const;
    ::android::view::MenuItem setShortcut(uint16_t, uint16_t) const;
    ::android::view::MenuItem setNumericShortcut(uint16_t) const;
    uint16_t getNumericShortcut() const;
    ::android::view::MenuItem setAlphabeticShortcut(uint16_t) const;
    uint16_t getAlphabeticShortcut() const;
    ::android::view::MenuItem setCheckable(bool) const;
    bool isCheckable() const;
    ::android::view::MenuItem setChecked(bool) const;
    bool isChecked() const;
    ::android::view::MenuItem setVisible(bool) const;
    bool isVisible() const;
    ::android::view::MenuItem setEnabled(bool) const;
    bool isEnabled() const;
    bool hasSubMenu() const;
    ::android::view::SubMenu getSubMenu() const;
    ::android::view::MenuItem setOnMenuItemClickListener(const ::android::view::MenuItem_OnMenuItemClickListener&) const;
    ::android::view::ContextMenu_ContextMenuInfo getMenuInfo() const;
    void setShowAsAction(int32_t) const;
    ::android::view::MenuItem setShowAsActionFlags(int32_t) const;
    ::android::view::MenuItem setActionView(const ::android::view::View&) const;
    ::android::view::MenuItem setActionView(int32_t) const;
    ::android::view::View getActionView() const;
    ::android::view::MenuItem setActionProvider(const ::android::view::ActionProvider&) const;
    ::android::view::ActionProvider getActionProvider() const;
    bool expandActionView() const;
    bool collapseActionView() const;
    bool isActionViewExpanded() const;
    ::android::view::MenuItem setOnActionExpandListener(const ::android::view::MenuItem_OnActionExpandListener&) const;

};
}
}

#include "android.view.MenuItem_OnActionExpandListener.hpp"
#include "android.view.MenuItem_OnMenuItemClickListener.hpp"

