#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.ContentProvider.hpp"

namespace android { namespace content { class ContentValues; } }
namespace android { namespace database { class Cursor; } }
namespace android { namespace net { class Uri; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
class SearchRecentSuggestionsProvider : public virtual ::java::lang::Object,
                                        public virtual ::android::content::ContentProvider {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SearchRecentSuggestionsProvider(jobject _obj) : ::java::lang::Object(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::content::ContentProvider(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SearchRecentSuggestionsProvider(const ::android::content::SearchRecentSuggestionsProvider& x) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::ContentProvider((jobject)0) {obj = x.obj;}
    SearchRecentSuggestionsProvider(::android::content::SearchRecentSuggestionsProvider&& x) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::ContentProvider((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::SearchRecentSuggestionsProvider& operator=(const ::android::content::SearchRecentSuggestionsProvider& x) {obj = x.obj; return *this;}
    ::android::content::SearchRecentSuggestionsProvider& operator=(::android::content::SearchRecentSuggestionsProvider&& x) {obj = std::move(x.obj); return *this;}
    
    SearchRecentSuggestionsProvider();
    int32_t delete_(const ::android::net::Uri&, const ::java::lang::String&, const std::vector< ::java::lang::String>&) const ;
    ::java::lang::String getType(const ::android::net::Uri&) const ;
    ::android::net::Uri insert(const ::android::net::Uri&, const ::android::content::ContentValues&) const ;
    bool onCreate() const ;
    ::android::database::Cursor query(const ::android::net::Uri&, const std::vector< ::java::lang::String>&, const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::java::lang::String&) const ;
    int32_t update(const ::android::net::Uri&, const ::android::content::ContentValues&, const ::java::lang::String&, const std::vector< ::java::lang::String>&) const ;

};
}
}


