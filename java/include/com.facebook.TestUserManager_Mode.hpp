#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace com { namespace facebook { class TestUserManager_Mode; } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
class TestUserManager_Mode : public virtual ::java::lang::Object,
                             public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TestUserManager_Mode(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TestUserManager_Mode(const ::com::facebook::TestUserManager_Mode& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    TestUserManager_Mode(::com::facebook::TestUserManager_Mode&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::TestUserManager_Mode& operator=(const ::com::facebook::TestUserManager_Mode& x) {obj = x.obj; return *this;}
    ::com::facebook::TestUserManager_Mode& operator=(::com::facebook::TestUserManager_Mode&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::com::facebook::TestUserManager_Mode> values();
    static ::com::facebook::TestUserManager_Mode valueOf(const ::java::lang::String&);

};
}
}


