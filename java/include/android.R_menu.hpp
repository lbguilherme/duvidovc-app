#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
class R_menu : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit R_menu(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    R_menu(const ::android::R_menu& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    R_menu(::android::R_menu&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::R_menu& operator=(const ::android::R_menu& x) {obj = x.obj; return *this;}
    ::android::R_menu& operator=(::android::R_menu&& x) {obj = std::move(x.obj); return *this;}
    
    R_menu();

};
}


