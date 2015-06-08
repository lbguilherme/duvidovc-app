#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Cloneable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Locale; } }

namespace java {
namespace util {
class Locale : public virtual ::java::lang::Object,
               public virtual ::java::io::Serializable,
               public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Locale(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Locale(const ::java::util::Locale& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    Locale(::java::util::Locale&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::Locale& operator=(const ::java::util::Locale& x) {obj = x.obj; return *this;}
    ::java::util::Locale& operator=(::java::util::Locale&& x) {obj = std::move(x.obj); return *this;}
    
    Locale(const ::java::lang::String&);
    Locale(const ::java::lang::String&, const ::java::lang::String&);
    Locale(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);
    ::java::lang::Object clone() const;
    bool equals(const ::java::lang::Object&) const;
    static std::vector< ::java::util::Locale> getAvailableLocales();
    ::java::lang::String getCountry() const;
    static ::java::util::Locale getDefault();
    ::java::lang::String getDisplayCountry() const;
    ::java::lang::String getDisplayCountry(const ::java::util::Locale&) const;
    ::java::lang::String getDisplayLanguage() const;
    ::java::lang::String getDisplayLanguage(const ::java::util::Locale&) const;
    ::java::lang::String getDisplayName() const;
    ::java::lang::String getDisplayName(const ::java::util::Locale&) const;
    ::java::lang::String getDisplayVariant() const;
    ::java::lang::String getDisplayVariant(const ::java::util::Locale&) const;
    ::java::lang::String getISO3Country() const;
    ::java::lang::String getISO3Language() const;
    static std::vector< ::java::lang::String> getISOCountries();
    static std::vector< ::java::lang::String> getISOLanguages();
    ::java::lang::String getLanguage() const;
    ::java::lang::String getVariant() const;
    int32_t hashCode() const;
    static void setDefault(const ::java::util::Locale&);
    ::java::lang::String toString() const;

};
}
}


