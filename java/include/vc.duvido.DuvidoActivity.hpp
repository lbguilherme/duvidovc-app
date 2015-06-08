#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.qtproject.qt5.android.bindings.QtActivity.hpp"

namespace java { namespace lang { class String; } }
namespace vc { namespace duvido { class DuvidoActivity; } }

namespace vc {
namespace duvido {
class DuvidoActivity : public virtual ::java::lang::Object,
                       public virtual ::org::qtproject::qt5::android::bindings::QtActivity {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DuvidoActivity(jobject _obj) : ::java::lang::Object(_obj), ::android::app::Activity(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::content::Context(_obj), ::android::content::ContextWrapper(_obj), ::android::view::ContextThemeWrapper(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::LayoutInflater_Factory(_obj), ::android::view::LayoutInflater_Factory2(_obj), ::android::view::View_OnCreateContextMenuListener(_obj), ::android::view::Window_Callback(_obj), ::org::qtproject::qt5::android::bindings::QtActivity(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DuvidoActivity(const ::vc::duvido::DuvidoActivity& x) : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0), ::org::qtproject::qt5::android::bindings::QtActivity((jobject)0) {obj = x.obj;}
    DuvidoActivity(::vc::duvido::DuvidoActivity&& x) : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0), ::org::qtproject::qt5::android::bindings::QtActivity((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::vc::duvido::DuvidoActivity& operator=(const ::vc::duvido::DuvidoActivity& x) {obj = x.obj; return *this;}
    ::vc::duvido::DuvidoActivity& operator=(::vc::duvido::DuvidoActivity&& x) {obj = std::move(x.obj); return *this;}
    
    static void jniInitializeNative();
    static ::vc::duvido::DuvidoActivity getInstance();
    DuvidoActivity();
    void fetchPhotoFromGallery() const;
    void onPhotoFetched(const ::java::lang::String&) const;

};
}
}


