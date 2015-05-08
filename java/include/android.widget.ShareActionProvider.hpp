#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.ActionProvider.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace view { class SubMenu; } }
namespace android { namespace view { class View; } }
namespace android { namespace widget { class ShareActionProvider_OnShareTargetSelectedListener; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace widget {
class ShareActionProvider : public virtual ::java::lang::Object,
                            public virtual ::android::view::ActionProvider {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareActionProvider(jobject _obj) : ::java::lang::Object(_obj), ::android::view::ActionProvider(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareActionProvider(const ::android::widget::ShareActionProvider& x) : ::java::lang::Object((jobject)0), ::android::view::ActionProvider((jobject)0) {obj = x.obj;}
    ShareActionProvider(::android::widget::ShareActionProvider&& x) : ::java::lang::Object((jobject)0), ::android::view::ActionProvider((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::ShareActionProvider& operator=(const ::android::widget::ShareActionProvider& x) {obj = x.obj; return *this;}
    ::android::widget::ShareActionProvider& operator=(::android::widget::ShareActionProvider&& x) {obj = std::move(x.obj); return *this;}
    
    ShareActionProvider(const ::android::content::Context&);
    void setOnShareTargetSelectedListener(const ::android::widget::ShareActionProvider_OnShareTargetSelectedListener&) const ;
    ::android::view::View onCreateActionView() const ;
    bool hasSubMenu() const ;
    void onPrepareSubMenu(const ::android::view::SubMenu&) const ;
    void setShareHistoryFileName(const ::java::lang::String&) const ;
    void setShareIntent(const ::android::content::Intent&) const ;

};
}
}

#include "android.widget.ShareActionProvider_OnShareTargetSelectedListener.hpp"

