#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Cloneable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class BitSet; } }

namespace java {
namespace util {
class BitSet : public virtual ::java::lang::Object,
               public virtual ::java::io::Serializable,
               public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BitSet(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BitSet(const ::java::util::BitSet& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    BitSet(::java::util::BitSet&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::BitSet& operator=(const ::java::util::BitSet& x) {obj = x.obj; return *this;}
    ::java::util::BitSet& operator=(::java::util::BitSet&& x) {obj = std::move(x.obj); return *this;}
    
    BitSet();
    BitSet(int32_t);
    ::java::lang::Object clone() const;
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;
    bool get(int32_t) const;
    void set(int32_t) const;
    void clear(int32_t) const;
    void flip(int32_t) const;
    ::java::util::BitSet get(int32_t, int32_t) const;
    void set(int32_t, bool) const;
    void set(int32_t, int32_t, bool) const;
    void clear() const;
    void set(int32_t, int32_t) const;
    void clear(int32_t, int32_t) const;
    void flip(int32_t, int32_t) const;
    bool intersects(const ::java::util::BitSet&) const;
    void and_(const ::java::util::BitSet&) const;
    void andNot(const ::java::util::BitSet&) const;
    void or_(const ::java::util::BitSet&) const;
    void xor_(const ::java::util::BitSet&) const;
    int32_t size() const;
    int32_t length() const;
    ::java::lang::String toString() const;
    int32_t nextSetBit(int32_t) const;
    int32_t nextClearBit(int32_t) const;
    bool isEmpty() const;
    int32_t cardinality() const;

};
}
}


