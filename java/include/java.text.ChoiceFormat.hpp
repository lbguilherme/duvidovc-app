#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.text.NumberFormat.hpp"

namespace java { namespace lang { class Number; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class StringBuffer; } }
namespace java { namespace text { class FieldPosition; } }
namespace java { namespace text { class ParsePosition; } }

namespace java {
namespace text {
class ChoiceFormat : public virtual ::java::lang::Object,
                     public virtual ::java::text::NumberFormat {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ChoiceFormat(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::text::Format(_obj), ::java::text::NumberFormat(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ChoiceFormat(const ::java::text::ChoiceFormat& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::Format((jobject)0), ::java::text::NumberFormat((jobject)0) {obj = x.obj;}
    ChoiceFormat(::java::text::ChoiceFormat&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::Format((jobject)0), ::java::text::NumberFormat((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::text::ChoiceFormat& operator=(const ::java::text::ChoiceFormat& x) {obj = x.obj; return *this;}
    ::java::text::ChoiceFormat& operator=(::java::text::ChoiceFormat&& x) {obj = std::move(x.obj); return *this;}
    
    ChoiceFormat(const std::vector< double>&, const std::vector< ::java::lang::String>&);
    ChoiceFormat(const ::java::lang::String&);
    void applyPattern(const ::java::lang::String&) const ;
    ::java::lang::Object clone() const ;
    bool equals(const ::java::lang::Object&) const ;
    ::java::lang::StringBuffer format(double, const ::java::lang::StringBuffer&, const ::java::text::FieldPosition&) const ;
    ::java::lang::StringBuffer format(int64_t, const ::java::lang::StringBuffer&, const ::java::text::FieldPosition&) const ;
    std::vector< ::java::lang::Object> getFormats() const ;
    std::vector< double> getLimits() const ;
    int32_t hashCode() const ;
    static double nextDouble(double);
    static double nextDouble(double, bool);
    ::java::lang::Number parse(const ::java::lang::String&, const ::java::text::ParsePosition&) const ;
    static double previousDouble(double);
    void setChoices(const std::vector< double>&, const std::vector< ::java::lang::String>&) const ;
    ::java::lang::String toPattern() const ;

};
}
}


