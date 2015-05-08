#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.util.EventObject.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { namespace prefs { class Preferences; } } }

namespace java {
namespace util {
namespace prefs {
class PreferenceChangeEvent : public virtual ::java::lang::Object,
                              public virtual ::java::io::Serializable,
                              public virtual ::java::util::EventObject {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PreferenceChangeEvent(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::util::EventObject(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PreferenceChangeEvent(const ::java::util::prefs::PreferenceChangeEvent& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::EventObject((jobject)0) {obj = x.obj;}
    PreferenceChangeEvent(::java::util::prefs::PreferenceChangeEvent&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::EventObject((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::prefs::PreferenceChangeEvent& operator=(const ::java::util::prefs::PreferenceChangeEvent& x) {obj = x.obj; return *this;}
    ::java::util::prefs::PreferenceChangeEvent& operator=(::java::util::prefs::PreferenceChangeEvent&& x) {obj = std::move(x.obj); return *this;}
    
    PreferenceChangeEvent(const ::java::util::prefs::Preferences&, const ::java::lang::String&, const ::java::lang::String&);
    ::java::lang::String getKey() const ;
    ::java::lang::String getNewValue() const ;
    ::java::util::prefs::Preferences getNode() const ;

};
}
}
}


