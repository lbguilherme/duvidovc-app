#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewStub; } }

namespace android {
namespace view {
class ViewStub_OnInflateListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewStub_OnInflateListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewStub_OnInflateListener(const ::android::view::ViewStub_OnInflateListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewStub_OnInflateListener(::android::view::ViewStub_OnInflateListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ViewStub_OnInflateListener& operator=(const ::android::view::ViewStub_OnInflateListener& x) {obj = x.obj; return *this;}
    ::android::view::ViewStub_OnInflateListener& operator=(::android::view::ViewStub_OnInflateListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onInflate(const ::android::view::ViewStub&, const ::android::view::View&) const;

};
}
}


