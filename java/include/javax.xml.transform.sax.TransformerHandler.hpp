#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.xml.sax.ContentHandler.hpp"
#include "org.xml.sax.DTDHandler.hpp"
#include "org.xml.sax.ext.LexicalHandler.hpp"

namespace java { namespace lang { class String; } }
namespace javax { namespace xml { namespace transform { class Result; } } }
namespace javax { namespace xml { namespace transform { class Transformer; } } }

namespace javax {
namespace xml {
namespace transform {
namespace sax {
class TransformerHandler : public virtual ::java::lang::Object,
                           public virtual ::org::xml::sax::ContentHandler,
                           public virtual ::org::xml::sax::DTDHandler,
                           public virtual ::org::xml::sax::ext::LexicalHandler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TransformerHandler(jobject _obj) : ::java::lang::Object(_obj), ::org::xml::sax::ContentHandler(_obj), ::org::xml::sax::DTDHandler(_obj), ::org::xml::sax::ext::LexicalHandler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TransformerHandler(const ::javax::xml::transform::sax::TransformerHandler& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::ContentHandler((jobject)0), ::org::xml::sax::DTDHandler((jobject)0), ::org::xml::sax::ext::LexicalHandler((jobject)0) {obj = x.obj;}
    TransformerHandler(::javax::xml::transform::sax::TransformerHandler&& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::ContentHandler((jobject)0), ::org::xml::sax::DTDHandler((jobject)0), ::org::xml::sax::ext::LexicalHandler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::transform::sax::TransformerHandler& operator=(const ::javax::xml::transform::sax::TransformerHandler& x) {obj = x.obj; return *this;}
    ::javax::xml::transform::sax::TransformerHandler& operator=(::javax::xml::transform::sax::TransformerHandler&& x) {obj = std::move(x.obj); return *this;}
    
    void setResult(const ::javax::xml::transform::Result&) const ;
    void setSystemId(const ::java::lang::String&) const ;
    ::java::lang::String getSystemId() const ;
    ::javax::xml::transform::Transformer getTransformer() const ;

};
}
}
}
}


