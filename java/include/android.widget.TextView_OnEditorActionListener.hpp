#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class KeyEvent; } }
namespace android { namespace widget { class TextView; } }

namespace android {
namespace widget {
class TextView_OnEditorActionListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextView_OnEditorActionListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextView_OnEditorActionListener(const ::android::widget::TextView_OnEditorActionListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TextView_OnEditorActionListener(::android::widget::TextView_OnEditorActionListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::TextView_OnEditorActionListener& operator=(const ::android::widget::TextView_OnEditorActionListener& x) {obj = x.obj; return *this;}
    ::android::widget::TextView_OnEditorActionListener& operator=(::android::widget::TextView_OnEditorActionListener&& x) {obj = std::move(x.obj); return *this;}
    
    bool onEditorAction(const ::android::widget::TextView&, int32_t, const ::android::view::KeyEvent&) const;

};
}
}


