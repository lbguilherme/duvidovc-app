#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace accounts { class Account; } }
namespace android { namespace accounts { class AccountManager; } }
namespace android { namespace accounts { class AccountManagerCallback; } }
namespace android { namespace accounts { class AccountManagerFuture; } }
namespace android { namespace accounts { class AuthenticatorDescription; } }
namespace android { namespace accounts { class OnAccountsUpdateListener; } }
namespace android { namespace app { class Activity; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class Handler; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class ArrayList; } }

namespace android {
namespace accounts {
class AccountManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccountManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccountManager(const ::android::accounts::AccountManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AccountManager(::android::accounts::AccountManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::accounts::AccountManager& operator=(const ::android::accounts::AccountManager& x) {obj = x.obj; return *this;}
    ::android::accounts::AccountManager& operator=(::android::accounts::AccountManager&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::accounts::AccountManager get(const ::android::content::Context&);
    ::java::lang::String getPassword(const ::android::accounts::Account&) const ;
    ::java::lang::String getUserData(const ::android::accounts::Account&, const ::java::lang::String&) const ;
    std::vector< ::android::accounts::AuthenticatorDescription> getAuthenticatorTypes() const ;
    std::vector< ::android::accounts::Account> getAccounts() const ;
    std::vector< ::android::accounts::Account> getAccountsByType(const ::java::lang::String&) const ;
    ::android::accounts::AccountManagerFuture hasFeatures(const ::android::accounts::Account&, const std::vector< ::java::lang::String>&, const ::android::accounts::AccountManagerCallback&, const ::android::os::Handler&) const ;
    ::android::accounts::AccountManagerFuture getAccountsByTypeAndFeatures(const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::android::accounts::AccountManagerCallback&, const ::android::os::Handler&) const ;
    bool addAccountExplicitly(const ::android::accounts::Account&, const ::java::lang::String&, const ::android::os::Bundle&) const ;
    ::android::accounts::AccountManagerFuture removeAccount(const ::android::accounts::Account&, const ::android::accounts::AccountManagerCallback&, const ::android::os::Handler&) const ;
    void invalidateAuthToken(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::java::lang::String peekAuthToken(const ::android::accounts::Account&, const ::java::lang::String&) const ;
    void setPassword(const ::android::accounts::Account&, const ::java::lang::String&) const ;
    void clearPassword(const ::android::accounts::Account&) const ;
    void setUserData(const ::android::accounts::Account&, const ::java::lang::String&, const ::java::lang::String&) const ;
    void setAuthToken(const ::android::accounts::Account&, const ::java::lang::String&, const ::java::lang::String&) const ;
    ::java::lang::String blockingGetAuthToken(const ::android::accounts::Account&, const ::java::lang::String&, bool) const ;
    ::android::accounts::AccountManagerFuture getAuthToken(const ::android::accounts::Account&, const ::java::lang::String&, const ::android::os::Bundle&, const ::android::app::Activity&, const ::android::accounts::AccountManagerCallback&, const ::android::os::Handler&) const ;
    ::android::accounts::AccountManagerFuture getAuthToken(const ::android::accounts::Account&, const ::java::lang::String&, bool, const ::android::accounts::AccountManagerCallback&, const ::android::os::Handler&) const ;
    ::android::accounts::AccountManagerFuture getAuthToken(const ::android::accounts::Account&, const ::java::lang::String&, const ::android::os::Bundle&, bool, const ::android::accounts::AccountManagerCallback&, const ::android::os::Handler&) const ;
    ::android::accounts::AccountManagerFuture addAccount(const ::java::lang::String&, const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::android::os::Bundle&, const ::android::app::Activity&, const ::android::accounts::AccountManagerCallback&, const ::android::os::Handler&) const ;
    ::android::accounts::AccountManagerFuture confirmCredentials(const ::android::accounts::Account&, const ::android::os::Bundle&, const ::android::app::Activity&, const ::android::accounts::AccountManagerCallback&, const ::android::os::Handler&) const ;
    ::android::accounts::AccountManagerFuture updateCredentials(const ::android::accounts::Account&, const ::java::lang::String&, const ::android::os::Bundle&, const ::android::app::Activity&, const ::android::accounts::AccountManagerCallback&, const ::android::os::Handler&) const ;
    ::android::accounts::AccountManagerFuture editProperties(const ::java::lang::String&, const ::android::app::Activity&, const ::android::accounts::AccountManagerCallback&, const ::android::os::Handler&) const ;
    ::android::accounts::AccountManagerFuture getAuthTokenByFeatures(const ::java::lang::String&, const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::android::app::Activity&, const ::android::os::Bundle&, const ::android::os::Bundle&, const ::android::accounts::AccountManagerCallback&, const ::android::os::Handler&) const ;
    static ::android::content::Intent newChooseAccountIntent(const ::android::accounts::Account&, const ::java::util::ArrayList&, const std::vector< ::java::lang::String>&, bool, const ::java::lang::String&, const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::android::os::Bundle&);
    void addOnAccountsUpdatedListener(const ::android::accounts::OnAccountsUpdateListener&, const ::android::os::Handler&, bool) const ;
    void removeOnAccountsUpdatedListener(const ::android::accounts::OnAccountsUpdateListener&) const ;

};
}
}


