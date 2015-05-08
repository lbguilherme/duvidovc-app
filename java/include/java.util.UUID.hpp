#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Comparable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class UUID; } }

namespace java {
namespace util {
class UUID : public virtual ::java::lang::Object,
             public virtual ::java::io::Serializable,
             public virtual ::java::lang::Comparable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UUID(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UUID(const ::java::util::UUID& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj;}
    UUID(::java::util::UUID&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::UUID& operator=(const ::java::util::UUID& x) {obj = x.obj; return *this;}
    ::java::util::UUID& operator=(::java::util::UUID&& x) {obj = std::move(x.obj); return *this;}
    
    UUID(int64_t, int64_t);
    static ::java::util::UUID randomUUID();
    static ::java::util::UUID nameUUIDFromBytes(const std::vector< int8_t>&);
    static ::java::util::UUID fromString(const ::java::lang::String&);
    int64_t getLeastSignificantBits() const ;
    int64_t getMostSignificantBits() const ;
    int32_t version() const ;
    int32_t variant() const ;
    int64_t timestamp() const ;
    int32_t clockSequence() const ;
    int64_t node() const ;
    int32_t compareTo(const ::java::util::UUID&) const ;
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;
    ::java::lang::String toString() const ;
    int32_t compareTo(const ::java::lang::Object&) const ;

};
}
}


