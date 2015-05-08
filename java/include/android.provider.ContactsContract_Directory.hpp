#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.BaseColumns.hpp"

namespace android { namespace content { class ContentResolver; } }

namespace android {
namespace provider {
class ContactsContract_Directory : public virtual ::java::lang::Object,
                                   public virtual ::android::provider::BaseColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContactsContract_Directory(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContactsContract_Directory(const ::android::provider::ContactsContract_Directory& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0) {obj = x.obj;}
    ContactsContract_Directory(::android::provider::ContactsContract_Directory&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::ContactsContract_Directory& operator=(const ::android::provider::ContactsContract_Directory& x) {obj = x.obj; return *this;}
    ::android::provider::ContactsContract_Directory& operator=(::android::provider::ContactsContract_Directory&& x) {obj = std::move(x.obj); return *this;}
    
    static void notifyDirectoryChange(const ::android::content::ContentResolver&);

};
}
}


