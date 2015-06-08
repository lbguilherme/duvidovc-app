#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.text.Format_Field.hpp"

namespace java { namespace text { class DateFormat_Field; } }

namespace java {
namespace text {
class DateFormat_Field : public virtual ::java::lang::Object,
                         public virtual ::java::text::Format_Field {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DateFormat_Field(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::text::AttributedCharacterIterator_Attribute(_obj), ::java::text::Format_Field(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DateFormat_Field(const ::java::text::DateFormat_Field& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::text::AttributedCharacterIterator_Attribute((jobject)0), ::java::text::Format_Field((jobject)0) {obj = x.obj;}
    DateFormat_Field(::java::text::DateFormat_Field&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::text::AttributedCharacterIterator_Attribute((jobject)0), ::java::text::Format_Field((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::text::DateFormat_Field& operator=(const ::java::text::DateFormat_Field& x) {obj = x.obj; return *this;}
    ::java::text::DateFormat_Field& operator=(::java::text::DateFormat_Field&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getCalendarField() const;
    static ::java::text::DateFormat_Field ofCalendarField(int32_t);

};
}
}


