#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace com {
namespace facebook {
class ProfileTracker : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProfileTracker(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProfileTracker(const ::com::facebook::ProfileTracker& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ProfileTracker(::com::facebook::ProfileTracker&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::ProfileTracker& operator=(const ::com::facebook::ProfileTracker& x) {obj = x.obj; return *this;}
    ::com::facebook::ProfileTracker& operator=(::com::facebook::ProfileTracker&& x) {obj = std::move(x.obj); return *this;}
    
    ProfileTracker();
    void startTracking() const;
    void stopTracking() const;
    bool isTracking() const;

};
}
}

#include "com.facebook.ProfileTracker_ProfileBroadcastReceiver.hpp"

