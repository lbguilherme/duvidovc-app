#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace widget {
class Filter_FilterListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Filter_FilterListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Filter_FilterListener(const ::android::widget::Filter_FilterListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Filter_FilterListener(::android::widget::Filter_FilterListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::Filter_FilterListener& operator=(const ::android::widget::Filter_FilterListener& x) {obj = x.obj; return *this;}
    ::android::widget::Filter_FilterListener& operator=(::android::widget::Filter_FilterListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onFilterComplete(int32_t) const ;

};
}
}


