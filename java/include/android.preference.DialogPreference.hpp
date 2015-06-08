#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.DialogInterface_OnClickListener.hpp"
#include "android.content.DialogInterface_OnDismissListener.hpp"
#include "android.preference.Preference.hpp"
#include "android.preference.PreferenceManager_OnActivityDestroyListener.hpp"

namespace android { namespace app { class Dialog; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class DialogInterface; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace util { class AttributeSet; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace preference {
class DialogPreference : public virtual ::java::lang::Object,
                         public virtual ::android::content::DialogInterface_OnClickListener,
                         public virtual ::android::content::DialogInterface_OnDismissListener,
                         public virtual ::android::preference::Preference,
                         public virtual ::android::preference::PreferenceManager_OnActivityDestroyListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DialogPreference(jobject _obj) : ::java::lang::Object(_obj), ::android::content::DialogInterface_OnClickListener(_obj), ::android::content::DialogInterface_OnDismissListener(_obj), ::android::preference::Preference(_obj), ::android::preference::PreferenceManager_OnActivityDestroyListener(_obj), ::java::lang::Comparable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DialogPreference(const ::android::preference::DialogPreference& x) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::content::DialogInterface_OnDismissListener((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::PreferenceManager_OnActivityDestroyListener((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj;}
    DialogPreference(::android::preference::DialogPreference&& x) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::content::DialogInterface_OnDismissListener((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::PreferenceManager_OnActivityDestroyListener((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::preference::DialogPreference& operator=(const ::android::preference::DialogPreference& x) {obj = x.obj; return *this;}
    ::android::preference::DialogPreference& operator=(::android::preference::DialogPreference&& x) {obj = std::move(x.obj); return *this;}
    
    DialogPreference(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    DialogPreference(const ::android::content::Context&, const ::android::util::AttributeSet&);
    void setDialogTitle(const ::java::lang::CharSequence&) const;
    void setDialogTitle(int32_t) const;
    ::java::lang::CharSequence getDialogTitle() const;
    void setDialogMessage(const ::java::lang::CharSequence&) const;
    void setDialogMessage(int32_t) const;
    ::java::lang::CharSequence getDialogMessage() const;
    void setDialogIcon(const ::android::graphics::drawable::Drawable&) const;
    void setDialogIcon(int32_t) const;
    ::android::graphics::drawable::Drawable getDialogIcon() const;
    void setPositiveButtonText(const ::java::lang::CharSequence&) const;
    void setPositiveButtonText(int32_t) const;
    ::java::lang::CharSequence getPositiveButtonText() const;
    void setNegativeButtonText(const ::java::lang::CharSequence&) const;
    void setNegativeButtonText(int32_t) const;
    ::java::lang::CharSequence getNegativeButtonText() const;
    void setDialogLayoutResource(int32_t) const;
    int32_t getDialogLayoutResource() const;
    void onClick(const ::android::content::DialogInterface&, int32_t) const;
    void onDismiss(const ::android::content::DialogInterface&) const;
    ::android::app::Dialog getDialog() const;
    void onActivityDestroy() const;

};
}
}


