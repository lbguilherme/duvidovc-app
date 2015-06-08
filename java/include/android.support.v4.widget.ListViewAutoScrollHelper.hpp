#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.widget.AutoScrollHelper.hpp"

namespace android { namespace widget { class ListView; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class ListViewAutoScrollHelper : public virtual ::java::lang::Object,
                                 public virtual ::android::support::v4::widget::AutoScrollHelper {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ListViewAutoScrollHelper(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::widget::AutoScrollHelper(_obj), ::android::view::View_OnTouchListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ListViewAutoScrollHelper(const ::android::support::v4::widget::ListViewAutoScrollHelper& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::AutoScrollHelper((jobject)0), ::android::view::View_OnTouchListener((jobject)0) {obj = x.obj;}
    ListViewAutoScrollHelper(::android::support::v4::widget::ListViewAutoScrollHelper&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::AutoScrollHelper((jobject)0), ::android::view::View_OnTouchListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::ListViewAutoScrollHelper& operator=(const ::android::support::v4::widget::ListViewAutoScrollHelper& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::ListViewAutoScrollHelper& operator=(::android::support::v4::widget::ListViewAutoScrollHelper&& x) {obj = std::move(x.obj); return *this;}
    
    ListViewAutoScrollHelper(const ::android::widget::ListView&);
    void scrollTargetBy(int32_t, int32_t) const;
    bool canTargetScrollHorizontally(int32_t) const;
    bool canTargetScrollVertically(int32_t) const;

};
}
}
}
}


