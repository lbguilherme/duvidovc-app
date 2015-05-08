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
class FacebookTimeSpentData_SerializationProxyV2 : public virtual ::java::lang::Object,
                                                   public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FacebookTimeSpentData_SerializationProxyV2(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FacebookTimeSpentData_SerializationProxyV2(const ::com::facebook::appevents::FacebookTimeSpentData_SerializationProxyV2& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    FacebookTimeSpentData_SerializationProxyV2(::com::facebook::appevents::FacebookTimeSpentData_SerializationProxyV2&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::appevents::FacebookTimeSpentData_SerializationProxyV2& operator=(const ::com::facebook::appevents::FacebookTimeSpentData_SerializationProxyV2& x) {obj = x.obj; return *this;}
    ::com::facebook::appevents::FacebookTimeSpentData_SerializationProxyV2& operator=(::com::facebook::appevents::FacebookTimeSpentData_SerializationProxyV2&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


