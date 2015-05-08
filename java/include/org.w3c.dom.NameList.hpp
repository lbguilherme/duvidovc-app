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
class NameList : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NameList(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NameList(const ::org::w3c::dom::NameList& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NameList(::org::w3c::dom::NameList&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::NameList& operator=(const ::org::w3c::dom::NameList& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::NameList& operator=(::org::w3c::dom::NameList&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getName(int32_t) const ;
    ::java::lang::String getNamespaceURI(int32_t) const ;
    int32_t getLength() const ;
    bool contains(const ::java::lang::String&) const ;
    bool containsNS(const ::java::lang::String&, const ::java::lang::String&) const ;

};
}
}
}


