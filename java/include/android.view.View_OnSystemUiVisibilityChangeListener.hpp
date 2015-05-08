#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace view {
class View_OnSystemUiVisibilityChangeListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit View_OnSystemUiVisibilityChangeListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    View_OnSystemUiVisibilityChangeListener(const ::android::view::View_OnSystemUiVisibilityChangeListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    View_OnSystemUiVisibilityChangeListener(::android::view::View_OnSystemUiVisibilityChangeListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::View_OnSystemUiVisibilityChangeListener& operator=(const ::android::view::View_OnSystemUiVisibilityChangeListener& x) {obj = x.obj; return *this;}
    ::android::view::View_OnSystemUiVisibilityChangeListener& operator=(::android::view::View_OnSystemUiVisibilityChangeListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onSystemUiVisibilityChange(int32_t) const ;

};
}
}


