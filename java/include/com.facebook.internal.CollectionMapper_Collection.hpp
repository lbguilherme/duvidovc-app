#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { namespace internal { class CollectionMapper_OnErrorListener; } } }
namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Iterator; } }

namespace com {
namespace facebook {
namespace internal {
class CollectionMapper_Collection : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CollectionMapper_Collection(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CollectionMapper_Collection(const ::com::facebook::internal::CollectionMapper_Collection& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CollectionMapper_Collection(::com::facebook::internal::CollectionMapper_Collection&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::CollectionMapper_Collection& operator=(const ::com::facebook::internal::CollectionMapper_Collection& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::CollectionMapper_Collection& operator=(::com::facebook::internal::CollectionMapper_Collection&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::util::Iterator keyIterator() const ;
    ::java::lang::Object get(const ::java::lang::Object&) const ;
    void set(const ::java::lang::Object&, const ::java::lang::Object&, const ::com::facebook::internal::CollectionMapper_OnErrorListener&) const ;

};
}
}
}


