#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace widget { class Filter_FilterListener; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace widget {
class Filter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Filter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Filter(const ::android::widget::Filter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Filter(::android::widget::Filter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::Filter& operator=(const ::android::widget::Filter& x) {obj = x.obj; return *this;}
    ::android::widget::Filter& operator=(::android::widget::Filter&& x) {obj = std::move(x.obj); return *this;}
    
    Filter();
    void filter(const ::java::lang::CharSequence&) const ;
    void filter(const ::java::lang::CharSequence&, const ::android::widget::Filter_FilterListener&) const ;
    ::java::lang::CharSequence convertResultToString(const ::java::lang::Object&) const ;

};
}
}

#include "android.widget.Filter_FilterListener.hpp"
#include "android.widget.Filter_FilterResults.hpp"

