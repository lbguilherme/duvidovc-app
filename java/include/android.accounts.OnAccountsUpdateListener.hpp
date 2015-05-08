#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace accounts { class Account; } }

namespace android {
namespace accounts {
class OnAccountsUpdateListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit OnAccountsUpdateListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    OnAccountsUpdateListener(const ::android::accounts::OnAccountsUpdateListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    OnAccountsUpdateListener(::android::accounts::OnAccountsUpdateListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::accounts::OnAccountsUpdateListener& operator=(const ::android::accounts::OnAccountsUpdateListener& x) {obj = x.obj; return *this;}
    ::android::accounts::OnAccountsUpdateListener& operator=(::android::accounts::OnAccountsUpdateListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onAccountsUpdated(const std::vector< ::android::accounts::Account>&) const ;

};
}
}


