#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Thread; } }
namespace java { namespace lang { class ThreadGroup; } }
namespace java { namespace net { class InetAddress; } }
namespace java { namespace security { class Permission; } }

namespace java {
namespace lang {
class SecurityManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SecurityManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SecurityManager(const ::java::lang::SecurityManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SecurityManager(::java::lang::SecurityManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::SecurityManager& operator=(const ::java::lang::SecurityManager& x) {obj = x.obj; return *this;}
    ::java::lang::SecurityManager& operator=(::java::lang::SecurityManager&& x) {obj = std::move(x.obj); return *this;}
    
    SecurityManager();
    void checkAccept(const ::java::lang::String&, int32_t) const;
    void checkAccess(const ::java::lang::Thread&) const;
    void checkAccess(const ::java::lang::ThreadGroup&) const;
    void checkConnect(const ::java::lang::String&, int32_t) const;
    void checkConnect(const ::java::lang::String&, int32_t, const ::java::lang::Object&) const;
    void checkCreateClassLoader() const;
    void checkDelete(const ::java::lang::String&) const;
    void checkExec(const ::java::lang::String&) const;
    void checkExit(int32_t) const;
    void checkLink(const ::java::lang::String&) const;
    void checkListen(int32_t) const;
    void checkMemberAccess(const ::java::lang::Class&, int32_t) const;
    void checkMulticast(const ::java::net::InetAddress&) const;
    void checkMulticast(const ::java::net::InetAddress&, int8_t) const;
    void checkPackageAccess(const ::java::lang::String&) const;
    void checkPackageDefinition(const ::java::lang::String&) const;
    void checkPropertiesAccess() const;
    void checkPropertyAccess(const ::java::lang::String&) const;
    void checkRead(const ::java::io::FileDescriptor&) const;
    void checkRead(const ::java::lang::String&) const;
    void checkRead(const ::java::lang::String&, const ::java::lang::Object&) const;
    void checkSecurityAccess(const ::java::lang::String&) const;
    void checkSetFactory() const;
    bool checkTopLevelWindow(const ::java::lang::Object&) const;
    void checkSystemClipboardAccess() const;
    void checkAwtEventQueueAccess() const;
    void checkPrintJobAccess() const;
    void checkWrite(const ::java::io::FileDescriptor&) const;
    void checkWrite(const ::java::lang::String&) const;
    bool getInCheck() const;
    ::java::lang::ThreadGroup getThreadGroup() const;
    ::java::lang::Object getSecurityContext() const;
    void checkPermission(const ::java::security::Permission&) const;
    void checkPermission(const ::java::security::Permission&, const ::java::lang::Object&) const;

};
}
}


