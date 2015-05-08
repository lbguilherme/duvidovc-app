#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"


namespace com {
namespace facebook {
namespace appevents {
class FacebookTimeSpentData : public virtual ::java::lang::Object,
                              public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FacebookTimeSpentData(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FacebookTimeSpentData(const ::com::facebook::appevents::FacebookTimeSpentData& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    FacebookTimeSpentData(::com::facebook::appevents::FacebookTimeSpentData&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::appevents::FacebookTimeSpentData& operator=(const ::com::facebook::appevents::FacebookTimeSpentData& x) {obj = x.obj; return *this;}
    ::com::facebook::appevents::FacebookTimeSpentData& operator=(::com::facebook::appevents::FacebookTimeSpentData&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}

#include "com.facebook.appevents.FacebookTimeSpentData_SerializationProxyV1.hpp"
#include "com.facebook.appevents.FacebookTimeSpentData_SerializationProxyV2.hpp"

