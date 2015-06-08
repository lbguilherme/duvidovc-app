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
class Locator : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Locator(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Locator(const ::org::xml::sax::Locator& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Locator(::org::xml::sax::Locator&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::Locator& operator=(const ::org::xml::sax::Locator& x) {obj = x.obj; return *this;}
    ::org::xml::sax::Locator& operator=(::org::xml::sax::Locator&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getPublicId() const;
    ::java::lang::String getSystemId() const;
    int32_t getLineNumber() const;
    int32_t getColumnNumber() const;

};
}
}
}


