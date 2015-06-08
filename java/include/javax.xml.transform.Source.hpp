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
class Source : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Source(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Source(const ::javax::xml::transform::Source& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Source(::javax::xml::transform::Source&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::transform::Source& operator=(const ::javax::xml::transform::Source& x) {obj = x.obj; return *this;}
    ::javax::xml::transform::Source& operator=(::javax::xml::transform::Source&& x) {obj = std::move(x.obj); return *this;}
    
    void setSystemId(const ::java::lang::String&) const;
    ::java::lang::String getSystemId() const;

};
}
}
}


