#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.renderscript.BaseObj.hpp"

namespace android { namespace content { namespace res { class AssetManager; } } }
namespace android { namespace content { namespace res { class Resources; } } }
namespace android { namespace renderscript { class FileA3D; } }
namespace android { namespace renderscript { class FileA3D_IndexEntry; } }
namespace android { namespace renderscript { class RenderScript; } }
namespace java { namespace io { class File; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace renderscript {
class FileA3D : public virtual ::java::lang::Object,
                public virtual ::android::renderscript::BaseObj {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FileA3D(jobject _obj) : ::java::lang::Object(_obj), ::android::renderscript::BaseObj(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FileA3D(const ::android::renderscript::FileA3D& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0) {obj = x.obj;}
    FileA3D(::android::renderscript::FileA3D&& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::FileA3D& operator=(const ::android::renderscript::FileA3D& x) {obj = x.obj; return *this;}
    ::android::renderscript::FileA3D& operator=(::android::renderscript::FileA3D&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getIndexEntryCount() const;
    ::android::renderscript::FileA3D_IndexEntry getIndexEntry(int32_t) const;
    static ::android::renderscript::FileA3D createFromAsset(const ::android::renderscript::RenderScript&, const ::android::content::res::AssetManager&, const ::java::lang::String&);
    static ::android::renderscript::FileA3D createFromFile(const ::android::renderscript::RenderScript&, const ::java::lang::String&);
    static ::android::renderscript::FileA3D createFromFile(const ::android::renderscript::RenderScript&, const ::java::io::File&);
    static ::android::renderscript::FileA3D createFromResource(const ::android::renderscript::RenderScript&, const ::android::content::res::Resources&, int32_t);

};
}
}

#include "android.renderscript.FileA3D_EntryType.hpp"
#include "android.renderscript.FileA3D_IndexEntry.hpp"

