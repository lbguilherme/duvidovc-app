#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.preference.TwoStatePreference.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }

namespace android {
namespace preference {
class CheckBoxPreference : public virtual ::java::lang::Object,
                           public virtual ::android::preference::TwoStatePreference {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CheckBoxPreference(jobject _obj) : ::java::lang::Object(_obj), ::android::preference::Preference(_obj), ::android::preference::TwoStatePreference(_obj), ::java::lang::Comparable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CheckBoxPreference(const ::android::preference::CheckBoxPreference& x) : ::java::lang::Object((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::TwoStatePreference((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj;}
    CheckBoxPreference(::android::preference::CheckBoxPreference&& x) : ::java::lang::Object((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::TwoStatePreference((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::preference::CheckBoxPreference& operator=(const ::android::preference::CheckBoxPreference& x) {obj = x.obj; return *this;}
    ::android::preference::CheckBoxPreference& operator=(::android::preference::CheckBoxPreference&& x) {obj = std::move(x.obj); return *this;}
    
    CheckBoxPreference(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    CheckBoxPreference(const ::android::content::Context&, const ::android::util::AttributeSet&);
    CheckBoxPreference(const ::android::content::Context&);

};
}
}


