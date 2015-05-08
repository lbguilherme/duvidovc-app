#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace media { class CamcorderProfile; } }

namespace android {
namespace media {
class CamcorderProfile : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CamcorderProfile(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CamcorderProfile(const ::android::media::CamcorderProfile& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CamcorderProfile(::android::media::CamcorderProfile&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::CamcorderProfile& operator=(const ::android::media::CamcorderProfile& x) {obj = x.obj; return *this;}
    ::android::media::CamcorderProfile& operator=(::android::media::CamcorderProfile&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::media::CamcorderProfile get(int32_t);
    static ::android::media::CamcorderProfile get(int32_t, int32_t);
    static bool hasProfile(int32_t);
    static bool hasProfile(int32_t, int32_t);

};
}
}


