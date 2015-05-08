#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.DialogInterface_OnDismissListener.hpp"
#include "android.preference.PreferenceGroup.hpp"
#include "android.widget.AdapterView_OnItemClickListener.hpp"

namespace android { namespace app { class Dialog; } }
namespace android { namespace content { class DialogInterface; } }
namespace android { namespace view { class View; } }
namespace android { namespace widget { class AdapterView; } }
namespace android { namespace widget { class ListAdapter; } }
namespace android { namespace widget { class ListView; } }

namespace android {
namespace preference {
class PreferenceScreen : public virtual ::java::lang::Object,
                         public virtual ::android::content::DialogInterface_OnDismissListener,
                         public virtual ::android::preference::PreferenceGroup,
                         public virtual ::android::widget::AdapterView_OnItemClickListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PreferenceScreen(jobject _obj) : ::java::lang::Object(_obj), ::android::content::DialogInterface_OnDismissListener(_obj), ::android::preference::Preference(_obj), ::android::preference::PreferenceGroup(_obj), ::android::widget::AdapterView_OnItemClickListener(_obj), ::java::lang::Comparable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PreferenceScreen(const ::android::preference::PreferenceScreen& x) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface_OnDismissListener((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::PreferenceGroup((jobject)0), ::android::widget::AdapterView_OnItemClickListener((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj;}
    PreferenceScreen(::android::preference::PreferenceScreen&& x) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface_OnDismissListener((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::PreferenceGroup((jobject)0), ::android::widget::AdapterView_OnItemClickListener((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::preference::PreferenceScreen& operator=(const ::android::preference::PreferenceScreen& x) {obj = x.obj; return *this;}
    ::android::preference::PreferenceScreen& operator=(::android::preference::PreferenceScreen&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::widget::ListAdapter getRootAdapter() const ;
    void bind(const ::android::widget::ListView&) const ;
    void onDismiss(const ::android::content::DialogInterface&) const ;
    ::android::app::Dialog getDialog() const ;
    void onItemClick(const ::android::widget::AdapterView&, const ::android::view::View&, int32_t, int64_t) const ;

};
}
}


