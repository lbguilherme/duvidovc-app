#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace javax {
namespace xml {
namespace transform {
class SourceLocator : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SourceLocator(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SourceLocator(const ::javax::xml::transform::SourceLocator& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SourceLocator(::javax::xml::transform::SourceLocator&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::transform::SourceLocator& operator=(const ::javax::xml::transform::SourceLocator& x) {obj = x.obj; return *this;}
    ::javax::xml::transform::SourceLocator& operator=(::javax::xml::transform::SourceLocator&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getPublicId() const ;
    ::java::lang::String getSystemId() const ;
    int32_t getLineNumber() const ;
    int32_t getColumnNumber() const ;

};
}
}
}


