#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace view {
class CollapsibleActionView : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CollapsibleActionView(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CollapsibleActionView(const ::android::view::CollapsibleActionView& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CollapsibleActionView(::android::view::CollapsibleActionView&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::CollapsibleActionView& operator=(const ::android::view::CollapsibleActionView& x) {obj = x.obj; return *this;}
    ::android::view::CollapsibleActionView& operator=(::android::view::CollapsibleActionView&& x) {obj = std::move(x.obj); return *this;}
    
    void onActionViewExpanded() const;
    void onActionViewCollapsed() const;

};
}
}


