#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.xml.sax.Attributes.hpp"

namespace java { namespace lang { class String; } }

namespace org {
namespace xml {
namespace sax {
namespace ext {
class Attributes2 : public virtual ::java::lang::Object,
                    public virtual ::org::xml::sax::Attributes {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Attributes2(jobject _obj) : ::java::lang::Object(_obj), ::org::xml::sax::Attributes(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Attributes2(const ::org::xml::sax::ext::Attributes2& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::Attributes((jobject)0) {obj = x.obj;}
    Attributes2(::org::xml::sax::ext::Attributes2&& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::Attributes((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::ext::Attributes2& operator=(const ::org::xml::sax::ext::Attributes2& x) {obj = x.obj; return *this;}
    ::org::xml::sax::ext::Attributes2& operator=(::org::xml::sax::ext::Attributes2&& x) {obj = std::move(x.obj); return *this;}
    
    bool isDeclared(int32_t) const;
    bool isDeclared(const ::java::lang::String&) const;
    bool isDeclared(const ::java::lang::String&, const ::java::lang::String&) const;
    bool isSpecified(int32_t) const;
    bool isSpecified(const ::java::lang::String&, const ::java::lang::String&) const;
    bool isSpecified(const ::java::lang::String&) const;

};
}
}
}
}


