#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace w3c { namespace dom { class DOMConfiguration; } } }
namespace org { namespace w3c { namespace dom { class Document; } } }
namespace org { namespace w3c { namespace dom { class Node; } } }
namespace org { namespace w3c { namespace dom { namespace ls { class LSInput; } } } }
namespace org { namespace w3c { namespace dom { namespace ls { class LSParserFilter; } } } }

namespace org {
namespace w3c {
namespace dom {
namespace ls {
class LSParser : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LSParser(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LSParser(const ::org::w3c::dom::ls::LSParser& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LSParser(::org::w3c::dom::ls::LSParser&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::ls::LSParser& operator=(const ::org::w3c::dom::ls::LSParser& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::ls::LSParser& operator=(::org::w3c::dom::ls::LSParser&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::w3c::dom::DOMConfiguration getDomConfig() const;
    ::org::w3c::dom::ls::LSParserFilter getFilter() const;
    void setFilter(const ::org::w3c::dom::ls::LSParserFilter&) const;
    bool getAsync() const;
    bool getBusy() const;
    ::org::w3c::dom::Document parse(const ::org::w3c::dom::ls::LSInput&) const;
    ::org::w3c::dom::Document parseURI(const ::java::lang::String&) const;
    ::org::w3c::dom::Node parseWithContext(const ::org::w3c::dom::ls::LSInput&, const ::org::w3c::dom::Node&, int16_t) const;
    void abort() const;

};
}
}
}
}


