#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.ListAdapter.hpp"

namespace android { namespace widget { class ListAdapter; } }

namespace android {
namespace widget {
class WrapperListAdapter : public virtual ::java::lang::Object,
                           public virtual ::android::widget::ListAdapter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WrapperListAdapter(jobject _obj) : ::java::lang::Object(_obj), ::android::widget::Adapter(_obj), ::android::widget::ListAdapter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WrapperListAdapter(const ::android::widget::WrapperListAdapter& x) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::ListAdapter((jobject)0) {obj = x.obj;}
    WrapperListAdapter(::android::widget::WrapperListAdapter&& x) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::ListAdapter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::WrapperListAdapter& operator=(const ::android::widget::WrapperListAdapter& x) {obj = x.obj; return *this;}
    ::android::widget::WrapperListAdapter& operator=(::android::widget::WrapperListAdapter&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::widget::ListAdapter getWrappedAdapter() const ;

};
}
}


