#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace net { class LocalSocketAddress_Namespace; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace net {
class LocalSocketAddress_Namespace : public virtual ::java::lang::Object,
                                     public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LocalSocketAddress_Namespace(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LocalSocketAddress_Namespace(const ::android::net::LocalSocketAddress_Namespace& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    LocalSocketAddress_Namespace(::android::net::LocalSocketAddress_Namespace&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::LocalSocketAddress_Namespace& operator=(const ::android::net::LocalSocketAddress_Namespace& x) {obj = x.obj; return *this;}
    ::android::net::LocalSocketAddress_Namespace& operator=(::android::net::LocalSocketAddress_Namespace&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::net::LocalSocketAddress_Namespace> values();
    static ::android::net::LocalSocketAddress_Namespace valueOf(const ::java::lang::String&);

};
}
}


