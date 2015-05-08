#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace renderscript { class Element; } }
namespace android { namespace renderscript { class RenderScript; } }
namespace android { namespace renderscript { class Type; } }
namespace android { namespace renderscript { class Type_Builder; } }

namespace android {
namespace renderscript {
class Type_Builder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Type_Builder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Type_Builder(const ::android::renderscript::Type_Builder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Type_Builder(::android::renderscript::Type_Builder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Type_Builder& operator=(const ::android::renderscript::Type_Builder& x) {obj = x.obj; return *this;}
    ::android::renderscript::Type_Builder& operator=(::android::renderscript::Type_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    Type_Builder(const ::android::renderscript::RenderScript&, const ::android::renderscript::Element&);
    ::android::renderscript::Type_Builder setX(int32_t) const ;
    ::android::renderscript::Type_Builder setY(int32_t) const ;
    ::android::renderscript::Type_Builder setMipmaps(bool) const ;
    ::android::renderscript::Type_Builder setFaces(bool) const ;
    ::android::renderscript::Type create() const ;

};
}
}


