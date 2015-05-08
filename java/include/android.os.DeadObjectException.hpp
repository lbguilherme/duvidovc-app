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
class DeadObjectException : public virtual ::java::lang::Object,
                            public virtual ::android::os::RemoteException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DeadObjectException(jobject _obj) : ::java::lang::Object(_obj), ::android::os::RemoteException(_obj), ::android::util::AndroidException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DeadObjectException(const ::android::os::DeadObjectException& x) : ::java::lang::Object((jobject)0), ::android::os::RemoteException((jobject)0), ::android::util::AndroidException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    DeadObjectException(::android::os::DeadObjectException&& x) : ::java::lang::Object((jobject)0), ::android::os::RemoteException((jobject)0), ::android::util::AndroidException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::DeadObjectException& operator=(const ::android::os::DeadObjectException& x) {obj = x.obj; return *this;}
    ::android::os::DeadObjectException& operator=(::android::os::DeadObjectException&& x) {obj = std::move(x.obj); return *this;}
    
    DeadObjectException();

};
}
}


