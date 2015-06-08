#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace org {
namespace w3c {
namespace dom {
class DOMStringList : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DOMStringList(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DOMStringList(const ::org::w3c::dom::DOMStringList& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DOMStringList(::org::w3c::dom::DOMStringList&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::DOMStringList& operator=(const ::org::w3c::dom::DOMStringList& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::DOMStringList& operator=(::org::w3c::dom::DOMStringList&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String item(int32_t) const;
    int32_t getLength() const;
    bool contains(const ::java::lang::String&) const;

};
}
}
}


