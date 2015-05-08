#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace widget {
class SearchView_OnCloseListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SearchView_OnCloseListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SearchView_OnCloseListener(const ::android::widget::SearchView_OnCloseListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SearchView_OnCloseListener(::android::widget::SearchView_OnCloseListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::SearchView_OnCloseListener& operator=(const ::android::widget::SearchView_OnCloseListener& x) {obj = x.obj; return *this;}
    ::android::widget::SearchView_OnCloseListener& operator=(::android::widget::SearchView_OnCloseListener&& x) {obj = std::move(x.obj); return *this;}
    
    bool onClose() const ;

};
}
}


