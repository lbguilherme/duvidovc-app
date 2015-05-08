#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace gesture { class GestureLibrary; } }
namespace java { namespace io { class File; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace gesture {
class GestureLibraries : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GestureLibraries(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GestureLibraries(const ::android::gesture::GestureLibraries& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GestureLibraries(::android::gesture::GestureLibraries&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::gesture::GestureLibraries& operator=(const ::android::gesture::GestureLibraries& x) {obj = x.obj; return *this;}
    ::android::gesture::GestureLibraries& operator=(::android::gesture::GestureLibraries&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::gesture::GestureLibrary fromFile(const ::java::lang::String&);
    static ::android::gesture::GestureLibrary fromFile(const ::java::io::File&);
    static ::android::gesture::GestureLibrary fromPrivateFile(const ::android::content::Context&, const ::java::lang::String&);
    static ::android::gesture::GestureLibrary fromRawResource(const ::android::content::Context&, int32_t);

};
}
}


