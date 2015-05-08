#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace org {
namespace qtproject {
namespace qt5 {
namespace android {
namespace bindings {
class QtApplication_InvokeResult : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit QtApplication_InvokeResult(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    QtApplication_InvokeResult(const ::org::qtproject::qt5::android::bindings::QtApplication_InvokeResult& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    QtApplication_InvokeResult(::org::qtproject::qt5::android::bindings::QtApplication_InvokeResult&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::qtproject::qt5::android::bindings::QtApplication_InvokeResult& operator=(const ::org::qtproject::qt5::android::bindings::QtApplication_InvokeResult& x) {obj = x.obj; return *this;}
    ::org::qtproject::qt5::android::bindings::QtApplication_InvokeResult& operator=(::org::qtproject::qt5::android::bindings::QtApplication_InvokeResult&& x) {obj = std::move(x.obj); return *this;}
    
    QtApplication_InvokeResult();

};
}
}
}
}
}


