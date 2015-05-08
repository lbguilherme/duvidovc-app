#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace w3c { namespace dom { class Node; } } }

namespace org {
namespace w3c {
namespace dom {
class UserDataHandler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UserDataHandler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UserDataHandler(const ::org::w3c::dom::UserDataHandler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    UserDataHandler(::org::w3c::dom::UserDataHandler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::UserDataHandler& operator=(const ::org::w3c::dom::UserDataHandler& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::UserDataHandler& operator=(::org::w3c::dom::UserDataHandler&& x) {obj = std::move(x.obj); return *this;}
    
    void handle(int16_t, const ::java::lang::String&, const ::java::lang::Object&, const ::org::w3c::dom::Node&, const ::org::w3c::dom::Node&) const ;

};
}
}
}


