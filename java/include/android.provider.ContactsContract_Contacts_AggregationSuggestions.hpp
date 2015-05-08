#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.BaseColumns.hpp"
#include "android.provider.ContactsContract_ContactOptionsColumns.hpp"
#include "android.provider.ContactsContract_ContactStatusColumns.hpp"
#include "android.provider.ContactsContract_ContactsColumns.hpp"


namespace android {
namespace provider {
class ContactsContract_Contacts_AggregationSuggestions : public virtual ::java::lang::Object,
                                                         public virtual ::android::provider::BaseColumns,
                                                         public virtual ::android::provider::ContactsContract_ContactOptionsColumns,
                                                         public virtual ::android::provider::ContactsContract_ContactStatusColumns,
                                                         public virtual ::android::provider::ContactsContract_ContactsColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContactsContract_Contacts_AggregationSuggestions(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::ContactsContract_ContactOptionsColumns(_obj), ::android::provider::ContactsContract_ContactStatusColumns(_obj), ::android::provider::ContactsContract_ContactsColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContactsContract_Contacts_AggregationSuggestions(const ::android::provider::ContactsContract_Contacts_AggregationSuggestions& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::ContactsContract_ContactOptionsColumns((jobject)0), ::android::provider::ContactsContract_ContactStatusColumns((jobject)0), ::android::provider::ContactsContract_ContactsColumns((jobject)0) {obj = x.obj;}
    ContactsContract_Contacts_AggregationSuggestions(::android::provider::ContactsContract_Contacts_AggregationSuggestions&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::ContactsContract_ContactOptionsColumns((jobject)0), ::android::provider::ContactsContract_ContactStatusColumns((jobject)0), ::android::provider::ContactsContract_ContactsColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::ContactsContract_Contacts_AggregationSuggestions& operator=(const ::android::provider::ContactsContract_Contacts_AggregationSuggestions& x) {obj = x.obj; return *this;}
    ::android::provider::ContactsContract_Contacts_AggregationSuggestions& operator=(::android::provider::ContactsContract_Contacts_AggregationSuggestions&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


