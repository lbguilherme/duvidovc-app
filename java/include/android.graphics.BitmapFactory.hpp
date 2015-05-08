#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { namespace res { class Resources; } } }
namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace graphics { class BitmapFactory_Options; } }
namespace android { namespace graphics { class Rect; } }
namespace android { namespace util { class TypedValue; } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace graphics {
class BitmapFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BitmapFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BitmapFactory(const ::android::graphics::BitmapFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BitmapFactory(::android::graphics::BitmapFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::BitmapFactory& operator=(const ::android::graphics::BitmapFactory& x) {obj = x.obj; return *this;}
    ::android::graphics::BitmapFactory& operator=(::android::graphics::BitmapFactory&& x) {obj = std::move(x.obj); return *this;}
    
    BitmapFactory();
    static ::android::graphics::Bitmap decodeFile(const ::java::lang::String&, const ::android::graphics::BitmapFactory_Options&);
    static ::android::graphics::Bitmap decodeFile(const ::java::lang::String&);
    static ::android::graphics::Bitmap decodeResourceStream(const ::android::content::res::Resources&, const ::android::util::TypedValue&, const ::java::io::InputStream&, const ::android::graphics::Rect&, const ::android::graphics::BitmapFactory_Options&);
    static ::android::graphics::Bitmap decodeResource(const ::android::content::res::Resources&, int32_t, const ::android::graphics::BitmapFactory_Options&);
    static ::android::graphics::Bitmap decodeResource(const ::android::content::res::Resources&, int32_t);
    static ::android::graphics::Bitmap decodeByteArray(const std::vector< int8_t>&, int32_t, int32_t, const ::android::graphics::BitmapFactory_Options&);
    static ::android::graphics::Bitmap decodeByteArray(const std::vector< int8_t>&, int32_t, int32_t);
    static ::android::graphics::Bitmap decodeStream(const ::java::io::InputStream&, const ::android::graphics::Rect&, const ::android::graphics::BitmapFactory_Options&);
    static ::android::graphics::Bitmap decodeStream(const ::java::io::InputStream&);
    static ::android::graphics::Bitmap decodeFileDescriptor(const ::java::io::FileDescriptor&, const ::android::graphics::Rect&, const ::android::graphics::BitmapFactory_Options&);
    static ::android::graphics::Bitmap decodeFileDescriptor(const ::java::io::FileDescriptor&);

};
}
}

#include "android.graphics.BitmapFactory_Options.hpp"

