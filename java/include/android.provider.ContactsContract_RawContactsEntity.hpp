#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.BaseColumns.hpp"
#include "android.provider.ContactsContract_DataColumns.hpp"
#include "android.provider.ContactsContract_RawContactsColumns.hpp"


namespace android {
namespace provider {
class ContactsContract_RawContactsEntity : public virtual ::java::lang::Object,
                                           public virtual ::android::provider::BaseColumns,
                                           public virtual ::android::provider::ContactsContract_DataColumns,
                                           public virtual ::android::provider::ContactsContract_RawContactsColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContactsContract_RawContactsEntity(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::ContactsContract_DataColumns(_obj), ::android::provider::ContactsContract_RawContactsColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContactsContract_RawContactsEntity(const ::android::provider::ContactsContract_RawContactsEntity& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::ContactsContract_DataColumns((jobject)0), ::android::provider::ContactsContract_RawContactsColumns((jobject)0) {obj = x.obj;}
    ContactsContract_RawContactsEntity(::android::provider::ContactsContract_RawContactsEntity&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::ContactsContract_DataColumns((jobject)0), ::android::provider::ContactsContract_RawContactsColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::ContactsContract_RawContactsEntity& operator=(const ::android::provider::ContactsContract_RawContactsEntity& x) {obj = x.obj; return *this;}
    ::android::provider::ContactsContract_RawContactsEntity& operator=(::android::provider::ContactsContract_RawContactsEntity&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


