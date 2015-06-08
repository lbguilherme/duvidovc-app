#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.SurfaceHolder_Callback.hpp"

namespace android { namespace view { class SurfaceHolder; } }

namespace android {
namespace view {
class SurfaceHolder_Callback2 : public virtual ::java::lang::Object,
                                public virtual ::android::view::SurfaceHolder_Callback {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SurfaceHolder_Callback2(jobject _obj) : ::java::lang::Object(_obj), ::android::view::SurfaceHolder_Callback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SurfaceHolder_Callback2(const ::android::view::SurfaceHolder_Callback2& x) : ::java::lang::Object((jobject)0), ::android::view::SurfaceHolder_Callback((jobject)0) {obj = x.obj;}
    SurfaceHolder_Callback2(::android::view::SurfaceHolder_Callback2&& x) : ::java::lang::Object((jobject)0), ::android::view::SurfaceHolder_Callback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::SurfaceHolder_Callback2& operator=(const ::android::view::SurfaceHolder_Callback2& x) {obj = x.obj; return *this;}
    ::android::view::SurfaceHolder_Callback2& operator=(::android::view::SurfaceHolder_Callback2&& x) {obj = std::move(x.obj); return *this;}
    
    void surfaceRedrawNeeded(const ::android::view::SurfaceHolder&) const;

};
}
}


