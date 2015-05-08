#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace webkit { class ConsoleMessage_MessageLevel; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace webkit {
class ConsoleMessage_MessageLevel : public virtual ::java::lang::Object,
                                    public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConsoleMessage_MessageLevel(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConsoleMessage_MessageLevel(const ::android::webkit::ConsoleMessage_MessageLevel& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    ConsoleMessage_MessageLevel(::android::webkit::ConsoleMessage_MessageLevel&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::ConsoleMessage_MessageLevel& operator=(const ::android::webkit::ConsoleMessage_MessageLevel& x) {obj = x.obj; return *this;}
    ::android::webkit::ConsoleMessage_MessageLevel& operator=(::android::webkit::ConsoleMessage_MessageLevel&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::webkit::ConsoleMessage_MessageLevel> values();
    static ::android::webkit::ConsoleMessage_MessageLevel valueOf(const ::java::lang::String&);

};
}
}


