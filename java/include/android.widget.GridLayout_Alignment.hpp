#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace widget {
class GridLayout_Alignment : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GridLayout_Alignment(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GridLayout_Alignment(const ::android::widget::GridLayout_Alignment& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GridLayout_Alignment(::android::widget::GridLayout_Alignment&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::GridLayout_Alignment& operator=(const ::android::widget::GridLayout_Alignment& x) {obj = x.obj; return *this;}
    ::android::widget::GridLayout_Alignment& operator=(::android::widget::GridLayout_Alignment&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


