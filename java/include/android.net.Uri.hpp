#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"
#include "java.lang.Comparable.hpp"

namespace android { namespace net { class Uri; } }
namespace android { namespace net { class Uri_Builder; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace io { class File; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }
namespace java { namespace util { class Set; } }

namespace android {
namespace net {
class Uri : public virtual ::java::lang::Object,
            public virtual ::android::os::Parcelable,
            public virtual ::java::lang::Comparable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Uri(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::java::lang::Comparable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Uri(const ::android::net::Uri& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj;}
    Uri(::android::net::Uri&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::Uri& operator=(const ::android::net::Uri& x) {obj = x.obj; return *this;}
    ::android::net::Uri& operator=(::android::net::Uri&& x) {obj = std::move(x.obj); return *this;}
    
    bool isHierarchical() const ;
    bool isOpaque() const ;
    bool isRelative() const ;
    bool isAbsolute() const ;
    ::java::lang::String getScheme() const ;
    ::java::lang::String getSchemeSpecificPart() const ;
    ::java::lang::String getEncodedSchemeSpecificPart() const ;
    ::java::lang::String getAuthority() const ;
    ::java::lang::String getEncodedAuthority() const ;
    ::java::lang::String getUserInfo() const ;
    ::java::lang::String getEncodedUserInfo() const ;
    ::java::lang::String getHost() const ;
    int32_t getPort() const ;
    ::java::lang::String getPath() const ;
    ::java::lang::String getEncodedPath() const ;
    ::java::lang::String getQuery() const ;
    ::java::lang::String getEncodedQuery() const ;
    ::java::lang::String getFragment() const ;
    ::java::lang::String getEncodedFragment() const ;
    ::java::util::List getPathSegments() const ;
    ::java::lang::String getLastPathSegment() const ;
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;
    int32_t compareTo(const ::android::net::Uri&) const ;
    ::java::lang::String toString() const ;
    ::android::net::Uri_Builder buildUpon() const ;
    static ::android::net::Uri parse(const ::java::lang::String&);
    static ::android::net::Uri fromFile(const ::java::io::File&);
    static ::android::net::Uri fromParts(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);
    ::java::util::Set getQueryParameterNames() const ;
    ::java::util::List getQueryParameters(const ::java::lang::String&) const ;
    ::java::lang::String getQueryParameter(const ::java::lang::String&) const ;
    bool getBooleanQueryParameter(const ::java::lang::String&, bool) const ;
    static void writeToParcel(const ::android::os::Parcel&, const ::android::net::Uri&);
    static ::java::lang::String encode(const ::java::lang::String&);
    static ::java::lang::String encode(const ::java::lang::String&, const ::java::lang::String&);
    static ::java::lang::String decode(const ::java::lang::String&);
    static ::android::net::Uri withAppendedPath(const ::android::net::Uri&, const ::java::lang::String&);
    int32_t compareTo(const ::java::lang::Object&) const ;

};
}
}

#include "android.net.Uri_Builder.hpp"

