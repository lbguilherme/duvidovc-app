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
class AppEventsLogger_AccessTokenAppIdPair_SerializationProxyV1 : public virtual ::java::lang::Object,
                                                                  public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AppEventsLogger_AccessTokenAppIdPair_SerializationProxyV1(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AppEventsLogger_AccessTokenAppIdPair_SerializationProxyV1(const ::com::facebook::appevents::AppEventsLogger_AccessTokenAppIdPair_SerializationProxyV1& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    AppEventsLogger_AccessTokenAppIdPair_SerializationProxyV1(::com::facebook::appevents::AppEventsLogger_AccessTokenAppIdPair_SerializationProxyV1&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::appevents::AppEventsLogger_AccessTokenAppIdPair_SerializationProxyV1& operator=(const ::com::facebook::appevents::AppEventsLogger_AccessTokenAppIdPair_SerializationProxyV1& x) {obj = x.obj; return *this;}
    ::com::facebook::appevents::AppEventsLogger_AccessTokenAppIdPair_SerializationProxyV1& operator=(::com::facebook::appevents::AppEventsLogger_AccessTokenAppIdPair_SerializationProxyV1&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


