#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.AbstractCollection.hpp"
#include "java.util.Set.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Collection; } }

namespace java {
namespace util {
class AbstractSet : public virtual ::java::lang::Object,
                    public virtual ::java::util::AbstractCollection,
                    public virtual ::java::util::Set {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractSet(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Iterable(_obj), ::java::util::AbstractCollection(_obj), ::java::util::Collection(_obj), ::java::util::Set(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractSet(const ::java::util::AbstractSet& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Set((jobject)0) {obj = x.obj;}
    AbstractSet(::java::util::AbstractSet&& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Set((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::AbstractSet& operator=(const ::java::util::AbstractSet& x) {obj = x.obj; return *this;}
    ::java::util::AbstractSet& operator=(::java::util::AbstractSet&& x) {obj = std::move(x.obj); return *this;}
    
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;
    bool removeAll(const ::java::util::Collection&) const ;

};
}
}


