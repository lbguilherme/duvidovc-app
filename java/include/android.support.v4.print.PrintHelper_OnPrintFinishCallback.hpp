#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace support {
namespace v4 {
namespace print {
class PrintHelper_OnPrintFinishCallback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PrintHelper_OnPrintFinishCallback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PrintHelper_OnPrintFinishCallback(const ::android::support::v4::print::PrintHelper_OnPrintFinishCallback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PrintHelper_OnPrintFinishCallback(::android::support::v4::print::PrintHelper_OnPrintFinishCallback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::print::PrintHelper_OnPrintFinishCallback& operator=(const ::android::support::v4::print::PrintHelper_OnPrintFinishCallback& x) {obj = x.obj; return *this;}
    ::android::support::v4::print::PrintHelper_OnPrintFinishCallback& operator=(::android::support::v4::print::PrintHelper_OnPrintFinishCallback&& x) {obj = std::move(x.obj); return *this;}
    
    void onFinish() const ;

};
}
}
}
}


