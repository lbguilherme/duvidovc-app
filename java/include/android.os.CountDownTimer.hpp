#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class CountDownTimer; } }

namespace android {
namespace os {
class CountDownTimer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CountDownTimer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CountDownTimer(const ::android::os::CountDownTimer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CountDownTimer(::android::os::CountDownTimer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::CountDownTimer& operator=(const ::android::os::CountDownTimer& x) {obj = x.obj; return *this;}
    ::android::os::CountDownTimer& operator=(::android::os::CountDownTimer&& x) {obj = std::move(x.obj); return *this;}
    
    CountDownTimer(int64_t, int64_t);
    void cancel() const;
    ::android::os::CountDownTimer start() const;
    void onTick(int64_t) const;
    void onFinish() const;

};
}
}


