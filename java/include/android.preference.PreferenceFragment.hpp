#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.Fragment.hpp"

namespace android { namespace content { class Intent; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace preference { class Preference; } }
namespace android { namespace preference { class PreferenceManager; } }
namespace android { namespace preference { class PreferenceScreen; } }
namespace android { namespace view { class LayoutInflater; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace preference {
class PreferenceFragment : public virtual ::java::lang::Object,
                           public virtual ::android::app::Fragment {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PreferenceFragment(jobject _obj) : ::java::lang::Object(_obj), ::android::app::Fragment(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::view::View_OnCreateContextMenuListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PreferenceFragment(const ::android::preference::PreferenceFragment& x) : ::java::lang::Object((jobject)0), ::android::app::Fragment((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0) {obj = x.obj;}
    PreferenceFragment(::android::preference::PreferenceFragment&& x) : ::java::lang::Object((jobject)0), ::android::app::Fragment((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::preference::PreferenceFragment& operator=(const ::android::preference::PreferenceFragment& x) {obj = x.obj; return *this;}
    ::android::preference::PreferenceFragment& operator=(::android::preference::PreferenceFragment&& x) {obj = std::move(x.obj); return *this;}
    
    PreferenceFragment();
    void onCreate(const ::android::os::Bundle&) const ;
    ::android::view::View onCreateView(const ::android::view::LayoutInflater&, const ::android::view::ViewGroup&, const ::android::os::Bundle&) const ;
    void onActivityCreated(const ::android::os::Bundle&) const ;
    void onStart() const ;
    void onStop() const ;
    void onDestroyView() const ;
    void onDestroy() const ;
    void onSaveInstanceState(const ::android::os::Bundle&) const ;
    void onActivityResult(int32_t, int32_t, const ::android::content::Intent&) const ;
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

#include "android.preference.PreferenceFragment_OnPreferenceStartFragmentCallback.hpp"

