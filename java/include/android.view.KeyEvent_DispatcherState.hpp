#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class KeyEvent; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace view {
class KeyEvent_DispatcherState : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyEvent_DispatcherState(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyEvent_DispatcherState(const ::android::view::KeyEvent_DispatcherState& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeyEvent_DispatcherState(::android::view::KeyEvent_DispatcherState&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::KeyEvent_DispatcherState& operator=(const ::android::view::KeyEvent_DispatcherState& x) {obj = x.obj; return *this;}
    ::android::view::KeyEvent_DispatcherState& operator=(::android::view::KeyEvent_DispatcherState&& x) {obj = std::move(x.obj); return *this;}
    
    KeyEvent_DispatcherState();
    void reset() const ;
    void reset(const ::java::lang::Object&) const ;
    void startTracking(const ::android::view::KeyEvent&, const ::java::lang::Object&) const ;
    bool isTracking(const ::android::view::KeyEvent&) const ;
    void performedLongPress(const ::android::view::KeyEvent&) const ;
    void handleUpEvent(const ::android::view::KeyEvent&) const ;

};
}
}


