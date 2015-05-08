#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace opengl {
class Visibility : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Visibility(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Visibility(const ::android::opengl::Visibility& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Visibility(::android::opengl::Visibility&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::opengl::Visibility& operator=(const ::android::opengl::Visibility& x) {obj = x.obj; return *this;}
    ::android::opengl::Visibility& operator=(::android::opengl::Visibility&& x) {obj = std::move(x.obj); return *this;}
    
    Visibility();
    static int32_t visibilityTest(const std::vector< float>&, int32_t, const std::vector< float>&, int32_t, const std::vector< uint16_t>&, int32_t, int32_t);
    static int32_t frustumCullSpheres(const std::vector< float>&, int32_t, const std::vector< float>&, int32_t, int32_t, const std::vector< int32_t>&, int32_t, int32_t);
    static void computeBoundingSphere(const std::vector< float>&, int32_t, int32_t, const std::vector< float>&, int32_t);

};
}
}


