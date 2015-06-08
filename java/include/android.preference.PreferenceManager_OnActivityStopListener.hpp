#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace preference {
class PreferenceManager_OnActivityStopListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PreferenceManager_OnActivityStopListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PreferenceManager_OnActivityStopListener(const ::android::preference::PreferenceManager_OnActivityStopListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PreferenceManager_OnActivityStopListener(::android::preference::PreferenceManager_OnActivityStopListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::preference::PreferenceManager_OnActivityStopListener& operator=(const ::android::preference::PreferenceManager_OnActivityStopListener& x) {obj = x.obj; return *this;}
    ::android::preference::PreferenceManager_OnActivityStopListener& operator=(::android::preference::PreferenceManager_OnActivityStopListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onActivityStop() const;

};
}
}


