#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.BaseColumns.hpp"
#include "android.provider.Contacts_PhotosColumns.hpp"


namespace android {
namespace provider {
class Contacts_Photos : public virtual ::java::lang::Object,
                        public virtual ::android::provider::BaseColumns,
                        public virtual ::android::provider::Contacts_PhotosColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Contacts_Photos(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::Contacts_PhotosColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Contacts_Photos(const ::android::provider::Contacts_Photos& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::Contacts_PhotosColumns((jobject)0) {obj = x.obj;}
    Contacts_Photos(::android::provider::Contacts_Photos&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::Contacts_PhotosColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::Contacts_Photos& operator=(const ::android::provider::Contacts_Photos& x) {obj = x.obj; return *this;}
    ::android::provider::Contacts_Photos& operator=(::android::provider::Contacts_Photos&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


