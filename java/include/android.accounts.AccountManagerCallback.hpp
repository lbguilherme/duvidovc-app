#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace accounts { class AccountManagerFuture; } }

namespace android {
namespace accounts {
class AccountManagerCallback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccountManagerCallback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccountManagerCallback(const ::android::accounts::AccountManagerCallback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AccountManagerCallback(::android::accounts::AccountManagerCallback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::accounts::AccountManagerCallback& operator=(const ::android::accounts::AccountManagerCallback& x) {obj = x.obj; return *this;}
    ::android::accounts::AccountManagerCallback& operator=(::android::accounts::AccountManagerCallback&& x) {obj = std::move(x.obj); return *this;}
    
    void run(const ::android::accounts::AccountManagerFuture&) const;

};
}
}


