#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.Application.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { namespace reflect { class Method; } } }
namespace org { namespace qtproject { namespace qt5 { namespace android { namespace bindings { class QtApplication_InvokeResult; } } } } }

namespace org {
namespace qtproject {
namespace qt5 {
namespace android {
namespace bindings {
class QtApplication : public virtual ::java::lang::Object,
                      public virtual ::android::app::Application {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit QtApplication(jobject _obj) : ::java::lang::Object(_obj), ::android::app::Application(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::content::Context(_obj), ::android::content::ContextWrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    QtApplication(const ::org::qtproject::qt5::android::bindings::QtApplication& x) : ::java::lang::Object((jobject)0), ::android::app::Application((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj;}
    QtApplication(::org::qtproject::qt5::android::bindings::QtApplication&& x) : ::java::lang::Object((jobject)0), ::android::app::Application((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::qtproject::qt5::android::bindings::QtApplication& operator=(const ::org::qtproject::qt5::android::bindings::QtApplication& x) {obj = x.obj; return *this;}
    ::org::qtproject::qt5::android::bindings::QtApplication& operator=(::org::qtproject::qt5::android::bindings::QtApplication&& x) {obj = std::move(x.obj); return *this;}
    
    QtApplication();
    static void setQtActivityDelegate(const ::java::lang::Object&);
    void onTerminate() const;
    static ::org::qtproject::qt5::android::bindings::QtApplication_InvokeResult invokeDelegate(const std::vector< ::java::lang::Object>&);
    static ::java::lang::Object invokeDelegateMethod(const ::java::lang::reflect::Method&, const std::vector< ::java::lang::Object>&);

};
}
}
}
}
}

#include "org.qtproject.qt5.android.bindings.QtApplication_InvokeResult.hpp"

