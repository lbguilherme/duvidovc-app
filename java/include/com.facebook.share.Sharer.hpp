#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace com {
namespace facebook {
namespace share {
class Sharer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Sharer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Sharer(const ::com::facebook::share::Sharer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Sharer(::com::facebook::share::Sharer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::Sharer& operator=(const ::com::facebook::share::Sharer& x) {obj = x.obj; return *this;}
    ::com::facebook::share::Sharer& operator=(::com::facebook::share::Sharer&& x) {obj = std::move(x.obj); return *this;}
    
    bool getShouldFailOnDataError() const ;
    void setShouldFailOnDataError(bool) const ;

};
}
}
}

#include "com.facebook.share.Sharer_Result.hpp"

