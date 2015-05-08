#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Parcel; } }
namespace com { namespace facebook { class Profile; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
class Profile : public virtual ::java::lang::Object,
                public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Profile(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Profile(const ::com::facebook::Profile& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    Profile(::com::facebook::Profile&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::Profile& operator=(const ::com::facebook::Profile& x) {obj = x.obj; return *this;}
    ::com::facebook::Profile& operator=(::com::facebook::Profile&& x) {obj = std::move(x.obj); return *this;}
    
    static ::com::facebook::Profile getCurrentProfile();
    static void setCurrentProfile(const ::com::facebook::Profile&);
    static void fetchProfileForCurrentAccessToken();
    Profile(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::android::net::Uri&);
    ::android::net::Uri getProfilePictureUri(int32_t, int32_t) const ;
    ::java::lang::String getId() const ;
    ::java::lang::String getFirstName() const ;
    ::java::lang::String getMiddleName() const ;
    ::java::lang::String getLastName() const ;
    ::java::lang::String getName() const ;
    ::android::net::Uri getLinkUri() const ;
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}


