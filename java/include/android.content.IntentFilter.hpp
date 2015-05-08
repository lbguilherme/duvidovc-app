#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace content { class ContentResolver; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace content { class IntentFilter; } }
namespace android { namespace content { class IntentFilter_AuthorityEntry; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Parcel; } }
namespace android { namespace os { class PatternMatcher; } }
namespace android { namespace util { class Printer; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Iterator; } }
namespace java { namespace util { class Set; } }
namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } }
namespace org { namespace xmlpull { namespace v1 { class XmlSerializer; } } }

namespace android {
namespace content {
class IntentFilter : public virtual ::java::lang::Object,
                     public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IntentFilter(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IntentFilter(const ::android::content::IntentFilter& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    IntentFilter(::android::content::IntentFilter&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::IntentFilter& operator=(const ::android::content::IntentFilter& x) {obj = x.obj; return *this;}
    ::android::content::IntentFilter& operator=(::android::content::IntentFilter&& x) {obj = std::move(x.obj); return *this;}
    
    IntentFilter();
    IntentFilter(const ::java::lang::String&);
    IntentFilter(const ::java::lang::String&, const ::java::lang::String&);
    static ::android::content::IntentFilter create(const ::java::lang::String&, const ::java::lang::String&);
    void setPriority(int32_t) const ;
    int32_t getPriority() const ;
    void addAction(const ::java::lang::String&) const ;
    int32_t countActions() const ;
    ::java::lang::String getAction(int32_t) const ;
    bool hasAction(const ::java::lang::String&) const ;
    bool matchAction(const ::java::lang::String&) const ;
    ::java::util::Iterator actionsIterator() const ;
    void addDataType(const ::java::lang::String&) const ;
    bool hasDataType(const ::java::lang::String&) const ;
    int32_t countDataTypes() const ;
    ::java::lang::String getDataType(int32_t) const ;
    ::java::util::Iterator typesIterator() const ;
    void addDataScheme(const ::java::lang::String&) const ;
    int32_t countDataSchemes() const ;
    ::java::lang::String getDataScheme(int32_t) const ;
    bool hasDataScheme(const ::java::lang::String&) const ;
    ::java::util::Iterator schemesIterator() const ;
    void addDataAuthority(const ::java::lang::String&, const ::java::lang::String&) const ;
    int32_t countDataAuthorities() const ;
    ::android::content::IntentFilter_AuthorityEntry getDataAuthority(int32_t) const ;
    bool hasDataAuthority(const ::android::net::Uri&) const ;
    ::java::util::Iterator authoritiesIterator() const ;
    void addDataPath(const ::java::lang::String&, int32_t) const ;
    int32_t countDataPaths() const ;
    ::android::os::PatternMatcher getDataPath(int32_t) const ;
    bool hasDataPath(const ::java::lang::String&) const ;
    ::java::util::Iterator pathsIterator() const ;
    int32_t matchDataAuthority(const ::android::net::Uri&) const ;
    int32_t matchData(const ::java::lang::String&, const ::java::lang::String&, const ::android::net::Uri&) const ;
    void addCategory(const ::java::lang::String&) const ;
    int32_t countCategories() const ;
    ::java::lang::String getCategory(int32_t) const ;
    bool hasCategory(const ::java::lang::String&) const ;
    ::java::util::Iterator categoriesIterator() const ;
    ::java::lang::String matchCategories(const ::java::util::Set&) const ;
    int32_t match(const ::android::content::ContentResolver&, const ::android::content::Intent&, bool, const ::java::lang::String&) const ;
    int32_t match(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::android::net::Uri&, const ::java::util::Set&, const ::java::lang::String&) const ;
    void writeToXml(const ::org::xmlpull::v1::XmlSerializer&) const ;
    void readFromXml(const ::org::xmlpull::v1::XmlPullParser&) const ;
    void dump(const ::android::util::Printer&, const ::java::lang::String&) const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}

#include "android.content.IntentFilter_AuthorityEntry.hpp"
#include "android.content.IntentFilter_MalformedMimeTypeException.hpp"

