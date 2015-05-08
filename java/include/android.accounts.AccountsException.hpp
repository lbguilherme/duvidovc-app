#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Exception.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace android {
namespace accounts {
class AccountsException : public virtual ::java::lang::Object,
                          public virtual ::java::lang::Exception {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccountsException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccountsException(const ::android::accounts::AccountsException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    AccountsException(::android::accounts::AccountsException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::accounts::AccountsException& operator=(const ::android::accounts::AccountsException& x) {obj = x.obj; return *this;}
    ::android::accounts::AccountsException& operator=(::android::accounts::AccountsException&& x) {obj = std::move(x.obj); return *this;}
    
    AccountsException();
    AccountsException(const ::java::lang::String&);
    AccountsException(const ::java::lang::String&, const ::java::lang::Throwable&);
    AccountsException(const ::java::lang::Throwable&);

};
}
}


