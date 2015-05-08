#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class DialogInterface; } }

namespace android {
namespace content {
class DialogInterface_OnShowListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DialogInterface_OnShowListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DialogInterface_OnShowListener(const ::android::content::DialogInterface_OnShowListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DialogInterface_OnShowListener(::android::content::DialogInterface_OnShowListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::DialogInterface_OnShowListener& operator=(const ::android::content::DialogInterface_OnShowListener& x) {obj = x.obj; return *this;}
    ::android::content::DialogInterface_OnShowListener& operator=(::android::content::DialogInterface_OnShowListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onShow(const ::android::content::DialogInterface&) const ;

};
}
}


