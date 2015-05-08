#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Handler; } }

namespace android {
namespace database {
class ContentObserver : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContentObserver(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContentObserver(const ::android::database::ContentObserver& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ContentObserver(::android::database::ContentObserver&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::ContentObserver& operator=(const ::android::database::ContentObserver& x) {obj = x.obj; return *this;}
    ::android::database::ContentObserver& operator=(::android::database::ContentObserver&& x) {obj = std::move(x.obj); return *this;}
    
    ContentObserver(const ::android::os::Handler&);
    bool deliverSelfNotifications() const ;
    void onChange(bool) const ;
    void dispatchChange(bool) const ;

};
}
}


