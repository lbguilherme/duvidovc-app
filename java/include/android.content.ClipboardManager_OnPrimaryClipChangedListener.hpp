#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace content {
class ClipboardManager_OnPrimaryClipChangedListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ClipboardManager_OnPrimaryClipChangedListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ClipboardManager_OnPrimaryClipChangedListener(const ::android::content::ClipboardManager_OnPrimaryClipChangedListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ClipboardManager_OnPrimaryClipChangedListener(::android::content::ClipboardManager_OnPrimaryClipChangedListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::ClipboardManager_OnPrimaryClipChangedListener& operator=(const ::android::content::ClipboardManager_OnPrimaryClipChangedListener& x) {obj = x.obj; return *this;}
    ::android::content::ClipboardManager_OnPrimaryClipChangedListener& operator=(::android::content::ClipboardManager_OnPrimaryClipChangedListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onPrimaryClipChanged() const;

};
}
}


