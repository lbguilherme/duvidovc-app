#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Iterator.hpp"

namespace java { namespace lang { class String; } }

namespace org {
namespace apache {
namespace http {
class TokenIterator : public virtual ::java::lang::Object,
                      public virtual ::java::util::Iterator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TokenIterator(jobject _obj) : ::java::lang::Object(_obj), ::java::util::Iterator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TokenIterator(const ::org::apache::http::TokenIterator& x) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0) {obj = x.obj;}
    TokenIterator(::org::apache::http::TokenIterator&& x) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::TokenIterator& operator=(const ::org::apache::http::TokenIterator& x) {obj = x.obj; return *this;}
    ::org::apache::http::TokenIterator& operator=(::org::apache::http::TokenIterator&& x) {obj = std::move(x.obj); return *this;}
    
    bool hasNext() const ;
    ::java::lang::String nextToken() const ;

};
}
}
}


