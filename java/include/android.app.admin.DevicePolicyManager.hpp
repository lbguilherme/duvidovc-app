#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class ComponentName; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace android {
namespace app {
namespace admin {
class DevicePolicyManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DevicePolicyManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DevicePolicyManager(const ::android::app::admin::DevicePolicyManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DevicePolicyManager(::android::app::admin::DevicePolicyManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::admin::DevicePolicyManager& operator=(const ::android::app::admin::DevicePolicyManager& x) {obj = x.obj; return *this;}
    ::android::app::admin::DevicePolicyManager& operator=(::android::app::admin::DevicePolicyManager&& x) {obj = std::move(x.obj); return *this;}
    
    bool isAdminActive(const ::android::content::ComponentName&) const ;
    ::java::util::List getActiveAdmins() const ;
    void removeActiveAdmin(const ::android::content::ComponentName&) const ;
    bool hasGrantedPolicy(const ::android::content::ComponentName&, int32_t) const ;
    void setPasswordQuality(const ::android::content::ComponentName&, int32_t) const ;
    int32_t getPasswordQuality(const ::android::content::ComponentName&) const ;
    void setPasswordMinimumLength(const ::android::content::ComponentName&, int32_t) const ;
    int32_t getPasswordMinimumLength(const ::android::content::ComponentName&) const ;
    void setPasswordMinimumUpperCase(const ::android::content::ComponentName&, int32_t) const ;
    int32_t getPasswordMinimumUpperCase(const ::android::content::ComponentName&) const ;
    void setPasswordMinimumLowerCase(const ::android::content::ComponentName&, int32_t) const ;
    int32_t getPasswordMinimumLowerCase(const ::android::content::ComponentName&) const ;
    void setPasswordMinimumLetters(const ::android::content::ComponentName&, int32_t) const ;
    int32_t getPasswordMinimumLetters(const ::android::content::ComponentName&) const ;
    void setPasswordMinimumNumeric(const ::android::content::ComponentName&, int32_t) const ;
    int32_t getPasswordMinimumNumeric(const ::android::content::ComponentName&) const ;
    void setPasswordMinimumSymbols(const ::android::content::ComponentName&, int32_t) const ;
    int32_t getPasswordMinimumSymbols(const ::android::content::ComponentName&) const ;
    void setPasswordMinimumNonLetter(const ::android::content::ComponentName&, int32_t) const ;
    int32_t getPasswordMinimumNonLetter(const ::android::content::ComponentName&) const ;
    void setPasswordHistoryLength(const ::android::content::ComponentName&, int32_t) const ;
    void setPasswordExpirationTimeout(const ::android::content::ComponentName&, int64_t) const ;
    int64_t getPasswordExpirationTimeout(const ::android::content::ComponentName&) const ;
    int64_t getPasswordExpiration(const ::android::content::ComponentName&) const ;
    int32_t getPasswordHistoryLength(const ::android::content::ComponentName&) const ;
    int32_t getPasswordMaximumLength(int32_t) const ;
    bool isActivePasswordSufficient() const ;
    int32_t getCurrentFailedPasswordAttempts() const ;
    void setMaximumFailedPasswordsForWipe(const ::android::content::ComponentName&, int32_t) const ;
    int32_t getMaximumFailedPasswordsForWipe(const ::android::content::ComponentName&) const ;
    bool resetPassword(const ::java::lang::String&, int32_t) const ;
    void setMaximumTimeToLock(const ::android::content::ComponentName&, int64_t) const ;
    int64_t getMaximumTimeToLock(const ::android::content::ComponentName&) const ;
    void lockNow() const ;
    void wipeData(int32_t) const ;
    int32_t setStorageEncryption(const ::android::content::ComponentName&, bool) const ;
    bool getStorageEncryption(const ::android::content::ComponentName&) const ;
    int32_t getStorageEncryptionStatus() const ;
    void setCameraDisabled(const ::android::content::ComponentName&, bool) const ;
    bool getCameraDisabled(const ::android::content::ComponentName&) const ;

};
}
}
}


