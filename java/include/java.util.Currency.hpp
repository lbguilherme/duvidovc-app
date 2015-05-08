#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class Currency; } }
namespace java { namespace util { class Locale; } }

namespace java {
namespace util {
class Currency : public virtual ::java::lang::Object,
                 public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Currency(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Currency(const ::java::util::Currency& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    Currency(::java::util::Currency&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::Currency& operator=(const ::java::util::Currency& x) {obj = x.obj; return *this;}
    ::java::util::Currency& operator=(::java::util::Currency&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::util::Currency getInstance(const ::java::lang::String&);
    static ::java::util::Currency getInstance(const ::java::util::Locale&);
    ::java::lang::String getCurrencyCode() const ;
    ::java::lang::String getSymbol() const ;
    ::java::lang::String getSymbol(const ::java::util::Locale&) const ;
    int32_t getDefaultFractionDigits() const ;
    ::java::lang::String toString() const ;

};
}
}


