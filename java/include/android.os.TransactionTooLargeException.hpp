#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.RemoteException.hpp"


namespace android {
namespace os {
class TransactionTooLargeException : public virtual ::java::lang::Object,
                                     public virtual ::android::os::RemoteException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TransactionTooLargeException(jobject _obj) : ::java::lang::Object(_obj), ::android::os::RemoteException(_obj), ::android::util::AndroidException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TransactionTooLargeException(const ::android::os::TransactionTooLargeException& x) : ::java::lang::Object((jobject)0), ::android::os::RemoteException((jobject)0), ::android::util::AndroidException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    TransactionTooLargeException(::android::os::TransactionTooLargeException&& x) : ::java::lang::Object((jobject)0), ::android::os::RemoteException((jobject)0), ::android::util::AndroidException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::TransactionTooLargeException& operator=(const ::android::os::TransactionTooLargeException& x) {obj = x.obj; return *this;}
    ::android::os::TransactionTooLargeException& operator=(::android::os::TransactionTooLargeException&& x) {obj = std::move(x.obj); return *this;}
    
    TransactionTooLargeException();

};
}
}


