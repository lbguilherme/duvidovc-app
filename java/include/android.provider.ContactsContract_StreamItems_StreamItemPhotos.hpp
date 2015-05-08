#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.BaseColumns.hpp"
#include "android.provider.ContactsContract_StreamItemPhotosColumns.hpp"


namespace android {
namespace provider {
class ContactsContract_StreamItems_StreamItemPhotos : public virtual ::java::lang::Object,
                                                      public virtual ::android::provider::BaseColumns,
                                                      public virtual ::android::provider::ContactsContract_StreamItemPhotosColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContactsContract_StreamItems_StreamItemPhotos(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::ContactsContract_StreamItemPhotosColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContactsContract_StreamItems_StreamItemPhotos(const ::android::provider::ContactsContract_StreamItems_StreamItemPhotos& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::ContactsContract_StreamItemPhotosColumns((jobject)0) {obj = x.obj;}
    ContactsContract_StreamItems_StreamItemPhotos(::android::provider::ContactsContract_StreamItems_StreamItemPhotos&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::ContactsContract_StreamItemPhotosColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::ContactsContract_StreamItems_StreamItemPhotos& operator=(const ::android::provider::ContactsContract_StreamItems_StreamItemPhotos& x) {obj = x.obj; return *this;}
    ::android::provider::ContactsContract_StreamItems_StreamItemPhotos& operator=(::android::provider::ContactsContract_StreamItems_StreamItemPhotos&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


