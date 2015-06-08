#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class View; } }

namespace android {
namespace view {
class View_OnFocusChangeListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit View_OnFocusChangeListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    View_OnFocusChangeListener(const ::android::view::View_OnFocusChangeListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    View_OnFocusChangeListener(::android::view::View_OnFocusChangeListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::View_OnFocusChangeListener& operator=(const ::android::view::View_OnFocusChangeListener& x) {obj = x.obj; return *this;}
    ::android::view::View_OnFocusChangeListener& operator=(::android::view::View_OnFocusChangeListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onFocusChange(const ::android::view::View&, bool) const;

};
}
}


