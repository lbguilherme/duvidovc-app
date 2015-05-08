#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.BaseColumns.hpp"
#include "android.provider.ContactsContract_GroupsColumns.hpp"
#include "android.provider.ContactsContract_SyncColumns.hpp"

namespace android { namespace content { class EntityIterator; } }
namespace android { namespace database { class Cursor; } }

namespace android {
namespace provider {
class ContactsContract_Groups : public virtual ::java::lang::Object,
                                public virtual ::android::provider::BaseColumns,
                                public virtual ::android::provider::ContactsContract_GroupsColumns,
                                public virtual ::android::provider::ContactsContract_SyncColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContactsContract_Groups(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::ContactsContract_BaseSyncColumns(_obj), ::android::provider::ContactsContract_GroupsColumns(_obj), ::android::provider::ContactsContract_SyncColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContactsContract_Groups(const ::android::provider::ContactsContract_Groups& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::ContactsContract_BaseSyncColumns((jobject)0), ::android::provider::ContactsContract_GroupsColumns((jobject)0), ::android::provider::ContactsContract_SyncColumns((jobject)0) {obj = x.obj;}
    ContactsContract_Groups(::android::provider::ContactsContract_Groups&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::ContactsContract_BaseSyncColumns((jobject)0), ::android::provider::ContactsContract_GroupsColumns((jobject)0), ::android::provider::ContactsContract_SyncColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::ContactsContract_Groups& operator=(const ::android::provider::ContactsContract_Groups& x) {obj = x.obj; return *this;}
    ::android::provider::ContactsContract_Groups& operator=(::android::provider::ContactsContract_Groups&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::content::EntityIterator newEntityIterator(const ::android::database::Cursor&);

};
}
}


