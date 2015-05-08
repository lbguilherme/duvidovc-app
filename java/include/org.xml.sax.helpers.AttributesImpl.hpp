#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.xml.sax.Attributes.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace xml { namespace sax { class Attributes; } } }

namespace org {
namespace xml {
namespace sax {
namespace helpers {
class AttributesImpl : public virtual ::java::lang::Object,
                       public virtual ::org::xml::sax::Attributes {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AttributesImpl(jobject _obj) : ::java::lang::Object(_obj), ::org::xml::sax::Attributes(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AttributesImpl(const ::org::xml::sax::helpers::AttributesImpl& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::Attributes((jobject)0) {obj = x.obj;}
    AttributesImpl(::org::xml::sax::helpers::AttributesImpl&& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::Attributes((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::helpers::AttributesImpl& operator=(const ::org::xml::sax::helpers::AttributesImpl& x) {obj = x.obj; return *this;}
    ::org::xml::sax::helpers::AttributesImpl& operator=(::org::xml::sax::helpers::AttributesImpl&& x) {obj = std::move(x.obj); return *this;}
    
    AttributesImpl();
    AttributesImpl(const ::org::xml::sax::Attributes&);
    int32_t getLength() const ;
    ::java::lang::String getURI(int32_t) const ;
    ::java::lang::String getLocalName(int32_t) const ;
    ::java::lang::String getQName(int32_t) const ;
    ::java::lang::String getType(int32_t) const ;
    ::java::lang::String getValue(int32_t) const ;
    int32_t getIndex(const ::java::lang::String&, const ::java::lang::String&) const ;
    int32_t getIndex(const ::java::lang::String&) const ;
    ::java::lang::String getType(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::java::lang::String getType(const ::java::lang::String&) const ;
    ::java::lang::String getValue(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::java::lang::String getValue(const ::java::lang::String&) const ;
    void clear() const ;
    void setAttributes(const ::org::xml::sax::Attributes&) const ;
    void addAttribute(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    void setAttribute(int32_t, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    void removeAttribute(int32_t) const ;
    void setURI(int32_t, const ::java::lang::String&) const ;
    void setLocalName(int32_t, const ::java::lang::String&) const ;
    void setQName(int32_t, const ::java::lang::String&) const ;
    void setType(int32_t, const ::java::lang::String&) const ;
    void setValue(int32_t, const ::java::lang::String&) const ;

};
}
}
}
}


