#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.Service.hpp"
#include "android.view.KeyEvent_Callback.hpp"

namespace android { namespace content { class Intent; } }
namespace android { namespace inputmethodservice { class AbstractInputMethodService_AbstractInputMethodImpl; } }
namespace android { namespace inputmethodservice { class AbstractInputMethodService_AbstractInputMethodSessionImpl; } }
namespace android { namespace os { class IBinder; } }
namespace android { namespace view { class KeyEvent_DispatcherState; } }
namespace android { namespace view { class MotionEvent; } }

namespace android {
namespace inputmethodservice {
class AbstractInputMethodService : public virtual ::java::lang::Object,
                                   public virtual ::android::app::Service,
                                   public virtual ::android::view::KeyEvent_Callback {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractInputMethodService(jobject _obj) : ::java::lang::Object(_obj), ::android::app::Service(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::content::Context(_obj), ::android::content::ContextWrapper(_obj), ::android::view::KeyEvent_Callback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractInputMethodService(const ::android::inputmethodservice::AbstractInputMethodService& x) : ::java::lang::Object((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0) {obj = x.obj;}
    AbstractInputMethodService(::android::inputmethodservice::AbstractInputMethodService&& x) : ::java::lang::Object((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::inputmethodservice::AbstractInputMethodService& operator=(const ::android::inputmethodservice::AbstractInputMethodService& x) {obj = x.obj; return *this;}
    ::android::inputmethodservice::AbstractInputMethodService& operator=(::android::inputmethodservice::AbstractInputMethodService&& x) {obj = std::move(x.obj); return *this;}
    
    AbstractInputMethodService();
    ::android::view::KeyEvent_DispatcherState getKeyDispatcherState() const ;
    ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl onCreateInputMethodInterface() const ;
    ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl onCreateInputMethodSessionInterface() const ;
    ::android::os::IBinder onBind(const ::android::content::Intent&) const ;
    bool onTrackballEvent(const ::android::view::MotionEvent&) const ;

};
}
}

#include "android.inputmethodservice.AbstractInputMethodService_AbstractInputMethodImpl.hpp"
#include "android.inputmethodservice.AbstractInputMethodService_AbstractInputMethodSessionImpl.hpp"

