#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }

namespace android {
namespace util {
class EventLog_Event : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EventLog_Event(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EventLog_Event(const ::android::util::EventLog_Event& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    EventLog_Event(::android::util::EventLog_Event&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::EventLog_Event& operator=(const ::android::util::EventLog_Event& x) {obj = x.obj; return *this;}
    ::android::util::EventLog_Event& operator=(::android::util::EventLog_Event&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getProcessId() const ;
    int32_t getThreadId() const ;
    int64_t getTimeNanos() const ;
    int32_t getTag() const ;
    ::java::lang::Object getData() const ;

};
}
}


