#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class View; } }

namespace android {
namespace view {
class View_OnKeyListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit View_OnKeyListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    View_OnKeyListener(const ::android::view::View_OnKeyListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    View_OnKeyListener(::android::view::View_OnKeyListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::View_OnKeyListener& operator=(const ::android::view::View_OnKeyListener& x) {obj = x.obj; return *this;}
    ::android::view::View_OnKeyListener& operator=(::android::view::View_OnKeyListener&& x) {obj = std::move(x.obj); return *this;}
    
    bool onKey(const ::android::view::View&, int32_t, const ::android::view::KeyEvent&) const ;

};
}
}


