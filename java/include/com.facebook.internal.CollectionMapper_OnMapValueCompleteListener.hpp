#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.internal.CollectionMapper_OnErrorListener.hpp"

namespace java { namespace lang { class Object; } }

namespace com {
namespace facebook {
namespace internal {
class CollectionMapper_OnMapValueCompleteListener : public virtual ::java::lang::Object,
                                                    public virtual ::com::facebook::internal::CollectionMapper_OnErrorListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CollectionMapper_OnMapValueCompleteListener(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::internal::CollectionMapper_OnErrorListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CollectionMapper_OnMapValueCompleteListener(const ::com::facebook::internal::CollectionMapper_OnMapValueCompleteListener& x) : ::java::lang::Object((jobject)0), ::com::facebook::internal::CollectionMapper_OnErrorListener((jobject)0) {obj = x.obj;}
    CollectionMapper_OnMapValueCompleteListener(::com::facebook::internal::CollectionMapper_OnMapValueCompleteListener&& x) : ::java::lang::Object((jobject)0), ::com::facebook::internal::CollectionMapper_OnErrorListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::CollectionMapper_OnMapValueCompleteListener& operator=(const ::com::facebook::internal::CollectionMapper_OnMapValueCompleteListener& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::CollectionMapper_OnMapValueCompleteListener& operator=(::com::facebook::internal::CollectionMapper_OnMapValueCompleteListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onComplete(const ::java::lang::Object&) const ;

};
}
}
}


