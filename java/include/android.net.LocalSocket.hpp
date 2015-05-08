#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { class Credentials; } }
namespace android { namespace net { class LocalSocketAddress; } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class OutputStream; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace net {
class LocalSocket : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LocalSocket(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LocalSocket(const ::android::net::LocalSocket& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LocalSocket(::android::net::LocalSocket&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::LocalSocket& operator=(const ::android::net::LocalSocket& x) {obj = x.obj; return *this;}
    ::android::net::LocalSocket& operator=(::android::net::LocalSocket&& x) {obj = std::move(x.obj); return *this;}
    
    LocalSocket();
    ::java::lang::String toString() const ;
    void connect(const ::android::net::LocalSocketAddress&) const ;
    void bind(const ::android::net::LocalSocketAddress&) const ;
    ::android::net::LocalSocketAddress getLocalSocketAddress() const ;
    ::java::io::InputStream getInputStream() const ;
    ::java::io::OutputStream getOutputStream() const ;
    void close() const ;
    void shutdownInput() const ;
    void shutdownOutput() const ;
    void setReceiveBufferSize(int32_t) const ;
    int32_t getReceiveBufferSize() const ;
    void setSoTimeout(int32_t) const ;
    int32_t getSoTimeout() const ;
    void setSendBufferSize(int32_t) const ;
    int32_t getSendBufferSize() const ;
    ::android::net::LocalSocketAddress getRemoteSocketAddress() const ;
    bool isConnected() const ;
    bool isClosed() const ;
    bool isBound() const ;
    bool isOutputShutdown() const ;
    bool isInputShutdown() const ;
    void connect(const ::android::net::LocalSocketAddress&, int32_t) const ;
    void setFileDescriptorsForSend(const std::vector< ::java::io::FileDescriptor>&) const ;
    std::vector< ::java::io::FileDescriptor> getAncillaryFileDescriptors() const ;
    ::android::net::Credentials getPeerCredentials() const ;
    ::java::io::FileDescriptor getFileDescriptor() const ;

};
}
}


