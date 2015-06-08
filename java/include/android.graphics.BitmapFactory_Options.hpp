#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace graphics {
class BitmapFactory_Options : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BitmapFactory_Options(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BitmapFactory_Options(const ::android::graphics::BitmapFactory_Options& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BitmapFactory_Options(::android::graphics::BitmapFactory_Options&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::BitmapFactory_Options& operator=(const ::android::graphics::BitmapFactory_Options& x) {obj = x.obj; return *this;}
    ::android::graphics::BitmapFactory_Options& operator=(::android::graphics::BitmapFactory_Options&& x) {obj = std::move(x.obj); return *this;}
    
    BitmapFactory_Options();
    void requestCancelDecode() const;

};
}
}


