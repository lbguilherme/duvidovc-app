#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.w3c.dom.CharacterData.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace w3c { namespace dom { class Text; } } }

namespace org {
namespace w3c {
namespace dom {
class Text : public virtual ::java::lang::Object,
             public virtual ::org::w3c::dom::CharacterData {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Text(jobject _obj) : ::java::lang::Object(_obj), ::org::w3c::dom::CharacterData(_obj), ::org::w3c::dom::Node(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Text(const ::org::w3c::dom::Text& x) : ::java::lang::Object((jobject)0), ::org::w3c::dom::CharacterData((jobject)0), ::org::w3c::dom::Node((jobject)0) {obj = x.obj;}
    Text(::org::w3c::dom::Text&& x) : ::java::lang::Object((jobject)0), ::org::w3c::dom::CharacterData((jobject)0), ::org::w3c::dom::Node((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::Text& operator=(const ::org::w3c::dom::Text& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::Text& operator=(::org::w3c::dom::Text&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::w3c::dom::Text splitText(int32_t) const ;
    bool isElementContentWhitespace() const ;
    ::java::lang::String getWholeText() const ;
    ::org::w3c::dom::Text replaceWholeText(const ::java::lang::String&) const ;

};
}
}
}


