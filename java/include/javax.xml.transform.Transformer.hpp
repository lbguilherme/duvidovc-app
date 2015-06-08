#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Properties; } }
namespace javax { namespace xml { namespace transform { class ErrorListener; } } }
namespace javax { namespace xml { namespace transform { class Result; } } }
namespace javax { namespace xml { namespace transform { class Source; } } }
namespace javax { namespace xml { namespace transform { class URIResolver; } } }

namespace javax {
namespace xml {
namespace transform {
class Transformer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Transformer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Transformer(const ::javax::xml::transform::Transformer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Transformer(::javax::xml::transform::Transformer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::transform::Transformer& operator=(const ::javax::xml::transform::Transformer& x) {obj = x.obj; return *this;}
    ::javax::xml::transform::Transformer& operator=(::javax::xml::transform::Transformer&& x) {obj = std::move(x.obj); return *this;}
    
    void reset() const;
    void transform(const ::javax::xml::transform::Source&, const ::javax::xml::transform::Result&) const;
    void setParameter(const ::java::lang::String&, const ::java::lang::Object&) const;
    ::java::lang::Object getParameter(const ::java::lang::String&) const;
    void clearParameters() const;
    void setURIResolver(const ::javax::xml::transform::URIResolver&) const;
    ::javax::xml::transform::URIResolver getURIResolver() const;
    void setOutputProperties(const ::java::util::Properties&) const;
    ::java::util::Properties getOutputProperties() const;
    void setOutputProperty(const ::java::lang::String&, const ::java::lang::String&) const;
    ::java::lang::String getOutputProperty(const ::java::lang::String&) const;
    void setErrorListener(const ::javax::xml::transform::ErrorListener&) const;
    ::javax::xml::transform::ErrorListener getErrorListener() const;

};
}
}
}


