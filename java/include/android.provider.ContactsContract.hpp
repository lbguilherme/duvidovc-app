#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class ContactsContract : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContactsContract(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContactsContract(const ::android::provider::ContactsContract& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ContactsContract(::android::provider::ContactsContract&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::ContactsContract& operator=(const ::android::provider::ContactsContract& x) {obj = x.obj; return *this;}
    ::android::provider::ContactsContract& operator=(::android::provider::ContactsContract&& x) {obj = std::move(x.obj); return *this;}
    
    ContactsContract();
    static bool isProfileId(int64_t);

};
}
}

#include "android.provider.ContactsContract_AggregationExceptions.hpp"
#include "android.provider.ContactsContract_BaseSyncColumns.hpp"
#include "android.provider.ContactsContract_CommonDataKinds.hpp"
#include "android.provider.ContactsContract_ContactNameColumns.hpp"
#include "android.provider.ContactsContract_ContactOptionsColumns.hpp"
#include "android.provider.ContactsContract_ContactStatusColumns.hpp"
#include "android.provider.ContactsContract_Contacts.hpp"
#include "android.provider.ContactsContract_ContactsColumns.hpp"
#include "android.provider.ContactsContract_Data.hpp"
#include "android.provider.ContactsContract_DataColumns.hpp"
#include "android.provider.ContactsContract_DataColumnsWithJoins.hpp"
#include "android.provider.ContactsContract_DataUsageFeedback.hpp"
#include "android.provider.ContactsContract_Directory.hpp"
#include "android.provider.ContactsContract_DisplayNameSources.hpp"
#include "android.provider.ContactsContract_DisplayPhoto.hpp"
#include "android.provider.ContactsContract_FullNameStyle.hpp"
#include "android.provider.ContactsContract_Groups.hpp"
#include "android.provider.ContactsContract_GroupsColumns.hpp"
#include "android.provider.ContactsContract_Intents.hpp"
#include "android.provider.ContactsContract_PhoneLookup.hpp"
#include "android.provider.ContactsContract_PhoneLookupColumns.hpp"
#include "android.provider.ContactsContract_PhoneticNameStyle.hpp"
#include "android.provider.ContactsContract_Presence.hpp"
#include "android.provider.ContactsContract_PresenceColumns.hpp"
#include "android.provider.ContactsContract_Profile.hpp"
#include "android.provider.ContactsContract_ProfileSyncState.hpp"
#include "android.provider.ContactsContract_QuickContact.hpp"
#include "android.provider.ContactsContract_RawContacts.hpp"
#include "android.provider.ContactsContract_RawContactsColumns.hpp"
#include "android.provider.ContactsContract_RawContactsEntity.hpp"
#include "android.provider.ContactsContract_Settings.hpp"
#include "android.provider.ContactsContract_SettingsColumns.hpp"
#include "android.provider.ContactsContract_StatusColumns.hpp"
#include "android.provider.ContactsContract_StatusUpdates.hpp"
#include "android.provider.ContactsContract_StreamItemPhotos.hpp"
#include "android.provider.ContactsContract_StreamItemPhotosColumns.hpp"
#include "android.provider.ContactsContract_StreamItems.hpp"
#include "android.provider.ContactsContract_StreamItemsColumns.hpp"
#include "android.provider.ContactsContract_SyncColumns.hpp"
#include "android.provider.ContactsContract_SyncState.hpp"
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
#include "android.provider.ContactsContract_Contacts_AggregationSuggestions.hpp"
#include "android.provider.ContactsContract_Contacts_Data.hpp"
#include "android.provider.ContactsContract_Contacts_Entity.hpp"
#include "android.provider.ContactsContract_Contacts_Photo.hpp"
#include "android.provider.ContactsContract_Contacts_StreamItems.hpp"
#include "android.provider.ContactsContract_Intents_Insert.hpp"
#include "android.provider.ContactsContract_RawContacts_Data.hpp"
#include "android.provider.ContactsContract_RawContacts_DisplayPhoto.hpp"
#include "android.provider.ContactsContract_RawContacts_Entity.hpp"
#include "android.provider.ContactsContract_RawContacts_StreamItems.hpp"
#include "android.provider.ContactsContract_StreamItems_StreamItemPhotos.hpp"

