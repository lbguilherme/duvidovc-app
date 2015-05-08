#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace net { class URI; } }
namespace java { namespace util { class List; } }
namespace java { namespace util { class Scanner; } }
namespace org { namespace apache { namespace http { class HttpEntity; } } }

namespace org {
namespace apache {
namespace http {
namespace client {
namespace utils {
class URLEncodedUtils : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit URLEncodedUtils(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    URLEncodedUtils(const ::org::apache::http::client::utils::URLEncodedUtils& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    URLEncodedUtils(::org::apache::http::client::utils::URLEncodedUtils&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::utils::URLEncodedUtils& operator=(const ::org::apache::http::client::utils::URLEncodedUtils& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::utils::URLEncodedUtils& operator=(::org::apache::http::client::utils::URLEncodedUtils&& x) {obj = std::move(x.obj); return *this;}
    
    URLEncodedUtils();
    static ::java::util::List parse(const ::java::net::URI&, const ::java::lang::String&);
    static ::java::util::List parse(const ::org::apache::http::HttpEntity&);
    static bool isEncoded(const ::org::apache::http::HttpEntity&);
    static void parse(const ::java::util::List&, const ::java::util::Scanner&, const ::java::lang::String&);
    static ::java::lang::String format(const ::java::util::List&, const ::java::lang::String&);

};
}
}
}
}
}


