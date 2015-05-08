#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class Movie; } }
namespace android { namespace graphics { class Paint; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace graphics {
class Movie : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Movie(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Movie(const ::android::graphics::Movie& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Movie(::android::graphics::Movie&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::Movie& operator=(const ::android::graphics::Movie& x) {obj = x.obj; return *this;}
    ::android::graphics::Movie& operator=(::android::graphics::Movie&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t width() const ;
    int32_t height() const ;
    bool isOpaque() const ;
    int32_t duration() const ;
    bool setTime(int32_t) const ;
    void draw(const ::android::graphics::Canvas&, float, float, const ::android::graphics::Paint&) const ;
    void draw(const ::android::graphics::Canvas&, float, float) const ;
    static ::android::graphics::Movie decodeStream(const ::java::io::InputStream&);
    static ::android::graphics::Movie decodeByteArray(const std::vector< int8_t>&, int32_t, int32_t);
    static ::android::graphics::Movie decodeFile(const ::java::lang::String&);

};
}
}


