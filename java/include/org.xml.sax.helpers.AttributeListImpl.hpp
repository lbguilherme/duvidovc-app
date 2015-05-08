#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.xml.sax.AttributeList.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace xml { namespace sax { class AttributeList; } } }

namespace org {
namespace xml {
namespace sax {
namespace helpers {
class AttributeListImpl : public virtual ::java::lang::Object,
                          public virtual ::org::xml::sax::AttributeList {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AttributeListImpl(jobject _obj) : ::java::lang::Object(_obj), ::org::xml::sax::AttributeList(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AttributeListImpl(const ::org::xml::sax::helpers::AttributeListImpl& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::AttributeList((jobject)0) {obj = x.obj;}
    AttributeListImpl(::org::xml::sax::helpers::AttributeListImpl&& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::AttributeList((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::helpers::AttributeListImpl& operator=(const ::org::xml::sax::helpers::AttributeListImpl& x) {obj = x.obj; return *this;}
    ::org::xml::sax::helpers::AttributeListImpl& operator=(::org::xml::sax::helpers::AttributeListImpl&& x) {obj = std::move(x.obj); return *this;}
    
    AttributeListImpl();
    AttributeListImpl(const ::org::xml::sax::AttributeList&);
    void setAttributeList(const ::org::xml::sax::AttributeList&) const ;
    void addAttribute(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    void removeAttribute(const ::java::lang::String&) const ;
    void clear() const ;
    int32_t getLength() const ;
    ::java::lang::String getName(int32_t) const ;
    ::java::lang::String getType(int32_t) const ;
    ::java::lang::String getValue(int32_t) const ;
    ::java::lang::String getType(const ::java::lang::String&) const ;
    ::java::lang::String getValue(const ::java::lang::String&) const ;

};
}
}
}
}


