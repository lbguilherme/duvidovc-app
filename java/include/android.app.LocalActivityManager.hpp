#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace view { class Window; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace app {
class LocalActivityManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LocalActivityManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LocalActivityManager(const ::android::app::LocalActivityManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LocalActivityManager(::android::app::LocalActivityManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::LocalActivityManager& operator=(const ::android::app::LocalActivityManager& x) {obj = x.obj; return *this;}
    ::android::app::LocalActivityManager& operator=(::android::app::LocalActivityManager&& x) {obj = std::move(x.obj); return *this;}
    
    LocalActivityManager(const ::android::app::Activity&, bool);
    ::android::view::Window startActivity(const ::java::lang::String&, const ::android::content::Intent&) const;
    ::android::view::Window destroyActivity(const ::java::lang::String&, bool) const;
    ::android::app::Activity getCurrentActivity() const;
    ::java::lang::String getCurrentId() const;
    ::android::app::Activity getActivity(const ::java::lang::String&) const;
    void dispatchCreate(const ::android::os::Bundle&) const;
    ::android::os::Bundle saveInstanceState() const;
    void dispatchResume() const;
    void dispatchPause(bool) const;
    void dispatchStop() const;
    void removeAllActivities() const;
    void dispatchDestroy(bool) const;

};
}
}


