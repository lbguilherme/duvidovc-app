#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Handler; } }
namespace android { namespace os { class IBinder; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace os {
class TokenWatcher : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TokenWatcher(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TokenWatcher(const ::android::os::TokenWatcher& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TokenWatcher(::android::os::TokenWatcher&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::TokenWatcher& operator=(const ::android::os::TokenWatcher& x) {obj = x.obj; return *this;}
    ::android::os::TokenWatcher& operator=(::android::os::TokenWatcher&& x) {obj = std::move(x.obj); return *this;}
    
    TokenWatcher(const ::android::os::Handler&, const ::java::lang::String&);
    void acquired() const ;
    void released() const ;
    void acquire(const ::android::os::IBinder&, const ::java::lang::String&) const ;
    void cleanup(const ::android::os::IBinder&, bool) const ;
    void release(const ::android::os::IBinder&) const ;
    bool isAcquired() const ;
    void dump() const ;

};
}
}


