#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace preference { class Preference; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace preference {
class Preference_OnPreferenceChangeListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Preference_OnPreferenceChangeListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Preference_OnPreferenceChangeListener(const ::android::preference::Preference_OnPreferenceChangeListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Preference_OnPreferenceChangeListener(::android::preference::Preference_OnPreferenceChangeListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::preference::Preference_OnPreferenceChangeListener& operator=(const ::android::preference::Preference_OnPreferenceChangeListener& x) {obj = x.obj; return *this;}
    ::android::preference::Preference_OnPreferenceChangeListener& operator=(::android::preference::Preference_OnPreferenceChangeListener&& x) {obj = std::move(x.obj); return *this;}
    
    bool onPreferenceChange(const ::android::preference::Preference&, const ::java::lang::Object&) const;

};
}
}


