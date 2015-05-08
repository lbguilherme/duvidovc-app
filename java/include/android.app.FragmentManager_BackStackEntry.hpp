#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace app {
class FragmentManager_BackStackEntry : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FragmentManager_BackStackEntry(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FragmentManager_BackStackEntry(const ::android::app::FragmentManager_BackStackEntry& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FragmentManager_BackStackEntry(::android::app::FragmentManager_BackStackEntry&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::FragmentManager_BackStackEntry& operator=(const ::android::app::FragmentManager_BackStackEntry& x) {obj = x.obj; return *this;}
    ::android::app::FragmentManager_BackStackEntry& operator=(::android::app::FragmentManager_BackStackEntry&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getId() const ;
    ::java::lang::String getName() const ;
    int32_t getBreadCrumbTitleRes() const ;
    int32_t getBreadCrumbShortTitleRes() const ;
    ::java::lang::CharSequence getBreadCrumbTitle() const ;
    ::java::lang::CharSequence getBreadCrumbShortTitle() const ;

};
}
}


