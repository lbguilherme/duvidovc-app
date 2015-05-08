#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Cloneable.hpp"
#include "java.util.AbstractMap.hpp"
#include "java.util.Map.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Enum; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class EnumMap; } }
namespace java { namespace util { class Map; } }
namespace java { namespace util { class Set; } }

namespace java {
namespace util {
class EnumMap : public virtual ::java::lang::Object,
                public virtual ::java::io::Serializable,
                public virtual ::java::lang::Cloneable,
                public virtual ::java::util::AbstractMap,
                public virtual ::java::util::Map {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EnumMap(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::util::AbstractMap(_obj), ::java::util::Map(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EnumMap(const ::java::util::EnumMap& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0) {obj = x.obj;}
    EnumMap(::java::util::EnumMap&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::EnumMap& operator=(const ::java::util::EnumMap& x) {obj = x.obj; return *this;}
    ::java::util::EnumMap& operator=(::java::util::EnumMap&& x) {obj = std::move(x.obj); return *this;}
    
    EnumMap(const ::java::lang::Class&);
    EnumMap(const ::java::util::Map&);
    void clear() const ;
    ::java::util::EnumMap clone() const ;
    bool containsKey(const ::java::lang::Object&) const ;
    bool containsValue(const ::java::lang::Object&) const ;
    ::java::util::Set entrySet() const ;
    bool equals(const ::java::lang::Object&) const ;
    ::java::lang::Object get(const ::java::lang::Object&) const ;
    ::java::util::Set keySet() const ;
    ::java::lang::Object put(const ::java::lang::Enum&, const ::java::lang::Object&) const ;
    void putAll(const ::java::util::Map&) const ;
    ::java::lang::Object remove(const ::java::lang::Object&) const ;
    int32_t size() const ;
    ::java::util::Collection values() const ;
    ::java::lang::Object put(const ::java::lang::Object&, const ::java::lang::Object&) const ;

};
}
}


