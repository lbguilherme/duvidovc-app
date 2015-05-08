#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace text {
class Layout_Directions : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Layout_Directions(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Layout_Directions(const ::android::text::Layout_Directions& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Layout_Directions(::android::text::Layout_Directions&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::Layout_Directions& operator=(const ::android::text::Layout_Directions& x) {obj = x.obj; return *this;}
    ::android::text::Layout_Directions& operator=(::android::text::Layout_Directions&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


