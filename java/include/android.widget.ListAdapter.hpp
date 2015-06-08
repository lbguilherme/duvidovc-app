#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.Adapter.hpp"


namespace android {
namespace widget {
class ListAdapter : public virtual ::java::lang::Object,
                    public virtual ::android::widget::Adapter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ListAdapter(jobject _obj) : ::java::lang::Object(_obj), ::android::widget::Adapter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ListAdapter(const ::android::widget::ListAdapter& x) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0) {obj = x.obj;}
    ListAdapter(::android::widget::ListAdapter&& x) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::ListAdapter& operator=(const ::android::widget::ListAdapter& x) {obj = x.obj; return *this;}
    ::android::widget::ListAdapter& operator=(::android::widget::ListAdapter&& x) {obj = std::move(x.obj); return *this;}
    
    bool areAllItemsEnabled() const;
    bool isEnabled(int32_t) const;

};
}
}


