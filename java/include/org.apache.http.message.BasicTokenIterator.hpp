#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.TokenIterator.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class HeaderIterator; } } }

namespace org {
namespace apache {
namespace http {
namespace message {
class BasicTokenIterator : public virtual ::java::lang::Object,
                           public virtual ::org::apache::http::TokenIterator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicTokenIterator(jobject _obj) : ::java::lang::Object(_obj), ::java::util::Iterator(_obj), ::org::apache::http::TokenIterator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicTokenIterator(const ::org::apache::http::message::BasicTokenIterator& x) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0), ::org::apache::http::TokenIterator((jobject)0) {obj = x.obj;}
    BasicTokenIterator(::org::apache::http::message::BasicTokenIterator&& x) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0), ::org::apache::http::TokenIterator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::message::BasicTokenIterator& operator=(const ::org::apache::http::message::BasicTokenIterator& x) {obj = x.obj; return *this;}
    ::org::apache::http::message::BasicTokenIterator& operator=(::org::apache::http::message::BasicTokenIterator&& x) {obj = std::move(x.obj); return *this;}
    
    BasicTokenIterator(const ::org::apache::http::HeaderIterator&);
    bool hasNext() const ;
    ::java::lang::String nextToken() const ;
    ::java::lang::Object next() const ;
    void remove() const ;

};
}
}
}
}


