#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class ActionMode; } }
namespace android { namespace view { class Menu; } }
namespace android { namespace view { class MenuItem; } }

namespace android {
namespace view {
class ActionMode_Callback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ActionMode_Callback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ActionMode_Callback(const ::android::view::ActionMode_Callback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ActionMode_Callback(::android::view::ActionMode_Callback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ActionMode_Callback& operator=(const ::android::view::ActionMode_Callback& x) {obj = x.obj; return *this;}
    ::android::view::ActionMode_Callback& operator=(::android::view::ActionMode_Callback&& x) {obj = std::move(x.obj); return *this;}
    
    bool onCreateActionMode(const ::android::view::ActionMode&, const ::android::view::Menu&) const ;
    bool onPrepareActionMode(const ::android::view::ActionMode&, const ::android::view::Menu&) const ;
    bool onActionItemClicked(const ::android::view::ActionMode&, const ::android::view::MenuItem&) const ;
    void onDestroyActionMode(const ::android::view::ActionMode&) const ;

};
}
}


