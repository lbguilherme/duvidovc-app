#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"
#include "java.util.Comparator.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace text { class CollationKey; } }
namespace java { namespace text { class Collator; } }
namespace java { namespace util { class Locale; } }

namespace java {
namespace text {
class Collator : public virtual ::java::lang::Object,
                 public virtual ::java::lang::Cloneable,
                 public virtual ::java::util::Comparator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Collator(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj), ::java::util::Comparator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Collator(const ::java::text::Collator& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::Comparator((jobject)0) {obj = x.obj;}
    Collator(::java::text::Collator&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::Comparator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::text::Collator& operator=(const ::java::text::Collator& x) {obj = x.obj; return *this;}
    ::java::text::Collator& operator=(::java::text::Collator&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object clone() const ;
    int32_t compare(const ::java::lang::Object&, const ::java::lang::Object&) const ;
    int32_t compare(const ::java::lang::String&, const ::java::lang::String&) const ;
    bool equals(const ::java::lang::Object&) const ;
    bool equals(const ::java::lang::String&, const ::java::lang::String&) const ;
    static std::vector< ::java::util::Locale> getAvailableLocales();
    ::java::text::CollationKey getCollationKey(const ::java::lang::String&) const ;
    int32_t getDecomposition() const ;
    static ::java::text::Collator getInstance();
    static ::java::text::Collator getInstance(const ::java::util::Locale&);
    int32_t getStrength() const ;
    int32_t hashCode() const ;
    void setDecomposition(int32_t) const ;
    void setStrength(int32_t) const ;

};
}
}


