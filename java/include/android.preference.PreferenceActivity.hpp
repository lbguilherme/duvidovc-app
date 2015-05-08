#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.ListActivity.hpp"
#include "android.preference.PreferenceFragment_OnPreferenceStartFragmentCallback.hpp"

namespace android { namespace app { class Fragment; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace preference { class Preference; } }
namespace android { namespace preference { class PreferenceActivity_Header; } }
namespace android { namespace preference { class PreferenceFragment; } }
namespace android { namespace preference { class PreferenceManager; } }
namespace android { namespace preference { class PreferenceScreen; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class View_OnClickListener; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace android {
namespace preference {
class PreferenceActivity : public virtual ::java::lang::Object,
                           public virtual ::android::app::ListActivity,
                           public virtual ::android::preference::PreferenceFragment_OnPreferenceStartFragmentCallback {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PreferenceActivity(jobject _obj) : ::java::lang::Object(_obj), ::android::app::Activity(_obj), ::android::app::ListActivity(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::content::Context(_obj), ::android::content::ContextWrapper(_obj), ::android::preference::PreferenceFragment_OnPreferenceStartFragmentCallback(_obj), ::android::view::ContextThemeWrapper(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::LayoutInflater_Factory(_obj), ::android::view::LayoutInflater_Factory2(_obj), ::android::view::View_OnCreateContextMenuListener(_obj), ::android::view::Window_Callback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PreferenceActivity(const ::android::preference::PreferenceActivity& x) : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::app::ListActivity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::preference::PreferenceFragment_OnPreferenceStartFragmentCallback((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {obj = x.obj;}
    PreferenceActivity(::android::preference::PreferenceActivity&& x) : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::app::ListActivity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::preference::PreferenceFragment_OnPreferenceStartFragmentCallback((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::preference::PreferenceActivity& operator=(const ::android::preference::PreferenceActivity& x) {obj = x.obj; return *this;}
    ::android::preference::PreferenceActivity& operator=(::android::preference::PreferenceActivity&& x) {obj = std::move(x.obj); return *this;}
    
    PreferenceActivity();
    bool hasHeaders() const ;
    bool isMultiPane() const ;
    bool onIsMultiPane() const ;
    bool onIsHidingHeaders() const ;
    ::android::preference::PreferenceActivity_Header onGetInitialHeader() const ;
    ::android::preference::PreferenceActivity_Header onGetNewHeader() const ;
    void onBuildHeaders(const ::java::util::List&) const ;
    void invalidateHeaders() const ;
    void loadHeadersFromResource(int32_t, const ::java::util::List&) const ;
    void setListFooter(const ::android::view::View&) const ;
    void onContentChanged() const ;
    void onHeaderClick(const ::android::preference::PreferenceActivity_Header&, int32_t) const ;
    ::android::content::Intent onBuildStartFragmentIntent(const ::java::lang::String&, const ::android::os::Bundle&, int32_t, int32_t) const ;
    void startWithFragment(const ::java::lang::String&, const ::android::os::Bundle&, const ::android::app::Fragment&, int32_t) const ;
    void startWithFragment(const ::java::lang::String&, const ::android::os::Bundle&, const ::android::app::Fragment&, int32_t, int32_t, int32_t) const ;
    void showBreadCrumbs(const ::java::lang::CharSequence&, const ::java::lang::CharSequence&) const ;
    void setParentTitle(const ::java::lang::CharSequence&, const ::java::lang::CharSequence&, const ::android::view::View_OnClickListener&) const ;
    void switchToHeader(const ::java::lang::String&, const ::android::os::Bundle&) const ;
    void switchToHeader(const ::android::preference::PreferenceActivity_Header&) const ;
    void startPreferenceFragment(const ::android::app::Fragment&, bool) const ;
    void startPreferencePanel(const ::java::lang::String&, const ::android::os::Bundle&, int32_t, const ::java::lang::CharSequence&, const ::android::app::Fragment&, int32_t) const ;
    void finishPreferencePanel(const ::android::app::Fragment&, int32_t, const ::android::content::Intent&) const ;
    bool onPreferenceStartFragment(const ::android::preference::PreferenceFragment&, const ::android::preference::Preference&) const ;
    ::android::preference::PreferenceManager getPreferenceManager() const ;
    void setPreferenceScreen(const ::android::preference::PreferenceScreen&) const ;
    ::android::preference::PreferenceScreen getPreferenceScreen() const ;
    void addPreferencesFromIntent(const ::android::content::Intent&) const ;
    void addPreferencesFromResource(int32_t) const ;
    bool onPreferenceTreeClick(const ::android::preference::PreferenceScreen&, const ::android::preference::Preference&) const ;
    ::android::preference::Preference findPreference(const ::java::lang::CharSequence&) const ;

};
}
}

#include "android.preference.PreferenceActivity_Header.hpp"

