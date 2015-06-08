#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.KeyEventCompat_BaseKeyEventVersionImpl.hpp"

namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class KeyEvent_Callback; } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class KeyEventCompat_EclairKeyEventVersionImpl : public virtual ::java::lang::Object,
                                                 public virtual ::android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyEventCompat_EclairKeyEventVersionImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl(_obj), ::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyEventCompat_EclairKeyEventVersionImpl(const ::android::support::v4::view::KeyEventCompat_EclairKeyEventVersionImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl((jobject)0), ::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl((jobject)0) {obj = x.obj;}
    KeyEventCompat_EclairKeyEventVersionImpl(::android::support::v4::view::KeyEventCompat_EclairKeyEventVersionImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl((jobject)0), ::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::KeyEventCompat_EclairKeyEventVersionImpl& operator=(const ::android::support::v4::view::KeyEventCompat_EclairKeyEventVersionImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::KeyEventCompat_EclairKeyEventVersionImpl& operator=(::android::support::v4::view::KeyEventCompat_EclairKeyEventVersionImpl&& x) {obj = std::move(x.obj); return *this;}
    
    void startTracking(const ::android::view::KeyEvent&) const;
    bool isTracking(const ::android::view::KeyEvent&) const;
    ::java::lang::Object getKeyDispatcherState(const ::android::view::View&) const;
    bool dispatch(const ::android::view::KeyEvent&, const ::android::view::KeyEvent_Callback&, const ::java::lang::Object&, const ::java::lang::Object&) const;

};
}
}
}
}


