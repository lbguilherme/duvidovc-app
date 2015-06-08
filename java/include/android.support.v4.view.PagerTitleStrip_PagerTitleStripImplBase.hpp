#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.PagerTitleStrip_PagerTitleStripImpl.hpp"

namespace android { namespace widget { class TextView; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class PagerTitleStrip_PagerTitleStripImplBase : public virtual ::java::lang::Object,
                                                public virtual ::android::support::v4::view::PagerTitleStrip_PagerTitleStripImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PagerTitleStrip_PagerTitleStripImplBase(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::PagerTitleStrip_PagerTitleStripImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PagerTitleStrip_PagerTitleStripImplBase(const ::android::support::v4::view::PagerTitleStrip_PagerTitleStripImplBase& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::PagerTitleStrip_PagerTitleStripImpl((jobject)0) {obj = x.obj;}
    PagerTitleStrip_PagerTitleStripImplBase(::android::support::v4::view::PagerTitleStrip_PagerTitleStripImplBase&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::PagerTitleStrip_PagerTitleStripImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::PagerTitleStrip_PagerTitleStripImplBase& operator=(const ::android::support::v4::view::PagerTitleStrip_PagerTitleStripImplBase& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::PagerTitleStrip_PagerTitleStripImplBase& operator=(::android::support::v4::view::PagerTitleStrip_PagerTitleStripImplBase&& x) {obj = std::move(x.obj); return *this;}
    
    void setSingleLineAllCaps(const ::android::widget::TextView&) const;

};
}
}
}
}


