#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { namespace ref { class Reference; } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace conn {
namespace tsccm {
class RefQueueHandler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RefQueueHandler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RefQueueHandler(const ::org::apache::http::impl::conn::tsccm::RefQueueHandler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RefQueueHandler(::org::apache::http::impl::conn::tsccm::RefQueueHandler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::conn::tsccm::RefQueueHandler& operator=(const ::org::apache::http::impl::conn::tsccm::RefQueueHandler& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::conn::tsccm::RefQueueHandler& operator=(::org::apache::http::impl::conn::tsccm::RefQueueHandler&& x) {obj = std::move(x.obj); return *this;}
    
    void handleReference(const ::java::lang::ref::Reference&) const;

};
}
}
}
}
}
}


