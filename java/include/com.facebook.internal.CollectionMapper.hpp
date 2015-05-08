#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { namespace internal { class CollectionMapper_Collection; } } }
namespace com { namespace facebook { namespace internal { class CollectionMapper_OnMapperCompleteListener; } } }
namespace com { namespace facebook { namespace internal { class CollectionMapper_ValueMapper; } } }

namespace com {
namespace facebook {
namespace internal {
class CollectionMapper : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CollectionMapper(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CollectionMapper(const ::com::facebook::internal::CollectionMapper& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CollectionMapper(::com::facebook::internal::CollectionMapper&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::CollectionMapper& operator=(const ::com::facebook::internal::CollectionMapper& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::CollectionMapper& operator=(::com::facebook::internal::CollectionMapper&& x) {obj = std::move(x.obj); return *this;}
    
    static void iterate(const ::com::facebook::internal::CollectionMapper_Collection&, const ::com::facebook::internal::CollectionMapper_ValueMapper&, const ::com::facebook::internal::CollectionMapper_OnMapperCompleteListener&);

};
}
}
}

#include "com.facebook.internal.CollectionMapper_Collection.hpp"
#include "com.facebook.internal.CollectionMapper_OnErrorListener.hpp"
#include "com.facebook.internal.CollectionMapper_OnMapValueCompleteListener.hpp"
#include "com.facebook.internal.CollectionMapper_OnMapperCompleteListener.hpp"
#include "com.facebook.internal.CollectionMapper_ValueMapper.hpp"

