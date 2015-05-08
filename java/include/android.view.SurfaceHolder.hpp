#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class Rect; } }
namespace android { namespace view { class Surface; } }
namespace android { namespace view { class SurfaceHolder_Callback; } }

namespace android {
namespace view {
class SurfaceHolder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SurfaceHolder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SurfaceHolder(const ::android::view::SurfaceHolder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SurfaceHolder(::android::view::SurfaceHolder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::SurfaceHolder& operator=(const ::android::view::SurfaceHolder& x) {obj = x.obj; return *this;}
    ::android::view::SurfaceHolder& operator=(::android::view::SurfaceHolder&& x) {obj = std::move(x.obj); return *this;}
    
    void addCallback(const ::android::view::SurfaceHolder_Callback&) const ;
    void removeCallback(const ::android::view::SurfaceHolder_Callback&) const ;
    bool isCreating() const ;
    void setType(int32_t) const ;
    void setFixedSize(int32_t, int32_t) const ;
    void setSizeFromLayout() const ;
    void setFormat(int32_t) const ;
    void setKeepScreenOn(bool) const ;
    ::android::graphics::Canvas lockCanvas() const ;
    ::android::graphics::Canvas lockCanvas(const ::android::graphics::Rect&) const ;
    void unlockCanvasAndPost(const ::android::graphics::Canvas&) const ;
    ::android::graphics::Rect getSurfaceFrame() const ;
    ::android::view::Surface getSurface() const ;

};
}
}

#include "android.view.SurfaceHolder_BadSurfaceTypeException.hpp"
#include "android.view.SurfaceHolder_Callback.hpp"
#include "android.view.SurfaceHolder_Callback2.hpp"

