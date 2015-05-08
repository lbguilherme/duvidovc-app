#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace app {
class LauncherActivity_ListItem : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LauncherActivity_ListItem(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LauncherActivity_ListItem(const ::android::app::LauncherActivity_ListItem& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LauncherActivity_ListItem(::android::app::LauncherActivity_ListItem&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::LauncherActivity_ListItem& operator=(const ::android::app::LauncherActivity_ListItem& x) {obj = x.obj; return *this;}
    ::android::app::LauncherActivity_ListItem& operator=(::android::app::LauncherActivity_ListItem&& x) {obj = std::move(x.obj); return *this;}
    
    LauncherActivity_ListItem();

};
}
}


