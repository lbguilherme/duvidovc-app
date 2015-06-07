#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace content { class Intent; } }
namespace android { namespace os { class Parcel; } }
namespace com { namespace facebook { class AccessToken; } }
namespace com { namespace facebook { class AccessToken_AccessTokenCreationCallback; } }
namespace com { namespace facebook { class AccessTokenSource; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Date; } }
namespace java { namespace util { class Set; } }

namespace com {
namespace facebook {
class AccessToken : public virtual ::java::lang::Object,
                    public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessToken(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessToken(const ::com::facebook::AccessToken& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    AccessToken(::com::facebook::AccessToken&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::AccessToken& operator=(const ::com::facebook::AccessToken& x) {obj = x.obj; return *this;}
    ::com::facebook::AccessToken& operator=(::com::facebook::AccessToken&& x) {obj = std::move(x.obj); return *this;}
    
    AccessToken(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::util::Collection&, const ::java::util::Collection&, const ::com::facebook::AccessTokenSource&, const ::java::util::Date&, const ::java::util::Date&);
    static ::com::facebook::AccessToken getCurrentAccessToken();
    static void setCurrentAccessToken(const ::com::facebook::AccessToken&);
    static void refreshCurrentAccessTokenAsync();
    ::java::lang::String getToken() const ;
    ::java::util::Date getExpires() const ;
    ::java::util::Set getPermissions() const ;
    ::java::util::Set getDeclinedPermissions() const ;
    ::com::facebook::AccessTokenSource getSource() const ;
    ::java::util::Date getLastRefresh() const ;
    ::java::lang::String getApplicationId() const ;
    ::java::lang::String getUserId() const ;
    static void createFromNativeLinkingIntent(const ::android::content::Intent&, const ::java::lang::String&, const ::com::facebook::AccessToken_AccessTokenCreationCallback&);
    ::java::lang::String toString() const ;
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;
    bool isExpired() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}

#include "com.facebook.AccessToken_AccessTokenCreationCallback.hpp"

