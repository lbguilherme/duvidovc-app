#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace content {
class DialogInterface : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DialogInterface(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DialogInterface(const ::android::content::DialogInterface& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DialogInterface(::android::content::DialogInterface&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::DialogInterface& operator=(const ::android::content::DialogInterface& x) {obj = x.obj; return *this;}
    ::android::content::DialogInterface& operator=(::android::content::DialogInterface&& x) {obj = std::move(x.obj); return *this;}
    
    void cancel() const;
    void dismiss() const;

};
}
}

#include "android.content.DialogInterface_OnCancelListener.hpp"
#include "android.content.DialogInterface_OnClickListener.hpp"
#include "android.content.DialogInterface_OnDismissListener.hpp"
#include "android.content.DialogInterface_OnKeyListener.hpp"
#include "android.content.DialogInterface_OnMultiChoiceClickListener.hpp"
#include "android.content.DialogInterface_OnShowListener.hpp"

