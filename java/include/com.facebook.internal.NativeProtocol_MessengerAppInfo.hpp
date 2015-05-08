#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.internal.NativeProtocol_NativeAppInfo.hpp"


namespace com {
namespace facebook {
namespace internal {
class NativeProtocol_MessengerAppInfo : public virtual ::java::lang::Object,
                                        public virtual ::com::facebook::internal::NativeProtocol_NativeAppInfo {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NativeProtocol_MessengerAppInfo(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::internal::NativeProtocol_NativeAppInfo(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NativeProtocol_MessengerAppInfo(const ::com::facebook::internal::NativeProtocol_MessengerAppInfo& x) : ::java::lang::Object((jobject)0), ::com::facebook::internal::NativeProtocol_NativeAppInfo((jobject)0) {obj = x.obj;}
    NativeProtocol_MessengerAppInfo(::com::facebook::internal::NativeProtocol_MessengerAppInfo&& x) : ::java::lang::Object((jobject)0), ::com::facebook::internal::NativeProtocol_NativeAppInfo((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::NativeProtocol_MessengerAppInfo& operator=(const ::com::facebook::internal::NativeProtocol_MessengerAppInfo& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::NativeProtocol_MessengerAppInfo& operator=(::com::facebook::internal::NativeProtocol_MessengerAppInfo&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


