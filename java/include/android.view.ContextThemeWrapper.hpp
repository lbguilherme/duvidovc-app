#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.ContextWrapper.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace content { namespace res { class Resources_Theme; } } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace view {
class ContextThemeWrapper : public virtual ::java::lang::Object,
                            public virtual ::android::content::ContextWrapper {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContextThemeWrapper(jobject _obj) : ::java::lang::Object(_obj), ::android::content::Context(_obj), ::android::content::ContextWrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContextThemeWrapper(const ::android::view::ContextThemeWrapper& x) : ::java::lang::Object((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj;}
    ContextThemeWrapper(::android::view::ContextThemeWrapper&& x) : ::java::lang::Object((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ContextThemeWrapper& operator=(const ::android::view::ContextThemeWrapper& x) {obj = x.obj; return *this;}
    ::android::view::ContextThemeWrapper& operator=(::android::view::ContextThemeWrapper&& x) {obj = std::move(x.obj); return *this;}
    
    ContextThemeWrapper();
    ContextThemeWrapper(const ::android::content::Context&, int32_t);
    void setTheme(int32_t) const ;
    ::android::content::res::Resources_Theme getTheme() const ;
    ::java::lang::Object getSystemService(const ::java::lang::String&) const ;

};
}
}


