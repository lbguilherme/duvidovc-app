#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Iterator.hpp"

namespace org { namespace apache { namespace http { class HeaderElement; } } }

namespace org {
namespace apache {
namespace http {
class HeaderElementIterator : public virtual ::java::lang::Object,
                              public virtual ::java::util::Iterator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HeaderElementIterator(jobject _obj) : ::java::lang::Object(_obj), ::java::util::Iterator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HeaderElementIterator(const ::org::apache::http::HeaderElementIterator& x) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0) {obj = x.obj;}
    HeaderElementIterator(::org::apache::http::HeaderElementIterator&& x) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::HeaderElementIterator& operator=(const ::org::apache::http::HeaderElementIterator& x) {obj = x.obj; return *this;}
    ::org::apache::http::HeaderElementIterator& operator=(::org::apache::http::HeaderElementIterator&& x) {obj = std::move(x.obj); return *this;}
    
    bool hasNext() const ;
    ::org::apache::http::HeaderElement nextElement() const ;

};
}
}
}


