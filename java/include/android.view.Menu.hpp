#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class ComponentName; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class MenuItem; } }
namespace android { namespace view { class SubMenu; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace view {
class Menu : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Menu(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Menu(const ::android::view::Menu& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Menu(::android::view::Menu&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::Menu& operator=(const ::android::view::Menu& x) {obj = x.obj; return *this;}
    ::android::view::Menu& operator=(::android::view::Menu&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::view::MenuItem add(const ::java::lang::CharSequence&) const;
    ::android::view::MenuItem add(int32_t) const;
    ::android::view::MenuItem add(int32_t, int32_t, int32_t, const ::java::lang::CharSequence&) const;
    ::android::view::MenuItem add(int32_t, int32_t, int32_t, int32_t) const;
    ::android::view::SubMenu addSubMenu(const ::java::lang::CharSequence&) const;
    ::android::view::SubMenu addSubMenu(int32_t) const;
    ::android::view::SubMenu addSubMenu(int32_t, int32_t, int32_t, const ::java::lang::CharSequence&) const;
    ::android::view::SubMenu addSubMenu(int32_t, int32_t, int32_t, int32_t) const;
    int32_t addIntentOptions(int32_t, int32_t, int32_t, const ::android::content::ComponentName&, const std::vector< ::android::content::Intent>&, const ::android::content::Intent&, int32_t, const std::vector< ::android::view::MenuItem>&) const;
    void removeItem(int32_t) const;
    void removeGroup(int32_t) const;
    void clear() const;
    void setGroupCheckable(int32_t, bool, bool) const;
    void setGroupVisible(int32_t, bool) const;
    void setGroupEnabled(int32_t, bool) const;
    bool hasVisibleItems() const;
    ::android::view::MenuItem findItem(int32_t) const;
    int32_t size() const;
    ::android::view::MenuItem getItem(int32_t) const;
    void close() const;
    bool performShortcut(int32_t, const ::android::view::KeyEvent&, int32_t) const;
    bool isShortcutKey(int32_t, const ::android::view::KeyEvent&) const;
    bool performIdentifierAction(int32_t, int32_t) const;
    void setQwertyMode(bool) const;

};
}
}


