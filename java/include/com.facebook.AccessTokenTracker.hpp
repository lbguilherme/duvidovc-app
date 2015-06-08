#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace com {
namespace facebook {
class AccessTokenTracker : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessTokenTracker(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessTokenTracker(const ::com::facebook::AccessTokenTracker& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AccessTokenTracker(::com::facebook::AccessTokenTracker&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::AccessTokenTracker& operator=(const ::com::facebook::AccessTokenTracker& x) {obj = x.obj; return *this;}
    ::com::facebook::AccessTokenTracker& operator=(::com::facebook::AccessTokenTracker&& x) {obj = std::move(x.obj); return *this;}
    
    AccessTokenTracker();
    void startTracking() const;
    void stopTracking() const;
    bool isTracking() const;

};
}
}

#include "com.facebook.AccessTokenTracker_CurrentAccessTokenBroadcastReceiver.hpp"

