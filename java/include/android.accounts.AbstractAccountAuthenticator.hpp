#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace accounts { class Account; } }
namespace android { namespace accounts { class AccountAuthenticatorResponse; } }
namespace android { namespace content { class Context; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class IBinder; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace accounts {
class AbstractAccountAuthenticator : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractAccountAuthenticator(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractAccountAuthenticator(const ::android::accounts::AbstractAccountAuthenticator& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AbstractAccountAuthenticator(::android::accounts::AbstractAccountAuthenticator&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::accounts::AbstractAccountAuthenticator& operator=(const ::android::accounts::AbstractAccountAuthenticator& x) {obj = x.obj; return *this;}
    ::android::accounts::AbstractAccountAuthenticator& operator=(::android::accounts::AbstractAccountAuthenticator&& x) {obj = std::move(x.obj); return *this;}
    
    AbstractAccountAuthenticator(const ::android::content::Context&);
    ::android::os::IBinder getIBinder() const ;
    ::android::os::Bundle editProperties(const ::android::accounts::AccountAuthenticatorResponse&, const ::java::lang::String&) const ;
    ::android::os::Bundle addAccount(const ::android::accounts::AccountAuthenticatorResponse&, const ::java::lang::String&, const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::android::os::Bundle&) const ;
    ::android::os::Bundle confirmCredentials(const ::android::accounts::AccountAuthenticatorResponse&, const ::android::accounts::Account&, const ::android::os::Bundle&) const ;
    ::android::os::Bundle getAuthToken(const ::android::accounts::AccountAuthenticatorResponse&, const ::android::accounts::Account&, const ::java::lang::String&, const ::android::os::Bundle&) const ;
    ::java::lang::String getAuthTokenLabel(const ::java::lang::String&) const ;
    ::android::os::Bundle updateCredentials(const ::android::accounts::AccountAuthenticatorResponse&, const ::android::accounts::Account&, const ::java::lang::String&, const ::android::os::Bundle&) const ;
    ::android::os::Bundle hasFeatures(const ::android::accounts::AccountAuthenticatorResponse&, const ::android::accounts::Account&, const std::vector< ::java::lang::String>&) const ;
    ::android::os::Bundle getAccountRemovalAllowed(const ::android::accounts::AccountAuthenticatorResponse&, const ::android::accounts::Account&) const ;

};
}
}


