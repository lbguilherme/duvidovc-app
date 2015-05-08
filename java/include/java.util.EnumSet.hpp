#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Cloneable.hpp"
#include "java.util.AbstractSet.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Enum; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class EnumSet; } }

namespace java {
namespace util {
class EnumSet : public virtual ::java::lang::Object,
                public virtual ::java::io::Serializable,
                public virtual ::java::lang::Cloneable,
                public virtual ::java::util::AbstractSet {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EnumSet(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::lang::Iterable(_obj), ::java::util::AbstractCollection(_obj), ::java::util::AbstractSet(_obj), ::java::util::Collection(_obj), ::java::util::Set(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EnumSet(const ::java::util::EnumSet& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Set((jobject)0) {obj = x.obj;}
    EnumSet(::java::util::EnumSet&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Set((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::EnumSet& operator=(const ::java::util::EnumSet& x) {obj = x.obj; return *this;}
    ::java::util::EnumSet& operator=(::java::util::EnumSet&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::util::EnumSet noneOf(const ::java::lang::Class&);
    static ::java::util::EnumSet allOf(const ::java::lang::Class&);
    static ::java::util::EnumSet copyOf(const ::java::util::EnumSet&);
    static ::java::util::EnumSet copyOf(const ::java::util::Collection&);
    static ::java::util::EnumSet complementOf(const ::java::util::EnumSet&);
    static ::java::util::EnumSet of(const ::java::lang::Enum&);
    static ::java::util::EnumSet of(const ::java::lang::Enum&, const ::java::lang::Enum&);
    static ::java::util::EnumSet of(const ::java::lang::Enum&, const ::java::lang::Enum&, const ::java::lang::Enum&);
    static ::java::util::EnumSet of(const ::java::lang::Enum&, const ::java::lang::Enum&, const ::java::lang::Enum&, const ::java::lang::Enum&);
    static ::java::util::EnumSet of(const ::java::lang::Enum&, const ::java::lang::Enum&, const ::java::lang::Enum&, const ::java::lang::Enum&, const ::java::lang::Enum&);
    static ::java::util::EnumSet of(const ::java::lang::Enum&, const std::vector< ::java::lang::Enum>&);
    static ::java::util::EnumSet range(const ::java::lang::Enum&, const ::java::lang::Enum&);
    ::java::util::EnumSet clone() const ;

};
}
}


