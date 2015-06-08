#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.EventListener.hpp"

namespace java { namespace util { namespace prefs { class PreferenceChangeEvent; } } }

namespace java {
namespace util {
namespace prefs {
class PreferenceChangeListener : public virtual ::java::lang::Object,
                                 public virtual ::java::util::EventListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PreferenceChangeListener(jobject _obj) : ::java::lang::Object(_obj), ::java::util::EventListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PreferenceChangeListener(const ::java::util::prefs::PreferenceChangeListener& x) : ::java::lang::Object((jobject)0), ::java::util::EventListener((jobject)0) {obj = x.obj;}
    PreferenceChangeListener(::java::util::prefs::PreferenceChangeListener&& x) : ::java::lang::Object((jobject)0), ::java::util::EventListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::prefs::PreferenceChangeListener& operator=(const ::java::util::prefs::PreferenceChangeListener& x) {obj = x.obj; return *this;}
    ::java::util::prefs::PreferenceChangeListener& operator=(::java::util::prefs::PreferenceChangeListener&& x) {obj = std::move(x.obj); return *this;}
    
    void preferenceChange(const ::java::util::prefs::PreferenceChangeEvent&) const;

};
}
}
}


