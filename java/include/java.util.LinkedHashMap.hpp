#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.HashMap.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Map; } }

namespace java {
namespace util {
class LinkedHashMap : public virtual ::java::lang::Object,
                      public virtual ::java::util::HashMap {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LinkedHashMap(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::util::AbstractMap(_obj), ::java::util::HashMap(_obj), ::java::util::Map(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LinkedHashMap(const ::java::util::LinkedHashMap& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::HashMap((jobject)0), ::java::util::Map((jobject)0) {obj = x.obj;}
    LinkedHashMap(::java::util::LinkedHashMap&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::HashMap((jobject)0), ::java::util::Map((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::LinkedHashMap& operator=(const ::java::util::LinkedHashMap& x) {obj = x.obj; return *this;}
    ::java::util::LinkedHashMap& operator=(::java::util::LinkedHashMap&& x) {obj = std::move(x.obj); return *this;}
    
    LinkedHashMap();
    LinkedHashMap(int32_t);
    LinkedHashMap(int32_t, float);
    LinkedHashMap(int32_t, float, bool);
    LinkedHashMap(const ::java::util::Map&);
    ::java::lang::Object get(const ::java::lang::Object&) const ;
    bool containsValue(const ::java::lang::Object&) const ;
    void clear() const ;

};
}
}


