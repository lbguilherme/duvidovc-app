#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace security { class AccessControlContext; } }
namespace java { namespace security { class PrivilegedAction; } }
namespace java { namespace security { class PrivilegedExceptionAction; } }
namespace java { namespace util { class Set; } }
namespace javax { namespace security { namespace auth { class Subject; } } }

namespace javax {
namespace security {
namespace auth {
class Subject : public virtual ::java::lang::Object,
                public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Subject(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Subject(const ::javax::security::auth::Subject& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    Subject(::javax::security::auth::Subject&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::security::auth::Subject& operator=(const ::javax::security::auth::Subject& x) {obj = x.obj; return *this;}
    ::javax::security::auth::Subject& operator=(::javax::security::auth::Subject&& x) {obj = std::move(x.obj); return *this;}
    
    Subject();
    Subject(bool, const ::java::util::Set&, const ::java::util::Set&, const ::java::util::Set&);
    static ::java::lang::Object doAs(const ::javax::security::auth::Subject&, const ::java::security::PrivilegedAction&);
    static ::java::lang::Object doAsPrivileged(const ::javax::security::auth::Subject&, const ::java::security::PrivilegedAction&, const ::java::security::AccessControlContext&);
    static ::java::lang::Object doAs(const ::javax::security::auth::Subject&, const ::java::security::PrivilegedExceptionAction&);
    static ::java::lang::Object doAsPrivileged(const ::javax::security::auth::Subject&, const ::java::security::PrivilegedExceptionAction&, const ::java::security::AccessControlContext&);
    bool equals(const ::java::lang::Object&) const ;
    ::java::util::Set getPrincipals() const ;
    ::java::util::Set getPrincipals(const ::java::lang::Class&) const ;
    ::java::util::Set getPrivateCredentials() const ;
    ::java::util::Set getPrivateCredentials(const ::java::lang::Class&) const ;
    ::java::util::Set getPublicCredentials() const ;
    ::java::util::Set getPublicCredentials(const ::java::lang::Class&) const ;
    int32_t hashCode() const ;
    void setReadOnly() const ;
    bool isReadOnly() const ;
    ::java::lang::String toString() const ;
    static ::javax::security::auth::Subject getSubject(const ::java::security::AccessControlContext&);

};
}
}
}


