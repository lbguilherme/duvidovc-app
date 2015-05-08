#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.xml.sax.Locator.hpp"

namespace java { namespace lang { class String; } }

namespace org {
namespace xml {
namespace sax {
namespace ext {
class Locator2 : public virtual ::java::lang::Object,
                 public virtual ::org::xml::sax::Locator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Locator2(jobject _obj) : ::java::lang::Object(_obj), ::org::xml::sax::Locator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Locator2(const ::org::xml::sax::ext::Locator2& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::Locator((jobject)0) {obj = x.obj;}
    Locator2(::org::xml::sax::ext::Locator2&& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::Locator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::ext::Locator2& operator=(const ::org::xml::sax::ext::Locator2& x) {obj = x.obj; return *this;}
    ::org::xml::sax::ext::Locator2& operator=(::org::xml::sax::ext::Locator2&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getXMLVersion() const ;
    ::java::lang::String getEncoding() const ;

};
}
}
}
}


