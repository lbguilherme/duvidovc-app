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
class Virtualizer_Settings : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Virtualizer_Settings(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Virtualizer_Settings(const ::android::media::audiofx::Virtualizer_Settings& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Virtualizer_Settings(::android::media::audiofx::Virtualizer_Settings&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::audiofx::Virtualizer_Settings& operator=(const ::android::media::audiofx::Virtualizer_Settings& x) {obj = x.obj; return *this;}
    ::android::media::audiofx::Virtualizer_Settings& operator=(::android::media::audiofx::Virtualizer_Settings&& x) {obj = std::move(x.obj); return *this;}
    
    Virtualizer_Settings();
    Virtualizer_Settings(const ::java::lang::String&);
    ::java::lang::String toString() const ;

};
}
}
}


