#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.Header.hpp"

namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } }

namespace org {
namespace apache {
namespace http {
class FormattedHeader : public virtual ::java::lang::Object,
                        public virtual ::org::apache::http::Header {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FormattedHeader(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::Header(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FormattedHeader(const ::org::apache::http::FormattedHeader& x) : ::java::lang::Object((jobject)0), ::org::apache::http::Header((jobject)0) {obj = x.obj;}
    FormattedHeader(::org::apache::http::FormattedHeader&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::Header((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::FormattedHeader& operator=(const ::org::apache::http::FormattedHeader& x) {obj = x.obj; return *this;}
    ::org::apache::http::FormattedHeader& operator=(::org::apache::http::FormattedHeader&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::apache::http::util::CharArrayBuffer getBuffer() const ;
    int32_t getValuePos() const ;

};
}
}
}


