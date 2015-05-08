#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class ContactsContract_DataUsageFeedback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContactsContract_DataUsageFeedback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContactsContract_DataUsageFeedback(const ::android::provider::ContactsContract_DataUsageFeedback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ContactsContract_DataUsageFeedback(::android::provider::ContactsContract_DataUsageFeedback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::ContactsContract_DataUsageFeedback& operator=(const ::android::provider::ContactsContract_DataUsageFeedback& x) {obj = x.obj; return *this;}
    ::android::provider::ContactsContract_DataUsageFeedback& operator=(::android::provider::ContactsContract_DataUsageFeedback&& x) {obj = std::move(x.obj); return *this;}
    
    ContactsContract_DataUsageFeedback();

};
}
}


