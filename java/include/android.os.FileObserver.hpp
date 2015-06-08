#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace os {
class FileObserver : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FileObserver(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FileObserver(const ::android::os::FileObserver& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FileObserver(::android::os::FileObserver&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::FileObserver& operator=(const ::android::os::FileObserver& x) {obj = x.obj; return *this;}
    ::android::os::FileObserver& operator=(::android::os::FileObserver&& x) {obj = std::move(x.obj); return *this;}
    
    FileObserver(const ::java::lang::String&);
    FileObserver(const ::java::lang::String&, int32_t);
    void startWatching() const;
    void stopWatching() const;
    void onEvent(int32_t, const ::java::lang::String&) const;

};
}
}


