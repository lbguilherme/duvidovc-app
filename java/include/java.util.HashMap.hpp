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

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Map; } }
namespace java { namespace util { class Set; } }

namespace java {
namespace util {
class HashMap : public virtual ::java::lang::Object,
                public virtual ::java::io::Serializable,
                public virtual ::java::lang::Cloneable,
                public virtual ::java::util::AbstractMap {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HashMap(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::util::AbstractMap(_obj), ::java::util::Map(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HashMap(const ::java::util::HashMap& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0) {obj = x.obj;}
    HashMap(::java::util::HashMap&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::HashMap& operator=(const ::java::util::HashMap& x) {obj = x.obj; return *this;}
    ::java::util::HashMap& operator=(::java::util::HashMap&& x) {obj = std::move(x.obj); return *this;}
    
    HashMap();
    HashMap(int32_t);
    HashMap(int32_t, float);
    HashMap(const ::java::util::Map&);
    ::java::lang::Object clone() const ;
    bool isEmpty() const ;
    int32_t size() const ;
    ::java::lang::Object get(const ::java::lang::Object&) const ;
    bool containsKey(const ::java::lang::Object&) const ;
    bool containsValue(const ::java::lang::Object&) const ;
    ::java::lang::Object put(const ::java::lang::Object&, const ::java::lang::Object&) const ;
    void putAll(const ::java::util::Map&) const ;
    ::java::lang::Object remove(const ::java::lang::Object&) const ;
    void clear() const ;
    ::java::util::Set keySet() const ;
    ::java::util::Collection values() const ;
    ::java::util::Set entrySet() const ;

};
}
}


