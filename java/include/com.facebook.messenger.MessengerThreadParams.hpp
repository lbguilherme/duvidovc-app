#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { namespace messenger { class MessengerThreadParams_Origin; } } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace com {
namespace facebook {
namespace messenger {
class MessengerThreadParams : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MessengerThreadParams(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MessengerThreadParams(const ::com::facebook::messenger::MessengerThreadParams& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MessengerThreadParams(::com::facebook::messenger::MessengerThreadParams&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::messenger::MessengerThreadParams& operator=(const ::com::facebook::messenger::MessengerThreadParams& x) {obj = x.obj; return *this;}
    ::com::facebook::messenger::MessengerThreadParams& operator=(::com::facebook::messenger::MessengerThreadParams&& x) {obj = std::move(x.obj); return *this;}
    
    MessengerThreadParams(const ::com::facebook::messenger::MessengerThreadParams_Origin&, const ::java::lang::String&, const ::java::lang::String&, const ::java::util::List&);

};
}
}
}

#include "com.facebook.messenger.MessengerThreadParams_Origin.hpp"

