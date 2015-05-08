#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class InputQueue; } }

namespace android {
namespace view {
class InputQueue_Callback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InputQueue_Callback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InputQueue_Callback(const ::android::view::InputQueue_Callback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    InputQueue_Callback(::android::view::InputQueue_Callback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::InputQueue_Callback& operator=(const ::android::view::InputQueue_Callback& x) {obj = x.obj; return *this;}
    ::android::view::InputQueue_Callback& operator=(::android::view::InputQueue_Callback&& x) {obj = std::move(x.obj); return *this;}
    
    void onInputQueueCreated(const ::android::view::InputQueue&) const ;
    void onInputQueueDestroyed(const ::android::view::InputQueue&) const ;

};
}
}


