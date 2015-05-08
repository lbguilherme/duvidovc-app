#include "java-core.hpp"
#include <memory>
#include "android.accounts.Account.hpp"
#include "android.content.ContentProviderClient.hpp"
#include "android.content.ContentProviderOperation.hpp"
#include "android.content.ContentResolver.hpp"
#include "android.content.ContentValues.hpp"
#include "android.content.Context.hpp"
#include "android.content.EntityIterator.hpp"
#include "android.content.res.Configuration.hpp"
#include "android.content.res.Resources.hpp"
#include "android.database.Cursor.hpp"
#include "android.graphics.Bitmap.hpp"
#include "android.graphics.BitmapFactory.hpp"
#include "android.graphics.Rect.hpp"
#include "android.net.Uri.hpp"
#include "android.provider.AlarmClock.hpp"
#include "android.provider.BaseColumns.hpp"
#include "android.provider.Browser.hpp"
#include "android.provider.CalendarContract.hpp"
#include "android.provider.CallLog.hpp"
#include "android.provider.Contacts.hpp"
#include "android.provider.ContactsContract.hpp"
#include "android.provider.LiveFolders.hpp"
#include "android.provider.MediaStore.hpp"
#include "android.provider.OpenableColumns.hpp"
#include "android.provider.SearchRecentSuggestions.hpp"
#include "android.provider.Settings.hpp"
#include "android.provider.SyncStateContract.hpp"
#include "android.provider.UserDictionary.hpp"
#include "android.provider.VoicemailContract.hpp"
#include "android.util.Pair.hpp"
#include "android.view.View.hpp"
#include "android.webkit.WebIconDatabase.hpp"
#include "java.io.InputStream.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Integer.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"

jclass android::provider::ContactsContract_DataColumns::_class = nullptr;
jclass android::provider::CalendarContract_AttendeesColumns::_class = nullptr;
jclass android::provider::MediaStore_Audio_Genres::_class = nullptr;
jclass android::provider::ContactsContract_CommonDataKinds_Note::_class = nullptr;
jclass android::provider::Contacts::_class = nullptr;
jclass android::provider::SyncStateContract_Constants::_class = nullptr;
jclass android::provider::ContactsContract_CommonDataKinds_Email::_class = nullptr;
jclass android::provider::ContactsContract_CommonDataKinds_Event::_class = nullptr;
jclass android::provider::ContactsContract_StreamItems_StreamItemPhotos::_class = nullptr;
jclass android::provider::ContactsContract_CommonDataKinds_StructuredName::_class = nullptr;
jclass android::provider::ContactsContract_Settings::_class = nullptr;
jclass android::provider::CalendarContract_EventDaysColumns::_class = nullptr;
jclass android::provider::ContactsContract_CommonDataKinds_Identity::_class = nullptr;
jclass android::provider::MediaStore_Audio_Albums::_class = nullptr;
jclass android::provider::ContactsContract_CommonDataKinds_BaseTypes::_class = nullptr;
jclass android::provider::SyncStateContract_Columns::_class = nullptr;
jclass android::provider::ContactsContract_StreamItemPhotos::_class = nullptr;
jclass android::provider::ContactsContract_DataUsageFeedback::_class = nullptr;
jclass android::provider::ContactsContract_Directory::_class = nullptr;
jclass android::provider::ContactsContract_ContactOptionsColumns::_class = nullptr;
jclass android::provider::Browser_SearchColumns::_class = nullptr;
jclass android::provider::MediaStore_Video::_class = nullptr;
jclass android::provider::MediaStore_Files_FileColumns::_class = nullptr;
jclass android::provider::MediaStore_Audio_Playlists_Members::_class = nullptr;
jclass android::provider::ContactsContract_SettingsColumns::_class = nullptr;
jclass android::provider::Contacts_People_ContactMethods::_class = nullptr;
jclass android::provider::Contacts_GroupMembership::_class = nullptr;
jclass android::provider::ContactsContract_FullNameStyle::_class = nullptr;
jclass android::provider::MediaStore_Audio_AudioColumns::_class = nullptr;
jclass android::provider::CalendarContract_ColorsColumns::_class = nullptr;
jclass android::provider::BaseColumns::_class = nullptr;
jclass android::provider::MediaStore_Audio_Artists_Albums::_class = nullptr;
jclass android::provider::CalendarContract_CalendarCacheColumns::_class = nullptr;
jclass android::provider::ContactsContract_Contacts_Photo::_class = nullptr;
jclass android::provider::ContactsContract_RawContacts_StreamItems::_class = nullptr;
jclass android::provider::ContactsContract_StreamItemsColumns::_class = nullptr;
jclass android::provider::CalendarContract_EventsColumns::_class = nullptr;
jclass android::provider::Contacts_PhotosColumns::_class = nullptr;
jclass android::provider::Browser_BookmarkColumns::_class = nullptr;
jclass android::provider::CallLog::_class = nullptr;
jclass android::provider::CalendarContract_SyncColumns::_class = nullptr;
jclass android::provider::Settings_SettingNotFoundException::_class = nullptr;
jclass android::provider::ContactsContract_AggregationExceptions::_class = nullptr;
jclass android::provider::MediaStore_Files::_class = nullptr;
jclass android::provider::Contacts_ContactMethods::_class = nullptr;
jclass android::provider::ContactsContract_StatusUpdates::_class = nullptr;
jclass android::provider::ContactsContract_Contacts_StreamItems::_class = nullptr;
jclass android::provider::CalendarContract_SyncState::_class = nullptr;
jclass android::provider::ContactsContract_ContactNameColumns::_class = nullptr;
jclass android::provider::VoicemailContract::_class = nullptr;
jclass android::provider::ContactsContract_PhoneLookup::_class = nullptr;
jclass android::provider::CalendarContract_Reminders::_class = nullptr;
jclass android::provider::ContactsContract_CommonDataKinds_Organization::_class = nullptr;
jclass android::provider::Contacts_GroupsColumns::_class = nullptr;
jclass android::provider::VoicemailContract_Status::_class = nullptr;
jclass android::provider::VoicemailContract_Voicemails::_class = nullptr;
jclass android::provider::Contacts_Extensions::_class = nullptr;
jclass android::provider::Contacts_Groups::_class = nullptr;
jclass android::provider::ContactsContract_Groups::_class = nullptr;
jclass android::provider::MediaStore_Images::_class = nullptr;
jclass android::provider::ContactsContract_StreamItems::_class = nullptr;
jclass android::provider::CalendarContract_RemindersColumns::_class = nullptr;
jclass android::provider::ContactsContract_CommonDataKinds_CommonColumns::_class = nullptr;
jclass android::provider::Contacts_Intents_UI::_class = nullptr;
jclass android::provider::CalendarContract_Colors::_class = nullptr;
jclass android::provider::MediaStore_Audio_PlaylistsColumns::_class = nullptr;
jclass android::provider::ContactsContract_RawContacts_DisplayPhoto::_class = nullptr;
jclass android::provider::MediaStore_Audio_Media::_class = nullptr;
jclass android::provider::ContactsContract_CommonDataKinds_Nickname::_class = nullptr;
jclass android::provider::Browser::_class = nullptr;
jclass android::provider::MediaStore_MediaColumns::_class = nullptr;
jclass android::provider::ContactsContract_CommonDataKinds_Phone::_class = nullptr;
jclass android::provider::Settings_NameValueTable::_class = nullptr;
jclass android::provider::CalendarContract_Attendees::_class = nullptr;
jclass android::provider::SearchRecentSuggestions::_class = nullptr;
jclass android::provider::Contacts_PresenceColumns::_class = nullptr;
jclass android::provider::ContactsContract_ContactsColumns::_class = nullptr;
jclass android::provider::ContactsContract_SyncColumns::_class = nullptr;
jclass android::provider::CalendarContract_CalendarCache::_class = nullptr;
jclass android::provider::ContactsContract_CommonDataKinds_StructuredPostal::_class = nullptr;
jclass android::provider::CalendarContract_CalendarSyncColumns::_class = nullptr;
jclass android::provider::Contacts_Intents::_class = nullptr;
jclass android::provider::ContactsContract_Intents::_class = nullptr;
jclass android::provider::ContactsContract_Contacts_Data::_class = nullptr;
jclass android::provider::Contacts_People_Extensions::_class = nullptr;
jclass android::provider::OpenableColumns::_class = nullptr;
jclass android::provider::ContactsContract_Presence::_class = nullptr;
jclass android::provider::UserDictionary_Words::_class = nullptr;
jclass android::provider::Contacts_Settings::_class = nullptr;
jclass android::provider::Contacts_PeopleColumns::_class = nullptr;
jclass android::provider::Contacts_Photos::_class = nullptr;
jclass android::provider::ContactsContract_CommonDataKinds_Im::_class = nullptr;
jclass android::provider::ContactsContract_RawContactsEntity::_class = nullptr;
jclass android::provider::ContactsContract_StatusColumns::_class = nullptr;
jclass android::provider::SyncStateContract_Helpers::_class = nullptr;
jclass android::provider::MediaStore_Audio_Genres_Members::_class = nullptr;
jclass android::provider::LiveFolders::_class = nullptr;
jclass android::provider::ContactsContract_CommonDataKinds::_class = nullptr;
jclass android::provider::ContactsContract_CommonDataKinds_Website::_class = nullptr;
jclass android::provider::MediaStore_Audio_Artists::_class = nullptr;
jclass android::provider::MediaStore_Images_Thumbnails::_class = nullptr;
jclass android::provider::MediaStore_Video_Media::_class = nullptr;
jclass android::provider::Settings_System::_class = nullptr;
jclass android::provider::CalendarContract_ExtendedPropertiesColumns::_class = nullptr;
jclass android::provider::ContactsContract_QuickContact::_class = nullptr;
jclass android::provider::Contacts_ContactMethodsColumns::_class = nullptr;
jclass android::provider::ContactsContract_CommonDataKinds_Photo::_class = nullptr;
jclass android::provider::Contacts_People_Phones::_class = nullptr;
jclass android::provider::ContactsContract_Contacts_Entity::_class = nullptr;
jclass android::provider::CalendarContract_EventDays::_class = nullptr;
jclass android::provider::ContactsContract_Data::_class = nullptr;
jclass android::provider::ContactsContract_Intents_Insert::_class = nullptr;
jclass android::provider::ContactsContract_CommonDataKinds_GroupMembership::_class = nullptr;
jclass android::provider::MediaStore_Audio_Playlists::_class = nullptr;
jclass android::provider::CalendarContract_Events::_class = nullptr;
jclass android::provider::ContactsContract_ProfileSyncState::_class = nullptr;
jclass android::provider::MediaStore_Video_Thumbnails::_class = nullptr;
jclass android::provider::ContactsContract_SyncState::_class = nullptr;
jclass android::provider::Settings_Secure::_class = nullptr;
jclass android::provider::ContactsContract_GroupsColumns::_class = nullptr;
jclass android::provider::ContactsContract_RawContacts_Data::_class = nullptr;
jclass android::provider::Contacts_People::_class = nullptr;
jclass android::provider::ContactsContract_DisplayNameSources::_class = nullptr;
jclass android::provider::MediaStore_Images_ImageColumns::_class = nullptr;
jclass android::provider::ContactsContract_RawContacts_Entity::_class = nullptr;
jclass android::provider::Contacts_Intents_Insert::_class = nullptr;
jclass android::provider::CalendarContract_CalendarAlerts::_class = nullptr;
jclass android::provider::MediaStore_Audio_GenresColumns::_class = nullptr;
jclass android::provider::ContactsContract_PhoneLookupColumns::_class = nullptr;
jclass android::provider::Contacts_ExtensionsColumns::_class = nullptr;
jclass android::provider::CalendarContract_CalendarAlertsColumns::_class = nullptr;
jclass android::provider::MediaStore_Images_Media::_class = nullptr;
jclass android::provider::MediaStore_Audio::_class = nullptr;
jclass android::provider::CalendarContract_CalendarEntity::_class = nullptr;
jclass android::provider::Contacts_PhonesColumns::_class = nullptr;
jclass android::provider::Settings::_class = nullptr;
jclass android::provider::MediaStore_Audio_AlbumColumns::_class = nullptr;
jclass android::provider::CalendarContract_CalendarColumns::_class = nullptr;
jclass android::provider::ContactsContract_Contacts_AggregationSuggestions::_class = nullptr;
jclass android::provider::ContactsContract_PhoneticNameStyle::_class = nullptr;
jclass android::provider::ContactsContract_ContactStatusColumns::_class = nullptr;
jclass android::provider::ContactsContract_PresenceColumns::_class = nullptr;
jclass android::provider::CalendarContract_EventsEntity::_class = nullptr;
jclass android::provider::ContactsContract_Profile::_class = nullptr;
jclass android::provider::CallLog_Calls::_class = nullptr;
jclass android::provider::ContactsContract_Contacts::_class = nullptr;
jclass android::provider::Contacts_Phones::_class = nullptr;
jclass android::provider::ContactsContract_BaseSyncColumns::_class = nullptr;
jclass android::provider::MediaStore_Audio_ArtistColumns::_class = nullptr;
jclass android::provider::ContactsContract_RawContactsColumns::_class = nullptr;
jclass android::provider::MediaStore::_class = nullptr;
jclass android::provider::SyncStateContract::_class = nullptr;
jclass android::provider::CalendarContract_ExtendedProperties::_class = nullptr;
jclass android::provider::ContactsContract::_class = nullptr;
jclass android::provider::Contacts_Organizations::_class = nullptr;
jclass android::provider::ContactsContract_StreamItemPhotosColumns::_class = nullptr;
jclass android::provider::ContactsContract_CommonDataKinds_Relation::_class = nullptr;
jclass android::provider::UserDictionary::_class = nullptr;
jclass android::provider::ContactsContract_RawContacts::_class = nullptr;
jclass android::provider::CalendarContract_Calendars::_class = nullptr;
jclass android::provider::AlarmClock::_class = nullptr;
jclass android::provider::ContactsContract_DisplayPhoto::_class = nullptr;
jclass android::provider::ContactsContract_CommonDataKinds_SipAddress::_class = nullptr;
jclass android::provider::ContactsContract_DataColumnsWithJoins::_class = nullptr;
jclass android::provider::CalendarContract::_class = nullptr;
jclass android::provider::MediaStore_Video_VideoColumns::_class = nullptr;
jclass android::provider::Contacts_SettingsColumns::_class = nullptr;
jclass android::provider::CalendarContract_Instances::_class = nullptr;
jclass android::provider::Contacts_OrganizationColumns::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::MediaStore_Audio_Genres::MediaStore_Audio_Genres() : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::MediaStore_Audio_GenresColumns((jobject)0) {
    if (!::android::provider::MediaStore_Audio_Genres::_class) ::android::provider::MediaStore_Audio_Genres::_class = java::fetch_class("android/provider/MediaStore$Audio$Genres");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::net::Uri android::provider::MediaStore_Audio_Genres::getContentUri(const ::java::lang::String& arg0){
    if (!::android::provider::MediaStore_Audio_Genres::_class) ::android::provider::MediaStore_Audio_Genres::_class = java::fetch_class("android/provider/MediaStore$Audio$Genres");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getContentUri", "(Ljava/lang/String;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::android::net::Uri android::provider::MediaStore_Audio_Genres::getContentUriForAudioId(const ::java::lang::String& arg0, int32_t arg1){
    if (!::android::provider::MediaStore_Audio_Genres::_class) ::android::provider::MediaStore_Audio_Genres::_class = java::fetch_class("android/provider/MediaStore$Audio$Genres");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getContentUriForAudioId", "(Ljava/lang/String;I)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::net::Uri _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::SyncStateContract_Constants::SyncStateContract_Constants() : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::SyncStateContract_Columns((jobject)0) {
    if (!::android::provider::SyncStateContract_Constants::_class) ::android::provider::SyncStateContract_Constants::_class = java::fetch_class("android/provider/SyncStateContract$Constants");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::provider::ContactsContract_CommonDataKinds_Email::getTypeLabelResource(int32_t arg0){
    if (!::android::provider::ContactsContract_CommonDataKinds_Email::_class) ::android::provider::ContactsContract_CommonDataKinds_Email::_class = java::fetch_class("android/provider/ContactsContract$CommonDataKinds$Email");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTypeLabelResource", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

::java::lang::CharSequence android::provider::ContactsContract_CommonDataKinds_Email::getTypeLabel(const ::android::content::res::Resources& arg0, int32_t arg1, const ::java::lang::CharSequence& arg2){
    if (!::android::provider::ContactsContract_CommonDataKinds_Email::_class) ::android::provider::ContactsContract_CommonDataKinds_Email::_class = java::fetch_class("android/provider/ContactsContract$CommonDataKinds$Email");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTypeLabel", "(Landroid/content/res/Resources;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

int32_t android::provider::ContactsContract_CommonDataKinds_Event::getTypeResource(const ::java::lang::Integer& arg0){
    if (!::android::provider::ContactsContract_CommonDataKinds_Event::_class) ::android::provider::ContactsContract_CommonDataKinds_Event::_class = java::fetch_class("android/provider/ContactsContract$CommonDataKinds$Event");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTypeResource", "(Ljava/lang/Integer;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::MediaStore_Audio_Albums::MediaStore_Audio_Albums() : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::MediaStore_Audio_AlbumColumns((jobject)0) {
    if (!::android::provider::MediaStore_Audio_Albums::_class) ::android::provider::MediaStore_Audio_Albums::_class = java::fetch_class("android/provider/MediaStore$Audio$Albums");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::net::Uri android::provider::MediaStore_Audio_Albums::getContentUri(const ::java::lang::String& arg0){
    if (!::android::provider::MediaStore_Audio_Albums::_class) ::android::provider::MediaStore_Audio_Albums::_class = java::fetch_class("android/provider/MediaStore$Audio$Albums");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getContentUri", "(Ljava/lang/String;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::net::Uri _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::ContactsContract_DataUsageFeedback::ContactsContract_DataUsageFeedback() : ::java::lang::Object((jobject)0) {
    if (!::android::provider::ContactsContract_DataUsageFeedback::_class) ::android::provider::ContactsContract_DataUsageFeedback::_class = java::fetch_class("android/provider/ContactsContract$DataUsageFeedback");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::provider::ContactsContract_Directory::notifyDirectoryChange(const ::android::content::ContentResolver& arg0){
    if (!::android::provider::ContactsContract_Directory::_class) ::android::provider::ContactsContract_Directory::_class = java::fetch_class("android/provider/ContactsContract$Directory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "notifyDirectoryChange", "(Landroid/content/ContentResolver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::Browser_SearchColumns::Browser_SearchColumns() : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0) {
    if (!::android::provider::Browser_SearchColumns::_class) ::android::provider::Browser_SearchColumns::_class = java::fetch_class("android/provider/Browser$SearchColumns");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::MediaStore_Video::MediaStore_Video() : ::java::lang::Object((jobject)0) {
    if (!::android::provider::MediaStore_Video::_class) ::android::provider::MediaStore_Video::_class = java::fetch_class("android/provider/MediaStore$Video");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::database::Cursor android::provider::MediaStore_Video::query(const ::android::content::ContentResolver& arg0, const ::android::net::Uri& arg1, const std::vector< ::java::lang::String>& arg2){
    if (!::android::provider::MediaStore_Video::_class) ::android::provider::MediaStore_Video::_class = java::fetch_class("android/provider/MediaStore$Video");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "query", "(Landroid/content/ContentResolver;Landroid/net/Uri;[Ljava/lang/String;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::String::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::String& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::MediaStore_Audio_Playlists_Members::MediaStore_Audio_Playlists_Members() : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::MediaStore_Audio_AudioColumns((jobject)0), ::android::provider::MediaStore_MediaColumns((jobject)0) {
    if (!::android::provider::MediaStore_Audio_Playlists_Members::_class) ::android::provider::MediaStore_Audio_Playlists_Members::_class = java::fetch_class("android/provider/MediaStore$Audio$Playlists$Members");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::net::Uri android::provider::MediaStore_Audio_Playlists_Members::getContentUri(const ::java::lang::String& arg0, int64_t arg1){
    if (!::android::provider::MediaStore_Audio_Playlists_Members::_class) ::android::provider::MediaStore_Audio_Playlists_Members::_class = java::fetch_class("android/provider/MediaStore$Audio$Playlists$Members");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getContentUri", "(Ljava/lang/String;J)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::net::Uri _ret(ret);
    return _ret;
}

bool android::provider::MediaStore_Audio_Playlists_Members::moveItem(const ::android::content::ContentResolver& arg0, int64_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::provider::MediaStore_Audio_Playlists_Members::_class) ::android::provider::MediaStore_Audio_Playlists_Members::_class = java::fetch_class("android/provider/MediaStore$Audio$Playlists$Members");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "moveItem", "(Landroid/content/ContentResolver;JII)Z");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::MediaStore_Audio_Artists_Albums::MediaStore_Audio_Artists_Albums() : ::java::lang::Object((jobject)0), ::android::provider::MediaStore_Audio_AlbumColumns((jobject)0) {
    if (!::android::provider::MediaStore_Audio_Artists_Albums::_class) ::android::provider::MediaStore_Audio_Artists_Albums::_class = java::fetch_class("android/provider/MediaStore$Audio$Artists$Albums");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::net::Uri android::provider::MediaStore_Audio_Artists_Albums::getContentUri(const ::java::lang::String& arg0, int64_t arg1){
    if (!::android::provider::MediaStore_Audio_Artists_Albums::_class) ::android::provider::MediaStore_Audio_Artists_Albums::_class = java::fetch_class("android/provider/MediaStore$Audio$Artists$Albums");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getContentUri", "(Ljava/lang/String;J)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::net::Uri _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::Browser_BookmarkColumns::Browser_BookmarkColumns() : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0) {
    if (!::android::provider::Browser_BookmarkColumns::_class) ::android::provider::Browser_BookmarkColumns::_class = java::fetch_class("android/provider/Browser$BookmarkColumns");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::CallLog::CallLog() : ::java::lang::Object((jobject)0) {
    if (!::android::provider::CallLog::_class) ::android::provider::CallLog::_class = java::fetch_class("android/provider/CallLog");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::Settings_SettingNotFoundException::Settings_SettingNotFoundException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::util::AndroidException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::provider::Settings_SettingNotFoundException::_class) ::android::provider::Settings_SettingNotFoundException::_class = java::fetch_class("android/provider/Settings$SettingNotFoundException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::MediaStore_Files::MediaStore_Files() : ::java::lang::Object((jobject)0) {
    if (!::android::provider::MediaStore_Files::_class) ::android::provider::MediaStore_Files::_class = java::fetch_class("android/provider/MediaStore$Files");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::net::Uri android::provider::MediaStore_Files::getContentUri(const ::java::lang::String& arg0){
    if (!::android::provider::MediaStore_Files::_class) ::android::provider::MediaStore_Files::_class = java::fetch_class("android/provider/MediaStore$Files");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getContentUri", "(Ljava/lang/String;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::android::net::Uri android::provider::MediaStore_Files::getContentUri(const ::java::lang::String& arg0, int64_t arg1){
    if (!::android::provider::MediaStore_Files::_class) ::android::provider::MediaStore_Files::_class = java::fetch_class("android/provider/MediaStore$Files");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getContentUri", "(Ljava/lang/String;J)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::java::lang::String android::provider::Contacts_ContactMethods::encodePredefinedImProtocol(int32_t arg0){
    if (!::android::provider::Contacts_ContactMethods::_class) ::android::provider::Contacts_ContactMethods::_class = java::fetch_class("android/provider/Contacts$ContactMethods");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "encodePredefinedImProtocol", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::provider::Contacts_ContactMethods::encodeCustomImProtocol(const ::java::lang::String& arg0){
    if (!::android::provider::Contacts_ContactMethods::_class) ::android::provider::Contacts_ContactMethods::_class = java::fetch_class("android/provider/Contacts$ContactMethods");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "encodeCustomImProtocol", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object android::provider::Contacts_ContactMethods::decodeImProtocol(const ::java::lang::String& arg0){
    if (!::android::provider::Contacts_ContactMethods::_class) ::android::provider::Contacts_ContactMethods::_class = java::fetch_class("android/provider/Contacts$ContactMethods");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "decodeImProtocol", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::provider::Contacts_ContactMethods::getDisplayLabel(const ::android::content::Context& arg0, int32_t arg1, int32_t arg2, const ::java::lang::CharSequence& arg3){
    if (!::android::provider::Contacts_ContactMethods::_class) ::android::provider::Contacts_ContactMethods::_class = java::fetch_class("android/provider/Contacts$ContactMethods");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDisplayLabel", "(Landroid/content/Context;IILjava/lang/CharSequence;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::provider::Contacts_ContactMethods::addPostalLocation(const ::android::content::Context& arg0, int64_t arg1, double arg2, double arg3) const {
    if (!::android::provider::Contacts_ContactMethods::_class) ::android::provider::Contacts_ContactMethods::_class = java::fetch_class("android/provider/Contacts$ContactMethods");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPostalLocation", "(Landroid/content/Context;JDD)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    double _arg2 = arg2;
    double _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::provider::ContactsContract_StatusUpdates::getPresenceIconResourceId(int32_t arg0){
    if (!::android::provider::ContactsContract_StatusUpdates::_class) ::android::provider::ContactsContract_StatusUpdates::_class = java::fetch_class("android/provider/ContactsContract$StatusUpdates");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getPresenceIconResourceId", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::provider::ContactsContract_StatusUpdates::getPresencePrecedence(int32_t arg0){
    if (!::android::provider::ContactsContract_StatusUpdates::_class) ::android::provider::ContactsContract_StatusUpdates::_class = java::fetch_class("android/provider/ContactsContract$StatusUpdates");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getPresencePrecedence", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

::android::database::Cursor android::provider::CalendarContract_Reminders::query(const ::android::content::ContentResolver& arg0, int64_t arg1, const std::vector< ::java::lang::String>& arg2){
    if (!::android::provider::CalendarContract_Reminders::_class) ::android::provider::CalendarContract_Reminders::_class = java::fetch_class("android/provider/CalendarContract$Reminders");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "query", "(Landroid/content/ContentResolver;J[Ljava/lang/String;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    unsigned arg2s = arg2.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::String::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::String& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

int32_t android::provider::ContactsContract_CommonDataKinds_Organization::getTypeLabelResource(int32_t arg0){
    if (!::android::provider::ContactsContract_CommonDataKinds_Organization::_class) ::android::provider::ContactsContract_CommonDataKinds_Organization::_class = java::fetch_class("android/provider/ContactsContract$CommonDataKinds$Organization");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTypeLabelResource", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

::java::lang::CharSequence android::provider::ContactsContract_CommonDataKinds_Organization::getTypeLabel(const ::android::content::res::Resources& arg0, int32_t arg1, const ::java::lang::CharSequence& arg2){
    if (!::android::provider::ContactsContract_CommonDataKinds_Organization::_class) ::android::provider::ContactsContract_CommonDataKinds_Organization::_class = java::fetch_class("android/provider/ContactsContract$CommonDataKinds$Organization");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTypeLabel", "(Landroid/content/res/Resources;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::net::Uri android::provider::VoicemailContract_Status::buildSourceUri(const ::java::lang::String& arg0){
    if (!::android::provider::VoicemailContract_Status::_class) ::android::provider::VoicemailContract_Status::_class = java::fetch_class("android/provider/VoicemailContract$Status");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "buildSourceUri", "(Ljava/lang/String;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::android::net::Uri android::provider::VoicemailContract_Voicemails::buildSourceUri(const ::java::lang::String& arg0){
    if (!::android::provider::VoicemailContract_Voicemails::_class) ::android::provider::VoicemailContract_Voicemails::_class = java::fetch_class("android/provider/VoicemailContract$Voicemails");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "buildSourceUri", "(Ljava/lang/String;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::android::content::EntityIterator android::provider::ContactsContract_Groups::newEntityIterator(const ::android::database::Cursor& arg0){
    if (!::android::provider::ContactsContract_Groups::_class) ::android::provider::ContactsContract_Groups::_class = java::fetch_class("android/provider/ContactsContract$Groups");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newEntityIterator", "(Landroid/database/Cursor;)Landroid/content/EntityIterator;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::content::EntityIterator _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::MediaStore_Images::MediaStore_Images() : ::java::lang::Object((jobject)0) {
    if (!::android::provider::MediaStore_Images::_class) ::android::provider::MediaStore_Images::_class = java::fetch_class("android/provider/MediaStore$Images");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::Contacts_Intents_UI::Contacts_Intents_UI() : ::java::lang::Object((jobject)0) {
    if (!::android::provider::Contacts_Intents_UI::_class) ::android::provider::Contacts_Intents_UI::_class = java::fetch_class("android/provider/Contacts$Intents$UI");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::MediaStore_Audio_Media::MediaStore_Audio_Media() : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::MediaStore_Audio_AudioColumns((jobject)0), ::android::provider::MediaStore_MediaColumns((jobject)0) {
    if (!::android::provider::MediaStore_Audio_Media::_class) ::android::provider::MediaStore_Audio_Media::_class = java::fetch_class("android/provider/MediaStore$Audio$Media");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::net::Uri android::provider::MediaStore_Audio_Media::getContentUri(const ::java::lang::String& arg0){
    if (!::android::provider::MediaStore_Audio_Media::_class) ::android::provider::MediaStore_Audio_Media::_class = java::fetch_class("android/provider/MediaStore$Audio$Media");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getContentUri", "(Ljava/lang/String;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::android::net::Uri android::provider::MediaStore_Audio_Media::getContentUriForPath(const ::java::lang::String& arg0){
    if (!::android::provider::MediaStore_Audio_Media::_class) ::android::provider::MediaStore_Audio_Media::_class = java::fetch_class("android/provider/MediaStore$Audio$Media");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getContentUriForPath", "(Ljava/lang/String;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::net::Uri _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::Browser::Browser() : ::java::lang::Object((jobject)0) {
    if (!::android::provider::Browser::_class) ::android::provider::Browser::_class = java::fetch_class("android/provider/Browser");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::provider::Browser::saveBookmark(const ::android::content::Context& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2){
    if (!::android::provider::Browser::_class) ::android::provider::Browser::_class = java::fetch_class("android/provider/Browser");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "saveBookmark", "(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::provider::Browser::sendString(const ::android::content::Context& arg0, const ::java::lang::String& arg1){
    if (!::android::provider::Browser::_class) ::android::provider::Browser::_class = java::fetch_class("android/provider/Browser");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sendString", "(Landroid/content/Context;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::android::database::Cursor android::provider::Browser::getAllBookmarks(const ::android::content::ContentResolver& arg0){
    if (!::android::provider::Browser::_class) ::android::provider::Browser::_class = java::fetch_class("android/provider/Browser");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAllBookmarks", "(Landroid/content/ContentResolver;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

::android::database::Cursor android::provider::Browser::getAllVisitedUrls(const ::android::content::ContentResolver& arg0){
    if (!::android::provider::Browser::_class) ::android::provider::Browser::_class = java::fetch_class("android/provider/Browser");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAllVisitedUrls", "(Landroid/content/ContentResolver;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

void android::provider::Browser::updateVisitedHistory(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1, bool arg2){
    if (!::android::provider::Browser::_class) ::android::provider::Browser::_class = java::fetch_class("android/provider/Browser");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "updateVisitedHistory", "(Landroid/content/ContentResolver;Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::provider::Browser::truncateHistory(const ::android::content::ContentResolver& arg0){
    if (!::android::provider::Browser::_class) ::android::provider::Browser::_class = java::fetch_class("android/provider/Browser");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "truncateHistory", "(Landroid/content/ContentResolver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

bool android::provider::Browser::canClearHistory(const ::android::content::ContentResolver& arg0){
    if (!::android::provider::Browser::_class) ::android::provider::Browser::_class = java::fetch_class("android/provider/Browser");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "canClearHistory", "(Landroid/content/ContentResolver;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void android::provider::Browser::clearHistory(const ::android::content::ContentResolver& arg0){
    if (!::android::provider::Browser::_class) ::android::provider::Browser::_class = java::fetch_class("android/provider/Browser");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "clearHistory", "(Landroid/content/ContentResolver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::provider::Browser::deleteHistoryTimeFrame(const ::android::content::ContentResolver& arg0, int64_t arg1, int64_t arg2){
    if (!::android::provider::Browser::_class) ::android::provider::Browser::_class = java::fetch_class("android/provider/Browser");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "deleteHistoryTimeFrame", "(Landroid/content/ContentResolver;JJ)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::provider::Browser::deleteFromHistory(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1){
    if (!::android::provider::Browser::_class) ::android::provider::Browser::_class = java::fetch_class("android/provider/Browser");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "deleteFromHistory", "(Landroid/content/ContentResolver;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::provider::Browser::addSearchUrl(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1){
    if (!::android::provider::Browser::_class) ::android::provider::Browser::_class = java::fetch_class("android/provider/Browser");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "addSearchUrl", "(Landroid/content/ContentResolver;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::provider::Browser::clearSearches(const ::android::content::ContentResolver& arg0){
    if (!::android::provider::Browser::_class) ::android::provider::Browser::_class = java::fetch_class("android/provider/Browser");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "clearSearches", "(Landroid/content/ContentResolver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::provider::Browser::requestAllIcons(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1, const ::android::webkit::WebIconDatabase_IconListener& arg2){
    if (!::android::provider::Browser::_class) ::android::provider::Browser::_class = java::fetch_class("android/provider/Browser");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "requestAllIcons", "(Landroid/content/ContentResolver;Ljava/lang/String;Landroid/webkit/WebIconDatabase$IconListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

int32_t android::provider::ContactsContract_CommonDataKinds_Phone::getTypeLabelResource(int32_t arg0){
    if (!::android::provider::ContactsContract_CommonDataKinds_Phone::_class) ::android::provider::ContactsContract_CommonDataKinds_Phone::_class = java::fetch_class("android/provider/ContactsContract$CommonDataKinds$Phone");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTypeLabelResource", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

::java::lang::CharSequence android::provider::ContactsContract_CommonDataKinds_Phone::getTypeLabel(const ::android::content::res::Resources& arg0, int32_t arg1, const ::java::lang::CharSequence& arg2){
    if (!::android::provider::ContactsContract_CommonDataKinds_Phone::_class) ::android::provider::ContactsContract_CommonDataKinds_Phone::_class = java::fetch_class("android/provider/ContactsContract$CommonDataKinds$Phone");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTypeLabel", "(Landroid/content/res/Resources;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::Settings_NameValueTable::Settings_NameValueTable() : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0) {
    if (!::android::provider::Settings_NameValueTable::_class) ::android::provider::Settings_NameValueTable::_class = java::fetch_class("android/provider/Settings$NameValueTable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::net::Uri android::provider::Settings_NameValueTable::getUriFor(const ::android::net::Uri& arg0, const ::java::lang::String& arg1){
    if (!::android::provider::Settings_NameValueTable::_class) ::android::provider::Settings_NameValueTable::_class = java::fetch_class("android/provider/Settings$NameValueTable");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getUriFor", "(Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::android::database::Cursor android::provider::CalendarContract_Attendees::query(const ::android::content::ContentResolver& arg0, int64_t arg1, const std::vector< ::java::lang::String>& arg2){
    if (!::android::provider::CalendarContract_Attendees::_class) ::android::provider::CalendarContract_Attendees::_class = java::fetch_class("android/provider/CalendarContract$Attendees");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "query", "(Landroid/content/ContentResolver;J[Ljava/lang/String;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    unsigned arg2s = arg2.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::String::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::String& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::SearchRecentSuggestions::SearchRecentSuggestions(const ::android::content::Context& arg0, const ::java::lang::String& arg1, int32_t arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::provider::SearchRecentSuggestions::_class) ::android::provider::SearchRecentSuggestions::_class = java::fetch_class("android/provider/SearchRecentSuggestions");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::provider::SearchRecentSuggestions::saveRecentQuery(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::provider::SearchRecentSuggestions::_class) ::android::provider::SearchRecentSuggestions::_class = java::fetch_class("android/provider/SearchRecentSuggestions");
    static jmethodID mid = java::jni->GetMethodID(_class, "saveRecentQuery", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::provider::SearchRecentSuggestions::clearHistory() const {
    if (!::android::provider::SearchRecentSuggestions::_class) ::android::provider::SearchRecentSuggestions::_class = java::fetch_class("android/provider/SearchRecentSuggestions");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearHistory", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::provider::ContactsContract_CommonDataKinds_StructuredPostal::getTypeLabelResource(int32_t arg0){
    if (!::android::provider::ContactsContract_CommonDataKinds_StructuredPostal::_class) ::android::provider::ContactsContract_CommonDataKinds_StructuredPostal::_class = java::fetch_class("android/provider/ContactsContract$CommonDataKinds$StructuredPostal");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTypeLabelResource", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

::java::lang::CharSequence android::provider::ContactsContract_CommonDataKinds_StructuredPostal::getTypeLabel(const ::android::content::res::Resources& arg0, int32_t arg1, const ::java::lang::CharSequence& arg2){
    if (!::android::provider::ContactsContract_CommonDataKinds_StructuredPostal::_class) ::android::provider::ContactsContract_CommonDataKinds_StructuredPostal::_class = java::fetch_class("android/provider/ContactsContract$CommonDataKinds$StructuredPostal");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTypeLabel", "(Landroid/content/res/Resources;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::Contacts_Intents::Contacts_Intents() : ::java::lang::Object((jobject)0) {
    if (!::android::provider::Contacts_Intents::_class) ::android::provider::Contacts_Intents::_class = java::fetch_class("android/provider/Contacts$Intents");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::ContactsContract_Intents::ContactsContract_Intents() : ::java::lang::Object((jobject)0) {
    if (!::android::provider::ContactsContract_Intents::_class) ::android::provider::ContactsContract_Intents::_class = java::fetch_class("android/provider/ContactsContract$Intents");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::ContactsContract_Presence::ContactsContract_Presence() : ::java::lang::Object((jobject)0), ::android::provider::ContactsContract_PresenceColumns((jobject)0), ::android::provider::ContactsContract_StatusColumns((jobject)0), ::android::provider::ContactsContract_StatusUpdates((jobject)0) {
    if (!::android::provider::ContactsContract_Presence::_class) ::android::provider::ContactsContract_Presence::_class = java::fetch_class("android/provider/ContactsContract$Presence");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::UserDictionary_Words::UserDictionary_Words() : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0) {
    if (!::android::provider::UserDictionary_Words::_class) ::android::provider::UserDictionary_Words::_class = java::fetch_class("android/provider/UserDictionary$Words");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::provider::UserDictionary_Words::addWord(const ::android::content::Context& arg0, const ::java::lang::String& arg1, int32_t arg2, int32_t arg3){
    if (!::android::provider::UserDictionary_Words::_class) ::android::provider::UserDictionary_Words::_class = java::fetch_class("android/provider/UserDictionary$Words");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "addWord", "(Landroid/content/Context;Ljava/lang/String;II)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

::java::lang::String android::provider::Contacts_Settings::getSetting(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2){
    if (!::android::provider::Contacts_Settings::_class) ::android::provider::Contacts_Settings::_class = java::fetch_class("android/provider/Contacts$Settings");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSetting", "(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::provider::Contacts_Settings::setSetting(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3){
    if (!::android::provider::Contacts_Settings::_class) ::android::provider::Contacts_Settings::_class = java::fetch_class("android/provider/Contacts$Settings");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setSetting", "(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::provider::ContactsContract_CommonDataKinds_Im::getTypeLabelResource(int32_t arg0){
    if (!::android::provider::ContactsContract_CommonDataKinds_Im::_class) ::android::provider::ContactsContract_CommonDataKinds_Im::_class = java::fetch_class("android/provider/ContactsContract$CommonDataKinds$Im");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTypeLabelResource", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

::java::lang::CharSequence android::provider::ContactsContract_CommonDataKinds_Im::getTypeLabel(const ::android::content::res::Resources& arg0, int32_t arg1, const ::java::lang::CharSequence& arg2){
    if (!::android::provider::ContactsContract_CommonDataKinds_Im::_class) ::android::provider::ContactsContract_CommonDataKinds_Im::_class = java::fetch_class("android/provider/ContactsContract$CommonDataKinds$Im");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTypeLabel", "(Landroid/content/res/Resources;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

int32_t android::provider::ContactsContract_CommonDataKinds_Im::getProtocolLabelResource(int32_t arg0){
    if (!::android::provider::ContactsContract_CommonDataKinds_Im::_class) ::android::provider::ContactsContract_CommonDataKinds_Im::_class = java::fetch_class("android/provider/ContactsContract$CommonDataKinds$Im");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getProtocolLabelResource", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

::java::lang::CharSequence android::provider::ContactsContract_CommonDataKinds_Im::getProtocolLabel(const ::android::content::res::Resources& arg0, int32_t arg1, const ::java::lang::CharSequence& arg2){
    if (!::android::provider::ContactsContract_CommonDataKinds_Im::_class) ::android::provider::ContactsContract_CommonDataKinds_Im::_class = java::fetch_class("android/provider/ContactsContract$CommonDataKinds$Im");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getProtocolLabel", "(Landroid/content/res/Resources;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::SyncStateContract_Helpers::SyncStateContract_Helpers() : ::java::lang::Object((jobject)0) {
    if (!::android::provider::SyncStateContract_Helpers::_class) ::android::provider::SyncStateContract_Helpers::_class = java::fetch_class("android/provider/SyncStateContract$Helpers");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

std::vector< int8_t> android::provider::SyncStateContract_Helpers::get(const ::android::content::ContentProviderClient& arg0, const ::android::net::Uri& arg1, const ::android::accounts::Account& arg2){
    if (!::android::provider::SyncStateContract_Helpers::_class) ::android::provider::SyncStateContract_Helpers::_class = java::fetch_class("android/provider/SyncStateContract$Helpers");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "get", "(Landroid/content/ContentProviderClient;Landroid/net/Uri;Landroid/accounts/Account;)[B");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

void android::provider::SyncStateContract_Helpers::set(const ::android::content::ContentProviderClient& arg0, const ::android::net::Uri& arg1, const ::android::accounts::Account& arg2, const std::vector< int8_t>& arg3){
    if (!::android::provider::SyncStateContract_Helpers::_class) ::android::provider::SyncStateContract_Helpers::_class = java::fetch_class("android/provider/SyncStateContract$Helpers");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "set", "(Landroid/content/ContentProviderClient;Landroid/net/Uri;Landroid/accounts/Account;[B)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jbyteArray _arg3 = java::jni->NewByteArray(arg3.size());
    java::jni->SetByteArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

::android::net::Uri android::provider::SyncStateContract_Helpers::insert(const ::android::content::ContentProviderClient& arg0, const ::android::net::Uri& arg1, const ::android::accounts::Account& arg2, const std::vector< int8_t>& arg3){
    if (!::android::provider::SyncStateContract_Helpers::_class) ::android::provider::SyncStateContract_Helpers::_class = java::fetch_class("android/provider/SyncStateContract$Helpers");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "insert", "(Landroid/content/ContentProviderClient;Landroid/net/Uri;Landroid/accounts/Account;[B)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jbyteArray _arg3 = java::jni->NewByteArray(arg3.size());
    java::jni->SetByteArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::net::Uri _ret(ret);
    return _ret;
}

void android::provider::SyncStateContract_Helpers::update(const ::android::content::ContentProviderClient& arg0, const ::android::net::Uri& arg1, const std::vector< int8_t>& arg2){
    if (!::android::provider::SyncStateContract_Helpers::_class) ::android::provider::SyncStateContract_Helpers::_class = java::fetch_class("android/provider/SyncStateContract$Helpers");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "update", "(Landroid/content/ContentProviderClient;Landroid/net/Uri;[B)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jbyteArray _arg2 = java::jni->NewByteArray(arg2.size());
    java::jni->SetByteArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

::android::util::Pair android::provider::SyncStateContract_Helpers::getWithUri(const ::android::content::ContentProviderClient& arg0, const ::android::net::Uri& arg1, const ::android::accounts::Account& arg2){
    if (!::android::provider::SyncStateContract_Helpers::_class) ::android::provider::SyncStateContract_Helpers::_class = java::fetch_class("android/provider/SyncStateContract$Helpers");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getWithUri", "(Landroid/content/ContentProviderClient;Landroid/net/Uri;Landroid/accounts/Account;)Landroid/util/Pair;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::util::Pair _ret(ret);
    return _ret;
}

::android::content::ContentProviderOperation android::provider::SyncStateContract_Helpers::newSetOperation(const ::android::net::Uri& arg0, const ::android::accounts::Account& arg1, const std::vector< int8_t>& arg2){
    if (!::android::provider::SyncStateContract_Helpers::_class) ::android::provider::SyncStateContract_Helpers::_class = java::fetch_class("android/provider/SyncStateContract$Helpers");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newSetOperation", "(Landroid/net/Uri;Landroid/accounts/Account;[B)Landroid/content/ContentProviderOperation;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jbyteArray _arg2 = java::jni->NewByteArray(arg2.size());
    java::jni->SetByteArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::content::ContentProviderOperation _ret(ret);
    return _ret;
}

::android::content::ContentProviderOperation android::provider::SyncStateContract_Helpers::newUpdateOperation(const ::android::net::Uri& arg0, const std::vector< int8_t>& arg1){
    if (!::android::provider::SyncStateContract_Helpers::_class) ::android::provider::SyncStateContract_Helpers::_class = java::fetch_class("android/provider/SyncStateContract$Helpers");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newUpdateOperation", "(Landroid/net/Uri;[B)Landroid/content/ContentProviderOperation;");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::content::ContentProviderOperation _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::MediaStore_Audio_Genres_Members::MediaStore_Audio_Genres_Members() : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::MediaStore_Audio_AudioColumns((jobject)0), ::android::provider::MediaStore_MediaColumns((jobject)0) {
    if (!::android::provider::MediaStore_Audio_Genres_Members::_class) ::android::provider::MediaStore_Audio_Genres_Members::_class = java::fetch_class("android/provider/MediaStore$Audio$Genres$Members");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::net::Uri android::provider::MediaStore_Audio_Genres_Members::getContentUri(const ::java::lang::String& arg0, int64_t arg1){
    if (!::android::provider::MediaStore_Audio_Genres_Members::_class) ::android::provider::MediaStore_Audio_Genres_Members::_class = java::fetch_class("android/provider/MediaStore$Audio$Genres$Members");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getContentUri", "(Ljava/lang/String;J)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::net::Uri _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::MediaStore_Audio_Artists::MediaStore_Audio_Artists() : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::MediaStore_Audio_ArtistColumns((jobject)0) {
    if (!::android::provider::MediaStore_Audio_Artists::_class) ::android::provider::MediaStore_Audio_Artists::_class = java::fetch_class("android/provider/MediaStore$Audio$Artists");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::net::Uri android::provider::MediaStore_Audio_Artists::getContentUri(const ::java::lang::String& arg0){
    if (!::android::provider::MediaStore_Audio_Artists::_class) ::android::provider::MediaStore_Audio_Artists::_class = java::fetch_class("android/provider/MediaStore$Audio$Artists");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getContentUri", "(Ljava/lang/String;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::net::Uri _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::MediaStore_Images_Thumbnails::MediaStore_Images_Thumbnails() : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0) {
    if (!::android::provider::MediaStore_Images_Thumbnails::_class) ::android::provider::MediaStore_Images_Thumbnails::_class = java::fetch_class("android/provider/MediaStore$Images$Thumbnails");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::database::Cursor android::provider::MediaStore_Images_Thumbnails::query(const ::android::content::ContentResolver& arg0, const ::android::net::Uri& arg1, const std::vector< ::java::lang::String>& arg2){
    if (!::android::provider::MediaStore_Images_Thumbnails::_class) ::android::provider::MediaStore_Images_Thumbnails::_class = java::fetch_class("android/provider/MediaStore$Images$Thumbnails");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "query", "(Landroid/content/ContentResolver;Landroid/net/Uri;[Ljava/lang/String;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::String::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::String& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

::android::database::Cursor android::provider::MediaStore_Images_Thumbnails::queryMiniThumbnails(const ::android::content::ContentResolver& arg0, const ::android::net::Uri& arg1, int32_t arg2, const std::vector< ::java::lang::String>& arg3){
    if (!::android::provider::MediaStore_Images_Thumbnails::_class) ::android::provider::MediaStore_Images_Thumbnails::_class = java::fetch_class("android/provider/MediaStore$Images$Thumbnails");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "queryMiniThumbnails", "(Landroid/content/ContentResolver;Landroid/net/Uri;I[Ljava/lang/String;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    unsigned arg3s = arg3.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::String::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::String& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

::android::database::Cursor android::provider::MediaStore_Images_Thumbnails::queryMiniThumbnail(const ::android::content::ContentResolver& arg0, int64_t arg1, int32_t arg2, const std::vector< ::java::lang::String>& arg3){
    if (!::android::provider::MediaStore_Images_Thumbnails::_class) ::android::provider::MediaStore_Images_Thumbnails::_class = java::fetch_class("android/provider/MediaStore$Images$Thumbnails");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "queryMiniThumbnail", "(Landroid/content/ContentResolver;JI[Ljava/lang/String;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    unsigned arg3s = arg3.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::String::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::String& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

void android::provider::MediaStore_Images_Thumbnails::cancelThumbnailRequest(const ::android::content::ContentResolver& arg0, int64_t arg1){
    if (!::android::provider::MediaStore_Images_Thumbnails::_class) ::android::provider::MediaStore_Images_Thumbnails::_class = java::fetch_class("android/provider/MediaStore$Images$Thumbnails");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cancelThumbnailRequest", "(Landroid/content/ContentResolver;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::android::graphics::Bitmap android::provider::MediaStore_Images_Thumbnails::getThumbnail(const ::android::content::ContentResolver& arg0, int64_t arg1, int32_t arg2, const ::android::graphics::BitmapFactory_Options& arg3){
    if (!::android::provider::MediaStore_Images_Thumbnails::_class) ::android::provider::MediaStore_Images_Thumbnails::_class = java::fetch_class("android/provider/MediaStore$Images$Thumbnails");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getThumbnail", "(Landroid/content/ContentResolver;JILandroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

void android::provider::MediaStore_Images_Thumbnails::cancelThumbnailRequest(const ::android::content::ContentResolver& arg0, int64_t arg1, int64_t arg2){
    if (!::android::provider::MediaStore_Images_Thumbnails::_class) ::android::provider::MediaStore_Images_Thumbnails::_class = java::fetch_class("android/provider/MediaStore$Images$Thumbnails");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cancelThumbnailRequest", "(Landroid/content/ContentResolver;JJ)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

::android::graphics::Bitmap android::provider::MediaStore_Images_Thumbnails::getThumbnail(const ::android::content::ContentResolver& arg0, int64_t arg1, int64_t arg2, int32_t arg3, const ::android::graphics::BitmapFactory_Options& arg4){
    if (!::android::provider::MediaStore_Images_Thumbnails::_class) ::android::provider::MediaStore_Images_Thumbnails::_class = java::fetch_class("android/provider/MediaStore$Images$Thumbnails");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getThumbnail", "(Landroid/content/ContentResolver;JJILandroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::net::Uri android::provider::MediaStore_Images_Thumbnails::getContentUri(const ::java::lang::String& arg0){
    if (!::android::provider::MediaStore_Images_Thumbnails::_class) ::android::provider::MediaStore_Images_Thumbnails::_class = java::fetch_class("android/provider/MediaStore$Images$Thumbnails");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getContentUri", "(Ljava/lang/String;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::net::Uri _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::MediaStore_Video_Media::MediaStore_Video_Media() : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::MediaStore_MediaColumns((jobject)0), ::android::provider::MediaStore_Video_VideoColumns((jobject)0) {
    if (!::android::provider::MediaStore_Video_Media::_class) ::android::provider::MediaStore_Video_Media::_class = java::fetch_class("android/provider/MediaStore$Video$Media");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::net::Uri android::provider::MediaStore_Video_Media::getContentUri(const ::java::lang::String& arg0){
    if (!::android::provider::MediaStore_Video_Media::_class) ::android::provider::MediaStore_Video_Media::_class = java::fetch_class("android/provider/MediaStore$Video$Media");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getContentUri", "(Ljava/lang/String;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::net::Uri _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::Settings_System::Settings_System() : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::Settings_NameValueTable((jobject)0) {
    if (!::android::provider::Settings_System::_class) ::android::provider::Settings_System::_class = java::fetch_class("android/provider/Settings$System");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::provider::Settings_System::getString(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1){
    if (!::android::provider::Settings_System::_class) ::android::provider::Settings_System::_class = java::fetch_class("android/provider/Settings$System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getString", "(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::provider::Settings_System::putString(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2){
    if (!::android::provider::Settings_System::_class) ::android::provider::Settings_System::_class = java::fetch_class("android/provider/Settings$System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "putString", "(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2);
}

::android::net::Uri android::provider::Settings_System::getUriFor(const ::java::lang::String& arg0){
    if (!::android::provider::Settings_System::_class) ::android::provider::Settings_System::_class = java::fetch_class("android/provider/Settings$System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getUriFor", "(Ljava/lang/String;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::net::Uri _ret(ret);
    return _ret;
}

int32_t android::provider::Settings_System::getInt(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1, int32_t arg2){
    if (!::android::provider::Settings_System::_class) ::android::provider::Settings_System::_class = java::fetch_class("android/provider/Settings$System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInt", "(Landroid/content/ContentResolver;Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

int32_t android::provider::Settings_System::getInt(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1){
    if (!::android::provider::Settings_System::_class) ::android::provider::Settings_System::_class = java::fetch_class("android/provider/Settings$System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInt", "(Landroid/content/ContentResolver;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

bool android::provider::Settings_System::putInt(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1, int32_t arg2){
    if (!::android::provider::Settings_System::_class) ::android::provider::Settings_System::_class = java::fetch_class("android/provider/Settings$System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "putInt", "(Landroid/content/ContentResolver;Ljava/lang/String;I)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2);
}

int64_t android::provider::Settings_System::getLong(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1, int64_t arg2){
    if (!::android::provider::Settings_System::_class) ::android::provider::Settings_System::_class = java::fetch_class("android/provider/Settings$System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLong", "(Landroid/content/ContentResolver;Ljava/lang/String;J)J");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0, _arg1, _arg2);
}

int64_t android::provider::Settings_System::getLong(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1){
    if (!::android::provider::Settings_System::_class) ::android::provider::Settings_System::_class = java::fetch_class("android/provider/Settings$System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLong", "(Landroid/content/ContentResolver;Ljava/lang/String;)J");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0, _arg1);
}

bool android::provider::Settings_System::putLong(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1, int64_t arg2){
    if (!::android::provider::Settings_System::_class) ::android::provider::Settings_System::_class = java::fetch_class("android/provider/Settings$System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "putLong", "(Landroid/content/ContentResolver;Ljava/lang/String;J)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2);
}

float android::provider::Settings_System::getFloat(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1, float arg2){
    if (!::android::provider::Settings_System::_class) ::android::provider::Settings_System::_class = java::fetch_class("android/provider/Settings$System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getFloat", "(Landroid/content/ContentResolver;Ljava/lang/String;F)F");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0, _arg1, _arg2);
}

float android::provider::Settings_System::getFloat(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1){
    if (!::android::provider::Settings_System::_class) ::android::provider::Settings_System::_class = java::fetch_class("android/provider/Settings$System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getFloat", "(Landroid/content/ContentResolver;Ljava/lang/String;)F");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0, _arg1);
}

bool android::provider::Settings_System::putFloat(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1, float arg2){
    if (!::android::provider::Settings_System::_class) ::android::provider::Settings_System::_class = java::fetch_class("android/provider/Settings$System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "putFloat", "(Landroid/content/ContentResolver;Ljava/lang/String;F)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::provider::Settings_System::getConfiguration(const ::android::content::ContentResolver& arg0, const ::android::content::res::Configuration& arg1){
    if (!::android::provider::Settings_System::_class) ::android::provider::Settings_System::_class = java::fetch_class("android/provider/Settings$System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getConfiguration", "(Landroid/content/ContentResolver;Landroid/content/res/Configuration;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

bool android::provider::Settings_System::putConfiguration(const ::android::content::ContentResolver& arg0, const ::android::content::res::Configuration& arg1){
    if (!::android::provider::Settings_System::_class) ::android::provider::Settings_System::_class = java::fetch_class("android/provider/Settings$System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "putConfiguration", "(Landroid/content/ContentResolver;Landroid/content/res/Configuration;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool android::provider::Settings_System::getShowGTalkServiceStatus(const ::android::content::ContentResolver& arg0){
    if (!::android::provider::Settings_System::_class) ::android::provider::Settings_System::_class = java::fetch_class("android/provider/Settings$System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getShowGTalkServiceStatus", "(Landroid/content/ContentResolver;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void android::provider::Settings_System::setShowGTalkServiceStatus(const ::android::content::ContentResolver& arg0, bool arg1){
    if (!::android::provider::Settings_System::_class) ::android::provider::Settings_System::_class = java::fetch_class("android/provider/Settings$System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setShowGTalkServiceStatus", "(Landroid/content/ContentResolver;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::ContactsContract_QuickContact::ContactsContract_QuickContact() : ::java::lang::Object((jobject)0) {
    if (!::android::provider::ContactsContract_QuickContact::_class) ::android::provider::ContactsContract_QuickContact::_class = java::fetch_class("android/provider/ContactsContract$QuickContact");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::provider::ContactsContract_QuickContact::showQuickContact(const ::android::content::Context& arg0, const ::android::view::View& arg1, const ::android::net::Uri& arg2, int32_t arg3, const std::vector< ::java::lang::String>& arg4){
    if (!::android::provider::ContactsContract_QuickContact::_class) ::android::provider::ContactsContract_QuickContact::_class = java::fetch_class("android/provider/ContactsContract$QuickContact");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "showQuickContact", "(Landroid/content/Context;Landroid/view/View;Landroid/net/Uri;I[Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    unsigned arg4s = arg4.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg4 = java::jni->NewObjectArray(arg4s, ::java::lang::String::_class, nullptr);
    for (unsigned arg4i = 0; arg4i < arg4s; ++arg4i) {
      const ::java::lang::String& arg4e = arg4[arg4i];
        jobject arg4d = arg4e.obj;
      java::jni->SetObjectArrayElement(_arg4, arg4i, arg4d);
    }
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::provider::ContactsContract_QuickContact::showQuickContact(const ::android::content::Context& arg0, const ::android::graphics::Rect& arg1, const ::android::net::Uri& arg2, int32_t arg3, const std::vector< ::java::lang::String>& arg4){
    if (!::android::provider::ContactsContract_QuickContact::_class) ::android::provider::ContactsContract_QuickContact::_class = java::fetch_class("android/provider/ContactsContract$QuickContact");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "showQuickContact", "(Landroid/content/Context;Landroid/graphics/Rect;Landroid/net/Uri;I[Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    unsigned arg4s = arg4.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg4 = java::jni->NewObjectArray(arg4s, ::java::lang::String::_class, nullptr);
    for (unsigned arg4i = 0; arg4i < arg4s; ++arg4i) {
      const ::java::lang::String& arg4e = arg4[arg4i];
        jobject arg4d = arg4e.obj;
      java::jni->SetObjectArrayElement(_arg4, arg4i, arg4d);
    }
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

::android::database::Cursor android::provider::CalendarContract_EventDays::query(const ::android::content::ContentResolver& arg0, int32_t arg1, int32_t arg2, const std::vector< ::java::lang::String>& arg3){
    if (!::android::provider::CalendarContract_EventDays::_class) ::android::provider::CalendarContract_EventDays::_class = java::fetch_class("android/provider/CalendarContract$EventDays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "query", "(Landroid/content/ContentResolver;II[Ljava/lang/String;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    unsigned arg3s = arg3.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::String::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::String& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

::android::net::Uri android::provider::ContactsContract_Data::getContactLookupUri(const ::android::content::ContentResolver& arg0, const ::android::net::Uri& arg1){
    if (!::android::provider::ContactsContract_Data::_class) ::android::provider::ContactsContract_Data::_class = java::fetch_class("android/provider/ContactsContract$Data");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getContactLookupUri", "(Landroid/content/ContentResolver;Landroid/net/Uri;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::net::Uri _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::ContactsContract_Intents_Insert::ContactsContract_Intents_Insert() : ::java::lang::Object((jobject)0) {
    if (!::android::provider::ContactsContract_Intents_Insert::_class) ::android::provider::ContactsContract_Intents_Insert::_class = java::fetch_class("android/provider/ContactsContract$Intents$Insert");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::MediaStore_Audio_Playlists::MediaStore_Audio_Playlists() : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::MediaStore_Audio_PlaylistsColumns((jobject)0) {
    if (!::android::provider::MediaStore_Audio_Playlists::_class) ::android::provider::MediaStore_Audio_Playlists::_class = java::fetch_class("android/provider/MediaStore$Audio$Playlists");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::net::Uri android::provider::MediaStore_Audio_Playlists::getContentUri(const ::java::lang::String& arg0){
    if (!::android::provider::MediaStore_Audio_Playlists::_class) ::android::provider::MediaStore_Audio_Playlists::_class = java::fetch_class("android/provider/MediaStore$Audio$Playlists");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getContentUri", "(Ljava/lang/String;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::net::Uri _ret(ret);
    return _ret;
}

std::vector< int8_t> android::provider::ContactsContract_ProfileSyncState::get(const ::android::content::ContentProviderClient& arg0, const ::android::accounts::Account& arg1){
    if (!::android::provider::ContactsContract_ProfileSyncState::_class) ::android::provider::ContactsContract_ProfileSyncState::_class = java::fetch_class("android/provider/ContactsContract$ProfileSyncState");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "get", "(Landroid/content/ContentProviderClient;Landroid/accounts/Account;)[B");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::android::util::Pair android::provider::ContactsContract_ProfileSyncState::getWithUri(const ::android::content::ContentProviderClient& arg0, const ::android::accounts::Account& arg1){
    if (!::android::provider::ContactsContract_ProfileSyncState::_class) ::android::provider::ContactsContract_ProfileSyncState::_class = java::fetch_class("android/provider/ContactsContract$ProfileSyncState");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getWithUri", "(Landroid/content/ContentProviderClient;Landroid/accounts/Account;)Landroid/util/Pair;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::util::Pair _ret(ret);
    return _ret;
}

void android::provider::ContactsContract_ProfileSyncState::set(const ::android::content::ContentProviderClient& arg0, const ::android::accounts::Account& arg1, const std::vector< int8_t>& arg2){
    if (!::android::provider::ContactsContract_ProfileSyncState::_class) ::android::provider::ContactsContract_ProfileSyncState::_class = java::fetch_class("android/provider/ContactsContract$ProfileSyncState");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "set", "(Landroid/content/ContentProviderClient;Landroid/accounts/Account;[B)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jbyteArray _arg2 = java::jni->NewByteArray(arg2.size());
    java::jni->SetByteArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

::android::content::ContentProviderOperation android::provider::ContactsContract_ProfileSyncState::newSetOperation(const ::android::accounts::Account& arg0, const std::vector< int8_t>& arg1){
    if (!::android::provider::ContactsContract_ProfileSyncState::_class) ::android::provider::ContactsContract_ProfileSyncState::_class = java::fetch_class("android/provider/ContactsContract$ProfileSyncState");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newSetOperation", "(Landroid/accounts/Account;[B)Landroid/content/ContentProviderOperation;");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::content::ContentProviderOperation _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::MediaStore_Video_Thumbnails::MediaStore_Video_Thumbnails() : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0) {
    if (!::android::provider::MediaStore_Video_Thumbnails::_class) ::android::provider::MediaStore_Video_Thumbnails::_class = java::fetch_class("android/provider/MediaStore$Video$Thumbnails");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::provider::MediaStore_Video_Thumbnails::cancelThumbnailRequest(const ::android::content::ContentResolver& arg0, int64_t arg1){
    if (!::android::provider::MediaStore_Video_Thumbnails::_class) ::android::provider::MediaStore_Video_Thumbnails::_class = java::fetch_class("android/provider/MediaStore$Video$Thumbnails");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cancelThumbnailRequest", "(Landroid/content/ContentResolver;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::android::graphics::Bitmap android::provider::MediaStore_Video_Thumbnails::getThumbnail(const ::android::content::ContentResolver& arg0, int64_t arg1, int32_t arg2, const ::android::graphics::BitmapFactory_Options& arg3){
    if (!::android::provider::MediaStore_Video_Thumbnails::_class) ::android::provider::MediaStore_Video_Thumbnails::_class = java::fetch_class("android/provider/MediaStore$Video$Thumbnails");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getThumbnail", "(Landroid/content/ContentResolver;JILandroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::provider::MediaStore_Video_Thumbnails::getThumbnail(const ::android::content::ContentResolver& arg0, int64_t arg1, int64_t arg2, int32_t arg3, const ::android::graphics::BitmapFactory_Options& arg4){
    if (!::android::provider::MediaStore_Video_Thumbnails::_class) ::android::provider::MediaStore_Video_Thumbnails::_class = java::fetch_class("android/provider/MediaStore$Video$Thumbnails");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getThumbnail", "(Landroid/content/ContentResolver;JJILandroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

void android::provider::MediaStore_Video_Thumbnails::cancelThumbnailRequest(const ::android::content::ContentResolver& arg0, int64_t arg1, int64_t arg2){
    if (!::android::provider::MediaStore_Video_Thumbnails::_class) ::android::provider::MediaStore_Video_Thumbnails::_class = java::fetch_class("android/provider/MediaStore$Video$Thumbnails");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cancelThumbnailRequest", "(Landroid/content/ContentResolver;JJ)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

::android::net::Uri android::provider::MediaStore_Video_Thumbnails::getContentUri(const ::java::lang::String& arg0){
    if (!::android::provider::MediaStore_Video_Thumbnails::_class) ::android::provider::MediaStore_Video_Thumbnails::_class = java::fetch_class("android/provider/MediaStore$Video$Thumbnails");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getContentUri", "(Ljava/lang/String;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::net::Uri _ret(ret);
    return _ret;
}

std::vector< int8_t> android::provider::ContactsContract_SyncState::get(const ::android::content::ContentProviderClient& arg0, const ::android::accounts::Account& arg1){
    if (!::android::provider::ContactsContract_SyncState::_class) ::android::provider::ContactsContract_SyncState::_class = java::fetch_class("android/provider/ContactsContract$SyncState");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "get", "(Landroid/content/ContentProviderClient;Landroid/accounts/Account;)[B");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::android::util::Pair android::provider::ContactsContract_SyncState::getWithUri(const ::android::content::ContentProviderClient& arg0, const ::android::accounts::Account& arg1){
    if (!::android::provider::ContactsContract_SyncState::_class) ::android::provider::ContactsContract_SyncState::_class = java::fetch_class("android/provider/ContactsContract$SyncState");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getWithUri", "(Landroid/content/ContentProviderClient;Landroid/accounts/Account;)Landroid/util/Pair;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::util::Pair _ret(ret);
    return _ret;
}

void android::provider::ContactsContract_SyncState::set(const ::android::content::ContentProviderClient& arg0, const ::android::accounts::Account& arg1, const std::vector< int8_t>& arg2){
    if (!::android::provider::ContactsContract_SyncState::_class) ::android::provider::ContactsContract_SyncState::_class = java::fetch_class("android/provider/ContactsContract$SyncState");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "set", "(Landroid/content/ContentProviderClient;Landroid/accounts/Account;[B)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jbyteArray _arg2 = java::jni->NewByteArray(arg2.size());
    java::jni->SetByteArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

::android::content::ContentProviderOperation android::provider::ContactsContract_SyncState::newSetOperation(const ::android::accounts::Account& arg0, const std::vector< int8_t>& arg1){
    if (!::android::provider::ContactsContract_SyncState::_class) ::android::provider::ContactsContract_SyncState::_class = java::fetch_class("android/provider/ContactsContract$SyncState");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newSetOperation", "(Landroid/accounts/Account;[B)Landroid/content/ContentProviderOperation;");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::content::ContentProviderOperation _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::Settings_Secure::Settings_Secure() : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::Settings_NameValueTable((jobject)0) {
    if (!::android::provider::Settings_Secure::_class) ::android::provider::Settings_Secure::_class = java::fetch_class("android/provider/Settings$Secure");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::provider::Settings_Secure::getString(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1){
    if (!::android::provider::Settings_Secure::_class) ::android::provider::Settings_Secure::_class = java::fetch_class("android/provider/Settings$Secure");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getString", "(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::provider::Settings_Secure::putString(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2){
    if (!::android::provider::Settings_Secure::_class) ::android::provider::Settings_Secure::_class = java::fetch_class("android/provider/Settings$Secure");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "putString", "(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2);
}

::android::net::Uri android::provider::Settings_Secure::getUriFor(const ::java::lang::String& arg0){
    if (!::android::provider::Settings_Secure::_class) ::android::provider::Settings_Secure::_class = java::fetch_class("android/provider/Settings$Secure");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getUriFor", "(Ljava/lang/String;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::net::Uri _ret(ret);
    return _ret;
}

int32_t android::provider::Settings_Secure::getInt(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1, int32_t arg2){
    if (!::android::provider::Settings_Secure::_class) ::android::provider::Settings_Secure::_class = java::fetch_class("android/provider/Settings$Secure");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInt", "(Landroid/content/ContentResolver;Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

int32_t android::provider::Settings_Secure::getInt(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1){
    if (!::android::provider::Settings_Secure::_class) ::android::provider::Settings_Secure::_class = java::fetch_class("android/provider/Settings$Secure");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInt", "(Landroid/content/ContentResolver;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

bool android::provider::Settings_Secure::putInt(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1, int32_t arg2){
    if (!::android::provider::Settings_Secure::_class) ::android::provider::Settings_Secure::_class = java::fetch_class("android/provider/Settings$Secure");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "putInt", "(Landroid/content/ContentResolver;Ljava/lang/String;I)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2);
}

int64_t android::provider::Settings_Secure::getLong(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1, int64_t arg2){
    if (!::android::provider::Settings_Secure::_class) ::android::provider::Settings_Secure::_class = java::fetch_class("android/provider/Settings$Secure");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLong", "(Landroid/content/ContentResolver;Ljava/lang/String;J)J");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0, _arg1, _arg2);
}

int64_t android::provider::Settings_Secure::getLong(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1){
    if (!::android::provider::Settings_Secure::_class) ::android::provider::Settings_Secure::_class = java::fetch_class("android/provider/Settings$Secure");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLong", "(Landroid/content/ContentResolver;Ljava/lang/String;)J");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0, _arg1);
}

bool android::provider::Settings_Secure::putLong(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1, int64_t arg2){
    if (!::android::provider::Settings_Secure::_class) ::android::provider::Settings_Secure::_class = java::fetch_class("android/provider/Settings$Secure");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "putLong", "(Landroid/content/ContentResolver;Ljava/lang/String;J)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2);
}

float android::provider::Settings_Secure::getFloat(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1, float arg2){
    if (!::android::provider::Settings_Secure::_class) ::android::provider::Settings_Secure::_class = java::fetch_class("android/provider/Settings$Secure");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getFloat", "(Landroid/content/ContentResolver;Ljava/lang/String;F)F");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0, _arg1, _arg2);
}

float android::provider::Settings_Secure::getFloat(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1){
    if (!::android::provider::Settings_Secure::_class) ::android::provider::Settings_Secure::_class = java::fetch_class("android/provider/Settings$Secure");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getFloat", "(Landroid/content/ContentResolver;Ljava/lang/String;)F");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0, _arg1);
}

bool android::provider::Settings_Secure::putFloat(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1, float arg2){
    if (!::android::provider::Settings_Secure::_class) ::android::provider::Settings_Secure::_class = java::fetch_class("android/provider/Settings$Secure");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "putFloat", "(Landroid/content/ContentResolver;Ljava/lang/String;F)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2);
}

bool android::provider::Settings_Secure::isLocationProviderEnabled(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1){
    if (!::android::provider::Settings_Secure::_class) ::android::provider::Settings_Secure::_class = java::fetch_class("android/provider/Settings$Secure");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isLocationProviderEnabled", "(Landroid/content/ContentResolver;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

void android::provider::Settings_Secure::setLocationProviderEnabled(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1, bool arg2){
    if (!::android::provider::Settings_Secure::_class) ::android::provider::Settings_Secure::_class = java::fetch_class("android/provider/Settings$Secure");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setLocationProviderEnabled", "(Landroid/content/ContentResolver;Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::provider::Contacts_People::markAsContacted(const ::android::content::ContentResolver& arg0, int64_t arg1){
    if (!::android::provider::Contacts_People::_class) ::android::provider::Contacts_People::_class = java::fetch_class("android/provider/Contacts$People");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "markAsContacted", "(Landroid/content/ContentResolver;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::android::net::Uri android::provider::Contacts_People::addToMyContactsGroup(const ::android::content::ContentResolver& arg0, int64_t arg1){
    if (!::android::provider::Contacts_People::_class) ::android::provider::Contacts_People::_class = java::fetch_class("android/provider/Contacts$People");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "addToMyContactsGroup", "(Landroid/content/ContentResolver;J)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::android::net::Uri android::provider::Contacts_People::addToGroup(const ::android::content::ContentResolver& arg0, int64_t arg1, const ::java::lang::String& arg2){
    if (!::android::provider::Contacts_People::_class) ::android::provider::Contacts_People::_class = java::fetch_class("android/provider/Contacts$People");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "addToGroup", "(Landroid/content/ContentResolver;JLjava/lang/String;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::android::net::Uri android::provider::Contacts_People::addToGroup(const ::android::content::ContentResolver& arg0, int64_t arg1, int64_t arg2){
    if (!::android::provider::Contacts_People::_class) ::android::provider::Contacts_People::_class = java::fetch_class("android/provider/Contacts$People");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "addToGroup", "(Landroid/content/ContentResolver;JJ)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::android::net::Uri android::provider::Contacts_People::createPersonInMyContactsGroup(const ::android::content::ContentResolver& arg0, const ::android::content::ContentValues& arg1){
    if (!::android::provider::Contacts_People::_class) ::android::provider::Contacts_People::_class = java::fetch_class("android/provider/Contacts$People");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createPersonInMyContactsGroup", "(Landroid/content/ContentResolver;Landroid/content/ContentValues;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::android::database::Cursor android::provider::Contacts_People::queryGroups(const ::android::content::ContentResolver& arg0, int64_t arg1){
    if (!::android::provider::Contacts_People::_class) ::android::provider::Contacts_People::_class = java::fetch_class("android/provider/Contacts$People");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "queryGroups", "(Landroid/content/ContentResolver;J)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

void android::provider::Contacts_People::setPhotoData(const ::android::content::ContentResolver& arg0, const ::android::net::Uri& arg1, const std::vector< int8_t>& arg2){
    if (!::android::provider::Contacts_People::_class) ::android::provider::Contacts_People::_class = java::fetch_class("android/provider/Contacts$People");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setPhotoData", "(Landroid/content/ContentResolver;Landroid/net/Uri;[B)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jbyteArray _arg2 = java::jni->NewByteArray(arg2.size());
    java::jni->SetByteArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

::java::io::InputStream android::provider::Contacts_People::openContactPhotoInputStream(const ::android::content::ContentResolver& arg0, const ::android::net::Uri& arg1){
    if (!::android::provider::Contacts_People::_class) ::android::provider::Contacts_People::_class = java::fetch_class("android/provider/Contacts$People");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "openContactPhotoInputStream", "(Landroid/content/ContentResolver;Landroid/net/Uri;)Ljava/io/InputStream;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::provider::Contacts_People::loadContactPhoto(const ::android::content::Context& arg0, const ::android::net::Uri& arg1, int32_t arg2, const ::android::graphics::BitmapFactory_Options& arg3){
    if (!::android::provider::Contacts_People::_class) ::android::provider::Contacts_People::_class = java::fetch_class("android/provider/Contacts$People");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "loadContactPhoto", "(Landroid/content/Context;Landroid/net/Uri;ILandroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::Contacts_Intents_Insert::Contacts_Intents_Insert() : ::java::lang::Object((jobject)0) {
    if (!::android::provider::Contacts_Intents_Insert::_class) ::android::provider::Contacts_Intents_Insert::_class = java::fetch_class("android/provider/Contacts$Intents$Insert");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::MediaStore_Images_Media::MediaStore_Images_Media() : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::MediaStore_Images_ImageColumns((jobject)0), ::android::provider::MediaStore_MediaColumns((jobject)0) {
    if (!::android::provider::MediaStore_Images_Media::_class) ::android::provider::MediaStore_Images_Media::_class = java::fetch_class("android/provider/MediaStore$Images$Media");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::database::Cursor android::provider::MediaStore_Images_Media::query(const ::android::content::ContentResolver& arg0, const ::android::net::Uri& arg1, const std::vector< ::java::lang::String>& arg2){
    if (!::android::provider::MediaStore_Images_Media::_class) ::android::provider::MediaStore_Images_Media::_class = java::fetch_class("android/provider/MediaStore$Images$Media");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "query", "(Landroid/content/ContentResolver;Landroid/net/Uri;[Ljava/lang/String;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::String::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::String& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

::android::database::Cursor android::provider::MediaStore_Images_Media::query(const ::android::content::ContentResolver& arg0, const ::android::net::Uri& arg1, const std::vector< ::java::lang::String>& arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4){
    if (!::android::provider::MediaStore_Images_Media::_class) ::android::provider::MediaStore_Images_Media::_class = java::fetch_class("android/provider/MediaStore$Images$Media");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "query", "(Landroid/content/ContentResolver;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::String::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::String& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

::android::database::Cursor android::provider::MediaStore_Images_Media::query(const ::android::content::ContentResolver& arg0, const ::android::net::Uri& arg1, const std::vector< ::java::lang::String>& arg2, const ::java::lang::String& arg3, const std::vector< ::java::lang::String>& arg4, const ::java::lang::String& arg5){
    if (!::android::provider::MediaStore_Images_Media::_class) ::android::provider::MediaStore_Images_Media::_class = java::fetch_class("android/provider/MediaStore$Images$Media");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "query", "(Landroid/content/ContentResolver;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::String::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::String& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject _arg3 = arg3.obj;
    unsigned arg4s = arg4.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg4 = java::jni->NewObjectArray(arg4s, ::java::lang::String::_class, nullptr);
    for (unsigned arg4i = 0; arg4i < arg4s; ++arg4i) {
      const ::java::lang::String& arg4e = arg4[arg4i];
        jobject arg4d = arg4e.obj;
      java::jni->SetObjectArrayElement(_arg4, arg4i, arg4d);
    }
    jobject _arg5 = arg5.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::provider::MediaStore_Images_Media::getBitmap(const ::android::content::ContentResolver& arg0, const ::android::net::Uri& arg1){
    if (!::android::provider::MediaStore_Images_Media::_class) ::android::provider::MediaStore_Images_Media::_class = java::fetch_class("android/provider/MediaStore$Images$Media");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getBitmap", "(Landroid/content/ContentResolver;Landroid/net/Uri;)Landroid/graphics/Bitmap;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::java::lang::String android::provider::MediaStore_Images_Media::insertImage(const ::android::content::ContentResolver& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3){
    if (!::android::provider::MediaStore_Images_Media::_class) ::android::provider::MediaStore_Images_Media::_class = java::fetch_class("android/provider/MediaStore$Images$Media");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "insertImage", "(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::provider::MediaStore_Images_Media::insertImage(const ::android::content::ContentResolver& arg0, const ::android::graphics::Bitmap& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3){
    if (!::android::provider::MediaStore_Images_Media::_class) ::android::provider::MediaStore_Images_Media::_class = java::fetch_class("android/provider/MediaStore$Images$Media");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "insertImage", "(Landroid/content/ContentResolver;Landroid/graphics/Bitmap;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::net::Uri android::provider::MediaStore_Images_Media::getContentUri(const ::java::lang::String& arg0){
    if (!::android::provider::MediaStore_Images_Media::_class) ::android::provider::MediaStore_Images_Media::_class = java::fetch_class("android/provider/MediaStore$Images$Media");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getContentUri", "(Ljava/lang/String;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::net::Uri _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::MediaStore_Audio::MediaStore_Audio() : ::java::lang::Object((jobject)0) {
    if (!::android::provider::MediaStore_Audio::_class) ::android::provider::MediaStore_Audio::_class = java::fetch_class("android/provider/MediaStore$Audio");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::provider::MediaStore_Audio::keyFor(const ::java::lang::String& arg0){
    if (!::android::provider::MediaStore_Audio::_class) ::android::provider::MediaStore_Audio::_class = java::fetch_class("android/provider/MediaStore$Audio");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "keyFor", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::content::EntityIterator android::provider::CalendarContract_CalendarEntity::newEntityIterator(const ::android::database::Cursor& arg0){
    if (!::android::provider::CalendarContract_CalendarEntity::_class) ::android::provider::CalendarContract_CalendarEntity::_class = java::fetch_class("android/provider/CalendarContract$CalendarEntity");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newEntityIterator", "(Landroid/database/Cursor;)Landroid/content/EntityIterator;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::content::EntityIterator _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::Settings::Settings() : ::java::lang::Object((jobject)0) {
    if (!::android::provider::Settings::_class) ::android::provider::Settings::_class = java::fetch_class("android/provider/Settings");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::content::EntityIterator android::provider::CalendarContract_EventsEntity::newEntityIterator(const ::android::database::Cursor& arg0, const ::android::content::ContentResolver& arg1){
    if (!::android::provider::CalendarContract_EventsEntity::_class) ::android::provider::CalendarContract_EventsEntity::_class = java::fetch_class("android/provider/CalendarContract$EventsEntity");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newEntityIterator", "(Landroid/database/Cursor;Landroid/content/ContentResolver;)Landroid/content/EntityIterator;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::content::EntityIterator _ret(ret);
    return _ret;
}

::android::content::EntityIterator android::provider::CalendarContract_EventsEntity::newEntityIterator(const ::android::database::Cursor& arg0, const ::android::content::ContentProviderClient& arg1){
    if (!::android::provider::CalendarContract_EventsEntity::_class) ::android::provider::CalendarContract_EventsEntity::_class = java::fetch_class("android/provider/CalendarContract$EventsEntity");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newEntityIterator", "(Landroid/database/Cursor;Landroid/content/ContentProviderClient;)Landroid/content/EntityIterator;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::content::EntityIterator _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::CallLog_Calls::CallLog_Calls() : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0) {
    if (!::android::provider::CallLog_Calls::_class) ::android::provider::CallLog_Calls::_class = java::fetch_class("android/provider/CallLog$Calls");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::provider::CallLog_Calls::getLastOutgoingCall(const ::android::content::Context& arg0){
    if (!::android::provider::CallLog_Calls::_class) ::android::provider::CallLog_Calls::_class = java::fetch_class("android/provider/CallLog$Calls");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLastOutgoingCall", "(Landroid/content/Context;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::net::Uri android::provider::ContactsContract_Contacts::getLookupUri(const ::android::content::ContentResolver& arg0, const ::android::net::Uri& arg1){
    if (!::android::provider::ContactsContract_Contacts::_class) ::android::provider::ContactsContract_Contacts::_class = java::fetch_class("android/provider/ContactsContract$Contacts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLookupUri", "(Landroid/content/ContentResolver;Landroid/net/Uri;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::android::net::Uri android::provider::ContactsContract_Contacts::getLookupUri(int64_t arg0, const ::java::lang::String& arg1){
    if (!::android::provider::ContactsContract_Contacts::_class) ::android::provider::ContactsContract_Contacts::_class = java::fetch_class("android/provider/ContactsContract$Contacts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLookupUri", "(JLjava/lang/String;)Landroid/net/Uri;");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::android::net::Uri android::provider::ContactsContract_Contacts::lookupContact(const ::android::content::ContentResolver& arg0, const ::android::net::Uri& arg1){
    if (!::android::provider::ContactsContract_Contacts::_class) ::android::provider::ContactsContract_Contacts::_class = java::fetch_class("android/provider/ContactsContract$Contacts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "lookupContact", "(Landroid/content/ContentResolver;Landroid/net/Uri;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::net::Uri _ret(ret);
    return _ret;
}

void android::provider::ContactsContract_Contacts::markAsContacted(const ::android::content::ContentResolver& arg0, int64_t arg1){
    if (!::android::provider::ContactsContract_Contacts::_class) ::android::provider::ContactsContract_Contacts::_class = java::fetch_class("android/provider/ContactsContract$Contacts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "markAsContacted", "(Landroid/content/ContentResolver;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::io::InputStream android::provider::ContactsContract_Contacts::openContactPhotoInputStream(const ::android::content::ContentResolver& arg0, const ::android::net::Uri& arg1, bool arg2){
    if (!::android::provider::ContactsContract_Contacts::_class) ::android::provider::ContactsContract_Contacts::_class = java::fetch_class("android/provider/ContactsContract$Contacts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "openContactPhotoInputStream", "(Landroid/content/ContentResolver;Landroid/net/Uri;Z)Ljava/io/InputStream;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::io::InputStream android::provider::ContactsContract_Contacts::openContactPhotoInputStream(const ::android::content::ContentResolver& arg0, const ::android::net::Uri& arg1){
    if (!::android::provider::ContactsContract_Contacts::_class) ::android::provider::ContactsContract_Contacts::_class = java::fetch_class("android/provider/ContactsContract$Contacts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "openContactPhotoInputStream", "(Landroid/content/ContentResolver;Landroid/net/Uri;)Ljava/io/InputStream;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::provider::Contacts_Phones::getDisplayLabel(const ::android::content::Context& arg0, int32_t arg1, const ::java::lang::CharSequence& arg2, const std::vector< ::java::lang::CharSequence>& arg3){
    if (!::android::provider::Contacts_Phones::_class) ::android::provider::Contacts_Phones::_class = java::fetch_class("android/provider/Contacts$Phones");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDisplayLabel", "(Landroid/content/Context;ILjava/lang/CharSequence;[Ljava/lang/CharSequence;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::lang::CharSequence::_class) ::java::lang::CharSequence::_class = java::fetch_class("java/lang/CharSequence");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::CharSequence::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::CharSequence& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::provider::Contacts_Phones::getDisplayLabel(const ::android::content::Context& arg0, int32_t arg1, const ::java::lang::CharSequence& arg2){
    if (!::android::provider::Contacts_Phones::_class) ::android::provider::Contacts_Phones::_class = java::fetch_class("android/provider/Contacts$Phones");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDisplayLabel", "(Landroid/content/Context;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::MediaStore::MediaStore() : ::java::lang::Object((jobject)0) {
    if (!::android::provider::MediaStore::_class) ::android::provider::MediaStore::_class = java::fetch_class("android/provider/MediaStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::net::Uri android::provider::MediaStore::getMediaScannerUri(){
    if (!::android::provider::MediaStore::_class) ::android::provider::MediaStore::_class = java::fetch_class("android/provider/MediaStore");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMediaScannerUri", "()Landroid/net/Uri;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::java::lang::String android::provider::MediaStore::getVersion(const ::android::content::Context& arg0){
    if (!::android::provider::MediaStore::_class) ::android::provider::MediaStore::_class = java::fetch_class("android/provider/MediaStore");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getVersion", "(Landroid/content/Context;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::SyncStateContract::SyncStateContract() : ::java::lang::Object((jobject)0) {
    if (!::android::provider::SyncStateContract::_class) ::android::provider::SyncStateContract::_class = java::fetch_class("android/provider/SyncStateContract");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::ContactsContract::ContactsContract() : ::java::lang::Object((jobject)0) {
    if (!::android::provider::ContactsContract::_class) ::android::provider::ContactsContract::_class = java::fetch_class("android/provider/ContactsContract");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::provider::ContactsContract::isProfileId(int64_t arg0){
    if (!::android::provider::ContactsContract::_class) ::android::provider::ContactsContract::_class = java::fetch_class("android/provider/ContactsContract");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isProfileId", "(J)Z");
    int64_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

::java::lang::CharSequence android::provider::Contacts_Organizations::getDisplayLabel(const ::android::content::Context& arg0, int32_t arg1, const ::java::lang::CharSequence& arg2){
    if (!::android::provider::Contacts_Organizations::_class) ::android::provider::Contacts_Organizations::_class = java::fetch_class("android/provider/Contacts$Organizations");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDisplayLabel", "(Landroid/content/Context;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

int32_t android::provider::ContactsContract_CommonDataKinds_Relation::getTypeLabelResource(int32_t arg0){
    if (!::android::provider::ContactsContract_CommonDataKinds_Relation::_class) ::android::provider::ContactsContract_CommonDataKinds_Relation::_class = java::fetch_class("android/provider/ContactsContract$CommonDataKinds$Relation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTypeLabelResource", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

::java::lang::CharSequence android::provider::ContactsContract_CommonDataKinds_Relation::getTypeLabel(const ::android::content::res::Resources& arg0, int32_t arg1, const ::java::lang::CharSequence& arg2){
    if (!::android::provider::ContactsContract_CommonDataKinds_Relation::_class) ::android::provider::ContactsContract_CommonDataKinds_Relation::_class = java::fetch_class("android/provider/ContactsContract$CommonDataKinds$Relation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTypeLabel", "(Landroid/content/res/Resources;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::UserDictionary::UserDictionary() : ::java::lang::Object((jobject)0) {
    if (!::android::provider::UserDictionary::_class) ::android::provider::UserDictionary::_class = java::fetch_class("android/provider/UserDictionary");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::net::Uri android::provider::ContactsContract_RawContacts::getContactLookupUri(const ::android::content::ContentResolver& arg0, const ::android::net::Uri& arg1){
    if (!::android::provider::ContactsContract_RawContacts::_class) ::android::provider::ContactsContract_RawContacts::_class = java::fetch_class("android/provider/ContactsContract$RawContacts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getContactLookupUri", "(Landroid/content/ContentResolver;Landroid/net/Uri;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::android::content::EntityIterator android::provider::ContactsContract_RawContacts::newEntityIterator(const ::android::database::Cursor& arg0){
    if (!::android::provider::ContactsContract_RawContacts::_class) ::android::provider::ContactsContract_RawContacts::_class = java::fetch_class("android/provider/ContactsContract$RawContacts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newEntityIterator", "(Landroid/database/Cursor;)Landroid/content/EntityIterator;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::content::EntityIterator _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::provider::AlarmClock::AlarmClock() : ::java::lang::Object((jobject)0) {
    if (!::android::provider::AlarmClock::_class) ::android::provider::AlarmClock::_class = java::fetch_class("android/provider/AlarmClock");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::provider::ContactsContract_CommonDataKinds_SipAddress::getTypeLabelResource(int32_t arg0){
    if (!::android::provider::ContactsContract_CommonDataKinds_SipAddress::_class) ::android::provider::ContactsContract_CommonDataKinds_SipAddress::_class = java::fetch_class("android/provider/ContactsContract$CommonDataKinds$SipAddress");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTypeLabelResource", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

::java::lang::CharSequence android::provider::ContactsContract_CommonDataKinds_SipAddress::getTypeLabel(const ::android::content::res::Resources& arg0, int32_t arg1, const ::java::lang::CharSequence& arg2){
    if (!::android::provider::ContactsContract_CommonDataKinds_SipAddress::_class) ::android::provider::ContactsContract_CommonDataKinds_SipAddress::_class = java::fetch_class("android/provider/ContactsContract$CommonDataKinds$SipAddress");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTypeLabel", "(Landroid/content/res/Resources;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::database::Cursor android::provider::CalendarContract_Instances::query(const ::android::content::ContentResolver& arg0, const std::vector< ::java::lang::String>& arg1, int64_t arg2, int64_t arg3){
    if (!::android::provider::CalendarContract_Instances::_class) ::android::provider::CalendarContract_Instances::_class = java::fetch_class("android/provider/CalendarContract$Instances");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "query", "(Landroid/content/ContentResolver;[Ljava/lang/String;JJ)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    int64_t _arg2 = arg2;
    int64_t _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

::android::database::Cursor android::provider::CalendarContract_Instances::query(const ::android::content::ContentResolver& arg0, const std::vector< ::java::lang::String>& arg1, int64_t arg2, int64_t arg3, const ::java::lang::String& arg4){
    if (!::android::provider::CalendarContract_Instances::_class) ::android::provider::CalendarContract_Instances::_class = java::fetch_class("android/provider/CalendarContract$Instances");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "query", "(Landroid/content/ContentResolver;[Ljava/lang/String;JJLjava/lang/String;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    int64_t _arg2 = arg2;
    int64_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

