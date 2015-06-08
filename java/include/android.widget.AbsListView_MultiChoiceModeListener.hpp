#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.ActionMode_Callback.hpp"

namespace android { namespace view { class ActionMode; } }

namespace android {
namespace widget {
class AbsListView_MultiChoiceModeListener : public virtual ::java::lang::Object,
                                            public virtual ::android::view::ActionMode_Callback {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbsListView_MultiChoiceModeListener(jobject _obj) : ::java::lang::Object(_obj), ::android::view::ActionMode_Callback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbsListView_MultiChoiceModeListener(const ::android::widget::AbsListView_MultiChoiceModeListener& x) : ::java::lang::Object((jobject)0), ::android::view::ActionMode_Callback((jobject)0) {obj = x.obj;}
    AbsListView_MultiChoiceModeListener(::android::widget::AbsListView_MultiChoiceModeListener&& x) : ::java::lang::Object((jobject)0), ::android::view::ActionMode_Callback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::AbsListView_MultiChoiceModeListener& operator=(const ::android::widget::AbsListView_MultiChoiceModeListener& x) {obj = x.obj; return *this;}
    ::android::widget::AbsListView_MultiChoiceModeListener& operator=(::android::widget::AbsListView_MultiChoiceModeListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onItemCheckedStateChanged(const ::android::view::ActionMode&, int32_t, int64_t, bool) const;

};
}
}


