#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Intent; } }

namespace android {
namespace app {
class Instrumentation_ActivityResult : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Instrumentation_ActivityResult(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Instrumentation_ActivityResult(const ::android::app::Instrumentation_ActivityResult& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Instrumentation_ActivityResult(::android::app::Instrumentation_ActivityResult&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::Instrumentation_ActivityResult& operator=(const ::android::app::Instrumentation_ActivityResult& x) {obj = x.obj; return *this;}
    ::android::app::Instrumentation_ActivityResult& operator=(::android::app::Instrumentation_ActivityResult&& x) {obj = std::move(x.obj); return *this;}
    
    Instrumentation_ActivityResult(int32_t, const ::android::content::Intent&);
    int32_t getResultCode() const;
    ::android::content::Intent getResultData() const;

};
}
}


