#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace view {
namespace textservice {
class SuggestionsInfo : public virtual ::java::lang::Object,
                        public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SuggestionsInfo(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SuggestionsInfo(const ::android::view::textservice::SuggestionsInfo& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    SuggestionsInfo(::android::view::textservice::SuggestionsInfo&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::textservice::SuggestionsInfo& operator=(const ::android::view::textservice::SuggestionsInfo& x) {obj = x.obj; return *this;}
    ::android::view::textservice::SuggestionsInfo& operator=(::android::view::textservice::SuggestionsInfo&& x) {obj = std::move(x.obj); return *this;}
    
    SuggestionsInfo(int32_t, const std::vector< ::java::lang::String>&);
    SuggestionsInfo(int32_t, const std::vector< ::java::lang::String>&, int32_t, int32_t);
    SuggestionsInfo(const ::android::os::Parcel&);
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    void setCookieAndSequence(int32_t, int32_t) const ;
    int32_t getCookie() const ;
    int32_t getSequence() const ;
    int32_t getSuggestionsAttributes() const ;
    int32_t getSuggestionsCount() const ;
    ::java::lang::String getSuggestionAt(int32_t) const ;
    int32_t describeContents() const ;

};
}
}
}


