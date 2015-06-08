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
class Entity : public virtual ::java::lang::Object,
               public virtual ::org::w3c::dom::Node {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Entity(jobject _obj) : ::java::lang::Object(_obj), ::org::w3c::dom::Node(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Entity(const ::org::w3c::dom::Entity& x) : ::java::lang::Object((jobject)0), ::org::w3c::dom::Node((jobject)0) {obj = x.obj;}
    Entity(::org::w3c::dom::Entity&& x) : ::java::lang::Object((jobject)0), ::org::w3c::dom::Node((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::Entity& operator=(const ::org::w3c::dom::Entity& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::Entity& operator=(::org::w3c::dom::Entity&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getPublicId() const;
    ::java::lang::String getSystemId() const;
    ::java::lang::String getNotationName() const;
    ::java::lang::String getInputEncoding() const;
    ::java::lang::String getXmlEncoding() const;
    ::java::lang::String getXmlVersion() const;

};
}
}
}


