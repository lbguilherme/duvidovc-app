#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace webkit { class CookieManager; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace webkit {
class CookieManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CookieManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CookieManager(const ::android::webkit::CookieManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CookieManager(::android::webkit::CookieManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::CookieManager& operator=(const ::android::webkit::CookieManager& x) {obj = x.obj; return *this;}
    ::android::webkit::CookieManager& operator=(::android::webkit::CookieManager&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::webkit::CookieManager getInstance();
    void setAcceptCookie(bool) const;
    bool acceptCookie() const;
    void setCookie(const ::java::lang::String&, const ::java::lang::String&) const;
    ::java::lang::String getCookie(const ::java::lang::String&) const;
    void removeSessionCookie() const;
    void removeAllCookie() const;
    bool hasCookies() const;
    void removeExpiredCookie() const;
    static bool allowFileSchemeCookies();
    static void setAcceptFileSchemeCookies(bool);

};
}
}


