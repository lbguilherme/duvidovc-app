#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.xml.transform.Source.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace w3c { namespace dom { class Node; } } }

namespace javax {
namespace xml {
namespace transform {
namespace dom {
class DOMSource : public virtual ::java::lang::Object,
                  public virtual ::javax::xml::transform::Source {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DOMSource(jobject _obj) : ::java::lang::Object(_obj), ::javax::xml::transform::Source(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DOMSource(const ::javax::xml::transform::dom::DOMSource& x) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Source((jobject)0) {obj = x.obj;}
    DOMSource(::javax::xml::transform::dom::DOMSource&& x) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Source((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::transform::dom::DOMSource& operator=(const ::javax::xml::transform::dom::DOMSource& x) {obj = x.obj; return *this;}
    ::javax::xml::transform::dom::DOMSource& operator=(::javax::xml::transform::dom::DOMSource&& x) {obj = std::move(x.obj); return *this;}
    
    DOMSource();
    DOMSource(const ::org::w3c::dom::Node&);
    DOMSource(const ::org::w3c::dom::Node&, const ::java::lang::String&);
    void setNode(const ::org::w3c::dom::Node&) const;
    ::org::w3c::dom::Node getNode() const;
    void setSystemId(const ::java::lang::String&) const;
    ::java::lang::String getSystemId() const;

};
}
}
}
}


