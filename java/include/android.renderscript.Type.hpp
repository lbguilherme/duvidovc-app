#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.renderscript.BaseObj.hpp"

namespace android { namespace renderscript { class Element; } }

namespace android {
namespace renderscript {
class Type : public virtual ::java::lang::Object,
             public virtual ::android::renderscript::BaseObj {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Type(jobject _obj) : ::java::lang::Object(_obj), ::android::renderscript::BaseObj(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Type(const ::android::renderscript::Type& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0) {obj = x.obj;}
    Type(::android::renderscript::Type&& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Type& operator=(const ::android::renderscript::Type& x) {obj = x.obj; return *this;}
    ::android::renderscript::Type& operator=(::android::renderscript::Type&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::renderscript::Element getElement() const ;
    int32_t getX() const ;
    int32_t getY() const ;
    int32_t getZ() const ;
    bool hasMipmaps() const ;
    bool hasFaces() const ;
    int32_t getCount() const ;

};
}
}

#include "android.renderscript.Type_Builder.hpp"
#include "android.renderscript.Type_CubemapFace.hpp"

