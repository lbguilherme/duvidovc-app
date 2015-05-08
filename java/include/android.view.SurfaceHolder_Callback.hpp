#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class SurfaceHolder; } }

namespace android {
namespace view {
class SurfaceHolder_Callback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SurfaceHolder_Callback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SurfaceHolder_Callback(const ::android::view::SurfaceHolder_Callback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SurfaceHolder_Callback(::android::view::SurfaceHolder_Callback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::SurfaceHolder_Callback& operator=(const ::android::view::SurfaceHolder_Callback& x) {obj = x.obj; return *this;}
    ::android::view::SurfaceHolder_Callback& operator=(::android::view::SurfaceHolder_Callback&& x) {obj = std::move(x.obj); return *this;}
    
    void surfaceCreated(const ::android::view::SurfaceHolder&) const ;
    void surfaceChanged(const ::android::view::SurfaceHolder&, int32_t, int32_t, int32_t) const ;
    void surfaceDestroyed(const ::android::view::SurfaceHolder&) const ;

};
}
}


