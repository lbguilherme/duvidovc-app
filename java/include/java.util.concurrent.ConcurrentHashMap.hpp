#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.util.AbstractMap.hpp"
#include "java.util.concurrent.ConcurrentMap.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Enumeration; } }
namespace java { namespace util { class Map; } }
namespace java { namespace util { class Set; } }

namespace java {
namespace util {
namespace concurrent {
class ConcurrentHashMap : public virtual ::java::lang::Object,
                          public virtual ::java::io::Serializable,
                          public virtual ::java::util::AbstractMap,
                          public virtual ::java::util::concurrent::ConcurrentMap {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConcurrentHashMap(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::util::AbstractMap(_obj), ::java::util::Map(_obj), ::java::util::concurrent::ConcurrentMap(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConcurrentHashMap(const ::java::util::concurrent::ConcurrentHashMap& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0), ::java::util::concurrent::ConcurrentMap((jobject)0) {obj = x.obj;}
    ConcurrentHashMap(::java::util::concurrent::ConcurrentHashMap&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0), ::java::util::concurrent::ConcurrentMap((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::ConcurrentHashMap& operator=(const ::java::util::concurrent::ConcurrentHashMap& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::ConcurrentHashMap& operator=(::java::util::concurrent::ConcurrentHashMap&& x) {obj = std::move(x.obj); return *this;}
    
    ConcurrentHashMap(int32_t, float, int32_t);
    ConcurrentHashMap(int32_t, float);
    ConcurrentHashMap(int32_t);
    ConcurrentHashMap();
    ConcurrentHashMap(const ::java::util::Map&);
    bool isEmpty() const ;
    int32_t size() const ;
    ::java::lang::Object get(const ::java::lang::Object&) const ;
    bool containsKey(const ::java::lang::Object&) const ;
    bool containsValue(const ::java::lang::Object&) const ;
    bool contains(const ::java::lang::Object&) const ;
    ::java::lang::Object put(const ::java::lang::Object&, const ::java::lang::Object&) const ;
    ::java::lang::Object putIfAbsent(const ::java::lang::Object&, const ::java::lang::Object&) const ;
    void putAll(const ::java::util::Map&) const ;
    ::java::lang::Object remove(const ::java::lang::Object&) const ;
    bool remove(const ::java::lang::Object&, const ::java::lang::Object&) const ;
    bool replace(const ::java::lang::Object&, const ::java::lang::Object&, const ::java::lang::Object&) const ;
    ::java::lang::Object replace(const ::java::lang::Object&, const ::java::lang::Object&) const ;
    void clear() const ;
    ::java::util::Set keySet() const ;
    ::java::util::Collection values() const ;
    ::java::util::Set entrySet() const ;
    ::java::util::Enumeration keys() const ;
    ::java::util::Enumeration elements() const ;

};
}
}
}


