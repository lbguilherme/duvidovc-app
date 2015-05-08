#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.KeyEventCompat_EclairKeyEventVersionImpl.hpp"


namespace android {
namespace support {
namespace v4 {
namespace view {
class KeyEventCompat_HoneycombKeyEventVersionImpl : public virtual ::java::lang::Object,
                                                    public virtual ::android::support::v4::view::KeyEventCompat_EclairKeyEventVersionImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyEventCompat_HoneycombKeyEventVersionImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl(_obj), ::android::support::v4::view::KeyEventCompat_EclairKeyEventVersionImpl(_obj), ::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyEventCompat_HoneycombKeyEventVersionImpl(const ::android::support::v4::view::KeyEventCompat_HoneycombKeyEventVersionImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl((jobject)0), ::android::support::v4::view::KeyEventCompat_EclairKeyEventVersionImpl((jobject)0), ::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl((jobject)0) {obj = x.obj;}
    KeyEventCompat_HoneycombKeyEventVersionImpl(::android::support::v4::view::KeyEventCompat_HoneycombKeyEventVersionImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl((jobject)0), ::android::support::v4::view::KeyEventCompat_EclairKeyEventVersionImpl((jobject)0), ::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::KeyEventCompat_HoneycombKeyEventVersionImpl& operator=(const ::android::support::v4::view::KeyEventCompat_HoneycombKeyEventVersionImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::KeyEventCompat_HoneycombKeyEventVersionImpl& operator=(::android::support::v4::view::KeyEventCompat_HoneycombKeyEventVersionImpl&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t normalizeMetaState(int32_t) const ;
    bool metaStateHasModifiers(int32_t, int32_t) const ;
    bool metaStateHasNoModifiers(int32_t) const ;

};
}
}
}
}


