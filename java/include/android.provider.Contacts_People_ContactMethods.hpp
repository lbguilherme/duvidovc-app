#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.BaseColumns.hpp"
#include "android.provider.Contacts_ContactMethodsColumns.hpp"
#include "android.provider.Contacts_PeopleColumns.hpp"


namespace android {
namespace provider {
class Contacts_People_ContactMethods : public virtual ::java::lang::Object,
                                       public virtual ::android::provider::BaseColumns,
                                       public virtual ::android::provider::Contacts_ContactMethodsColumns,
                                       public virtual ::android::provider::Contacts_PeopleColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Contacts_People_ContactMethods(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::Contacts_ContactMethodsColumns(_obj), ::android::provider::Contacts_PeopleColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Contacts_People_ContactMethods(const ::android::provider::Contacts_People_ContactMethods& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::Contacts_ContactMethodsColumns((jobject)0), ::android::provider::Contacts_PeopleColumns((jobject)0) {obj = x.obj;}
    Contacts_People_ContactMethods(::android::provider::Contacts_People_ContactMethods&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::Contacts_ContactMethodsColumns((jobject)0), ::android::provider::Contacts_PeopleColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::Contacts_People_ContactMethods& operator=(const ::android::provider::Contacts_People_ContactMethods& x) {obj = x.obj; return *this;}
    ::android::provider::Contacts_People_ContactMethods& operator=(::android::provider::Contacts_People_ContactMethods&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


