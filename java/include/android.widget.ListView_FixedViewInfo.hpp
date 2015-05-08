#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace widget { class ListView; } }

namespace android {
namespace widget {
class ListView_FixedViewInfo : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ListView_FixedViewInfo(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ListView_FixedViewInfo(const ::android::widget::ListView_FixedViewInfo& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ListView_FixedViewInfo(::android::widget::ListView_FixedViewInfo&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::ListView_FixedViewInfo& operator=(const ::android::widget::ListView_FixedViewInfo& x) {obj = x.obj; return *this;}
    ::android::widget::ListView_FixedViewInfo& operator=(::android::widget::ListView_FixedViewInfo&& x) {obj = std::move(x.obj); return *this;}
    
    ListView_FixedViewInfo(const ::android::widget::ListView&);

};
}
}


