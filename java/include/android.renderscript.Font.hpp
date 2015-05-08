#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.renderscript.BaseObj.hpp"

namespace android { namespace content { namespace res { class Resources; } } }
namespace android { namespace renderscript { class Font; } }
namespace android { namespace renderscript { class Font_Style; } }
namespace android { namespace renderscript { class RenderScript; } }
namespace java { namespace io { class File; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace renderscript {
class Font : public virtual ::java::lang::Object,
             public virtual ::android::renderscript::BaseObj {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Font(jobject _obj) : ::java::lang::Object(_obj), ::android::renderscript::BaseObj(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Font(const ::android::renderscript::Font& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0) {obj = x.obj;}
    Font(::android::renderscript::Font&& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Font& operator=(const ::android::renderscript::Font& x) {obj = x.obj; return *this;}
    ::android::renderscript::Font& operator=(::android::renderscript::Font&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::renderscript::Font createFromFile(const ::android::renderscript::RenderScript&, const ::android::content::res::Resources&, const ::java::lang::String&, float);
    static ::android::renderscript::Font createFromFile(const ::android::renderscript::RenderScript&, const ::android::content::res::Resources&, const ::java::io::File&, float);
    static ::android::renderscript::Font createFromAsset(const ::android::renderscript::RenderScript&, const ::android::content::res::Resources&, const ::java::lang::String&, float);
    static ::android::renderscript::Font createFromResource(const ::android::renderscript::RenderScript&, const ::android::content::res::Resources&, int32_t, float);
    static ::android::renderscript::Font create(const ::android::renderscript::RenderScript&, const ::android::content::res::Resources&, const ::java::lang::String&, const ::android::renderscript::Font_Style&, float);

};
}
}

#include "android.renderscript.Font_Style.hpp"

