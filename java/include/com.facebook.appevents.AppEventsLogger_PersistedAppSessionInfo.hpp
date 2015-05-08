#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace com {
namespace facebook {
namespace appevents {
class AppEventsLogger_PersistedAppSessionInfo : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AppEventsLogger_PersistedAppSessionInfo(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AppEventsLogger_PersistedAppSessionInfo(const ::com::facebook::appevents::AppEventsLogger_PersistedAppSessionInfo& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AppEventsLogger_PersistedAppSessionInfo(::com::facebook::appevents::AppEventsLogger_PersistedAppSessionInfo&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::appevents::AppEventsLogger_PersistedAppSessionInfo& operator=(const ::com::facebook::appevents::AppEventsLogger_PersistedAppSessionInfo& x) {obj = x.obj; return *this;}
    ::com::facebook::appevents::AppEventsLogger_PersistedAppSessionInfo& operator=(::com::facebook::appevents::AppEventsLogger_PersistedAppSessionInfo&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


