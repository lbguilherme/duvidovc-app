#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace widget {
class HeterogeneousExpandableList : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HeterogeneousExpandableList(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HeterogeneousExpandableList(const ::android::widget::HeterogeneousExpandableList& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HeterogeneousExpandableList(::android::widget::HeterogeneousExpandableList&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::HeterogeneousExpandableList& operator=(const ::android::widget::HeterogeneousExpandableList& x) {obj = x.obj; return *this;}
    ::android::widget::HeterogeneousExpandableList& operator=(::android::widget::HeterogeneousExpandableList&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getGroupType(int32_t) const;
    int32_t getChildType(int32_t, int32_t) const;
    int32_t getGroupTypeCount() const;
    int32_t getChildTypeCount() const;

};
}
}


