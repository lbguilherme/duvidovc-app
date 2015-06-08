#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class SharedPreferences; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
class SharedPreferences_OnSharedPreferenceChangeListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SharedPreferences_OnSharedPreferenceChangeListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SharedPreferences_OnSharedPreferenceChangeListener(const ::android::content::SharedPreferences_OnSharedPreferenceChangeListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SharedPreferences_OnSharedPreferenceChangeListener(::android::content::SharedPreferences_OnSharedPreferenceChangeListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::SharedPreferences_OnSharedPreferenceChangeListener& operator=(const ::android::content::SharedPreferences_OnSharedPreferenceChangeListener& x) {obj = x.obj; return *this;}
    ::android::content::SharedPreferences_OnSharedPreferenceChangeListener& operator=(::android::content::SharedPreferences_OnSharedPreferenceChangeListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onSharedPreferenceChanged(const ::android::content::SharedPreferences&, const ::java::lang::String&) const;

};
}
}


