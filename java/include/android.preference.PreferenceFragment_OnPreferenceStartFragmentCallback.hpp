#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace preference { class Preference; } }
namespace android { namespace preference { class PreferenceFragment; } }

namespace android {
namespace preference {
class PreferenceFragment_OnPreferenceStartFragmentCallback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PreferenceFragment_OnPreferenceStartFragmentCallback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PreferenceFragment_OnPreferenceStartFragmentCallback(const ::android::preference::PreferenceFragment_OnPreferenceStartFragmentCallback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PreferenceFragment_OnPreferenceStartFragmentCallback(::android::preference::PreferenceFragment_OnPreferenceStartFragmentCallback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::preference::PreferenceFragment_OnPreferenceStartFragmentCallback& operator=(const ::android::preference::PreferenceFragment_OnPreferenceStartFragmentCallback& x) {obj = x.obj; return *this;}
    ::android::preference::PreferenceFragment_OnPreferenceStartFragmentCallback& operator=(::android::preference::PreferenceFragment_OnPreferenceStartFragmentCallback&& x) {obj = std::move(x.obj); return *this;}
    
    bool onPreferenceStartFragment(const ::android::preference::PreferenceFragment&, const ::android::preference::Preference&) const ;

};
}
}


