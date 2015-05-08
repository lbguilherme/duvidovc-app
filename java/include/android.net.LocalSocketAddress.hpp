#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { class LocalSocketAddress_Namespace; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace net {
class LocalSocketAddress : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LocalSocketAddress(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LocalSocketAddress(const ::android::net::LocalSocketAddress& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LocalSocketAddress(::android::net::LocalSocketAddress&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::LocalSocketAddress& operator=(const ::android::net::LocalSocketAddress& x) {obj = x.obj; return *this;}
    ::android::net::LocalSocketAddress& operator=(::android::net::LocalSocketAddress&& x) {obj = std::move(x.obj); return *this;}
    
    LocalSocketAddress(const ::java::lang::String&, const ::android::net::LocalSocketAddress_Namespace&);
    LocalSocketAddress(const ::java::lang::String&);
    ::java::lang::String getName() const ;
    ::android::net::LocalSocketAddress_Namespace getNamespace() const ;

};
}
}

#include "android.net.LocalSocketAddress_Namespace.hpp"

