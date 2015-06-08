#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Runnable.hpp"


namespace com {
namespace facebook {
namespace share {
namespace internal {
class LikeActionController_SerializeToDiskWorkItem : public virtual ::java::lang::Object,
                                                     public virtual ::java::lang::Runnable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LikeActionController_SerializeToDiskWorkItem(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Runnable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LikeActionController_SerializeToDiskWorkItem(const ::com::facebook::share::internal::LikeActionController_SerializeToDiskWorkItem& x) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj;}
    LikeActionController_SerializeToDiskWorkItem(::com::facebook::share::internal::LikeActionController_SerializeToDiskWorkItem&& x) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::internal::LikeActionController_SerializeToDiskWorkItem& operator=(const ::com::facebook::share::internal::LikeActionController_SerializeToDiskWorkItem& x) {obj = x.obj; return *this;}
    ::com::facebook::share::internal::LikeActionController_SerializeToDiskWorkItem& operator=(::com::facebook::share::internal::LikeActionController_SerializeToDiskWorkItem&& x) {obj = std::move(x.obj); return *this;}
    
    void run() const;

};
}
}
}
}


