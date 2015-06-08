#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Intent; } }
namespace com { namespace facebook { namespace internal { class AppCall; } } }
namespace java { namespace util { class UUID; } }

namespace com {
namespace facebook {
namespace internal {
class AppCall : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AppCall(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AppCall(const ::com::facebook::internal::AppCall& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AppCall(::com::facebook::internal::AppCall&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::AppCall& operator=(const ::com::facebook::internal::AppCall& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::AppCall& operator=(::com::facebook::internal::AppCall&& x) {obj = std::move(x.obj); return *this;}
    
    static ::com::facebook::internal::AppCall getCurrentPendingCall();
    static ::com::facebook::internal::AppCall finishPendingCall(const ::java::util::UUID&, int32_t);
    AppCall(int32_t);
    AppCall(int32_t, const ::java::util::UUID&);
    ::android::content::Intent getRequestIntent() const;
    ::java::util::UUID getCallId() const;
    int32_t getRequestCode() const;
    void setRequestCode(int32_t) const;
    void setRequestIntent(const ::android::content::Intent&) const;
    bool setPending() const;

};
}
}
}


