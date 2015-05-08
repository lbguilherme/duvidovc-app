#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.KeyEventCompat_KeyEventVersionImpl.hpp"

namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class KeyEvent_Callback; } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class KeyEventCompat_BaseKeyEventVersionImpl : public virtual ::java::lang::Object,
                                               public virtual ::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyEventCompat_BaseKeyEventVersionImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyEventCompat_BaseKeyEventVersionImpl(const ::android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl((jobject)0) {obj = x.obj;}
    KeyEventCompat_BaseKeyEventVersionImpl(::android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl& operator=(const ::android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl& operator=(::android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t normalizeMetaState(int32_t) const ;
    bool metaStateHasModifiers(int32_t, int32_t) const ;
    bool metaStateHasNoModifiers(int32_t) const ;
    void startTracking(const ::android::view::KeyEvent&) const ;
    bool isTracking(const ::android::view::KeyEvent&) const ;
    ::java::lang::Object getKeyDispatcherState(const ::android::view::View&) const ;
    bool dispatch(const ::android::view::KeyEvent&, const ::android::view::KeyEvent_Callback&, const ::java::lang::Object&, const ::java::lang::Object&) const ;

};
}
}
}
}


