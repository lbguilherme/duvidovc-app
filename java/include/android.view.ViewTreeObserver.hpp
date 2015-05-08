#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class ViewTreeObserver_OnGlobalFocusChangeListener; } }
namespace android { namespace view { class ViewTreeObserver_OnGlobalLayoutListener; } }
namespace android { namespace view { class ViewTreeObserver_OnPreDrawListener; } }
namespace android { namespace view { class ViewTreeObserver_OnScrollChangedListener; } }
namespace android { namespace view { class ViewTreeObserver_OnTouchModeChangeListener; } }

namespace android {
namespace view {
class ViewTreeObserver : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewTreeObserver(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewTreeObserver(const ::android::view::ViewTreeObserver& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewTreeObserver(::android::view::ViewTreeObserver&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ViewTreeObserver& operator=(const ::android::view::ViewTreeObserver& x) {obj = x.obj; return *this;}
    ::android::view::ViewTreeObserver& operator=(::android::view::ViewTreeObserver&& x) {obj = std::move(x.obj); return *this;}
    
    void addOnGlobalFocusChangeListener(const ::android::view::ViewTreeObserver_OnGlobalFocusChangeListener&) const ;
    void removeOnGlobalFocusChangeListener(const ::android::view::ViewTreeObserver_OnGlobalFocusChangeListener&) const ;
    void addOnGlobalLayoutListener(const ::android::view::ViewTreeObserver_OnGlobalLayoutListener&) const ;
    void removeGlobalOnLayoutListener(const ::android::view::ViewTreeObserver_OnGlobalLayoutListener&) const ;
    void addOnPreDrawListener(const ::android::view::ViewTreeObserver_OnPreDrawListener&) const ;
    void removeOnPreDrawListener(const ::android::view::ViewTreeObserver_OnPreDrawListener&) const ;
    void addOnScrollChangedListener(const ::android::view::ViewTreeObserver_OnScrollChangedListener&) const ;
    void removeOnScrollChangedListener(const ::android::view::ViewTreeObserver_OnScrollChangedListener&) const ;
    void addOnTouchModeChangeListener(const ::android::view::ViewTreeObserver_OnTouchModeChangeListener&) const ;
    void removeOnTouchModeChangeListener(const ::android::view::ViewTreeObserver_OnTouchModeChangeListener&) const ;
    bool isAlive() const ;
    void dispatchOnGlobalLayout() const ;
    bool dispatchOnPreDraw() const ;

};
}
}

#include "android.view.ViewTreeObserver_OnGlobalFocusChangeListener.hpp"
#include "android.view.ViewTreeObserver_OnGlobalLayoutListener.hpp"
#include "android.view.ViewTreeObserver_OnPreDrawListener.hpp"
#include "android.view.ViewTreeObserver_OnScrollChangedListener.hpp"
#include "android.view.ViewTreeObserver_OnTouchModeChangeListener.hpp"

