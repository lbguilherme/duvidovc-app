#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }

namespace org {
namespace apache {
namespace http {
namespace util {
class LangUtils : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LangUtils(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LangUtils(const ::org::apache::http::util::LangUtils& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LangUtils(::org::apache::http::util::LangUtils&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::util::LangUtils& operator=(const ::org::apache::http::util::LangUtils& x) {obj = x.obj; return *this;}
    ::org::apache::http::util::LangUtils& operator=(::org::apache::http::util::LangUtils&& x) {obj = std::move(x.obj); return *this;}
    
    static int32_t hashCode(int32_t, int32_t);
    static int32_t hashCode(int32_t, bool);
    static int32_t hashCode(int32_t, const ::java::lang::Object&);
    static bool equals(const ::java::lang::Object&, const ::java::lang::Object&);
    static bool equals(const std::vector< ::java::lang::Object>&, const std::vector< ::java::lang::Object>&);

};
}
}
}
}


