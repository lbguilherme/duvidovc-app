#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.preference.Preference.hpp"
#include "android.preference.PreferenceManager_OnActivityResultListener.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace util { class AttributeSet; } }

namespace android {
namespace preference {
class RingtonePreference : public virtual ::java::lang::Object,
                           public virtual ::android::preference::Preference,
                           public virtual ::android::preference::PreferenceManager_OnActivityResultListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RingtonePreference(jobject _obj) : ::java::lang::Object(_obj), ::android::preference::Preference(_obj), ::android::preference::PreferenceManager_OnActivityResultListener(_obj), ::java::lang::Comparable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RingtonePreference(const ::android::preference::RingtonePreference& x) : ::java::lang::Object((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::PreferenceManager_OnActivityResultListener((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj;}
    RingtonePreference(::android::preference::RingtonePreference&& x) : ::java::lang::Object((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::PreferenceManager_OnActivityResultListener((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::preference::RingtonePreference& operator=(const ::android::preference::RingtonePreference& x) {obj = x.obj; return *this;}
    ::android::preference::RingtonePreference& operator=(::android::preference::RingtonePreference&& x) {obj = std::move(x.obj); return *this;}
    
    RingtonePreference(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    RingtonePreference(const ::android::content::Context&, const ::android::util::AttributeSet&);
    RingtonePreference(const ::android::content::Context&);
    int32_t getRingtoneType() const ;
    void setRingtoneType(int32_t) const ;
    bool getShowDefault() const ;
    void setShowDefault(bool) const ;
    bool getShowSilent() const ;
    void setShowSilent(bool) const ;
    bool onActivityResult(int32_t, int32_t, const ::android::content::Intent&) const ;

};
}
}


