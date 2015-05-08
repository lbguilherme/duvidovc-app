#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class OutputStream; } }

namespace org {
namespace apache {
namespace http {
namespace entity {
class ContentProducer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContentProducer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContentProducer(const ::org::apache::http::entity::ContentProducer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ContentProducer(::org::apache::http::entity::ContentProducer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::entity::ContentProducer& operator=(const ::org::apache::http::entity::ContentProducer& x) {obj = x.obj; return *this;}
    ::org::apache::http::entity::ContentProducer& operator=(::org::apache::http::entity::ContentProducer&& x) {obj = std::move(x.obj); return *this;}
    
    void writeTo(const ::java::io::OutputStream&) const ;

};
}
}
}
}


