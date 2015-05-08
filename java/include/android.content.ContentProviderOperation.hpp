#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace content { class ContentProvider; } }
namespace android { namespace content { class ContentProviderOperation_Builder; } }
namespace android { namespace content { class ContentProviderResult; } }
namespace android { namespace content { class ContentValues; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
class ContentProviderOperation : public virtual ::java::lang::Object,
                                 public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContentProviderOperation(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContentProviderOperation(const ::android::content::ContentProviderOperation& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    ContentProviderOperation(::android::content::ContentProviderOperation&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::ContentProviderOperation& operator=(const ::android::content::ContentProviderOperation& x) {obj = x.obj; return *this;}
    ::android::content::ContentProviderOperation& operator=(::android::content::ContentProviderOperation&& x) {obj = std::move(x.obj); return *this;}
    
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    static ::android::content::ContentProviderOperation_Builder newInsert(const ::android::net::Uri&);
    static ::android::content::ContentProviderOperation_Builder newUpdate(const ::android::net::Uri&);
    static ::android::content::ContentProviderOperation_Builder newDelete(const ::android::net::Uri&);
    static ::android::content::ContentProviderOperation_Builder newAssertQuery(const ::android::net::Uri&);
    ::android::net::Uri getUri() const ;
    bool isYieldAllowed() const ;
    bool isWriteOperation() const ;
    bool isReadOperation() const ;
    ::android::content::ContentProviderResult apply(const ::android::content::ContentProvider&, const std::vector< ::android::content::ContentProviderResult>&, int32_t) const ;
    ::android::content::ContentValues resolveValueBackReferences(const std::vector< ::android::content::ContentProviderResult>&, int32_t) const ;
    std::vector< ::java::lang::String> resolveSelectionArgsBackReferences(const std::vector< ::android::content::ContentProviderResult>&, int32_t) const ;
    ::java::lang::String toString() const ;
    int32_t describeContents() const ;

};
}
}

#include "android.content.ContentProviderOperation_Builder.hpp"

