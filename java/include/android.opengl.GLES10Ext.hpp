#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace nio { class IntBuffer; } }

namespace android {
namespace opengl {
class GLES10Ext : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GLES10Ext(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GLES10Ext(const ::android::opengl::GLES10Ext& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GLES10Ext(::android::opengl::GLES10Ext&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::opengl::GLES10Ext& operator=(const ::android::opengl::GLES10Ext& x) {obj = x.obj; return *this;}
    ::android::opengl::GLES10Ext& operator=(::android::opengl::GLES10Ext&& x) {obj = std::move(x.obj); return *this;}
    
    GLES10Ext();
    static int32_t glQueryMatrixxOES(const std::vector< int32_t>&, int32_t, const std::vector< int32_t>&, int32_t);
    static int32_t glQueryMatrixxOES(const ::java::nio::IntBuffer&, const ::java::nio::IntBuffer&);

};
}
}


