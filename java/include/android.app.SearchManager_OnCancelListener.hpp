#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace app {
class SearchManager_OnCancelListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SearchManager_OnCancelListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SearchManager_OnCancelListener(const ::android::app::SearchManager_OnCancelListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SearchManager_OnCancelListener(::android::app::SearchManager_OnCancelListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::SearchManager_OnCancelListener& operator=(const ::android::app::SearchManager_OnCancelListener& x) {obj = x.obj; return *this;}
    ::android::app::SearchManager_OnCancelListener& operator=(::android::app::SearchManager_OnCancelListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onCancel() const ;

};
}
}


