#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Bundle; } }

namespace com {
namespace facebook {
namespace share {
namespace widget {
class JoinAppGroupDialog_Result : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit JoinAppGroupDialog_Result(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    JoinAppGroupDialog_Result(const ::com::facebook::share::widget::JoinAppGroupDialog_Result& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    JoinAppGroupDialog_Result(::com::facebook::share::widget::JoinAppGroupDialog_Result&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::widget::JoinAppGroupDialog_Result& operator=(const ::com::facebook::share::widget::JoinAppGroupDialog_Result& x) {obj = x.obj; return *this;}
    ::com::facebook::share::widget::JoinAppGroupDialog_Result& operator=(::com::facebook::share::widget::JoinAppGroupDialog_Result&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::os::Bundle getData() const;

};
}
}
}
}


