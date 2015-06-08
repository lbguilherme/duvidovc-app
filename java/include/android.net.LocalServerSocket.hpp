#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { class LocalSocket; } }
namespace android { namespace net { class LocalSocketAddress; } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace net {
class LocalServerSocket : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LocalServerSocket(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LocalServerSocket(const ::android::net::LocalServerSocket& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LocalServerSocket(::android::net::LocalServerSocket&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::LocalServerSocket& operator=(const ::android::net::LocalServerSocket& x) {obj = x.obj; return *this;}
    ::android::net::LocalServerSocket& operator=(::android::net::LocalServerSocket&& x) {obj = std::move(x.obj); return *this;}
    
    LocalServerSocket(const ::java::lang::String&);
    LocalServerSocket(const ::java::io::FileDescriptor&);
    ::android::net::LocalSocketAddress getLocalSocketAddress() const;
    ::android::net::LocalSocket accept() const;
    ::java::io::FileDescriptor getFileDescriptor() const;
    void close() const;

};
}
}


