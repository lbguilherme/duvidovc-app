#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { class Uri; } }
namespace android { namespace net { class Uri_Builder; } }

namespace android {
namespace content {
class ContentUris : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContentUris(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContentUris(const ::android::content::ContentUris& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ContentUris(::android::content::ContentUris&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::ContentUris& operator=(const ::android::content::ContentUris& x) {obj = x.obj; return *this;}
    ::android::content::ContentUris& operator=(::android::content::ContentUris&& x) {obj = std::move(x.obj); return *this;}
    
    ContentUris();
    static int64_t parseId(const ::android::net::Uri&);
    static ::android::net::Uri_Builder appendId(const ::android::net::Uri_Builder&, int64_t);
    static ::android::net::Uri withAppendedId(const ::android::net::Uri&, int64_t);

};
}
}


