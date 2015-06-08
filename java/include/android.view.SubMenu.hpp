#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.Menu.hpp"

namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace view { class MenuItem; } }
namespace android { namespace view { class SubMenu; } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace view {
class SubMenu : public virtual ::java::lang::Object,
                public virtual ::android::view::Menu {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SubMenu(jobject _obj) : ::java::lang::Object(_obj), ::android::view::Menu(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SubMenu(const ::android::view::SubMenu& x) : ::java::lang::Object((jobject)0), ::android::view::Menu((jobject)0) {obj = x.obj;}
    SubMenu(::android::view::SubMenu&& x) : ::java::lang::Object((jobject)0), ::android::view::Menu((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::SubMenu& operator=(const ::android::view::SubMenu& x) {obj = x.obj; return *this;}
    ::android::view::SubMenu& operator=(::android::view::SubMenu&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::view::SubMenu setHeaderTitle(int32_t) const;
    ::android::view::SubMenu setHeaderTitle(const ::java::lang::CharSequence&) const;
    ::android::view::SubMenu setHeaderIcon(int32_t) const;
    ::android::view::SubMenu setHeaderIcon(const ::android::graphics::drawable::Drawable&) const;
    ::android::view::SubMenu setHeaderView(const ::android::view::View&) const;
    void clearHeader() const;
    ::android::view::SubMenu setIcon(int32_t) const;
    ::android::view::SubMenu setIcon(const ::android::graphics::drawable::Drawable&) const;
    ::android::view::MenuItem getItem() const;

};
}
}


