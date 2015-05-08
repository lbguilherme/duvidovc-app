#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.BroadcastReceiver.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace com { namespace facebook { namespace internal { class BoltsMeasurementEventListener; } } }

namespace com {
namespace facebook {
namespace internal {
class BoltsMeasurementEventListener : public virtual ::java::lang::Object,
                                      public virtual ::android::content::BroadcastReceiver {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BoltsMeasurementEventListener(jobject _obj) : ::java::lang::Object(_obj), ::android::content::BroadcastReceiver(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BoltsMeasurementEventListener(const ::com::facebook::internal::BoltsMeasurementEventListener& x) : ::java::lang::Object((jobject)0), ::android::content::BroadcastReceiver((jobject)0) {obj = x.obj;}
    BoltsMeasurementEventListener(::com::facebook::internal::BoltsMeasurementEventListener&& x) : ::java::lang::Object((jobject)0), ::android::content::BroadcastReceiver((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::BoltsMeasurementEventListener& operator=(const ::com::facebook::internal::BoltsMeasurementEventListener& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::BoltsMeasurementEventListener& operator=(::com::facebook::internal::BoltsMeasurementEventListener&& x) {obj = std::move(x.obj); return *this;}
    
    static ::com::facebook::internal::BoltsMeasurementEventListener getInstance(const ::android::content::Context&);
    void onReceive(const ::android::content::Context&, const ::android::content::Intent&) const ;

};
}
}
}


