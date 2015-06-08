#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Comparable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace text { class CollationKey; } }

namespace java {
namespace text {
class CollationKey : public virtual ::java::lang::Object,
                     public virtual ::java::lang::Comparable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CollationKey(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Comparable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CollationKey(const ::java::text::CollationKey& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj;}
    CollationKey(::java::text::CollationKey&& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::text::CollationKey& operator=(const ::java::text::CollationKey& x) {obj = x.obj; return *this;}
    ::java::text::CollationKey& operator=(::java::text::CollationKey&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t compareTo(const ::java::text::CollationKey&) const;
    ::java::lang::String getSourceString() const;
    std::vector< int8_t> toByteArray() const;
    int32_t compareTo(const ::java::lang::Object&) const;

};
}
}


