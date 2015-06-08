#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.xml.sax.ext.Attributes2.hpp"
#include "org.xml.sax.helpers.AttributesImpl.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace xml { namespace sax { class Attributes; } } }

namespace org {
namespace xml {
namespace sax {
namespace ext {
class Attributes2Impl : public virtual ::java::lang::Object,
                        public virtual ::org::xml::sax::ext::Attributes2,
                        public virtual ::org::xml::sax::helpers::AttributesImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Attributes2Impl(jobject _obj) : ::java::lang::Object(_obj), ::org::xml::sax::Attributes(_obj), ::org::xml::sax::ext::Attributes2(_obj), ::org::xml::sax::helpers::AttributesImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Attributes2Impl(const ::org::xml::sax::ext::Attributes2Impl& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::Attributes((jobject)0), ::org::xml::sax::ext::Attributes2((jobject)0), ::org::xml::sax::helpers::AttributesImpl((jobject)0) {obj = x.obj;}
    Attributes2Impl(::org::xml::sax::ext::Attributes2Impl&& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::Attributes((jobject)0), ::org::xml::sax::ext::Attributes2((jobject)0), ::org::xml::sax::helpers::AttributesImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::ext::Attributes2Impl& operator=(const ::org::xml::sax::ext::Attributes2Impl& x) {obj = x.obj; return *this;}
    ::org::xml::sax::ext::Attributes2Impl& operator=(::org::xml::sax::ext::Attributes2Impl&& x) {obj = std::move(x.obj); return *this;}
    
    Attributes2Impl();
    Attributes2Impl(const ::org::xml::sax::Attributes&);
    bool isDeclared(int32_t) const;
    bool isDeclared(const ::java::lang::String&, const ::java::lang::String&) const;
    bool isDeclared(const ::java::lang::String&) const;
    bool isSpecified(int32_t) const;
    bool isSpecified(const ::java::lang::String&, const ::java::lang::String&) const;
    bool isSpecified(const ::java::lang::String&) const;
    void setAttributes(const ::org::xml::sax::Attributes&) const;
    void addAttribute(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const;
    void removeAttribute(int32_t) const;
    void setDeclared(int32_t, bool) const;
    void setSpecified(int32_t, bool) const;

};
}
}
}
}


