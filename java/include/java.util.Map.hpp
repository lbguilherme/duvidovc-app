#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Map; } }
namespace java { namespace util { class Set; } }

namespace java {
namespace util {
class Map : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Map(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Map(const ::java::util::Map& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Map(::java::util::Map&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::Map& operator=(const ::java::util::Map& x) {obj = x.obj; return *this;}
    ::java::util::Map& operator=(::java::util::Map&& x) {obj = std::move(x.obj); return *this;}
    
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
    ::java::util::Collection values() const;

};
}
}

#include "java.util.Map_Entry.hpp"

