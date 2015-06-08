#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class ClassLoader; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace javax { namespace xml { namespace transform { class ErrorListener; } } }
namespace javax { namespace xml { namespace transform { class Source; } } }
namespace javax { namespace xml { namespace transform { class Templates; } } }
namespace javax { namespace xml { namespace transform { class Transformer; } } }
namespace javax { namespace xml { namespace transform { class TransformerFactory; } } }
namespace javax { namespace xml { namespace transform { class URIResolver; } } }

namespace javax {
namespace xml {
namespace transform {
class TransformerFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TransformerFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TransformerFactory(const ::javax::xml::transform::TransformerFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TransformerFactory(::javax::xml::transform::TransformerFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::transform::TransformerFactory& operator=(const ::javax::xml::transform::TransformerFactory& x) {obj = x.obj; return *this;}
    ::javax::xml::transform::TransformerFactory& operator=(::javax::xml::transform::TransformerFactory&& x) {obj = std::move(x.obj); return *this;}
    
    static ::javax::xml::transform::TransformerFactory newInstance();
    static ::javax::xml::transform::TransformerFactory newInstance(const ::java::lang::String&, const ::java::lang::ClassLoader&);
    ::javax::xml::transform::Transformer newTransformer(const ::javax::xml::transform::Source&) const;
    ::javax::xml::transform::Transformer newTransformer() const;
    ::javax::xml::transform::Templates newTemplates(const ::javax::xml::transform::Source&) const;
    ::javax::xml::transform::Source getAssociatedStylesheet(const ::javax::xml::transform::Source&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const;
    void setURIResolver(const ::javax::xml::transform::URIResolver&) const;
    ::javax::xml::transform::URIResolver getURIResolver() const;
    void setFeature(const ::java::lang::String&, bool) const;
    bool getFeature(const ::java::lang::String&) const;
    void setAttribute(const ::java::lang::String&, const ::java::lang::Object&) const;
    ::java::lang::Object getAttribute(const ::java::lang::String&) const;
    void setErrorListener(const ::javax::xml::transform::ErrorListener&) const;
    ::javax::xml::transform::ErrorListener getErrorListener() const;

};
}
}
}


