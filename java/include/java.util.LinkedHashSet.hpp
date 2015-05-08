#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Cloneable.hpp"
#include "java.util.HashSet.hpp"
#include "java.util.Set.hpp"

namespace java { namespace util { class Collection; } }

namespace java {
namespace util {
class LinkedHashSet : public virtual ::java::lang::Object,
                      public virtual ::java::io::Serializable,
                      public virtual ::java::lang::Cloneable,
                      public virtual ::java::util::HashSet,
                      public virtual ::java::util::Set {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LinkedHashSet(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::lang::Iterable(_obj), ::java::util::AbstractCollection(_obj), ::java::util::AbstractSet(_obj), ::java::util::Collection(_obj), ::java::util::HashSet(_obj), ::java::util::Set(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LinkedHashSet(const ::java::util::LinkedHashSet& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::HashSet((jobject)0), ::java::util::Set((jobject)0) {obj = x.obj;}
    LinkedHashSet(::java::util::LinkedHashSet&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::HashSet((jobject)0), ::java::util::Set((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::LinkedHashSet& operator=(const ::java::util::LinkedHashSet& x) {obj = x.obj; return *this;}
    ::java::util::LinkedHashSet& operator=(::java::util::LinkedHashSet&& x) {obj = std::move(x.obj); return *this;}
    
    LinkedHashSet();
    LinkedHashSet(int32_t);
    LinkedHashSet(int32_t, float);
    LinkedHashSet(const ::java::util::Collection&);

};
}
}


