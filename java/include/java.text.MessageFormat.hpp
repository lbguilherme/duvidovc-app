#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.text.Format.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class StringBuffer; } }
namespace java { namespace text { class AttributedCharacterIterator; } }
namespace java { namespace text { class FieldPosition; } }
namespace java { namespace text { class Format; } }
namespace java { namespace text { class ParsePosition; } }
namespace java { namespace util { class Locale; } }

namespace java {
namespace text {
class MessageFormat : public virtual ::java::lang::Object,
                      public virtual ::java::text::Format {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MessageFormat(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::text::Format(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MessageFormat(const ::java::text::MessageFormat& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::Format((jobject)0) {obj = x.obj;}
    MessageFormat(::java::text::MessageFormat&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::Format((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::text::MessageFormat& operator=(const ::java::text::MessageFormat& x) {obj = x.obj; return *this;}
    ::java::text::MessageFormat& operator=(::java::text::MessageFormat&& x) {obj = std::move(x.obj); return *this;}
    
    MessageFormat(const ::java::lang::String&, const ::java::util::Locale&);
    MessageFormat(const ::java::lang::String&);
    void applyPattern(const ::java::lang::String&) const ;
    ::java::lang::Object clone() const ;
    bool equals(const ::java::lang::Object&) const ;
    ::java::text::AttributedCharacterIterator formatToCharacterIterator(const ::java::lang::Object&) const ;
    ::java::lang::StringBuffer format(const std::vector< ::java::lang::Object>&, const ::java::lang::StringBuffer&, const ::java::text::FieldPosition&) const ;
    ::java::lang::StringBuffer format(const ::java::lang::Object&, const ::java::lang::StringBuffer&, const ::java::text::FieldPosition&) const ;
    static ::java::lang::String format(const ::java::lang::String&, const std::vector< ::java::lang::Object>&);
    std::vector< ::java::text::Format> getFormats() const ;
    std::vector< ::java::text::Format> getFormatsByArgumentIndex() const ;
    void setFormatByArgumentIndex(int32_t, const ::java::text::Format&) const ;
    void setFormatsByArgumentIndex(const std::vector< ::java::text::Format>&) const ;
    ::java::util::Locale getLocale() const ;
    int32_t hashCode() const ;
    std::vector< ::java::lang::Object> parse(const ::java::lang::String&) const ;
    std::vector< ::java::lang::Object> parse(const ::java::lang::String&, const ::java::text::ParsePosition&) const ;
    ::java::lang::Object parseObject(const ::java::lang::String&, const ::java::text::ParsePosition&) const ;
    void setFormat(int32_t, const ::java::text::Format&) const ;
    void setFormats(const std::vector< ::java::text::Format>&) const ;
    void setLocale(const ::java::util::Locale&) const ;
    ::java::lang::String toPattern() const ;

};
}
}

#include "java.text.MessageFormat_Field.hpp"

