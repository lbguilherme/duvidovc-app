#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class View; } }

namespace android {
namespace widget {
class AbsListView_RecyclerListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbsListView_RecyclerListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbsListView_RecyclerListener(const ::android::widget::AbsListView_RecyclerListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AbsListView_RecyclerListener(::android::widget::AbsListView_RecyclerListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::AbsListView_RecyclerListener& operator=(const ::android::widget::AbsListView_RecyclerListener& x) {obj = x.obj; return *this;}
    ::android::widget::AbsListView_RecyclerListener& operator=(::android::widget::AbsListView_RecyclerListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onMovedToScrapHeap(const ::android::view::View&) const;

};
}
}


