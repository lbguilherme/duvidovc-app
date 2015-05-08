#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { class Uri; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
class UriMatcher : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UriMatcher(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UriMatcher(const ::android::content::UriMatcher& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    UriMatcher(::android::content::UriMatcher&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::UriMatcher& operator=(const ::android::content::UriMatcher& x) {obj = x.obj; return *this;}
    ::android::content::UriMatcher& operator=(::android::content::UriMatcher&& x) {obj = std::move(x.obj); return *this;}
    
    UriMatcher(int32_t);
    void addURI(const ::java::lang::String&, const ::java::lang::String&, int32_t) const ;
    int32_t match(const ::android::net::Uri&) const ;

};
}
}


