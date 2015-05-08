#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.ContactsContract_StatusUpdates.hpp"


namespace android {
namespace provider {
class ContactsContract_Presence : public virtual ::java::lang::Object,
                                  public virtual ::android::provider::ContactsContract_StatusUpdates {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContactsContract_Presence(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::ContactsContract_PresenceColumns(_obj), ::android::provider::ContactsContract_StatusColumns(_obj), ::android::provider::ContactsContract_StatusUpdates(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContactsContract_Presence(const ::android::provider::ContactsContract_Presence& x) : ::java::lang::Object((jobject)0), ::android::provider::ContactsContract_PresenceColumns((jobject)0), ::android::provider::ContactsContract_StatusColumns((jobject)0), ::android::provider::ContactsContract_StatusUpdates((jobject)0) {obj = x.obj;}
    ContactsContract_Presence(::android::provider::ContactsContract_Presence&& x) : ::java::lang::Object((jobject)0), ::android::provider::ContactsContract_PresenceColumns((jobject)0), ::android::provider::ContactsContract_StatusColumns((jobject)0), ::android::provider::ContactsContract_StatusUpdates((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::ContactsContract_Presence& operator=(const ::android::provider::ContactsContract_Presence& x) {obj = x.obj; return *this;}
    ::android::provider::ContactsContract_Presence& operator=(::android::provider::ContactsContract_Presence&& x) {obj = std::move(x.obj); return *this;}
    
    ContactsContract_Presence();

};
}
}


