#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace util { namespace prefs { class Preferences; } } }

namespace java {
namespace util {
namespace prefs {
class PreferencesFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PreferencesFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PreferencesFactory(const ::java::util::prefs::PreferencesFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PreferencesFactory(::java::util::prefs::PreferencesFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::prefs::PreferencesFactory& operator=(const ::java::util::prefs::PreferencesFactory& x) {obj = x.obj; return *this;}
    ::java::util::prefs::PreferencesFactory& operator=(::java::util::prefs::PreferencesFactory&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::util::prefs::Preferences userRoot() const;
    ::java::util::prefs::Preferences systemRoot() const;

};
}
}
}


