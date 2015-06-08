#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.AbstractMap.hpp"
#include "java.util.Map.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Map; } }
namespace java { namespace util { class Set; } }

namespace java {
namespace util {
class WeakHashMap : public virtual ::java::lang::Object,
                    public virtual ::java::util::AbstractMap,
                    public virtual ::java::util::Map {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WeakHashMap(jobject _obj) : ::java::lang::Object(_obj), ::java::util::AbstractMap(_obj), ::java::util::Map(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WeakHashMap(const ::java::util::WeakHashMap& x) : ::java::lang::Object((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0) {obj = x.obj;}
    WeakHashMap(::java::util::WeakHashMap&& x) : ::java::lang::Object((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::WeakHashMap& operator=(const ::java::util::WeakHashMap& x) {obj = x.obj; return *this;}
    ::java::util::WeakHashMap& operator=(::java::util::WeakHashMap&& x) {obj = std::move(x.obj); return *this;}
    
    WeakHashMap();
    WeakHashMap(int32_t);
    WeakHashMap(int32_t, float);
    WeakHashMap(const ::java::util::Map&);
    void clear() const;
    bool containsKey(const ::java::lang::Object&) const;
    ::java::util::Set entrySet() const;
    ::java::util::Set keySet() const;
    ::java::util::Collection values() const;
    ::java::lang::Object get(const ::java::lang::Object&) const;
    bool containsValue(const ::java::lang::Object&) const;
    bool isEmpty() const;
    ::java::lang::Object put(const ::java::lang::Object&, const ::java::lang::Object&) const;
    void putAll(const ::java::util::Map&) const;
    ::java::lang::Object remove(const ::java::lang::Object&) const;
    int32_t size() const;

};
}
}


