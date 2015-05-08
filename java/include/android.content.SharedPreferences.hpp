#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class SharedPreferences_Editor; } }
namespace android { namespace content { class SharedPreferences_OnSharedPreferenceChangeListener; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Map; } }
namespace java { namespace util { class Set; } }

namespace android {
namespace content {
class SharedPreferences : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SharedPreferences(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SharedPreferences(const ::android::content::SharedPreferences& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SharedPreferences(::android::content::SharedPreferences&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::SharedPreferences& operator=(const ::android::content::SharedPreferences& x) {obj = x.obj; return *this;}
    ::android::content::SharedPreferences& operator=(::android::content::SharedPreferences&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::util::Map getAll() const ;
    ::java::lang::String getString(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::java::util::Set getStringSet(const ::java::lang::String&, const ::java::util::Set&) const ;
    int32_t getInt(const ::java::lang::String&, int32_t) const ;
    int64_t getLong(const ::java::lang::String&, int64_t) const ;
    float getFloat(const ::java::lang::String&, float) const ;
    bool getBoolean(const ::java::lang::String&, bool) const ;
    bool contains(const ::java::lang::String&) const ;
    ::android::content::SharedPreferences_Editor edit() const ;
    void registerOnSharedPreferenceChangeListener(const ::android::content::SharedPreferences_OnSharedPreferenceChangeListener&) const ;
    void unregisterOnSharedPreferenceChangeListener(const ::android::content::SharedPreferences_OnSharedPreferenceChangeListener&) const ;

};
}
}

#include "android.content.SharedPreferences_Editor.hpp"
#include "android.content.SharedPreferences_OnSharedPreferenceChangeListener.hpp"

