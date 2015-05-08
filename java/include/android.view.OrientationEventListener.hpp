#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }

namespace android {
namespace view {
class OrientationEventListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit OrientationEventListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    OrientationEventListener(const ::android::view::OrientationEventListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    OrientationEventListener(::android::view::OrientationEventListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::OrientationEventListener& operator=(const ::android::view::OrientationEventListener& x) {obj = x.obj; return *this;}
    ::android::view::OrientationEventListener& operator=(::android::view::OrientationEventListener&& x) {obj = std::move(x.obj); return *this;}
    
    OrientationEventListener(const ::android::content::Context&);
    OrientationEventListener(const ::android::content::Context&, int32_t);
    void enable() const ;
    void disable() const ;
    bool canDetectOrientation() const ;
    void onOrientationChanged(int32_t) const ;

};
}
}


