#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Comparable.hpp"

namespace com { namespace facebook { namespace internal { class FileLruCache_ModifiedFile; } } }
namespace java { namespace lang { class Object; } }

namespace com {
namespace facebook {
namespace internal {
class FileLruCache_ModifiedFile : public virtual ::java::lang::Object,
                                  public virtual ::java::lang::Comparable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FileLruCache_ModifiedFile(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Comparable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FileLruCache_ModifiedFile(const ::com::facebook::internal::FileLruCache_ModifiedFile& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj;}
    FileLruCache_ModifiedFile(::com::facebook::internal::FileLruCache_ModifiedFile&& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::FileLruCache_ModifiedFile& operator=(const ::com::facebook::internal::FileLruCache_ModifiedFile& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::FileLruCache_ModifiedFile& operator=(::com::facebook::internal::FileLruCache_ModifiedFile&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t compareTo(const ::com::facebook::internal::FileLruCache_ModifiedFile&) const ;
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;
    int32_t compareTo(const ::java::lang::Object&) const ;

};
}
}
}


