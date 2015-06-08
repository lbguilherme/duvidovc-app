#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace net { class URI; } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace client {
class RedirectLocations : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RedirectLocations(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RedirectLocations(const ::org::apache::http::impl::client::RedirectLocations& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RedirectLocations(::org::apache::http::impl::client::RedirectLocations&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::client::RedirectLocations& operator=(const ::org::apache::http::impl::client::RedirectLocations& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::client::RedirectLocations& operator=(::org::apache::http::impl::client::RedirectLocations&& x) {obj = std::move(x.obj); return *this;}
    
    RedirectLocations();
    bool contains(const ::java::net::URI&) const;
    void add(const ::java::net::URI&) const;
    bool remove(const ::java::net::URI&) const;

};
}
}
}
}
}


