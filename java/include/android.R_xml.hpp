#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
class R_xml : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit R_xml(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    R_xml(const ::android::R_xml& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    R_xml(::android::R_xml&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::R_xml& operator=(const ::android::R_xml& x) {obj = x.obj; return *this;}
    ::android::R_xml& operator=(::android::R_xml&& x) {obj = std::move(x.obj); return *this;}
    
    R_xml();

};
}


