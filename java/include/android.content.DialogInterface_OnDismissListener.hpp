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
class DialogInterface_OnDismissListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DialogInterface_OnDismissListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DialogInterface_OnDismissListener(const ::android::content::DialogInterface_OnDismissListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DialogInterface_OnDismissListener(::android::content::DialogInterface_OnDismissListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::DialogInterface_OnDismissListener& operator=(const ::android::content::DialogInterface_OnDismissListener& x) {obj = x.obj; return *this;}
    ::android::content::DialogInterface_OnDismissListener& operator=(::android::content::DialogInterface_OnDismissListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onDismiss(const ::android::content::DialogInterface&) const ;

};
}
}


