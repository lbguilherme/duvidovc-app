#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace media {
namespace audiofx {
class Equalizer_Settings : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Equalizer_Settings(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Equalizer_Settings(const ::android::media::audiofx::Equalizer_Settings& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Equalizer_Settings(::android::media::audiofx::Equalizer_Settings&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::audiofx::Equalizer_Settings& operator=(const ::android::media::audiofx::Equalizer_Settings& x) {obj = x.obj; return *this;}
    ::android::media::audiofx::Equalizer_Settings& operator=(::android::media::audiofx::Equalizer_Settings&& x) {obj = std::move(x.obj); return *this;}
    
    Equalizer_Settings();
    Equalizer_Settings(const ::java::lang::String&);
    ::java::lang::String toString() const ;

};
}
}
}


