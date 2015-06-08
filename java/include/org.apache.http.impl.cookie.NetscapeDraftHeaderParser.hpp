#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace apache { namespace http { class HeaderElement; } } }
namespace org { namespace apache { namespace http { namespace message { class ParserCursor; } } } }
namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace cookie {
class NetscapeDraftHeaderParser : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NetscapeDraftHeaderParser(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NetscapeDraftHeaderParser(const ::org::apache::http::impl::cookie::NetscapeDraftHeaderParser& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NetscapeDraftHeaderParser(::org::apache::http::impl::cookie::NetscapeDraftHeaderParser&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::cookie::NetscapeDraftHeaderParser& operator=(const ::org::apache::http::impl::cookie::NetscapeDraftHeaderParser& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::cookie::NetscapeDraftHeaderParser& operator=(::org::apache::http::impl::cookie::NetscapeDraftHeaderParser&& x) {obj = std::move(x.obj); return *this;}
    
    NetscapeDraftHeaderParser();
    ::org::apache::http::HeaderElement parseHeader(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::message::ParserCursor&) const;

};
}
}
}
}
}


