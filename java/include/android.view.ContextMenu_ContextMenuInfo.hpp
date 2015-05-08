#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace view {
class ContextMenu_ContextMenuInfo : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContextMenu_ContextMenuInfo(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContextMenu_ContextMenuInfo(const ::android::view::ContextMenu_ContextMenuInfo& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ContextMenu_ContextMenuInfo(::android::view::ContextMenu_ContextMenuInfo&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ContextMenu_ContextMenuInfo& operator=(const ::android::view::ContextMenu_ContextMenuInfo& x) {obj = x.obj; return *this;}
    ::android::view::ContextMenu_ContextMenuInfo& operator=(::android::view::ContextMenu_ContextMenuInfo&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


