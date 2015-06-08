#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.xml.transform.SourceLocator.hpp"

namespace org { namespace w3c { namespace dom { class Node; } } }

namespace javax {
namespace xml {
namespace transform {
namespace dom {
class DOMLocator : public virtual ::java::lang::Object,
                   public virtual ::javax::xml::transform::SourceLocator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DOMLocator(jobject _obj) : ::java::lang::Object(_obj), ::javax::xml::transform::SourceLocator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DOMLocator(const ::javax::xml::transform::dom::DOMLocator& x) : ::java::lang::Object((jobject)0), ::javax::xml::transform::SourceLocator((jobject)0) {obj = x.obj;}
    DOMLocator(::javax::xml::transform::dom::DOMLocator&& x) : ::java::lang::Object((jobject)0), ::javax::xml::transform::SourceLocator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::transform::dom::DOMLocator& operator=(const ::javax::xml::transform::dom::DOMLocator& x) {obj = x.obj; return *this;}
    ::javax::xml::transform::dom::DOMLocator& operator=(::javax::xml::transform::dom::DOMLocator&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::w3c::dom::Node getOriginatingNode() const;

};
}
}
}
}


