#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.w3c.dom.Node.hpp"


namespace org {
namespace w3c {
namespace dom {
class DocumentFragment : public virtual ::java::lang::Object,
                         public virtual ::org::w3c::dom::Node {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DocumentFragment(jobject _obj) : ::java::lang::Object(_obj), ::org::w3c::dom::Node(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DocumentFragment(const ::org::w3c::dom::DocumentFragment& x) : ::java::lang::Object((jobject)0), ::org::w3c::dom::Node((jobject)0) {obj = x.obj;}
    DocumentFragment(::org::w3c::dom::DocumentFragment&& x) : ::java::lang::Object((jobject)0), ::org::w3c::dom::Node((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::DocumentFragment& operator=(const ::org::w3c::dom::DocumentFragment& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::DocumentFragment& operator=(::org::w3c::dom::DocumentFragment&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


