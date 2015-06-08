#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.xml.transform.Result.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace w3c { namespace dom { class Node; } } }

namespace javax {
namespace xml {
namespace transform {
namespace dom {
class DOMResult : public virtual ::java::lang::Object,
                  public virtual ::javax::xml::transform::Result {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DOMResult(jobject _obj) : ::java::lang::Object(_obj), ::javax::xml::transform::Result(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DOMResult(const ::javax::xml::transform::dom::DOMResult& x) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Result((jobject)0) {obj = x.obj;}
    DOMResult(::javax::xml::transform::dom::DOMResult&& x) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Result((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::transform::dom::DOMResult& operator=(const ::javax::xml::transform::dom::DOMResult& x) {obj = x.obj; return *this;}
    ::javax::xml::transform::dom::DOMResult& operator=(::javax::xml::transform::dom::DOMResult&& x) {obj = std::move(x.obj); return *this;}
    
    DOMResult();
    DOMResult(const ::org::w3c::dom::Node&);
    DOMResult(const ::org::w3c::dom::Node&, const ::java::lang::String&);
    DOMResult(const ::org::w3c::dom::Node&, const ::org::w3c::dom::Node&);
    DOMResult(const ::org::w3c::dom::Node&, const ::org::w3c::dom::Node&, const ::java::lang::String&);
    void setNode(const ::org::w3c::dom::Node&) const;
    ::org::w3c::dom::Node getNode() const;
    void setNextSibling(const ::org::w3c::dom::Node&) const;
    ::org::w3c::dom::Node getNextSibling() const;
    void setSystemId(const ::java::lang::String&) const;
    ::java::lang::String getSystemId() const;

};
}
}
}
}


