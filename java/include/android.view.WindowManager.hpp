#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.ViewManager.hpp"

namespace android { namespace view { class Display; } }
namespace android { namespace view { class View; } }

namespace android {
namespace view {
class WindowManager : public virtual ::java::lang::Object,
                      public virtual ::android::view::ViewManager {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WindowManager(jobject _obj) : ::java::lang::Object(_obj), ::android::view::ViewManager(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WindowManager(const ::android::view::WindowManager& x) : ::java::lang::Object((jobject)0), ::android::view::ViewManager((jobject)0) {obj = x.obj;}
    WindowManager(::android::view::WindowManager&& x) : ::java::lang::Object((jobject)0), ::android::view::ViewManager((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::WindowManager& operator=(const ::android::view::WindowManager& x) {obj = x.obj; return *this;}
    ::android::view::WindowManager& operator=(::android::view::WindowManager&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::view::Display getDefaultDisplay() const ;
    void removeViewImmediate(const ::android::view::View&) const ;

};
}
}

#include "android.view.WindowManager_BadTokenException.hpp"
#include "android.view.WindowManager_LayoutParams.hpp"

