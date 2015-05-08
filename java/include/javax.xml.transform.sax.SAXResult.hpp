#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.xml.transform.Result.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace xml { namespace sax { class ContentHandler; } } }
namespace org { namespace xml { namespace sax { namespace ext { class LexicalHandler; } } } }

namespace javax {
namespace xml {
namespace transform {
namespace sax {
class SAXResult : public virtual ::java::lang::Object,
                  public virtual ::javax::xml::transform::Result {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SAXResult(jobject _obj) : ::java::lang::Object(_obj), ::javax::xml::transform::Result(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SAXResult(const ::javax::xml::transform::sax::SAXResult& x) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Result((jobject)0) {obj = x.obj;}
    SAXResult(::javax::xml::transform::sax::SAXResult&& x) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Result((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::transform::sax::SAXResult& operator=(const ::javax::xml::transform::sax::SAXResult& x) {obj = x.obj; return *this;}
    ::javax::xml::transform::sax::SAXResult& operator=(::javax::xml::transform::sax::SAXResult&& x) {obj = std::move(x.obj); return *this;}
    
    SAXResult();
    SAXResult(const ::org::xml::sax::ContentHandler&);
    void setHandler(const ::org::xml::sax::ContentHandler&) const ;
    ::org::xml::sax::ContentHandler getHandler() const ;
    void setLexicalHandler(const ::org::xml::sax::ext::LexicalHandler&) const ;
    ::org::xml::sax::ext::LexicalHandler getLexicalHandler() const ;
    void setSystemId(const ::java::lang::String&) const ;
    ::java::lang::String getSystemId() const ;

};
}
}
}
}


