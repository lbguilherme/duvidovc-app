#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace w3c { namespace dom { class Element; } } }
namespace org { namespace w3c { namespace dom { class Node; } } }

namespace org {
namespace w3c {
namespace dom {
namespace ls {
class LSParserFilter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LSParserFilter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LSParserFilter(const ::org::w3c::dom::ls::LSParserFilter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LSParserFilter(::org::w3c::dom::ls::LSParserFilter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::ls::LSParserFilter& operator=(const ::org::w3c::dom::ls::LSParserFilter& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::ls::LSParserFilter& operator=(::org::w3c::dom::ls::LSParserFilter&& x) {obj = std::move(x.obj); return *this;}
    
    int16_t startElement(const ::org::w3c::dom::Element&) const ;
    int16_t acceptNode(const ::org::w3c::dom::Node&) const ;
    int32_t getWhatToShow() const ;

};
}
}
}
}


