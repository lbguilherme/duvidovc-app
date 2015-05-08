#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace util {
class EventLogTags_Description : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EventLogTags_Description(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EventLogTags_Description(const ::android::util::EventLogTags_Description& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    EventLogTags_Description(::android::util::EventLogTags_Description&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::EventLogTags_Description& operator=(const ::android::util::EventLogTags_Description& x) {obj = x.obj; return *this;}
    ::android::util::EventLogTags_Description& operator=(::android::util::EventLogTags_Description&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


