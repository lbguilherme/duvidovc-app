#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class CallLog : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CallLog(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CallLog(const ::android::provider::CallLog& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CallLog(::android::provider::CallLog&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::CallLog& operator=(const ::android::provider::CallLog& x) {obj = x.obj; return *this;}
    ::android::provider::CallLog& operator=(::android::provider::CallLog&& x) {obj = std::move(x.obj); return *this;}
    
    CallLog();

};
}
}

#include "android.provider.CallLog_Calls.hpp"

