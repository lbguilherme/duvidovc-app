#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace com { namespace facebook { namespace messenger { class MessengerThreadParams_Origin; } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace messenger {
class MessengerThreadParams_Origin : public virtual ::java::lang::Object,
                                     public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MessengerThreadParams_Origin(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MessengerThreadParams_Origin(const ::com::facebook::messenger::MessengerThreadParams_Origin& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    MessengerThreadParams_Origin(::com::facebook::messenger::MessengerThreadParams_Origin&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::messenger::MessengerThreadParams_Origin& operator=(const ::com::facebook::messenger::MessengerThreadParams_Origin& x) {obj = x.obj; return *this;}
    ::com::facebook::messenger::MessengerThreadParams_Origin& operator=(::com::facebook::messenger::MessengerThreadParams_Origin&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::com::facebook::messenger::MessengerThreadParams_Origin> values();
    static ::com::facebook::messenger::MessengerThreadParams_Origin valueOf(const ::java::lang::String&);

};
}
}
}


