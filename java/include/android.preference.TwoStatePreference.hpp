#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.preference.Preference.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace preference {
class TwoStatePreference : public virtual ::java::lang::Object,
                           public virtual ::android::preference::Preference {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TwoStatePreference(jobject _obj) : ::java::lang::Object(_obj), ::android::preference::Preference(_obj), ::java::lang::Comparable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TwoStatePreference(const ::android::preference::TwoStatePreference& x) : ::java::lang::Object((jobject)0), ::android::preference::Preference((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj;}
    TwoStatePreference(::android::preference::TwoStatePreference&& x) : ::java::lang::Object((jobject)0), ::android::preference::Preference((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::preference::TwoStatePreference& operator=(const ::android::preference::TwoStatePreference& x) {obj = x.obj; return *this;}
    ::android::preference::TwoStatePreference& operator=(::android::preference::TwoStatePreference&& x) {obj = std::move(x.obj); return *this;}
    
    TwoStatePreference(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    TwoStatePreference(const ::android::content::Context&, const ::android::util::AttributeSet&);
    TwoStatePreference(const ::android::content::Context&);
    void setChecked(bool) const ;
    bool isChecked() const ;
    bool shouldDisableDependents() const ;
    void setSummaryOn(const ::java::lang::CharSequence&) const ;
    void setSummaryOn(int32_t) const ;
    ::java::lang::CharSequence getSummaryOn() const ;
    void setSummaryOff(const ::java::lang::CharSequence&) const ;
    void setSummaryOff(int32_t) const ;
    ::java::lang::CharSequence getSummaryOff() const ;
    bool getDisableDependentsState() const ;
    void setDisableDependentsState(bool) const ;

};
}
}


