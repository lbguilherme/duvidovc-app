#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace os { class Bundle; } }
namespace com { namespace facebook { class AccessTokenSource; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Date; } }
namespace java { namespace util { class Set; } }

namespace com {
namespace facebook {
class LegacyTokenHelper : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LegacyTokenHelper(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LegacyTokenHelper(const ::com::facebook::LegacyTokenHelper& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LegacyTokenHelper(::com::facebook::LegacyTokenHelper&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::LegacyTokenHelper& operator=(const ::com::facebook::LegacyTokenHelper& x) {obj = x.obj; return *this;}
    ::com::facebook::LegacyTokenHelper& operator=(::com::facebook::LegacyTokenHelper&& x) {obj = std::move(x.obj); return *this;}
    
    LegacyTokenHelper(const ::android::content::Context&);
    LegacyTokenHelper(const ::android::content::Context&, const ::java::lang::String&);
    ::android::os::Bundle load() const;
    void save(const ::android::os::Bundle&) const;
    void clear() const;
    static bool hasTokenInformation(const ::android::os::Bundle&);
    static ::java::lang::String getToken(const ::android::os::Bundle&);
    static void putToken(const ::android::os::Bundle&, const ::java::lang::String&);
    static ::java::util::Date getExpirationDate(const ::android::os::Bundle&);
    static void putExpirationDate(const ::android::os::Bundle&, const ::java::util::Date&);
    static int64_t getExpirationMilliseconds(const ::android::os::Bundle&);
    static void putExpirationMilliseconds(const ::android::os::Bundle&, int64_t);
    static ::java::util::Set getPermissions(const ::android::os::Bundle&);
    static void putPermissions(const ::android::os::Bundle&, const ::java::util::Collection&);
    static void putDeclinedPermissions(const ::android::os::Bundle&, const ::java::util::Collection&);
    static ::com::facebook::AccessTokenSource getSource(const ::android::os::Bundle&);
    static void putSource(const ::android::os::Bundle&, const ::com::facebook::AccessTokenSource&);
    static ::java::util::Date getLastRefreshDate(const ::android::os::Bundle&);
    static void putLastRefreshDate(const ::android::os::Bundle&, const ::java::util::Date&);
    static int64_t getLastRefreshMilliseconds(const ::android::os::Bundle&);
    static void putLastRefreshMilliseconds(const ::android::os::Bundle&, int64_t);
    static ::java::lang::String getApplicationId(const ::android::os::Bundle&);
    static void putApplicationId(const ::android::os::Bundle&, const ::java::lang::String&);

};
}
}


