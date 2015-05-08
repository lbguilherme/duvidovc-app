#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace text { class AttributedCharacterIterator; } }
namespace java { namespace text { class AttributedCharacterIterator_Attribute; } }
namespace java { namespace util { class Map; } }

namespace java {
namespace text {
class AttributedString : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AttributedString(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AttributedString(const ::java::text::AttributedString& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AttributedString(::java::text::AttributedString&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::text::AttributedString& operator=(const ::java::text::AttributedString& x) {obj = x.obj; return *this;}
    ::java::text::AttributedString& operator=(::java::text::AttributedString&& x) {obj = std::move(x.obj); return *this;}
    
    AttributedString(const ::java::text::AttributedCharacterIterator&);
    AttributedString(const ::java::text::AttributedCharacterIterator&, int32_t, int32_t);
    AttributedString(const ::java::text::AttributedCharacterIterator&, int32_t, int32_t, const std::vector< ::java::text::AttributedCharacterIterator_Attribute>&);
    AttributedString(const ::java::lang::String&);
    AttributedString(const ::java::lang::String&, const ::java::util::Map&);
    void addAttribute(const ::java::text::AttributedCharacterIterator_Attribute&, const ::java::lang::Object&) const ;
    void addAttribute(const ::java::text::AttributedCharacterIterator_Attribute&, const ::java::lang::Object&, int32_t, int32_t) const ;
    void addAttributes(const ::java::util::Map&, int32_t, int32_t) const ;
    ::java::text::AttributedCharacterIterator getIterator() const ;
    ::java::text::AttributedCharacterIterator getIterator(const std::vector< ::java::text::AttributedCharacterIterator_Attribute>&) const ;
    ::java::text::AttributedCharacterIterator getIterator(const std::vector< ::java::text::AttributedCharacterIterator_Attribute>&, int32_t, int32_t) const ;

};
}
}


