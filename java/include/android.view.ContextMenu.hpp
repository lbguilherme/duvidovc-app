#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.Menu.hpp"

namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace view { class ContextMenu; } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace view {
class ContextMenu : public virtual ::java::lang::Object,
                    public virtual ::android::view::Menu {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContextMenu(jobject _obj) : ::java::lang::Object(_obj), ::android::view::Menu(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContextMenu(const ::android::view::ContextMenu& x) : ::java::lang::Object((jobject)0), ::android::view::Menu((jobject)0) {obj = x.obj;}
    ContextMenu(::android::view::ContextMenu&& x) : ::java::lang::Object((jobject)0), ::android::view::Menu((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ContextMenu& operator=(const ::android::view::ContextMenu& x) {obj = x.obj; return *this;}
    ::android::view::ContextMenu& operator=(::android::view::ContextMenu&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::view::ContextMenu setHeaderTitle(int32_t) const;
    ::android::view::ContextMenu setHeaderTitle(const ::java::lang::CharSequence&) const;
    ::android::view::ContextMenu setHeaderIcon(int32_t) const;
    ::android::view::ContextMenu setHeaderIcon(const ::android::graphics::drawable::Drawable&) const;
    ::android::view::ContextMenu setHeaderView(const ::android::view::View&) const;
    void clearHeader() const;

};
}
}

#include "android.view.ContextMenu_ContextMenuInfo.hpp"

