#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { namespace res { class AssetManager; } } }
namespace android { namespace graphics { class Typeface; } }
namespace java { namespace io { class File; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace graphics {
class Typeface : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Typeface(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Typeface(const ::android::graphics::Typeface& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Typeface(::android::graphics::Typeface&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::Typeface& operator=(const ::android::graphics::Typeface& x) {obj = x.obj; return *this;}
    ::android::graphics::Typeface& operator=(::android::graphics::Typeface&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getStyle() const;
    bool isBold() const;
    bool isItalic() const;
    static ::android::graphics::Typeface create(const ::java::lang::String&, int32_t);
    static ::android::graphics::Typeface create(const ::android::graphics::Typeface&, int32_t);
    static ::android::graphics::Typeface defaultFromStyle(int32_t);
    static ::android::graphics::Typeface createFromAsset(const ::android::content::res::AssetManager&, const ::java::lang::String&);
    static ::android::graphics::Typeface createFromFile(const ::java::io::File&);
    static ::android::graphics::Typeface createFromFile(const ::java::lang::String&);

};
}
}


