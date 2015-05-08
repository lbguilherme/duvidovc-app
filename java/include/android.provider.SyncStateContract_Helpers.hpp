#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace accounts { class Account; } }
namespace android { namespace content { class ContentProviderClient; } }
namespace android { namespace content { class ContentProviderOperation; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace util { class Pair; } }

namespace android {
namespace provider {
class SyncStateContract_Helpers : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SyncStateContract_Helpers(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SyncStateContract_Helpers(const ::android::provider::SyncStateContract_Helpers& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SyncStateContract_Helpers(::android::provider::SyncStateContract_Helpers&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::SyncStateContract_Helpers& operator=(const ::android::provider::SyncStateContract_Helpers& x) {obj = x.obj; return *this;}
    ::android::provider::SyncStateContract_Helpers& operator=(::android::provider::SyncStateContract_Helpers&& x) {obj = std::move(x.obj); return *this;}
    
    SyncStateContract_Helpers();
    static std::vector< int8_t> get(const ::android::content::ContentProviderClient&, const ::android::net::Uri&, const ::android::accounts::Account&);
    static void set(const ::android::content::ContentProviderClient&, const ::android::net::Uri&, const ::android::accounts::Account&, const std::vector< int8_t>&);
    static ::android::net::Uri insert(const ::android::content::ContentProviderClient&, const ::android::net::Uri&, const ::android::accounts::Account&, const std::vector< int8_t>&);
    static void update(const ::android::content::ContentProviderClient&, const ::android::net::Uri&, const std::vector< int8_t>&);
    static ::android::util::Pair getWithUri(const ::android::content::ContentProviderClient&, const ::android::net::Uri&, const ::android::accounts::Account&);
    static ::android::content::ContentProviderOperation newSetOperation(const ::android::net::Uri&, const ::android::accounts::Account&, const std::vector< int8_t>&);
    static ::android::content::ContentProviderOperation newUpdateOperation(const ::android::net::Uri&, const std::vector< int8_t>&);

};
}
}


