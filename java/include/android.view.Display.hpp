#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Point; } }
namespace android { namespace graphics { class Rect; } }
namespace android { namespace util { class DisplayMetrics; } }

namespace android {
namespace view {
class Display : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Display(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Display(const ::android::view::Display& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Display(::android::view::Display&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::Display& operator=(const ::android::view::Display& x) {obj = x.obj; return *this;}
    ::android::view::Display& operator=(::android::view::Display&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getDisplayId() const ;
    void getSize(const ::android::graphics::Point&) const ;
    void getRectSize(const ::android::graphics::Rect&) const ;
    int32_t getWidth() const ;
    int32_t getHeight() const ;
    int32_t getRotation() const ;
    int32_t getOrientation() const ;
    int32_t getPixelFormat() const ;
    float getRefreshRate() const ;
    void getMetrics(const ::android::util::DisplayMetrics&) const ;

};
}
}


