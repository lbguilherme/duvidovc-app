#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.xml.sax.ext.Locator2.hpp"
#include "org.xml.sax.helpers.LocatorImpl.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace xml { namespace sax { class Locator; } } }

namespace org {
namespace xml {
namespace sax {
namespace ext {
class Locator2Impl : public virtual ::java::lang::Object,
                     public virtual ::org::xml::sax::ext::Locator2,
                     public virtual ::org::xml::sax::helpers::LocatorImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Locator2Impl(jobject _obj) : ::java::lang::Object(_obj), ::org::xml::sax::Locator(_obj), ::org::xml::sax::ext::Locator2(_obj), ::org::xml::sax::helpers::LocatorImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Locator2Impl(const ::org::xml::sax::ext::Locator2Impl& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::Locator((jobject)0), ::org::xml::sax::ext::Locator2((jobject)0), ::org::xml::sax::helpers::LocatorImpl((jobject)0) {obj = x.obj;}
    Locator2Impl(::org::xml::sax::ext::Locator2Impl&& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::Locator((jobject)0), ::org::xml::sax::ext::Locator2((jobject)0), ::org::xml::sax::helpers::LocatorImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::ext::Locator2Impl& operator=(const ::org::xml::sax::ext::Locator2Impl& x) {obj = x.obj; return *this;}
    ::org::xml::sax::ext::Locator2Impl& operator=(::org::xml::sax::ext::Locator2Impl&& x) {obj = std::move(x.obj); return *this;}
    
    Locator2Impl();
    Locator2Impl(const ::org::xml::sax::Locator&);
    ::java::lang::String getXMLVersion() const;
    ::java::lang::String getEncoding() const;
    void setXMLVersion(const ::java::lang::String&) const;
    void setEncoding(const ::java::lang::String&) const;

};
}
}
}
}


