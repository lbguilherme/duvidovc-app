#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace w3c { namespace dom { namespace ls { class LSInput; } } } }
namespace org { namespace w3c { namespace dom { namespace ls { class LSOutput; } } } }
namespace org { namespace w3c { namespace dom { namespace ls { class LSParser; } } } }
namespace org { namespace w3c { namespace dom { namespace ls { class LSSerializer; } } } }

namespace org {
namespace w3c {
namespace dom {
namespace ls {
class DOMImplementationLS : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DOMImplementationLS(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DOMImplementationLS(const ::org::w3c::dom::ls::DOMImplementationLS& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DOMImplementationLS(::org::w3c::dom::ls::DOMImplementationLS&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::ls::DOMImplementationLS& operator=(const ::org::w3c::dom::ls::DOMImplementationLS& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::ls::DOMImplementationLS& operator=(::org::w3c::dom::ls::DOMImplementationLS&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::w3c::dom::ls::LSParser createLSParser(int16_t, const ::java::lang::String&) const ;
    ::org::w3c::dom::ls::LSSerializer createLSSerializer() const ;
    ::org::w3c::dom::ls::LSInput createLSInput() const ;
    ::org::w3c::dom::ls::LSOutput createLSOutput() const ;

};
}
}
}
}


