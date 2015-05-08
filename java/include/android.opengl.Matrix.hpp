#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace opengl {
class Matrix : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Matrix(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Matrix(const ::android::opengl::Matrix& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Matrix(::android::opengl::Matrix&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::opengl::Matrix& operator=(const ::android::opengl::Matrix& x) {obj = x.obj; return *this;}
    ::android::opengl::Matrix& operator=(::android::opengl::Matrix&& x) {obj = std::move(x.obj); return *this;}
    
    Matrix();
    static void multiplyMM(const std::vector< float>&, int32_t, const std::vector< float>&, int32_t, const std::vector< float>&, int32_t);
    static void multiplyMV(const std::vector< float>&, int32_t, const std::vector< float>&, int32_t, const std::vector< float>&, int32_t);
    static void transposeM(const std::vector< float>&, int32_t, const std::vector< float>&, int32_t);
    static bool invertM(const std::vector< float>&, int32_t, const std::vector< float>&, int32_t);
    static void orthoM(const std::vector< float>&, int32_t, float, float, float, float, float, float);
    static void frustumM(const std::vector< float>&, int32_t, float, float, float, float, float, float);
    static void perspectiveM(const std::vector< float>&, int32_t, float, float, float, float);
    static float length(float, float, float);
    static void setIdentityM(const std::vector< float>&, int32_t);
    static void scaleM(const std::vector< float>&, int32_t, const std::vector< float>&, int32_t, float, float, float);
    static void scaleM(const std::vector< float>&, int32_t, float, float, float);
    static void translateM(const std::vector< float>&, int32_t, const std::vector< float>&, int32_t, float, float, float);
    static void translateM(const std::vector< float>&, int32_t, float, float, float);
    static void rotateM(const std::vector< float>&, int32_t, const std::vector< float>&, int32_t, float, float, float, float);
    static void rotateM(const std::vector< float>&, int32_t, float, float, float, float);
    static void setRotateM(const std::vector< float>&, int32_t, float, float, float, float);
    static void setRotateEulerM(const std::vector< float>&, int32_t, float, float, float);
    static void setLookAtM(const std::vector< float>&, int32_t, float, float, float, float, float, float, float, float, float);

};
}
}


