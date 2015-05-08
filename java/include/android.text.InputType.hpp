#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace text {
class InputType : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InputType(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InputType(const ::android::text::InputType& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    InputType(::android::text::InputType&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::InputType& operator=(const ::android::text::InputType& x) {obj = x.obj; return *this;}
    ::android::text::InputType& operator=(::android::text::InputType&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


