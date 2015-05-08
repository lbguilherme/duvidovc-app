#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class Contacts : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Contacts(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Contacts(const ::android::provider::Contacts& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Contacts(::android::provider::Contacts&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::Contacts& operator=(const ::android::provider::Contacts& x) {obj = x.obj; return *this;}
    ::android::provider::Contacts& operator=(::android::provider::Contacts&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}

#include "android.provider.Contacts_ContactMethods.hpp"
#include "android.provider.Contacts_ContactMethodsColumns.hpp"
#include "android.provider.Contacts_Extensions.hpp"
#include "android.provider.Contacts_ExtensionsColumns.hpp"
#include "android.provider.Contacts_GroupMembership.hpp"
#include "android.provider.Contacts_Groups.hpp"
#include "android.provider.Contacts_GroupsColumns.hpp"
#include "android.provider.Contacts_Intents.hpp"
#include "android.provider.Contacts_OrganizationColumns.hpp"
#include "android.provider.Contacts_Organizations.hpp"
#include "android.provider.Contacts_People.hpp"
#include "android.provider.Contacts_PeopleColumns.hpp"
#include "android.provider.Contacts_Phones.hpp"
#include "android.provider.Contacts_PhonesColumns.hpp"
#include "android.provider.Contacts_Photos.hpp"
#include "android.provider.Contacts_PhotosColumns.hpp"
#include "android.provider.Contacts_PresenceColumns.hpp"
#include "android.provider.Contacts_Settings.hpp"
#include "android.provider.Contacts_SettingsColumns.hpp"
#include "android.provider.Contacts_Intents_Insert.hpp"
#include "android.provider.Contacts_Intents_UI.hpp"
#include "android.provider.Contacts_People_ContactMethods.hpp"
#include "android.provider.Contacts_People_Extensions.hpp"
#include "android.provider.Contacts_People_Phones.hpp"

