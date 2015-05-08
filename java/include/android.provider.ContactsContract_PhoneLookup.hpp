#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.BaseColumns.hpp"
#include "android.provider.ContactsContract_ContactOptionsColumns.hpp"
#include "android.provider.ContactsContract_ContactsColumns.hpp"
#include "android.provider.ContactsContract_PhoneLookupColumns.hpp"


namespace android {
namespace provider {
class ContactsContract_PhoneLookup : public virtual ::java::lang::Object,
                                     public virtual ::android::provider::BaseColumns,
                                     public virtual ::android::provider::ContactsContract_ContactOptionsColumns,
                                     public virtual ::android::provider::ContactsContract_ContactsColumns,
                                     public virtual ::android::provider::ContactsContract_PhoneLookupColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContactsContract_PhoneLookup(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::ContactsContract_ContactOptionsColumns(_obj), ::android::provider::ContactsContract_ContactsColumns(_obj), ::android::provider::ContactsContract_PhoneLookupColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContactsContract_PhoneLookup(const ::android::provider::ContactsContract_PhoneLookup& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::ContactsContract_ContactOptionsColumns((jobject)0), ::android::provider::ContactsContract_ContactsColumns((jobject)0), ::android::provider::ContactsContract_PhoneLookupColumns((jobject)0) {obj = x.obj;}
    ContactsContract_PhoneLookup(::android::provider::ContactsContract_PhoneLookup&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::ContactsContract_ContactOptionsColumns((jobject)0), ::android::provider::ContactsContract_ContactsColumns((jobject)0), ::android::provider::ContactsContract_PhoneLookupColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::ContactsContract_PhoneLookup& operator=(const ::android::provider::ContactsContract_PhoneLookup& x) {obj = x.obj; return *this;}
    ::android::provider::ContactsContract_PhoneLookup& operator=(::android::provider::ContactsContract_PhoneLookup&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


