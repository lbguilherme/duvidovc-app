#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace com { namespace facebook { namespace share { namespace model { class GameRequestContent_ActionType; } } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace share {
namespace model {
class GameRequestContent_ActionType : public virtual ::java::lang::Object,
                                      public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GameRequestContent_ActionType(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GameRequestContent_ActionType(const ::com::facebook::share::model::GameRequestContent_ActionType& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    GameRequestContent_ActionType(::com::facebook::share::model::GameRequestContent_ActionType&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::model::GameRequestContent_ActionType& operator=(const ::com::facebook::share::model::GameRequestContent_ActionType& x) {obj = x.obj; return *this;}
    ::com::facebook::share::model::GameRequestContent_ActionType& operator=(::com::facebook::share::model::GameRequestContent_ActionType&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::com::facebook::share::model::GameRequestContent_ActionType> values();
    static ::com::facebook::share::model::GameRequestContent_ActionType valueOf(const ::java::lang::String&);

};
}
}
}
}


