#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class ContentResolver; } }
namespace android { namespace content { class Context; } }
namespace android { namespace database { class Cursor; } }
namespace android { namespace webkit { class WebIconDatabase_IconListener; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace provider {
class Browser : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Browser(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Browser(const ::android::provider::Browser& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Browser(::android::provider::Browser&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::Browser& operator=(const ::android::provider::Browser& x) {obj = x.obj; return *this;}
    ::android::provider::Browser& operator=(::android::provider::Browser&& x) {obj = std::move(x.obj); return *this;}
    
    Browser();
    static void saveBookmark(const ::android::content::Context&, const ::java::lang::String&, const ::java::lang::String&);
    static void sendString(const ::android::content::Context&, const ::java::lang::String&);
    static ::android::database::Cursor getAllBookmarks(const ::android::content::ContentResolver&);
    static ::android::database::Cursor getAllVisitedUrls(const ::android::content::ContentResolver&);
    static void updateVisitedHistory(const ::android::content::ContentResolver&, const ::java::lang::String&, bool);
    static void truncateHistory(const ::android::content::ContentResolver&);
    static bool canClearHistory(const ::android::content::ContentResolver&);
    static void clearHistory(const ::android::content::ContentResolver&);
    static void deleteHistoryTimeFrame(const ::android::content::ContentResolver&, int64_t, int64_t);
    static void deleteFromHistory(const ::android::content::ContentResolver&, const ::java::lang::String&);
    static void addSearchUrl(const ::android::content::ContentResolver&, const ::java::lang::String&);
    static void clearSearches(const ::android::content::ContentResolver&);
    static void requestAllIcons(const ::android::content::ContentResolver&, const ::java::lang::String&, const ::android::webkit::WebIconDatabase_IconListener&);

};
}
}

#include "android.provider.Browser_BookmarkColumns.hpp"
#include "android.provider.Browser_SearchColumns.hpp"

