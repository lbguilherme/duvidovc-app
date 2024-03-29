#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Loader; } }
namespace android { namespace os { class Bundle; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace app {
class LoaderManager_LoaderCallbacks : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LoaderManager_LoaderCallbacks(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LoaderManager_LoaderCallbacks(const ::android::app::LoaderManager_LoaderCallbacks& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LoaderManager_LoaderCallbacks(::android::app::LoaderManager_LoaderCallbacks&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::LoaderManager_LoaderCallbacks& operator=(const ::android::app::LoaderManager_LoaderCallbacks& x) {obj = x.obj; return *this;}
    ::android::app::LoaderManager_LoaderCallbacks& operator=(::android::app::LoaderManager_LoaderCallbacks&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::content::Loader onCreateLoader(int32_t, const ::android::os::Bundle&) const;
    void onLoadFinished(const ::android::content::Loader&, const ::java::lang::Object&) const;
    void onLoaderReset(const ::android::content::Loader&) const;

};
}
}


