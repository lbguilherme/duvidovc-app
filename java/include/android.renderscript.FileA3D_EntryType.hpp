#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace renderscript { class FileA3D_EntryType; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace renderscript {
class FileA3D_EntryType : public virtual ::java::lang::Object,
                          public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FileA3D_EntryType(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FileA3D_EntryType(const ::android::renderscript::FileA3D_EntryType& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    FileA3D_EntryType(::android::renderscript::FileA3D_EntryType&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::FileA3D_EntryType& operator=(const ::android::renderscript::FileA3D_EntryType& x) {obj = x.obj; return *this;}
    ::android::renderscript::FileA3D_EntryType& operator=(::android::renderscript::FileA3D_EntryType&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::renderscript::FileA3D_EntryType> values();
    static ::android::renderscript::FileA3D_EntryType valueOf(const ::java::lang::String&);

};
}
}


