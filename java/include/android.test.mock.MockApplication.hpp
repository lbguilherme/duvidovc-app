#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.Application.hpp"

namespace android { namespace content { namespace res { class Configuration; } } }

namespace android {
namespace test {
namespace mock {
class MockApplication : public virtual ::java::lang::Object,
                        public virtual ::android::app::Application {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MockApplication(jobject _obj) : ::java::lang::Object(_obj), ::android::app::Application(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::content::Context(_obj), ::android::content::ContextWrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MockApplication(const ::android::test::mock::MockApplication& x) : ::java::lang::Object((jobject)0), ::android::app::Application((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj;}
    MockApplication(::android::test::mock::MockApplication&& x) : ::java::lang::Object((jobject)0), ::android::app::Application((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::mock::MockApplication& operator=(const ::android::test::mock::MockApplication& x) {obj = x.obj; return *this;}
    ::android::test::mock::MockApplication& operator=(::android::test::mock::MockApplication&& x) {obj = std::move(x.obj); return *this;}
    
    MockApplication();
    void onCreate() const ;
    void onTerminate() const ;
    void onConfigurationChanged(const ::android::content::res::Configuration&) const ;

};
}
}
}


