#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.ContactsContract_StreamItemsColumns.hpp"


namespace android {
namespace provider {
class ContactsContract_Contacts_StreamItems : public virtual ::java::lang::Object,
                                              public virtual ::android::provider::ContactsContract_StreamItemsColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContactsContract_Contacts_StreamItems(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::ContactsContract_StreamItemsColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContactsContract_Contacts_StreamItems(const ::android::provider::ContactsContract_Contacts_StreamItems& x) : ::java::lang::Object((jobject)0), ::android::provider::ContactsContract_StreamItemsColumns((jobject)0) {obj = x.obj;}
    ContactsContract_Contacts_StreamItems(::android::provider::ContactsContract_Contacts_StreamItems&& x) : ::java::lang::Object((jobject)0), ::android::provider::ContactsContract_StreamItemsColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::ContactsContract_Contacts_StreamItems& operator=(const ::android::provider::ContactsContract_Contacts_StreamItems& x) {obj = x.obj; return *this;}
    ::android::provider::ContactsContract_Contacts_StreamItems& operator=(::android::provider::ContactsContract_Contacts_StreamItems&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


