#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Map.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Map; } }
namespace java { namespace util { class Set; } }

namespace java {
namespace util {
class AbstractMap : public virtual ::java::lang::Object,
                    public virtual ::java::util::Map {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractMap(jobject _obj) : ::java::lang::Object(_obj), ::java::util::Map(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractMap(const ::java::util::AbstractMap& x) : ::java::lang::Object((jobject)0), ::java::util::Map((jobject)0) {obj = x.obj;}
    AbstractMap(::java::util::AbstractMap&& x) : ::java::lang::Object((jobject)0), ::java::util::Map((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::AbstractMap& operator=(const ::java::util::AbstractMap& x) {obj = x.obj; return *this;}
    ::java::util::AbstractMap& operator=(::java::util::AbstractMap&& x) {obj = std::move(x.obj); return *this;}
    
    void clear() const;
    bool containsKey(const ::java::lang::Object&) const;
    bool containsValue(const ::java::lang::Object&) const;
    ::java::util::Set entrySet() const;
    bool equals(const ::java::lang::Object&) const;
    ::java::lang::Object get(const ::java::lang::Object&) const;
    int32_t hashCode() const;
    bool isEmpty() const;
    ::java::util::Set keySet() const;
    ::java::lang::Object put(const ::java::lang::Object&, const ::java::lang::Object&) const;
    void putAll(const ::java::util::Map&) const;
    ::java::lang::Object remove(const ::java::lang::Object&) const;
    int32_t size() const;
    ::java::lang::String toString() const;
    ::java::util::Collection values() const;

};
}
}

#include "java.util.AbstractMap_SimpleEntry.hpp"
#include "java.util.AbstractMap_SimpleImmutableEntry.hpp"

