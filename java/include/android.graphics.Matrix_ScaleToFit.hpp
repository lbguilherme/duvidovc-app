#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace graphics { class Matrix_ScaleToFit; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace graphics {
class Matrix_ScaleToFit : public virtual ::java::lang::Object,
                          public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Matrix_ScaleToFit(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Matrix_ScaleToFit(const ::android::graphics::Matrix_ScaleToFit& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    Matrix_ScaleToFit(::android::graphics::Matrix_ScaleToFit&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::Matrix_ScaleToFit& operator=(const ::android::graphics::Matrix_ScaleToFit& x) {obj = x.obj; return *this;}
    ::android::graphics::Matrix_ScaleToFit& operator=(::android::graphics::Matrix_ScaleToFit&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::graphics::Matrix_ScaleToFit> values();
    static ::android::graphics::Matrix_ScaleToFit valueOf(const ::java::lang::String&);

};
}
}


