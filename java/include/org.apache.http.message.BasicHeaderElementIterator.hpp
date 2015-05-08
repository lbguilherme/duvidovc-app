#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.HeaderElementIterator.hpp"

namespace java { namespace lang { class Object; } }
namespace org { namespace apache { namespace http { class HeaderElement; } } }
namespace org { namespace apache { namespace http { class HeaderIterator; } } }
namespace org { namespace apache { namespace http { namespace message { class HeaderValueParser; } } } }

namespace org {
namespace apache {
namespace http {
namespace message {
class BasicHeaderElementIterator : public virtual ::java::lang::Object,
                                   public virtual ::org::apache::http::HeaderElementIterator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicHeaderElementIterator(jobject _obj) : ::java::lang::Object(_obj), ::java::util::Iterator(_obj), ::org::apache::http::HeaderElementIterator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicHeaderElementIterator(const ::org::apache::http::message::BasicHeaderElementIterator& x) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0), ::org::apache::http::HeaderElementIterator((jobject)0) {obj = x.obj;}
    BasicHeaderElementIterator(::org::apache::http::message::BasicHeaderElementIterator&& x) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0), ::org::apache::http::HeaderElementIterator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::message::BasicHeaderElementIterator& operator=(const ::org::apache::http::message::BasicHeaderElementIterator& x) {obj = x.obj; return *this;}
    ::org::apache::http::message::BasicHeaderElementIterator& operator=(::org::apache::http::message::BasicHeaderElementIterator&& x) {obj = std::move(x.obj); return *this;}
    
    BasicHeaderElementIterator(const ::org::apache::http::HeaderIterator&, const ::org::apache::http::message::HeaderValueParser&);
    BasicHeaderElementIterator(const ::org::apache::http::HeaderIterator&);
    bool hasNext() const ;
    ::org::apache::http::HeaderElement nextElement() const ;
    ::java::lang::Object next() const ;
    void remove() const ;

};
}
}
}
}


