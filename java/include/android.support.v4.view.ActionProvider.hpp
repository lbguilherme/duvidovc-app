#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace support { namespace v4 { namespace view { class ActionProvider_SubUiVisibilityListener; } } } }
namespace android { namespace support { namespace v4 { namespace view { class ActionProvider_VisibilityListener; } } } }
namespace android { namespace view { class MenuItem; } }
namespace android { namespace view { class SubMenu; } }
namespace android { namespace view { class View; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ActionProvider : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ActionProvider(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ActionProvider(const ::android::support::v4::view::ActionProvider& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ActionProvider(::android::support::v4::view::ActionProvider&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ActionProvider& operator=(const ::android::support::v4::view::ActionProvider& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ActionProvider& operator=(::android::support::v4::view::ActionProvider&& x) {obj = std::move(x.obj); return *this;}
    
    ActionProvider(const ::android::content::Context&);
    ::android::content::Context getContext() const ;
    ::android::view::View onCreateActionView() const ;
    ::android::view::View onCreateActionView(const ::android::view::MenuItem&) const ;
    bool overridesItemVisibility() const ;
    bool isVisible() const ;
    void refreshVisibility() const ;
    bool onPerformDefaultAction() const ;
    bool hasSubMenu() const ;
    void onPrepareSubMenu(const ::android::view::SubMenu&) const ;
    void subUiVisibilityChanged(bool) const ;
    void setSubUiVisibilityListener(const ::android::support::v4::view::ActionProvider_SubUiVisibilityListener&) const ;
    void setVisibilityListener(const ::android::support::v4::view::ActionProvider_VisibilityListener&) const ;

};
}
}
}
}

#include "android.support.v4.view.ActionProvider_SubUiVisibilityListener.hpp"
#include "android.support.v4.view.ActionProvider_VisibilityListener.hpp"

