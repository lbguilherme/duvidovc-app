#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.w3c.dom.Node.hpp"

namespace java { namespace lang { class String; } }

namespace org {
namespace w3c {
namespace dom {
class ProcessingInstruction : public virtual ::java::lang::Object,
                              public virtual ::org::w3c::dom::Node {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProcessingInstruction(jobject _obj) : ::java::lang::Object(_obj), ::org::w3c::dom::Node(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProcessingInstruction(const ::org::w3c::dom::ProcessingInstruction& x) : ::java::lang::Object((jobject)0), ::org::w3c::dom::Node((jobject)0) {obj = x.obj;}
    ProcessingInstruction(::org::w3c::dom::ProcessingInstruction&& x) : ::java::lang::Object((jobject)0), ::org::w3c::dom::Node((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::ProcessingInstruction& operator=(const ::org::w3c::dom::ProcessingInstruction& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::ProcessingInstruction& operator=(::org::w3c::dom::ProcessingInstruction&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getTarget() const;
    ::java::lang::String getData() const;
    void setData(const ::java::lang::String&) const;

};
}
}
}


