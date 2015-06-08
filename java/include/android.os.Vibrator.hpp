#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace os {
class Vibrator : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Vibrator(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Vibrator(const ::android::os::Vibrator& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Vibrator(::android::os::Vibrator&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::Vibrator& operator=(const ::android::os::Vibrator& x) {obj = x.obj; return *this;}
    ::android::os::Vibrator& operator=(::android::os::Vibrator&& x) {obj = std::move(x.obj); return *this;}
    
    bool hasVibrator() const;
    void vibrate(int64_t) const;
    void vibrate(const std::vector< int64_t>&, int32_t) const;
    void cancel() const;

};
}
}


