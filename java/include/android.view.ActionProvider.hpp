#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace view { class SubMenu; } }
namespace android { namespace view { class View; } }

namespace android {
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
    ActionProvider(const ::android::view::ActionProvider& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ActionProvider(::android::view::ActionProvider&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ActionProvider& operator=(const ::android::view::ActionProvider& x) {obj = x.obj; return *this;}
    ::android::view::ActionProvider& operator=(::android::view::ActionProvider&& x) {obj = std::move(x.obj); return *this;}
    
    ActionProvider(const ::android::content::Context&);
    ::android::view::View onCreateActionView() const ;
    bool onPerformDefaultAction() const ;
    bool hasSubMenu() const ;
    void onPrepareSubMenu(const ::android::view::SubMenu&) const ;

};
}
}


