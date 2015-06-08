#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class ActionBar_Tab; } }
namespace android { namespace app { class ActionBar_TabListener; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace app {
class ActionBar_Tab : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ActionBar_Tab(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ActionBar_Tab(const ::android::app::ActionBar_Tab& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ActionBar_Tab(::android::app::ActionBar_Tab&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::ActionBar_Tab& operator=(const ::android::app::ActionBar_Tab& x) {obj = x.obj; return *this;}
    ::android::app::ActionBar_Tab& operator=(::android::app::ActionBar_Tab&& x) {obj = std::move(x.obj); return *this;}
    
    ActionBar_Tab();
    int32_t getPosition() const;
    ::android::graphics::drawable::Drawable getIcon() const;
    ::java::lang::CharSequence getText() const;
    ::android::app::ActionBar_Tab setIcon(const ::android::graphics::drawable::Drawable&) const;
    ::android::app::ActionBar_Tab setIcon(int32_t) const;
    ::android::app::ActionBar_Tab setText(const ::java::lang::CharSequence&) const;
    ::android::app::ActionBar_Tab setText(int32_t) const;
    ::android::app::ActionBar_Tab setCustomView(const ::android::view::View&) const;
    ::android::app::ActionBar_Tab setCustomView(int32_t) const;
    ::android::view::View getCustomView() const;
    ::android::app::ActionBar_Tab setTag(const ::java::lang::Object&) const;
    ::java::lang::Object getTag() const;
    ::android::app::ActionBar_Tab setTabListener(const ::android::app::ActionBar_TabListener&) const;
    void select() const;
    ::android::app::ActionBar_Tab setContentDescription(int32_t) const;
    ::android::app::ActionBar_Tab setContentDescription(const ::java::lang::CharSequence&) const;
    ::java::lang::CharSequence getContentDescription() const;

};
}
}


