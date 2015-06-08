#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace widget { class AbsListView; } }

namespace android {
namespace widget {
class AbsListView_OnScrollListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbsListView_OnScrollListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbsListView_OnScrollListener(const ::android::widget::AbsListView_OnScrollListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AbsListView_OnScrollListener(::android::widget::AbsListView_OnScrollListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::AbsListView_OnScrollListener& operator=(const ::android::widget::AbsListView_OnScrollListener& x) {obj = x.obj; return *this;}
    ::android::widget::AbsListView_OnScrollListener& operator=(::android::widget::AbsListView_OnScrollListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onScrollStateChanged(const ::android::widget::AbsListView&, int32_t) const;
    void onScroll(const ::android::widget::AbsListView&, int32_t, int32_t, int32_t) const;

};
}
}


