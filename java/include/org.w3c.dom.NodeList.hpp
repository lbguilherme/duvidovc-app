#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace w3c { namespace dom { class Node; } } }

namespace org {
namespace w3c {
namespace dom {
class NodeList : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NodeList(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NodeList(const ::org::w3c::dom::NodeList& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NodeList(::org::w3c::dom::NodeList&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::NodeList& operator=(const ::org::w3c::dom::NodeList& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::NodeList& operator=(::org::w3c::dom::NodeList&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::w3c::dom::Node item(int32_t) const;
    int32_t getLength() const;

};
}
}
}


