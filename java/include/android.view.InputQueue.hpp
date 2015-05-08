#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace view {
class InputQueue : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InputQueue(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InputQueue(const ::android::view::InputQueue& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    InputQueue(::android::view::InputQueue&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::InputQueue& operator=(const ::android::view::InputQueue& x) {obj = x.obj; return *this;}
    ::android::view::InputQueue& operator=(::android::view::InputQueue&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}

#include "android.view.InputQueue_Callback.hpp"

