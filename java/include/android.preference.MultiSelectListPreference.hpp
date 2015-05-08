#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.preference.DialogPreference.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Set; } }

namespace android {
namespace preference {
class MultiSelectListPreference : public virtual ::java::lang::Object,
                                  public virtual ::android::preference::DialogPreference {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MultiSelectListPreference(jobject _obj) : ::java::lang::Object(_obj), ::android::content::DialogInterface_OnClickListener(_obj), ::android::content::DialogInterface_OnDismissListener(_obj), ::android::preference::DialogPreference(_obj), ::android::preference::Preference(_obj), ::android::preference::PreferenceManager_OnActivityDestroyListener(_obj), ::java::lang::Comparable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MultiSelectListPreference(const ::android::preference::MultiSelectListPreference& x) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::content::DialogInterface_OnDismissListener((jobject)0), ::android::preference::DialogPreference((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::PreferenceManager_OnActivityDestroyListener((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj;}
    MultiSelectListPreference(::android::preference::MultiSelectListPreference&& x) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::content::DialogInterface_OnDismissListener((jobject)0), ::android::preference::DialogPreference((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::PreferenceManager_OnActivityDestroyListener((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::preference::MultiSelectListPreference& operator=(const ::android::preference::MultiSelectListPreference& x) {obj = x.obj; return *this;}
    ::android::preference::MultiSelectListPreference& operator=(::android::preference::MultiSelectListPreference&& x) {obj = std::move(x.obj); return *this;}
    
    MultiSelectListPreference(const ::android::content::Context&, const ::android::util::AttributeSet&);
    MultiSelectListPreference(const ::android::content::Context&);
    void setEntries(const std::vector< ::java::lang::CharSequence>&) const ;
    void setEntries(int32_t) const ;
    std::vector< ::java::lang::CharSequence> getEntries() const ;
    void setEntryValues(const std::vector< ::java::lang::CharSequence>&) const ;
    void setEntryValues(int32_t) const ;
    std::vector< ::java::lang::CharSequence> getEntryValues() const ;
    void setValues(const ::java::util::Set&) const ;
    ::java::util::Set getValues() const ;
    int32_t findIndexOfValue(const ::java::lang::String&) const ;

};
}
}


