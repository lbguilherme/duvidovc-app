#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Collection; } }

namespace com {
namespace facebook {
namespace internal {
class Validate : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Validate(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Validate(const ::com::facebook::internal::Validate& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Validate(::com::facebook::internal::Validate&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::Validate& operator=(const ::com::facebook::internal::Validate& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::Validate& operator=(::com::facebook::internal::Validate&& x) {obj = std::move(x.obj); return *this;}
    
    Validate();
    static void notNull(const ::java::lang::Object&, const ::java::lang::String&);
    static void notEmpty(const ::java::util::Collection&, const ::java::lang::String&);
    static void containsNoNulls(const ::java::util::Collection&, const ::java::lang::String&);
    static void containsNoNullOrEmpty(const ::java::util::Collection&, const ::java::lang::String&);
    static void notEmptyAndContainsNoNulls(const ::java::util::Collection&, const ::java::lang::String&);
    static void notNullOrEmpty(const ::java::lang::String&, const ::java::lang::String&);
    static void oneOf(const ::java::lang::Object&, const ::java::lang::String&, const std::vector< ::java::lang::Object>&);
    static void sdkInitialized();

};
}
}
}


