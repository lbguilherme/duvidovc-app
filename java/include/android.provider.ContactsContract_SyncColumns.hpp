#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.ContactsContract_BaseSyncColumns.hpp"


namespace android {
namespace provider {
class ContactsContract_SyncColumns : public virtual ::java::lang::Object,
                                     public virtual ::android::provider::ContactsContract_BaseSyncColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContactsContract_SyncColumns(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::ContactsContract_BaseSyncColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContactsContract_SyncColumns(const ::android::provider::ContactsContract_SyncColumns& x) : ::java::lang::Object((jobject)0), ::android::provider::ContactsContract_BaseSyncColumns((jobject)0) {obj = x.obj;}
    ContactsContract_SyncColumns(::android::provider::ContactsContract_SyncColumns&& x) : ::java::lang::Object((jobject)0), ::android::provider::ContactsContract_BaseSyncColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::ContactsContract_SyncColumns& operator=(const ::android::provider::ContactsContract_SyncColumns& x) {obj = x.obj; return *this;}
    ::android::provider::ContactsContract_SyncColumns& operator=(::android::provider::ContactsContract_SyncColumns&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


