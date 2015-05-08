#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace os {
namespace storage {
class OnObbStateChangeListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit OnObbStateChangeListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    OnObbStateChangeListener(const ::android::os::storage::OnObbStateChangeListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    OnObbStateChangeListener(::android::os::storage::OnObbStateChangeListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::storage::OnObbStateChangeListener& operator=(const ::android::os::storage::OnObbStateChangeListener& x) {obj = x.obj; return *this;}
    ::android::os::storage::OnObbStateChangeListener& operator=(::android::os::storage::OnObbStateChangeListener&& x) {obj = std::move(x.obj); return *this;}
    
    OnObbStateChangeListener();
    void onObbStateChange(const ::java::lang::String&, int32_t) const ;

};
}
}
}


