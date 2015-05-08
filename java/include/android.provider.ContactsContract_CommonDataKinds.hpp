#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class ContactsContract_CommonDataKinds : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContactsContract_CommonDataKinds(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContactsContract_CommonDataKinds(const ::android::provider::ContactsContract_CommonDataKinds& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ContactsContract_CommonDataKinds(::android::provider::ContactsContract_CommonDataKinds&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::ContactsContract_CommonDataKinds& operator=(const ::android::provider::ContactsContract_CommonDataKinds& x) {obj = x.obj; return *this;}
    ::android::provider::ContactsContract_CommonDataKinds& operator=(::android::provider::ContactsContract_CommonDataKinds&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}

#include "android.provider.ContactsContract_CommonDataKinds_BaseTypes.hpp"
#include "android.provider.ContactsContract_CommonDataKinds_CommonColumns.hpp"
#include "android.provider.ContactsContract_CommonDataKinds_Email.hpp"
#include "android.provider.ContactsContract_CommonDataKinds_Event.hpp"
#include "android.provider.ContactsContract_CommonDataKinds_GroupMembership.hpp"
#include "android.provider.ContactsContract_CommonDataKinds_Identity.hpp"
#include "android.provider.ContactsContract_CommonDataKinds_Im.hpp"
#include "android.provider.ContactsContract_CommonDataKinds_Nickname.hpp"
#include "android.provider.ContactsContract_CommonDataKinds_Note.hpp"
#include "android.provider.ContactsContract_CommonDataKinds_Organization.hpp"
#include "android.provider.ContactsContract_CommonDataKinds_Phone.hpp"
#include "android.provider.ContactsContract_CommonDataKinds_Photo.hpp"
#include "android.provider.ContactsContract_CommonDataKinds_Relation.hpp"
#include "android.provider.ContactsContract_CommonDataKinds_SipAddress.hpp"
#include "android.provider.ContactsContract_CommonDataKinds_StructuredName.hpp"
#include "android.provider.ContactsContract_CommonDataKinds_StructuredPostal.hpp"
#include "android.provider.ContactsContract_CommonDataKinds_Website.hpp"

