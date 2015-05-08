#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"


namespace com {
namespace facebook {
namespace share {
namespace model {
class ShareModel : public virtual ::java::lang::Object,
                   public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareModel(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareModel(const ::com::facebook::share::model::ShareModel& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    ShareModel(::com::facebook::share::model::ShareModel&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::model::ShareModel& operator=(const ::com::facebook::share::model::ShareModel& x) {obj = x.obj; return *this;}
    ::com::facebook::share::model::ShareModel& operator=(::com::facebook::share::model::ShareModel&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}


