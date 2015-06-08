#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }

namespace android {
namespace widget {
class GridLayout_Spec : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GridLayout_Spec(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GridLayout_Spec(const ::android::widget::GridLayout_Spec& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GridLayout_Spec(::android::widget::GridLayout_Spec&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::GridLayout_Spec& operator=(const ::android::widget::GridLayout_Spec& x) {obj = x.obj; return *this;}
    ::android::widget::GridLayout_Spec& operator=(::android::widget::GridLayout_Spec&& x) {obj = std::move(x.obj); return *this;}
    
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;

};
}
}


