#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.text.Collator.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace text { class CharacterIterator; } }
namespace java { namespace text { class CollationElementIterator; } }
namespace java { namespace text { class CollationKey; } }

namespace java {
namespace text {
class RuleBasedCollator : public virtual ::java::lang::Object,
                          public virtual ::java::text::Collator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RuleBasedCollator(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj), ::java::text::Collator(_obj), ::java::util::Comparator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RuleBasedCollator(const ::java::text::RuleBasedCollator& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::Collator((jobject)0), ::java::util::Comparator((jobject)0) {obj = x.obj;}
    RuleBasedCollator(::java::text::RuleBasedCollator&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::Collator((jobject)0), ::java::util::Comparator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::text::RuleBasedCollator& operator=(const ::java::text::RuleBasedCollator& x) {obj = x.obj; return *this;}
    ::java::text::RuleBasedCollator& operator=(::java::text::RuleBasedCollator&& x) {obj = std::move(x.obj); return *this;}
    
    RuleBasedCollator(const ::java::lang::String&);
    ::java::text::CollationElementIterator getCollationElementIterator(const ::java::text::CharacterIterator&) const ;
    ::java::text::CollationElementIterator getCollationElementIterator(const ::java::lang::String&) const ;
    ::java::lang::String getRules() const ;
    ::java::lang::Object clone() const ;
    int32_t compare(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::java::text::CollationKey getCollationKey(const ::java::lang::String&) const ;
    int32_t hashCode() const ;
    bool equals(const ::java::lang::Object&) const ;

};
}
}


