#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace preference {
class PreferenceManager_OnActivityDestroyListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PreferenceManager_OnActivityDestroyListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PreferenceManager_OnActivityDestroyListener(const ::android::preference::PreferenceManager_OnActivityDestroyListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PreferenceManager_OnActivityDestroyListener(::android::preference::PreferenceManager_OnActivityDestroyListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::preference::PreferenceManager_OnActivityDestroyListener& operator=(const ::android::preference::PreferenceManager_OnActivityDestroyListener& x) {obj = x.obj; return *this;}
    ::android::preference::PreferenceManager_OnActivityDestroyListener& operator=(::android::preference::PreferenceManager_OnActivityDestroyListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onActivityDestroy() const;

};
}
}


