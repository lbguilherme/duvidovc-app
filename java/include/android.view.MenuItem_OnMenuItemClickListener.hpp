#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class MenuItem; } }

namespace android {
namespace view {
class MenuItem_OnMenuItemClickListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MenuItem_OnMenuItemClickListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MenuItem_OnMenuItemClickListener(const ::android::view::MenuItem_OnMenuItemClickListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MenuItem_OnMenuItemClickListener(::android::view::MenuItem_OnMenuItemClickListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::MenuItem_OnMenuItemClickListener& operator=(const ::android::view::MenuItem_OnMenuItemClickListener& x) {obj = x.obj; return *this;}
    ::android::view::MenuItem_OnMenuItemClickListener& operator=(::android::view::MenuItem_OnMenuItemClickListener&& x) {obj = std::move(x.obj); return *this;}
    
    bool onMenuItemClick(const ::android::view::MenuItem&) const ;

};
}
}


