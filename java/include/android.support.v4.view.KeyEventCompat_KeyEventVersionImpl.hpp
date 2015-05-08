#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class KeyEvent_Callback; } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class KeyEventCompat_KeyEventVersionImpl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyEventCompat_KeyEventVersionImpl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyEventCompat_KeyEventVersionImpl(const ::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeyEventCompat_KeyEventVersionImpl(::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl& operator=(const ::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl& operator=(::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl&& x) {obj = std::move(x.obj); return *this;}
    
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


