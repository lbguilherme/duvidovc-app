#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.database.ContentObserver.hpp"

namespace android { namespace content { class Loader; } }

namespace android {
namespace content {
class Loader_ForceLoadContentObserver : public virtual ::java::lang::Object,
                                        public virtual ::android::database::ContentObserver {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Loader_ForceLoadContentObserver(jobject _obj) : ::java::lang::Object(_obj), ::android::database::ContentObserver(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Loader_ForceLoadContentObserver(const ::android::content::Loader_ForceLoadContentObserver& x) : ::java::lang::Object((jobject)0), ::android::database::ContentObserver((jobject)0) {obj = x.obj;}
    Loader_ForceLoadContentObserver(::android::content::Loader_ForceLoadContentObserver&& x) : ::java::lang::Object((jobject)0), ::android::database::ContentObserver((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::Loader_ForceLoadContentObserver& operator=(const ::android::content::Loader_ForceLoadContentObserver& x) {obj = x.obj; return *this;}
    ::android::content::Loader_ForceLoadContentObserver& operator=(::android::content::Loader_ForceLoadContentObserver&& x) {obj = std::move(x.obj); return *this;}
    
    Loader_ForceLoadContentObserver(const ::android::content::Loader&);
    bool deliverSelfNotifications() const ;
    void onChange(bool) const ;

};
}
}


