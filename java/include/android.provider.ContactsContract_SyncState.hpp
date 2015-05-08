#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.SyncStateContract_Columns.hpp"

namespace android { namespace accounts { class Account; } }
namespace android { namespace content { class ContentProviderClient; } }
namespace android { namespace content { class ContentProviderOperation; } }
namespace android { namespace util { class Pair; } }

namespace android {
namespace provider {
class ContactsContract_SyncState : public virtual ::java::lang::Object,
                                   public virtual ::android::provider::SyncStateContract_Columns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContactsContract_SyncState(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::SyncStateContract_Columns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContactsContract_SyncState(const ::android::provider::ContactsContract_SyncState& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::SyncStateContract_Columns((jobject)0) {obj = x.obj;}
    ContactsContract_SyncState(::android::provider::ContactsContract_SyncState&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::SyncStateContract_Columns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::ContactsContract_SyncState& operator=(const ::android::provider::ContactsContract_SyncState& x) {obj = x.obj; return *this;}
    ::android::provider::ContactsContract_SyncState& operator=(::android::provider::ContactsContract_SyncState&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< int8_t> get(const ::android::content::ContentProviderClient&, const ::android::accounts::Account&);
    static ::android::util::Pair getWithUri(const ::android::content::ContentProviderClient&, const ::android::accounts::Account&);
    static void set(const ::android::content::ContentProviderClient&, const ::android::accounts::Account&, const std::vector< int8_t>&);
    static ::android::content::ContentProviderOperation newSetOperation(const ::android::accounts::Account&, const std::vector< int8_t>&);

};
}
}


