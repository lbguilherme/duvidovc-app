#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.accounts.AccountsException.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace android {
namespace accounts {
class NetworkErrorException : public virtual ::java::lang::Object,
                              public virtual ::android::accounts::AccountsException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NetworkErrorException(jobject _obj) : ::java::lang::Object(_obj), ::android::accounts::AccountsException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NetworkErrorException(const ::android::accounts::NetworkErrorException& x) : ::java::lang::Object((jobject)0), ::android::accounts::AccountsException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    NetworkErrorException(::android::accounts::NetworkErrorException&& x) : ::java::lang::Object((jobject)0), ::android::accounts::AccountsException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::accounts::NetworkErrorException& operator=(const ::android::accounts::NetworkErrorException& x) {obj = x.obj; return *this;}
    ::android::accounts::NetworkErrorException& operator=(::android::accounts::NetworkErrorException&& x) {obj = std::move(x.obj); return *this;}
    
    NetworkErrorException();
    NetworkErrorException(const ::java::lang::String&);
    NetworkErrorException(const ::java::lang::String&, const ::java::lang::Throwable&);
    NetworkErrorException(const ::java::lang::Throwable&);

};
}
}


