#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace inputmethodservice {
class InputMethodService_Insets : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InputMethodService_Insets(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InputMethodService_Insets(const ::android::inputmethodservice::InputMethodService_Insets& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    InputMethodService_Insets(::android::inputmethodservice::InputMethodService_Insets&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::inputmethodservice::InputMethodService_Insets& operator=(const ::android::inputmethodservice::InputMethodService_Insets& x) {obj = x.obj; return *this;}
    ::android::inputmethodservice::InputMethodService_Insets& operator=(::android::inputmethodservice::InputMethodService_Insets&& x) {obj = std::move(x.obj); return *this;}
    
    InputMethodService_Insets();

};
}
}


