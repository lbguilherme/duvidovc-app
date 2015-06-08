#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm { class WaitingThread; } } } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace conn {
namespace tsccm {
class WaitingThreadAborter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WaitingThreadAborter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WaitingThreadAborter(const ::org::apache::http::impl::conn::tsccm::WaitingThreadAborter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WaitingThreadAborter(::org::apache::http::impl::conn::tsccm::WaitingThreadAborter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::conn::tsccm::WaitingThreadAborter& operator=(const ::org::apache::http::impl::conn::tsccm::WaitingThreadAborter& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::conn::tsccm::WaitingThreadAborter& operator=(::org::apache::http::impl::conn::tsccm::WaitingThreadAborter&& x) {obj = std::move(x.obj); return *this;}
    
    WaitingThreadAborter();
    void abort() const;
    void setWaitingThread(const ::org::apache::http::impl::conn::tsccm::WaitingThread&) const;

};
}
}
}
}
}
}


