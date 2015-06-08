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
class DialogInterface_OnClickListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DialogInterface_OnClickListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DialogInterface_OnClickListener(const ::android::content::DialogInterface_OnClickListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DialogInterface_OnClickListener(::android::content::DialogInterface_OnClickListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::DialogInterface_OnClickListener& operator=(const ::android::content::DialogInterface_OnClickListener& x) {obj = x.obj; return *this;}
    ::android::content::DialogInterface_OnClickListener& operator=(::android::content::DialogInterface_OnClickListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onClick(const ::android::content::DialogInterface&, int32_t) const;

};
}
}


