#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace widget { class TextView; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class PagerTitleStrip_PagerTitleStripImpl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PagerTitleStrip_PagerTitleStripImpl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PagerTitleStrip_PagerTitleStripImpl(const ::android::support::v4::view::PagerTitleStrip_PagerTitleStripImpl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PagerTitleStrip_PagerTitleStripImpl(::android::support::v4::view::PagerTitleStrip_PagerTitleStripImpl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::PagerTitleStrip_PagerTitleStripImpl& operator=(const ::android::support::v4::view::PagerTitleStrip_PagerTitleStripImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::PagerTitleStrip_PagerTitleStripImpl& operator=(::android::support::v4::view::PagerTitleStrip_PagerTitleStripImpl&& x) {obj = std::move(x.obj); return *this;}
    
    void setSingleLineAllCaps(const ::android::widget::TextView&) const ;

};
}
}
}
}


