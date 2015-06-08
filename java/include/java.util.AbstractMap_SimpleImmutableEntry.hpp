#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.util.Map_Entry.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Map_Entry; } }

namespace java {
namespace util {
class AbstractMap_SimpleImmutableEntry : public virtual ::java::lang::Object,
                                         public virtual ::java::io::Serializable,
                                         public virtual ::java::util::Map_Entry {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractMap_SimpleImmutableEntry(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::util::Map_Entry(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractMap_SimpleImmutableEntry(const ::java::util::AbstractMap_SimpleImmutableEntry& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::Map_Entry((jobject)0) {obj = x.obj;}
    AbstractMap_SimpleImmutableEntry(::java::util::AbstractMap_SimpleImmutableEntry&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::Map_Entry((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::AbstractMap_SimpleImmutableEntry& operator=(const ::java::util::AbstractMap_SimpleImmutableEntry& x) {obj = x.obj; return *this;}
    ::java::util::AbstractMap_SimpleImmutableEntry& operator=(::java::util::AbstractMap_SimpleImmutableEntry&& x) {obj = std::move(x.obj); return *this;}
    
    AbstractMap_SimpleImmutableEntry(const ::java::lang::Object&, const ::java::lang::Object&);
    AbstractMap_SimpleImmutableEntry(const ::java::util::Map_Entry&);
    ::java::lang::Object getKey() const;
    ::java::lang::Object getValue() const;
    ::java::lang::Object setValue(const ::java::lang::Object&) const;
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;
    ::java::lang::String toString() const;

};
}
}


