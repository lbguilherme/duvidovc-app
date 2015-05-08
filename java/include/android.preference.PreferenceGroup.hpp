#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.preference.Preference.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace preference { class Preference; } }
namespace android { namespace util { class AttributeSet; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace preference {
class PreferenceGroup : public virtual ::java::lang::Object,
                        public virtual ::android::preference::Preference {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PreferenceGroup(jobject _obj) : ::java::lang::Object(_obj), ::android::preference::Preference(_obj), ::java::lang::Comparable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PreferenceGroup(const ::android::preference::PreferenceGroup& x) : ::java::lang::Object((jobject)0), ::android::preference::Preference((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj;}
    PreferenceGroup(::android::preference::PreferenceGroup&& x) : ::java::lang::Object((jobject)0), ::android::preference::Preference((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::preference::PreferenceGroup& operator=(const ::android::preference::PreferenceGroup& x) {obj = x.obj; return *this;}
    ::android::preference::PreferenceGroup& operator=(::android::preference::PreferenceGroup&& x) {obj = std::move(x.obj); return *this;}
    
    PreferenceGroup(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    PreferenceGroup(const ::android::content::Context&, const ::android::util::AttributeSet&);
    void setOrderingAsAdded(bool) const ;
    bool isOrderingAsAdded() const ;
    void addItemFromInflater(const ::android::preference::Preference&) const ;
    int32_t getPreferenceCount() const ;
    ::android::preference::Preference getPreference(int32_t) const ;
    bool addPreference(const ::android::preference::Preference&) const ;
    bool removePreference(const ::android::preference::Preference&) const ;
    void removeAll() const ;
    ::android::preference::Preference findPreference(const ::java::lang::CharSequence&) const ;
    void setEnabled(bool) const ;

};
}
}


