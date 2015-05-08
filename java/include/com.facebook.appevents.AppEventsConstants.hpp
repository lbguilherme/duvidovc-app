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
class AppEventsConstants : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AppEventsConstants(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AppEventsConstants(const ::com::facebook::appevents::AppEventsConstants& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AppEventsConstants(::com::facebook::appevents::AppEventsConstants&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::appevents::AppEventsConstants& operator=(const ::com::facebook::appevents::AppEventsConstants& x) {obj = x.obj; return *this;}
    ::com::facebook::appevents::AppEventsConstants& operator=(::com::facebook::appevents::AppEventsConstants&& x) {obj = std::move(x.obj); return *this;}
    
    AppEventsConstants();

};
}
}
}


