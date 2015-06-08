#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace database {
class DataSetObserver : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DataSetObserver(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DataSetObserver(const ::android::database::DataSetObserver& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DataSetObserver(::android::database::DataSetObserver&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::DataSetObserver& operator=(const ::android::database::DataSetObserver& x) {obj = x.obj; return *this;}
    ::android::database::DataSetObserver& operator=(::android::database::DataSetObserver&& x) {obj = std::move(x.obj); return *this;}
    
    DataSetObserver();
    void onChanged() const;
    void onInvalidated() const;

};
}
}


