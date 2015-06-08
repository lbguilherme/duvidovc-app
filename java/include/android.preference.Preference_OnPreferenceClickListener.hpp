#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace preference { class Preference; } }

namespace android {
namespace preference {
class Preference_OnPreferenceClickListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Preference_OnPreferenceClickListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Preference_OnPreferenceClickListener(const ::android::preference::Preference_OnPreferenceClickListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Preference_OnPreferenceClickListener(::android::preference::Preference_OnPreferenceClickListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::preference::Preference_OnPreferenceClickListener& operator=(const ::android::preference::Preference_OnPreferenceClickListener& x) {obj = x.obj; return *this;}
    ::android::preference::Preference_OnPreferenceClickListener& operator=(::android::preference::Preference_OnPreferenceClickListener&& x) {obj = std::move(x.obj); return *this;}
    
    bool onPreferenceClick(const ::android::preference::Preference&) const;

};
}
}


