#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace support {
namespace v4 {
namespace widget {
class SwipeRefreshLayout_OnRefreshListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SwipeRefreshLayout_OnRefreshListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SwipeRefreshLayout_OnRefreshListener(const ::android::support::v4::widget::SwipeRefreshLayout_OnRefreshListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SwipeRefreshLayout_OnRefreshListener(::android::support::v4::widget::SwipeRefreshLayout_OnRefreshListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::SwipeRefreshLayout_OnRefreshListener& operator=(const ::android::support::v4::widget::SwipeRefreshLayout_OnRefreshListener& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::SwipeRefreshLayout_OnRefreshListener& operator=(::android::support::v4::widget::SwipeRefreshLayout_OnRefreshListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onRefresh() const ;

};
}
}
}
}


