#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace lang { class Object; } }

namespace com {
namespace facebook {
namespace appevents {
class AppEventsLogger_AccessTokenAppIdPair : public virtual ::java::lang::Object,
                                             public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AppEventsLogger_AccessTokenAppIdPair(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AppEventsLogger_AccessTokenAppIdPair(const ::com::facebook::appevents::AppEventsLogger_AccessTokenAppIdPair& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    AppEventsLogger_AccessTokenAppIdPair(::com::facebook::appevents::AppEventsLogger_AccessTokenAppIdPair&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::appevents::AppEventsLogger_AccessTokenAppIdPair& operator=(const ::com::facebook::appevents::AppEventsLogger_AccessTokenAppIdPair& x) {obj = x.obj; return *this;}
    ::com::facebook::appevents::AppEventsLogger_AccessTokenAppIdPair& operator=(::com::facebook::appevents::AppEventsLogger_AccessTokenAppIdPair&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t hashCode() const;
    bool equals(const ::java::lang::Object&) const;

};
}
}
}

#include "com.facebook.appevents.AppEventsLogger_AccessTokenAppIdPair_SerializationProxyV1.hpp"

