#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.w3c.dom.CharacterData.hpp"


namespace org {
namespace w3c {
namespace dom {
class Comment : public virtual ::java::lang::Object,
                public virtual ::org::w3c::dom::CharacterData {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Comment(jobject _obj) : ::java::lang::Object(_obj), ::org::w3c::dom::CharacterData(_obj), ::org::w3c::dom::Node(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Comment(const ::org::w3c::dom::Comment& x) : ::java::lang::Object((jobject)0), ::org::w3c::dom::CharacterData((jobject)0), ::org::w3c::dom::Node((jobject)0) {obj = x.obj;}
    Comment(::org::w3c::dom::Comment&& x) : ::java::lang::Object((jobject)0), ::org::w3c::dom::CharacterData((jobject)0), ::org::w3c::dom::Node((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::Comment& operator=(const ::org::w3c::dom::Comment& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::Comment& operator=(::org::w3c::dom::Comment&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


