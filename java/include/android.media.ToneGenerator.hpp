#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace media {
class ToneGenerator : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ToneGenerator(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ToneGenerator(const ::android::media::ToneGenerator& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ToneGenerator(::android::media::ToneGenerator&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::ToneGenerator& operator=(const ::android::media::ToneGenerator& x) {obj = x.obj; return *this;}
    ::android::media::ToneGenerator& operator=(::android::media::ToneGenerator&& x) {obj = std::move(x.obj); return *this;}
    
    ToneGenerator(int32_t, int32_t);
    bool startTone(int32_t) const ;
    bool startTone(int32_t, int32_t) const ;
    void stopTone() const ;
    void release() const ;

};
}
}


