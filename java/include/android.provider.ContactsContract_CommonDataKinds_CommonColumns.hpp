#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.ContactsContract_CommonDataKinds_BaseTypes.hpp"


namespace android {
namespace provider {
class ContactsContract_CommonDataKinds_CommonColumns : public virtual ::java::lang::Object,
                                                       public virtual ::android::provider::ContactsContract_CommonDataKinds_BaseTypes {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContactsContract_CommonDataKinds_CommonColumns(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::ContactsContract_CommonDataKinds_BaseTypes(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContactsContract_CommonDataKinds_CommonColumns(const ::android::provider::ContactsContract_CommonDataKinds_CommonColumns& x) : ::java::lang::Object((jobject)0), ::android::provider::ContactsContract_CommonDataKinds_BaseTypes((jobject)0) {obj = x.obj;}
    ContactsContract_CommonDataKinds_CommonColumns(::android::provider::ContactsContract_CommonDataKinds_CommonColumns&& x) : ::java::lang::Object((jobject)0), ::android::provider::ContactsContract_CommonDataKinds_BaseTypes((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::ContactsContract_CommonDataKinds_CommonColumns& operator=(const ::android::provider::ContactsContract_CommonDataKinds_CommonColumns& x) {obj = x.obj; return *this;}
    ::android::provider::ContactsContract_CommonDataKinds_CommonColumns& operator=(::android::provider::ContactsContract_CommonDataKinds_CommonColumns&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


