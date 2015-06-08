#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace util { class EventLogTags_Description; } }
namespace java { namespace io { class BufferedReader; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace util {
class EventLogTags : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EventLogTags(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EventLogTags(const ::android::util::EventLogTags& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    EventLogTags(::android::util::EventLogTags&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::EventLogTags& operator=(const ::android::util::EventLogTags& x) {obj = x.obj; return *this;}
    ::android::util::EventLogTags& operator=(::android::util::EventLogTags&& x) {obj = std::move(x.obj); return *this;}
    
    EventLogTags();
    EventLogTags(const ::java::io::BufferedReader&);
    ::android::util::EventLogTags_Description get(const ::java::lang::String&) const;
    ::android::util::EventLogTags_Description get(int32_t) const;

};
}
}

#include "android.util.EventLogTags_Description.hpp"

