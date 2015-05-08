#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.ContentResolver.hpp"

namespace android { namespace content { class ContentProvider; } }
namespace android { namespace database { class ContentObserver; } }
namespace android { namespace net { class Uri; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace test {
namespace mock {
class MockContentResolver : public virtual ::java::lang::Object,
                            public virtual ::android::content::ContentResolver {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MockContentResolver(jobject _obj) : ::java::lang::Object(_obj), ::android::content::ContentResolver(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MockContentResolver(const ::android::test::mock::MockContentResolver& x) : ::java::lang::Object((jobject)0), ::android::content::ContentResolver((jobject)0) {obj = x.obj;}
    MockContentResolver(::android::test::mock::MockContentResolver&& x) : ::java::lang::Object((jobject)0), ::android::content::ContentResolver((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::mock::MockContentResolver& operator=(const ::android::test::mock::MockContentResolver& x) {obj = x.obj; return *this;}
    ::android::test::mock::MockContentResolver& operator=(::android::test::mock::MockContentResolver&& x) {obj = std::move(x.obj); return *this;}
    
    MockContentResolver();
    void addProvider(const ::java::lang::String&, const ::android::content::ContentProvider&) const ;
    void notifyChange(const ::android::net::Uri&, const ::android::database::ContentObserver&, bool) const ;

};
}
}
}


