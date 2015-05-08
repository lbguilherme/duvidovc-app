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
namespace os {
class PatternMatcher : public virtual ::java::lang::Object,
                       public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PatternMatcher(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PatternMatcher(const ::android::os::PatternMatcher& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    PatternMatcher(::android::os::PatternMatcher&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::PatternMatcher& operator=(const ::android::os::PatternMatcher& x) {obj = x.obj; return *this;}
    ::android::os::PatternMatcher& operator=(::android::os::PatternMatcher&& x) {obj = std::move(x.obj); return *this;}
    
    PatternMatcher(const ::java::lang::String&, int32_t);
    PatternMatcher(const ::android::os::Parcel&);
    ::java::lang::String getPath() const ;
    int32_t getType() const ;
    bool match(const ::java::lang::String&) const ;
    ::java::lang::String toString() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}


