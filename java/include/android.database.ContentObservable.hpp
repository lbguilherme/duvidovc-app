#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.database.Observable.hpp"

namespace android { namespace database { class ContentObserver; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace database {
class ContentObservable : public virtual ::java::lang::Object,
                          public virtual ::android::database::Observable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContentObservable(jobject _obj) : ::java::lang::Object(_obj), ::android::database::Observable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContentObservable(const ::android::database::ContentObservable& x) : ::java::lang::Object((jobject)0), ::android::database::Observable((jobject)0) {obj = x.obj;}
    ContentObservable(::android::database::ContentObservable&& x) : ::java::lang::Object((jobject)0), ::android::database::Observable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::ContentObservable& operator=(const ::android::database::ContentObservable& x) {obj = x.obj; return *this;}
    ::android::database::ContentObservable& operator=(::android::database::ContentObservable&& x) {obj = std::move(x.obj); return *this;}
    
    ContentObservable();
    void registerObserver(const ::android::database::ContentObserver&) const;
    void dispatchChange(bool) const;
    void notifyChange(bool) const;
    void registerObserver(const ::java::lang::Object&) const;

};
}
}


