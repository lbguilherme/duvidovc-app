#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }

namespace android {
namespace webkit {
class ValueCallback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ValueCallback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ValueCallback(const ::android::webkit::ValueCallback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ValueCallback(::android::webkit::ValueCallback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::ValueCallback& operator=(const ::android::webkit::ValueCallback& x) {obj = x.obj; return *this;}
    ::android::webkit::ValueCallback& operator=(::android::webkit::ValueCallback&& x) {obj = std::move(x.obj); return *this;}
    
    void onReceiveValue(const ::java::lang::Object&) const ;

};
}
}


