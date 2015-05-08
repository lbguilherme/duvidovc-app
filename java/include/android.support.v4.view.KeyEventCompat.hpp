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
class KeyEventCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyEventCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyEventCompat(const ::android::support::v4::view::KeyEventCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeyEventCompat(::android::support::v4::view::KeyEventCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::KeyEventCompat& operator=(const ::android::support::v4::view::KeyEventCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::KeyEventCompat& operator=(::android::support::v4::view::KeyEventCompat&& x) {obj = std::move(x.obj); return *this;}
    
    KeyEventCompat();
    static int32_t normalizeMetaState(int32_t);
    static bool metaStateHasModifiers(int32_t, int32_t);
    static bool metaStateHasNoModifiers(int32_t);
    static bool hasModifiers(const ::android::view::KeyEvent&, int32_t);
    static bool hasNoModifiers(const ::android::view::KeyEvent&);
    static void startTracking(const ::android::view::KeyEvent&);
    static bool isTracking(const ::android::view::KeyEvent&);
    static ::java::lang::Object getKeyDispatcherState(const ::android::view::View&);
    static bool dispatch(const ::android::view::KeyEvent&, const ::android::view::KeyEvent_Callback&, const ::java::lang::Object&, const ::java::lang::Object&);

};
}
}
}
}

#include "android.support.v4.view.KeyEventCompat_BaseKeyEventVersionImpl.hpp"
#include "android.support.v4.view.KeyEventCompat_EclairKeyEventVersionImpl.hpp"
#include "android.support.v4.view.KeyEventCompat_HoneycombKeyEventVersionImpl.hpp"
#include "android.support.v4.view.KeyEventCompat_KeyEventVersionImpl.hpp"

