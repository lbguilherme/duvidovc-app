#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace net { class NetworkInfo_DetailedState; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace net {
class NetworkInfo_DetailedState : public virtual ::java::lang::Object,
                                  public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NetworkInfo_DetailedState(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NetworkInfo_DetailedState(const ::android::net::NetworkInfo_DetailedState& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    NetworkInfo_DetailedState(::android::net::NetworkInfo_DetailedState&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::NetworkInfo_DetailedState& operator=(const ::android::net::NetworkInfo_DetailedState& x) {obj = x.obj; return *this;}
    ::android::net::NetworkInfo_DetailedState& operator=(::android::net::NetworkInfo_DetailedState&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::net::NetworkInfo_DetailedState> values();
    static ::android::net::NetworkInfo_DetailedState valueOf(const ::java::lang::String&);

};
}
}


