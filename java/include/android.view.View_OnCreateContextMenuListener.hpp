#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class ContextMenu; } }
namespace android { namespace view { class ContextMenu_ContextMenuInfo; } }
namespace android { namespace view { class View; } }

namespace android {
namespace view {
class View_OnCreateContextMenuListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit View_OnCreateContextMenuListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    View_OnCreateContextMenuListener(const ::android::view::View_OnCreateContextMenuListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    View_OnCreateContextMenuListener(::android::view::View_OnCreateContextMenuListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::View_OnCreateContextMenuListener& operator=(const ::android::view::View_OnCreateContextMenuListener& x) {obj = x.obj; return *this;}
    ::android::view::View_OnCreateContextMenuListener& operator=(::android::view::View_OnCreateContextMenuListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onCreateContextMenu(const ::android::view::ContextMenu&, const ::android::view::View&, const ::android::view::ContextMenu_ContextMenuInfo&) const;

};
}
}


