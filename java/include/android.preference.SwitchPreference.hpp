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
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace preference {
class SwitchPreference : public virtual ::java::lang::Object,
                         public virtual ::android::preference::TwoStatePreference {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SwitchPreference(jobject _obj) : ::java::lang::Object(_obj), ::android::preference::Preference(_obj), ::android::preference::TwoStatePreference(_obj), ::java::lang::Comparable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SwitchPreference(const ::android::preference::SwitchPreference& x) : ::java::lang::Object((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::TwoStatePreference((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj;}
    SwitchPreference(::android::preference::SwitchPreference&& x) : ::java::lang::Object((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::TwoStatePreference((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::preference::SwitchPreference& operator=(const ::android::preference::SwitchPreference& x) {obj = x.obj; return *this;}
    ::android::preference::SwitchPreference& operator=(::android::preference::SwitchPreference&& x) {obj = std::move(x.obj); return *this;}
    
    SwitchPreference(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    SwitchPreference(const ::android::content::Context&, const ::android::util::AttributeSet&);
    SwitchPreference(const ::android::content::Context&);
    void setSwitchTextOn(const ::java::lang::CharSequence&) const ;
    void setSwitchTextOff(const ::java::lang::CharSequence&) const ;
    void setSwitchTextOn(int32_t) const ;
    void setSwitchTextOff(int32_t) const ;
    ::java::lang::CharSequence getSwitchTextOn() const ;
    ::java::lang::CharSequence getSwitchTextOff() const ;

};
}
}


