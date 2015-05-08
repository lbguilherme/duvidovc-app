#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Exception.hpp"


namespace java {
namespace security {
namespace acl {
class NotOwnerException : public virtual ::java::lang::Object,
                          public virtual ::java::lang::Exception {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotOwnerException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotOwnerException(const ::java::security::acl::NotOwnerException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    NotOwnerException(::java::security::acl::NotOwnerException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::acl::NotOwnerException& operator=(const ::java::security::acl::NotOwnerException& x) {obj = x.obj; return *this;}
    ::java::security::acl::NotOwnerException& operator=(::java::security::acl::NotOwnerException&& x) {obj = std::move(x.obj); return *this;}
    
    NotOwnerException();

};
}
}
}


