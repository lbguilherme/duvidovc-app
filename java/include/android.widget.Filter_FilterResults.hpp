#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace widget {
class Filter_FilterResults : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Filter_FilterResults(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Filter_FilterResults(const ::android::widget::Filter_FilterResults& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Filter_FilterResults(::android::widget::Filter_FilterResults&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::Filter_FilterResults& operator=(const ::android::widget::Filter_FilterResults& x) {obj = x.obj; return *this;}
    ::android::widget::Filter_FilterResults& operator=(::android::widget::Filter_FilterResults&& x) {obj = std::move(x.obj); return *this;}
    
    Filter_FilterResults();

};
}
}


