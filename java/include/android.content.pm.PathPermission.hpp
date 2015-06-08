#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.PatternMatcher.hpp"

namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
namespace pm {
class PathPermission : public virtual ::java::lang::Object,
                       public virtual ::android::os::PatternMatcher {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PathPermission(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::android::os::PatternMatcher(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PathPermission(const ::android::content::pm::PathPermission& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::os::PatternMatcher((jobject)0) {obj = x.obj;}
    PathPermission(::android::content::pm::PathPermission&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::os::PatternMatcher((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::pm::PathPermission& operator=(const ::android::content::pm::PathPermission& x) {obj = x.obj; return *this;}
    ::android::content::pm::PathPermission& operator=(::android::content::pm::PathPermission&& x) {obj = std::move(x.obj); return *this;}
    
    PathPermission(const ::java::lang::String&, int32_t, const ::java::lang::String&, const ::java::lang::String&);
    PathPermission(const ::android::os::Parcel&);
    ::java::lang::String getReadPermission() const;
    ::java::lang::String getWritePermission() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;

};
}
}
}


