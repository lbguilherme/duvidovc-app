#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace webkit { class ConsoleMessage_MessageLevel; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace webkit {
class ConsoleMessage : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConsoleMessage(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConsoleMessage(const ::android::webkit::ConsoleMessage& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ConsoleMessage(::android::webkit::ConsoleMessage&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::ConsoleMessage& operator=(const ::android::webkit::ConsoleMessage& x) {obj = x.obj; return *this;}
    ::android::webkit::ConsoleMessage& operator=(::android::webkit::ConsoleMessage&& x) {obj = std::move(x.obj); return *this;}
    
    ConsoleMessage(const ::java::lang::String&, const ::java::lang::String&, int32_t, const ::android::webkit::ConsoleMessage_MessageLevel&);
    ::android::webkit::ConsoleMessage_MessageLevel messageLevel() const;
    ::java::lang::String message() const;
    ::java::lang::String sourceId() const;
    int32_t lineNumber() const;

};
}
}

#include "android.webkit.ConsoleMessage_MessageLevel.hpp"

