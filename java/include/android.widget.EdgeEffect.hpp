#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class Canvas; } }

namespace android {
namespace widget {
class EdgeEffect : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EdgeEffect(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EdgeEffect(const ::android::widget::EdgeEffect& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    EdgeEffect(::android::widget::EdgeEffect&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::EdgeEffect& operator=(const ::android::widget::EdgeEffect& x) {obj = x.obj; return *this;}
    ::android::widget::EdgeEffect& operator=(::android::widget::EdgeEffect&& x) {obj = std::move(x.obj); return *this;}
    
    EdgeEffect(const ::android::content::Context&);
    void setSize(int32_t, int32_t) const ;
    bool isFinished() const ;
    void finish() const ;
    void onPull(float) const ;
    void onRelease() const ;
    void onAbsorb(int32_t) const ;
    bool draw(const ::android::graphics::Canvas&) const ;

};
}
}


