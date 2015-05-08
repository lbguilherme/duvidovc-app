#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class Menu; } }
namespace android { namespace view { class MenuInflater; } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace view {
class ActionMode : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ActionMode(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ActionMode(const ::android::view::ActionMode& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ActionMode(::android::view::ActionMode&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ActionMode& operator=(const ::android::view::ActionMode& x) {obj = x.obj; return *this;}
    ::android::view::ActionMode& operator=(::android::view::ActionMode&& x) {obj = std::move(x.obj); return *this;}
    
    ActionMode();
    void setTag(const ::java::lang::Object&) const ;
    ::java::lang::Object getTag() const ;
    void setTitle(const ::java::lang::CharSequence&) const ;
    void setTitle(int32_t) const ;
    void setSubtitle(const ::java::lang::CharSequence&) const ;
    void setSubtitle(int32_t) const ;
    void setCustomView(const ::android::view::View&) const ;
    void invalidate() const ;
    void finish() const ;
    ::android::view::Menu getMenu() const ;
    ::java::lang::CharSequence getTitle() const ;
    ::java::lang::CharSequence getSubtitle() const ;
    ::android::view::View getCustomView() const ;
    ::android::view::MenuInflater getMenuInflater() const ;

};
}
}

#include "android.view.ActionMode_Callback.hpp"

