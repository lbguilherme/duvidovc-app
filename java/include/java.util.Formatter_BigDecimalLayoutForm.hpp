#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class Formatter_BigDecimalLayoutForm; } }

namespace java {
namespace util {
class Formatter_BigDecimalLayoutForm : public virtual ::java::lang::Object,
                                       public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Formatter_BigDecimalLayoutForm(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Formatter_BigDecimalLayoutForm(const ::java::util::Formatter_BigDecimalLayoutForm& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    Formatter_BigDecimalLayoutForm(::java::util::Formatter_BigDecimalLayoutForm&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::Formatter_BigDecimalLayoutForm& operator=(const ::java::util::Formatter_BigDecimalLayoutForm& x) {obj = x.obj; return *this;}
    ::java::util::Formatter_BigDecimalLayoutForm& operator=(::java::util::Formatter_BigDecimalLayoutForm&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::java::util::Formatter_BigDecimalLayoutForm> values();
    static ::java::util::Formatter_BigDecimalLayoutForm valueOf(const ::java::lang::String&);

};
}
}


