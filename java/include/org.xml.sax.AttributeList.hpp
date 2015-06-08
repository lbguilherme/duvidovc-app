#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace org {
namespace xml {
namespace sax {
class AttributeList : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AttributeList(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AttributeList(const ::org::xml::sax::AttributeList& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AttributeList(::org::xml::sax::AttributeList&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::AttributeList& operator=(const ::org::xml::sax::AttributeList& x) {obj = x.obj; return *this;}
    ::org::xml::sax::AttributeList& operator=(::org::xml::sax::AttributeList&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getLength() const;
    ::java::lang::String getName(int32_t) const;
    ::java::lang::String getType(int32_t) const;
    ::java::lang::String getValue(int32_t) const;
    ::java::lang::String getType(const ::java::lang::String&) const;
    ::java::lang::String getValue(const ::java::lang::String&) const;

};
}
}
}


