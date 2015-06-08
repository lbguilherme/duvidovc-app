#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace renderscript { class BaseObj; } }
namespace android { namespace renderscript { class FileA3D_EntryType; } }
namespace android { namespace renderscript { class Mesh; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace renderscript {
class FileA3D_IndexEntry : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FileA3D_IndexEntry(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FileA3D_IndexEntry(const ::android::renderscript::FileA3D_IndexEntry& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FileA3D_IndexEntry(::android::renderscript::FileA3D_IndexEntry&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::FileA3D_IndexEntry& operator=(const ::android::renderscript::FileA3D_IndexEntry& x) {obj = x.obj; return *this;}
    ::android::renderscript::FileA3D_IndexEntry& operator=(::android::renderscript::FileA3D_IndexEntry&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getName() const;
    ::android::renderscript::FileA3D_EntryType getEntryType() const;
    ::android::renderscript::BaseObj getObject() const;
    ::android::renderscript::Mesh getMesh() const;

};
}
}


