#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace os {
class Build : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Build(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Build(const ::android::os::Build& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Build(::android::os::Build&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::Build& operator=(const ::android::os::Build& x) {obj = x.obj; return *this;}
    ::android::os::Build& operator=(::android::os::Build&& x) {obj = std::move(x.obj); return *this;}
    
    Build();
    static ::java::lang::String getRadioVersion();

};
}
}

#include "android.os.Build_VERSION.hpp"
#include "android.os.Build_VERSION_CODES.hpp"

