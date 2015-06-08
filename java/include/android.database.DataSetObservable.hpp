#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.database.Observable.hpp"


namespace android {
namespace database {
class DataSetObservable : public virtual ::java::lang::Object,
                          public virtual ::android::database::Observable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DataSetObservable(jobject _obj) : ::java::lang::Object(_obj), ::android::database::Observable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DataSetObservable(const ::android::database::DataSetObservable& x) : ::java::lang::Object((jobject)0), ::android::database::Observable((jobject)0) {obj = x.obj;}
    DataSetObservable(::android::database::DataSetObservable&& x) : ::java::lang::Object((jobject)0), ::android::database::Observable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::DataSetObservable& operator=(const ::android::database::DataSetObservable& x) {obj = x.obj; return *this;}
    ::android::database::DataSetObservable& operator=(::android::database::DataSetObservable&& x) {obj = std::move(x.obj); return *this;}
    
    DataSetObservable();
    void notifyChanged() const;
    void notifyInvalidated() const;

};
}
}


