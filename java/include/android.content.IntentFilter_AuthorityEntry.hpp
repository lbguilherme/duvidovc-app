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
class IntentFilter_AuthorityEntry : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IntentFilter_AuthorityEntry(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IntentFilter_AuthorityEntry(const ::android::content::IntentFilter_AuthorityEntry& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    IntentFilter_AuthorityEntry(::android::content::IntentFilter_AuthorityEntry&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::IntentFilter_AuthorityEntry& operator=(const ::android::content::IntentFilter_AuthorityEntry& x) {obj = x.obj; return *this;}
    ::android::content::IntentFilter_AuthorityEntry& operator=(::android::content::IntentFilter_AuthorityEntry&& x) {obj = std::move(x.obj); return *this;}
    
    IntentFilter_AuthorityEntry(const ::java::lang::String&, const ::java::lang::String&);
    ::java::lang::String getHost() const;
    int32_t getPort() const;
    int32_t match(const ::android::net::Uri&) const;

};
}
}


