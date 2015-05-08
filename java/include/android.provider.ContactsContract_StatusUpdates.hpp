#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.ContactsContract_PresenceColumns.hpp"
#include "android.provider.ContactsContract_StatusColumns.hpp"


namespace android {
namespace provider {
class ContactsContract_StatusUpdates : public virtual ::java::lang::Object,
                                       public virtual ::android::provider::ContactsContract_PresenceColumns,
                                       public virtual ::android::provider::ContactsContract_StatusColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContactsContract_StatusUpdates(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::ContactsContract_PresenceColumns(_obj), ::android::provider::ContactsContract_StatusColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContactsContract_StatusUpdates(const ::android::provider::ContactsContract_StatusUpdates& x) : ::java::lang::Object((jobject)0), ::android::provider::ContactsContract_PresenceColumns((jobject)0), ::android::provider::ContactsContract_StatusColumns((jobject)0) {obj = x.obj;}
    ContactsContract_StatusUpdates(::android::provider::ContactsContract_StatusUpdates&& x) : ::java::lang::Object((jobject)0), ::android::provider::ContactsContract_PresenceColumns((jobject)0), ::android::provider::ContactsContract_StatusColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::ContactsContract_StatusUpdates& operator=(const ::android::provider::ContactsContract_StatusUpdates& x) {obj = x.obj; return *this;}
    ::android::provider::ContactsContract_StatusUpdates& operator=(::android::provider::ContactsContract_StatusUpdates&& x) {obj = std::move(x.obj); return *this;}
    
    static int32_t getPresenceIconResourceId(int32_t);
    static int32_t getPresencePrecedence(int32_t);

};
}
}


