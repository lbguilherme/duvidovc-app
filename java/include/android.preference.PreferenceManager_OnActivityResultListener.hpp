#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Intent; } }

namespace android {
namespace preference {
class PreferenceManager_OnActivityResultListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PreferenceManager_OnActivityResultListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PreferenceManager_OnActivityResultListener(const ::android::preference::PreferenceManager_OnActivityResultListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PreferenceManager_OnActivityResultListener(::android::preference::PreferenceManager_OnActivityResultListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::preference::PreferenceManager_OnActivityResultListener& operator=(const ::android::preference::PreferenceManager_OnActivityResultListener& x) {obj = x.obj; return *this;}
    ::android::preference::PreferenceManager_OnActivityResultListener& operator=(::android::preference::PreferenceManager_OnActivityResultListener&& x) {obj = std::move(x.obj); return *this;}
    
    bool onActivityResult(int32_t, int32_t, const ::android::content::Intent&) const ;

};
}
}


