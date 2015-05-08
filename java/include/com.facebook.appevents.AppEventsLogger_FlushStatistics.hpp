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
class AppEventsLogger_FlushStatistics : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AppEventsLogger_FlushStatistics(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AppEventsLogger_FlushStatistics(const ::com::facebook::appevents::AppEventsLogger_FlushStatistics& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AppEventsLogger_FlushStatistics(::com::facebook::appevents::AppEventsLogger_FlushStatistics&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::appevents::AppEventsLogger_FlushStatistics& operator=(const ::com::facebook::appevents::AppEventsLogger_FlushStatistics& x) {obj = x.obj; return *this;}
    ::com::facebook::appevents::AppEventsLogger_FlushStatistics& operator=(::com::facebook::appevents::AppEventsLogger_FlushStatistics&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


