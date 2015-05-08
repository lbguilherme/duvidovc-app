#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { namespace internal { class CollectionMapper_OnMapValueCompleteListener; } } }
namespace java { namespace lang { class Object; } }

namespace com {
namespace facebook {
namespace internal {
class CollectionMapper_ValueMapper : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CollectionMapper_ValueMapper(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CollectionMapper_ValueMapper(const ::com::facebook::internal::CollectionMapper_ValueMapper& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CollectionMapper_ValueMapper(::com::facebook::internal::CollectionMapper_ValueMapper&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::CollectionMapper_ValueMapper& operator=(const ::com::facebook::internal::CollectionMapper_ValueMapper& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::CollectionMapper_ValueMapper& operator=(::com::facebook::internal::CollectionMapper_ValueMapper&& x) {obj = std::move(x.obj); return *this;}
    
    void mapValue(const ::java::lang::Object&, const ::com::facebook::internal::CollectionMapper_OnMapValueCompleteListener&) const ;

};
}
}
}


