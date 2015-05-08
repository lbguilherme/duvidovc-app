#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class FragmentManager_BackStackEntry; } }

namespace android {
namespace app {
class FragmentBreadCrumbs_OnBreadCrumbClickListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FragmentBreadCrumbs_OnBreadCrumbClickListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FragmentBreadCrumbs_OnBreadCrumbClickListener(const ::android::app::FragmentBreadCrumbs_OnBreadCrumbClickListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FragmentBreadCrumbs_OnBreadCrumbClickListener(::android::app::FragmentBreadCrumbs_OnBreadCrumbClickListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::FragmentBreadCrumbs_OnBreadCrumbClickListener& operator=(const ::android::app::FragmentBreadCrumbs_OnBreadCrumbClickListener& x) {obj = x.obj; return *this;}
    ::android::app::FragmentBreadCrumbs_OnBreadCrumbClickListener& operator=(::android::app::FragmentBreadCrumbs_OnBreadCrumbClickListener&& x) {obj = std::move(x.obj); return *this;}
    
    bool onBreadCrumbClick(const ::android::app::FragmentManager_BackStackEntry&, int32_t) const ;

};
}
}


