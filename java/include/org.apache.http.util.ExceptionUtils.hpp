#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Throwable; } }

namespace org {
namespace apache {
namespace http {
namespace util {
class ExceptionUtils : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ExceptionUtils(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ExceptionUtils(const ::org::apache::http::util::ExceptionUtils& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ExceptionUtils(::org::apache::http::util::ExceptionUtils&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::util::ExceptionUtils& operator=(const ::org::apache::http::util::ExceptionUtils& x) {obj = x.obj; return *this;}
    ::org::apache::http::util::ExceptionUtils& operator=(::org::apache::http::util::ExceptionUtils&& x) {obj = std::move(x.obj); return *this;}
    
    static void initCause(const ::java::lang::Throwable&, const ::java::lang::Throwable&);

};
}
}
}
}


