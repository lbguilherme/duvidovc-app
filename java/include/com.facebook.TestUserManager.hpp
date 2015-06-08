#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { class AccessToken; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace com {
namespace facebook {
class TestUserManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TestUserManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TestUserManager(const ::com::facebook::TestUserManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TestUserManager(::com::facebook::TestUserManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::TestUserManager& operator=(const ::com::facebook::TestUserManager& x) {obj = x.obj; return *this;}
    ::com::facebook::TestUserManager& operator=(::com::facebook::TestUserManager&& x) {obj = std::move(x.obj); return *this;}
    
    TestUserManager(const ::java::lang::String&, const ::java::lang::String&);
    ::com::facebook::AccessToken getAccessTokenForPrivateUser(const ::java::util::List&) const;
    ::com::facebook::AccessToken getAccessTokenForSharedUser(const ::java::util::List&) const;
    ::com::facebook::AccessToken getAccessTokenForSharedUser(const ::java::util::List&, const ::java::lang::String&) const;
    ::java::lang::String getTestApplicationId() const;
    ::java::lang::String getTestApplicationSecret() const;

};
}
}

#include "com.facebook.TestUserManager_Mode.hpp"

