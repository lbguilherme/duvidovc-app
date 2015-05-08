#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace net { class Uri; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace media {
class AsyncPlayer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AsyncPlayer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AsyncPlayer(const ::android::media::AsyncPlayer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AsyncPlayer(::android::media::AsyncPlayer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::AsyncPlayer& operator=(const ::android::media::AsyncPlayer& x) {obj = x.obj; return *this;}
    ::android::media::AsyncPlayer& operator=(::android::media::AsyncPlayer&& x) {obj = std::move(x.obj); return *this;}
    
    AsyncPlayer(const ::java::lang::String&);
    void play(const ::android::content::Context&, const ::android::net::Uri&, bool, int32_t) const ;
    void stop() const ;

};
}
}


