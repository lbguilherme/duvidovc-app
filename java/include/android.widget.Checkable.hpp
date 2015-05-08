#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace widget {
class Checkable : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Checkable(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Checkable(const ::android::widget::Checkable& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Checkable(::android::widget::Checkable&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::Checkable& operator=(const ::android::widget::Checkable& x) {obj = x.obj; return *this;}
    ::android::widget::Checkable& operator=(::android::widget::Checkable&& x) {obj = std::move(x.obj); return *this;}
    
    void setChecked(bool) const ;
    bool isChecked() const ;
    void toggle() const ;

};
}
}


