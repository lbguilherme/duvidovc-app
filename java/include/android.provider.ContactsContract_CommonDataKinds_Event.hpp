#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.ContactsContract_CommonDataKinds_CommonColumns.hpp"
#include "android.provider.ContactsContract_DataColumnsWithJoins.hpp"

namespace java { namespace lang { class Integer; } }

namespace android {
namespace provider {
class ContactsContract_CommonDataKinds_Event : public virtual ::java::lang::Object,
                                               public virtual ::android::provider::ContactsContract_CommonDataKinds_CommonColumns,
                                               public virtual ::android::provider::ContactsContract_DataColumnsWithJoins {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContactsContract_CommonDataKinds_Event(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::ContactsContract_CommonDataKinds_BaseTypes(_obj), ::android::provider::ContactsContract_CommonDataKinds_CommonColumns(_obj), ::android::provider::ContactsContract_ContactNameColumns(_obj), ::android::provider::ContactsContract_ContactOptionsColumns(_obj), ::android::provider::ContactsContract_ContactStatusColumns(_obj), ::android::provider::ContactsContract_ContactsColumns(_obj), ::android::provider::ContactsContract_DataColumns(_obj), ::android::provider::ContactsContract_DataColumnsWithJoins(_obj), ::android::provider::ContactsContract_RawContactsColumns(_obj), ::android::provider::ContactsContract_StatusColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContactsContract_CommonDataKinds_Event(const ::android::provider::ContactsContract_CommonDataKinds_Event& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::ContactsContract_CommonDataKinds_BaseTypes((jobject)0), ::android::provider::ContactsContract_CommonDataKinds_CommonColumns((jobject)0), ::android::provider::ContactsContract_ContactNameColumns((jobject)0), ::android::provider::ContactsContract_ContactOptionsColumns((jobject)0), ::android::provider::ContactsContract_ContactStatusColumns((jobject)0), ::android::provider::ContactsContract_ContactsColumns((jobject)0), ::android::provider::ContactsContract_DataColumns((jobject)0), ::android::provider::ContactsContract_DataColumnsWithJoins((jobject)0), ::android::provider::ContactsContract_RawContactsColumns((jobject)0), ::android::provider::ContactsContract_StatusColumns((jobject)0) {obj = x.obj;}
    ContactsContract_CommonDataKinds_Event(::android::provider::ContactsContract_CommonDataKinds_Event&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::ContactsContract_CommonDataKinds_BaseTypes((jobject)0), ::android::provider::ContactsContract_CommonDataKinds_CommonColumns((jobject)0), ::android::provider::ContactsContract_ContactNameColumns((jobject)0), ::android::provider::ContactsContract_ContactOptionsColumns((jobject)0), ::android::provider::ContactsContract_ContactStatusColumns((jobject)0), ::android::provider::ContactsContract_ContactsColumns((jobject)0), ::android::provider::ContactsContract_DataColumns((jobject)0), ::android::provider::ContactsContract_DataColumnsWithJoins((jobject)0), ::android::provider::ContactsContract_RawContactsColumns((jobject)0), ::android::provider::ContactsContract_StatusColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::ContactsContract_CommonDataKinds_Event& operator=(const ::android::provider::ContactsContract_CommonDataKinds_Event& x) {obj = x.obj; return *this;}
    ::android::provider::ContactsContract_CommonDataKinds_Event& operator=(::android::provider::ContactsContract_CommonDataKinds_Event&& x) {obj = std::move(x.obj); return *this;}
    
    static int32_t getTypeResource(const ::java::lang::Integer&);

};
}
}


