#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class ContactsContract_StreamItemPhotosColumns : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContactsContract_StreamItemPhotosColumns(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContactsContract_StreamItemPhotosColumns(const ::android::provider::ContactsContract_StreamItemPhotosColumns& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ContactsContract_StreamItemPhotosColumns(::android::provider::ContactsContract_StreamItemPhotosColumns&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::ContactsContract_StreamItemPhotosColumns& operator=(const ::android::provider::ContactsContract_StreamItemPhotosColumns& x) {obj = x.obj; return *this;}
    ::android::provider::ContactsContract_StreamItemPhotosColumns& operator=(::android::provider::ContactsContract_StreamItemPhotosColumns&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


