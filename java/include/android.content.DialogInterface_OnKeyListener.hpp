#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class DialogInterface; } }
namespace android { namespace view { class KeyEvent; } }

namespace android {
namespace content {
class DialogInterface_OnKeyListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DialogInterface_OnKeyListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DialogInterface_OnKeyListener(const ::android::content::DialogInterface_OnKeyListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DialogInterface_OnKeyListener(::android::content::DialogInterface_OnKeyListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::DialogInterface_OnKeyListener& operator=(const ::android::content::DialogInterface_OnKeyListener& x) {obj = x.obj; return *this;}
    ::android::content::DialogInterface_OnKeyListener& operator=(::android::content::DialogInterface_OnKeyListener&& x) {obj = std::move(x.obj); return *this;}
    
    bool onKey(const ::android::content::DialogInterface&, int32_t, const ::android::view::KeyEvent&) const;

};
}
}


