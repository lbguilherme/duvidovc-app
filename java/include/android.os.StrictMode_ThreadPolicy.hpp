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
class StrictMode_ThreadPolicy : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit StrictMode_ThreadPolicy(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    StrictMode_ThreadPolicy(const ::android::os::StrictMode_ThreadPolicy& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    StrictMode_ThreadPolicy(::android::os::StrictMode_ThreadPolicy&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::StrictMode_ThreadPolicy& operator=(const ::android::os::StrictMode_ThreadPolicy& x) {obj = x.obj; return *this;}
    ::android::os::StrictMode_ThreadPolicy& operator=(::android::os::StrictMode_ThreadPolicy&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String toString() const;

};
}
}

#include "android.os.StrictMode_ThreadPolicy_Builder.hpp"

