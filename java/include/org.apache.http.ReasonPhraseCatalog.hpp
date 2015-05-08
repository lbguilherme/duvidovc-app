#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class Locale; } }

namespace org {
namespace apache {
namespace http {
class ReasonPhraseCatalog : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ReasonPhraseCatalog(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ReasonPhraseCatalog(const ::org::apache::http::ReasonPhraseCatalog& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ReasonPhraseCatalog(::org::apache::http::ReasonPhraseCatalog&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::ReasonPhraseCatalog& operator=(const ::org::apache::http::ReasonPhraseCatalog& x) {obj = x.obj; return *this;}
    ::org::apache::http::ReasonPhraseCatalog& operator=(::org::apache::http::ReasonPhraseCatalog&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getReason(int32_t, const ::java::util::Locale&) const ;

};
}
}
}


