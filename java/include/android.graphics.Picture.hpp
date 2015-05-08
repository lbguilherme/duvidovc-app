#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class Picture; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class OutputStream; } }

namespace android {
namespace graphics {
class Picture : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Picture(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Picture(const ::android::graphics::Picture& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Picture(::android::graphics::Picture&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::Picture& operator=(const ::android::graphics::Picture& x) {obj = x.obj; return *this;}
    ::android::graphics::Picture& operator=(::android::graphics::Picture&& x) {obj = std::move(x.obj); return *this;}
    
    Picture();
    ::android::graphics::Canvas beginRecording(int32_t, int32_t) const ;
    void endRecording() const ;
    int32_t getWidth() const ;
    int32_t getHeight() const ;
    void draw(const ::android::graphics::Canvas&) const ;
    static ::android::graphics::Picture createFromStream(const ::java::io::InputStream&);
    void writeToStream(const ::java::io::OutputStream&) const ;

};
}
}


