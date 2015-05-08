#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.BaseColumns.hpp"

namespace android { namespace content { class Context; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace provider {
class CallLog_Calls : public virtual ::java::lang::Object,
                      public virtual ::android::provider::BaseColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CallLog_Calls(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CallLog_Calls(const ::android::provider::CallLog_Calls& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0) {obj = x.obj;}
    CallLog_Calls(::android::provider::CallLog_Calls&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::CallLog_Calls& operator=(const ::android::provider::CallLog_Calls& x) {obj = x.obj; return *this;}
    ::android::provider::CallLog_Calls& operator=(::android::provider::CallLog_Calls&& x) {obj = std::move(x.obj); return *this;}
    
    CallLog_Calls();
    static ::java::lang::String getLastOutgoingCall(const ::android::content::Context&);

};
}
}


