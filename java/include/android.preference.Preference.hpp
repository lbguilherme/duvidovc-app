#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Comparable.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace content { class SharedPreferences; } }
namespace android { namespace content { class SharedPreferences_Editor; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace preference { class Preference; } }
namespace android { namespace preference { class Preference_OnPreferenceChangeListener; } }
namespace android { namespace preference { class Preference_OnPreferenceClickListener; } }
namespace android { namespace preference { class PreferenceManager; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace preference {
class Preference : public virtual ::java::lang::Object,
                   public virtual ::java::lang::Comparable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Preference(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Comparable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Preference(const ::android::preference::Preference& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj;}
    Preference(::android::preference::Preference&& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::preference::Preference& operator=(const ::android::preference::Preference& x) {obj = x.obj; return *this;}
    ::android::preference::Preference& operator=(::android::preference::Preference&& x) {obj = std::move(x.obj); return *this;}
    
    Preference(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    Preference(const ::android::content::Context&, const ::android::util::AttributeSet&);
    Preference(const ::android::content::Context&);
    void setIntent(const ::android::content::Intent&) const ;
    ::android::content::Intent getIntent() const ;
    void setFragment(const ::java::lang::String&) const ;
    ::java::lang::String getFragment() const ;
    ::android::os::Bundle getExtras() const ;
    ::android::os::Bundle peekExtras() const ;
    void setLayoutResource(int32_t) const ;
    int32_t getLayoutResource() const ;
    void setWidgetLayoutResource(int32_t) const ;
    int32_t getWidgetLayoutResource() const ;
    ::android::view::View getView(const ::android::view::View&, const ::android::view::ViewGroup&) const ;
    void setOrder(int32_t) const ;
    int32_t getOrder() const ;
    void setTitle(const ::java::lang::CharSequence&) const ;
    void setTitle(int32_t) const ;
    int32_t getTitleRes() const ;
    ::java::lang::CharSequence getTitle() const ;
    void setIcon(const ::android::graphics::drawable::Drawable&) const ;
    void setIcon(int32_t) const ;
    ::android::graphics::drawable::Drawable getIcon() const ;
    ::java::lang::CharSequence getSummary() const ;
    void setSummary(const ::java::lang::CharSequence&) const ;
    void setSummary(int32_t) const ;
    void setEnabled(bool) const ;
    bool isEnabled() const ;
    void setSelectable(bool) const ;
    bool isSelectable() const ;
    void setShouldDisableView(bool) const ;
    bool getShouldDisableView() const ;
    void setKey(const ::java::lang::String&) const ;
    ::java::lang::String getKey() const ;
    bool hasKey() const ;
    bool isPersistent() const ;
    void setPersistent(bool) const ;
    void setOnPreferenceChangeListener(const ::android::preference::Preference_OnPreferenceChangeListener&) const ;
    ::android::preference::Preference_OnPreferenceChangeListener getOnPreferenceChangeListener() const ;
    void setOnPreferenceClickListener(const ::android::preference::Preference_OnPreferenceClickListener&) const ;
    ::android::preference::Preference_OnPreferenceClickListener getOnPreferenceClickListener() const ;
    ::android::content::Context getContext() const ;
    ::android::content::SharedPreferences getSharedPreferences() const ;
    ::android::content::SharedPreferences_Editor getEditor() const ;
    bool shouldCommit() const ;
    int32_t compareTo(const ::android::preference::Preference&) const ;
    ::android::preference::PreferenceManager getPreferenceManager() const ;
    void notifyDependencyChange(bool) const ;
    void onDependencyChanged(const ::android::preference::Preference&, bool) const ;
    bool shouldDisableDependents() const ;
    void setDependency(const ::java::lang::String&) const ;
    ::java::lang::String getDependency() const ;
    void setDefaultValue(const ::java::lang::Object&) const ;
    ::java::lang::String toString() const ;
    void saveHierarchyState(const ::android::os::Bundle&) const ;
    void restoreHierarchyState(const ::android::os::Bundle&) const ;
    int32_t compareTo(const ::java::lang::Object&) const ;

};
}
}

#include "android.preference.Preference_BaseSavedState.hpp"
#include "android.preference.Preference_OnPreferenceChangeListener.hpp"
#include "android.preference.Preference_OnPreferenceClickListener.hpp"

