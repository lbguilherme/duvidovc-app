#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.HeaderIterator.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class Header; } } }

namespace org {
namespace apache {
namespace http {
namespace message {
class BasicHeaderIterator : public virtual ::java::lang::Object,
                            public virtual ::org::apache::http::HeaderIterator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicHeaderIterator(jobject _obj) : ::java::lang::Object(_obj), ::java::util::Iterator(_obj), ::org::apache::http::HeaderIterator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicHeaderIterator(const ::org::apache::http::message::BasicHeaderIterator& x) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0), ::org::apache::http::HeaderIterator((jobject)0) {obj = x.obj;}
    BasicHeaderIterator(::org::apache::http::message::BasicHeaderIterator&& x) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0), ::org::apache::http::HeaderIterator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::message::BasicHeaderIterator& operator=(const ::org::apache::http::message::BasicHeaderIterator& x) {obj = x.obj; return *this;}
    ::org::apache::http::message::BasicHeaderIterator& operator=(::org::apache::http::message::BasicHeaderIterator&& x) {obj = std::move(x.obj); return *this;}
    
    BasicHeaderIterator(const std::vector< ::org::apache::http::Header>&, const ::java::lang::String&);
    bool hasNext() const;
    ::org::apache::http::Header nextHeader() const;
    ::java::lang::Object next() const;
    void remove() const;

};
}
}
}
}


