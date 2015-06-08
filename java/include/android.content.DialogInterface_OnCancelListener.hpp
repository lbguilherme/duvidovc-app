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
class DialogInterface_OnCancelListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DialogInterface_OnCancelListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DialogInterface_OnCancelListener(const ::android::content::DialogInterface_OnCancelListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DialogInterface_OnCancelListener(::android::content::DialogInterface_OnCancelListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::DialogInterface_OnCancelListener& operator=(const ::android::content::DialogInterface_OnCancelListener& x) {obj = x.obj; return *this;}
    ::android::content::DialogInterface_OnCancelListener& operator=(::android::content::DialogInterface_OnCancelListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onCancel(const ::android::content::DialogInterface&) const;

};
}
}


