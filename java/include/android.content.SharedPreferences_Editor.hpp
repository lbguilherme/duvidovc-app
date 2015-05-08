#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class SharedPreferences_Editor; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Set; } }

namespace android {
namespace content {
class SharedPreferences_Editor : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SharedPreferences_Editor(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SharedPreferences_Editor(const ::android::content::SharedPreferences_Editor& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SharedPreferences_Editor(::android::content::SharedPreferences_Editor&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::SharedPreferences_Editor& operator=(const ::android::content::SharedPreferences_Editor& x) {obj = x.obj; return *this;}
    ::android::content::SharedPreferences_Editor& operator=(::android::content::SharedPreferences_Editor&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::content::SharedPreferences_Editor putString(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::android::content::SharedPreferences_Editor putStringSet(const ::java::lang::String&, const ::java::util::Set&) const ;
    ::android::content::SharedPreferences_Editor putInt(const ::java::lang::String&, int32_t) const ;
    ::android::content::SharedPreferences_Editor putLong(const ::java::lang::String&, int64_t) const ;
    ::android::content::SharedPreferences_Editor putFloat(const ::java::lang::String&, float) const ;
    ::android::content::SharedPreferences_Editor putBoolean(const ::java::lang::String&, bool) const ;
    ::android::content::SharedPreferences_Editor remove(const ::java::lang::String&) const ;
    ::android::content::SharedPreferences_Editor clear() const ;
    bool commit() const ;
    void apply() const ;

};
}
}


