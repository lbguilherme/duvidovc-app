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
namespace android { namespace widget { class EditText; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace preference {
class EditTextPreference : public virtual ::java::lang::Object,
                           public virtual ::android::preference::DialogPreference {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EditTextPreference(jobject _obj) : ::java::lang::Object(_obj), ::android::content::DialogInterface_OnClickListener(_obj), ::android::content::DialogInterface_OnDismissListener(_obj), ::android::preference::DialogPreference(_obj), ::android::preference::Preference(_obj), ::android::preference::PreferenceManager_OnActivityDestroyListener(_obj), ::java::lang::Comparable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EditTextPreference(const ::android::preference::EditTextPreference& x) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::content::DialogInterface_OnDismissListener((jobject)0), ::android::preference::DialogPreference((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::PreferenceManager_OnActivityDestroyListener((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj;}
    EditTextPreference(::android::preference::EditTextPreference&& x) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::content::DialogInterface_OnDismissListener((jobject)0), ::android::preference::DialogPreference((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::PreferenceManager_OnActivityDestroyListener((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::preference::EditTextPreference& operator=(const ::android::preference::EditTextPreference& x) {obj = x.obj; return *this;}
    ::android::preference::EditTextPreference& operator=(::android::preference::EditTextPreference&& x) {obj = std::move(x.obj); return *this;}
    
    EditTextPreference(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    EditTextPreference(const ::android::content::Context&, const ::android::util::AttributeSet&);
    EditTextPreference(const ::android::content::Context&);
    void setText(const ::java::lang::String&) const ;
    ::java::lang::String getText() const ;
    bool shouldDisableDependents() const ;
    ::android::widget::EditText getEditText() const ;

};
}
}


