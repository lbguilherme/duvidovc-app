#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace content { class SharedPreferences; } }
namespace android { namespace preference { class Preference; } }
namespace android { namespace preference { class PreferenceScreen; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace preference {
class PreferenceManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PreferenceManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PreferenceManager(const ::android::preference::PreferenceManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PreferenceManager(::android::preference::PreferenceManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::preference::PreferenceManager& operator=(const ::android::preference::PreferenceManager& x) {obj = x.obj; return *this;}
    ::android::preference::PreferenceManager& operator=(::android::preference::PreferenceManager&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::preference::PreferenceScreen createPreferenceScreen(const ::android::content::Context&) const ;
    ::java::lang::String getSharedPreferencesName() const ;
    void setSharedPreferencesName(const ::java::lang::String&) const ;
    int32_t getSharedPreferencesMode() const ;
    void setSharedPreferencesMode(int32_t) const ;
    ::android::content::SharedPreferences getSharedPreferences() const ;
    static ::android::content::SharedPreferences getDefaultSharedPreferences(const ::android::content::Context&);
    ::android::preference::Preference findPreference(const ::java::lang::CharSequence&) const ;
    static void setDefaultValues(const ::android::content::Context&, int32_t, bool);
    static void setDefaultValues(const ::android::content::Context&, const ::java::lang::String&, int32_t, int32_t, bool);

};
}
}

#include "android.preference.PreferenceManager_OnActivityDestroyListener.hpp"
#include "android.preference.PreferenceManager_OnActivityResultListener.hpp"
#include "android.preference.PreferenceManager_OnActivityStopListener.hpp"

