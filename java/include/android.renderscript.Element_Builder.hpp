#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace renderscript { class Element; } }
namespace android { namespace renderscript { class Element_Builder; } }
namespace android { namespace renderscript { class RenderScript; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace renderscript {
class Element_Builder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Element_Builder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Element_Builder(const ::android::renderscript::Element_Builder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Element_Builder(::android::renderscript::Element_Builder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Element_Builder& operator=(const ::android::renderscript::Element_Builder& x) {obj = x.obj; return *this;}
    ::android::renderscript::Element_Builder& operator=(::android::renderscript::Element_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    Element_Builder(const ::android::renderscript::RenderScript&);
    ::android::renderscript::Element_Builder add(const ::android::renderscript::Element&, const ::java::lang::String&, int32_t) const;
    ::android::renderscript::Element_Builder add(const ::android::renderscript::Element&, const ::java::lang::String&) const;
    ::android::renderscript::Element create() const;

};
}
}


