#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Collection; } }

namespace android {
namespace util {
class EventLog : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EventLog(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EventLog(const ::android::util::EventLog& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    EventLog(::android::util::EventLog&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::EventLog& operator=(const ::android::util::EventLog& x) {obj = x.obj; return *this;}
    ::android::util::EventLog& operator=(::android::util::EventLog&& x) {obj = std::move(x.obj); return *this;}
    
    static int32_t writeEvent(int32_t, int32_t);
    static int32_t writeEvent(int32_t, int64_t);
    static int32_t writeEvent(int32_t, const ::java::lang::String&);
    static int32_t writeEvent(int32_t, const std::vector< ::java::lang::Object>&);
    static void readEvents(const std::vector< int32_t>&, const ::java::util::Collection&);
    static ::java::lang::String getTagName(int32_t);
    static int32_t getTagCode(const ::java::lang::String&);

};
}
}

#include "android.util.EventLog_Event.hpp"

