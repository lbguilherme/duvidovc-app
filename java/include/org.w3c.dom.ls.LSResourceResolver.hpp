#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace w3c { namespace dom { namespace ls { class LSInput; } } } }

namespace org {
namespace w3c {
namespace dom {
namespace ls {
class LSResourceResolver : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LSResourceResolver(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LSResourceResolver(const ::org::w3c::dom::ls::LSResourceResolver& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LSResourceResolver(::org::w3c::dom::ls::LSResourceResolver&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::ls::LSResourceResolver& operator=(const ::org::w3c::dom::ls::LSResourceResolver& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::ls::LSResourceResolver& operator=(::org::w3c::dom::ls::LSResourceResolver&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::w3c::dom::ls::LSInput resolveResource(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;

};
}
}
}
}


