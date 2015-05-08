#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.xml.sax.Locator.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace xml { namespace sax { class Locator; } } }

namespace org {
namespace xml {
namespace sax {
namespace helpers {
class LocatorImpl : public virtual ::java::lang::Object,
                    public virtual ::org::xml::sax::Locator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LocatorImpl(jobject _obj) : ::java::lang::Object(_obj), ::org::xml::sax::Locator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LocatorImpl(const ::org::xml::sax::helpers::LocatorImpl& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::Locator((jobject)0) {obj = x.obj;}
    LocatorImpl(::org::xml::sax::helpers::LocatorImpl&& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::Locator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::helpers::LocatorImpl& operator=(const ::org::xml::sax::helpers::LocatorImpl& x) {obj = x.obj; return *this;}
    ::org::xml::sax::helpers::LocatorImpl& operator=(::org::xml::sax::helpers::LocatorImpl&& x) {obj = std::move(x.obj); return *this;}
    
    LocatorImpl();
    LocatorImpl(const ::org::xml::sax::Locator&);
    ::java::lang::String getPublicId() const ;
    ::java::lang::String getSystemId() const ;
    int32_t getLineNumber() const ;
    int32_t getColumnNumber() const ;
    void setPublicId(const ::java::lang::String&) const ;
    void setSystemId(const ::java::lang::String&) const ;
    void setLineNumber(int32_t) const ;
    void setColumnNumber(int32_t) const ;

};
}
}
}
}


