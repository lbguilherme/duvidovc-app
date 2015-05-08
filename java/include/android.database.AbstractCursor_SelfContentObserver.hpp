#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.database.ContentObserver.hpp"

namespace android { namespace database { class AbstractCursor; } }

namespace android {
namespace database {
class AbstractCursor_SelfContentObserver : public virtual ::java::lang::Object,
                                           public virtual ::android::database::ContentObserver {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractCursor_SelfContentObserver(jobject _obj) : ::java::lang::Object(_obj), ::android::database::ContentObserver(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractCursor_SelfContentObserver(const ::android::database::AbstractCursor_SelfContentObserver& x) : ::java::lang::Object((jobject)0), ::android::database::ContentObserver((jobject)0) {obj = x.obj;}
    AbstractCursor_SelfContentObserver(::android::database::AbstractCursor_SelfContentObserver&& x) : ::java::lang::Object((jobject)0), ::android::database::ContentObserver((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::AbstractCursor_SelfContentObserver& operator=(const ::android::database::AbstractCursor_SelfContentObserver& x) {obj = x.obj; return *this;}
    ::android::database::AbstractCursor_SelfContentObserver& operator=(::android::database::AbstractCursor_SelfContentObserver&& x) {obj = std::move(x.obj); return *this;}
    
    AbstractCursor_SelfContentObserver(const ::android::database::AbstractCursor&);
    bool deliverSelfNotifications() const ;
    void onChange(bool) const ;

};
}
}


