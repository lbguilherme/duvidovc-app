#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { namespace res { class Resources_Theme; } } }
namespace android { namespace content { namespace res { class TypedArray; } } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace util { class TypedValue; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
namespace res {
class Resources_Theme : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Resources_Theme(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Resources_Theme(const ::android::content::res::Resources_Theme& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Resources_Theme(::android::content::res::Resources_Theme&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::res::Resources_Theme& operator=(const ::android::content::res::Resources_Theme& x) {obj = x.obj; return *this;}
    ::android::content::res::Resources_Theme& operator=(::android::content::res::Resources_Theme&& x) {obj = std::move(x.obj); return *this;}
    
    void applyStyle(int32_t, bool) const ;
    void setTo(const ::android::content::res::Resources_Theme&) const ;
    ::android::content::res::TypedArray obtainStyledAttributes(const std::vector< int32_t>&) const ;
    ::android::content::res::TypedArray obtainStyledAttributes(int32_t, const std::vector< int32_t>&) const ;
    ::android::content::res::TypedArray obtainStyledAttributes(const ::android::util::AttributeSet&, const std::vector< int32_t>&, int32_t, int32_t) const ;
    bool resolveAttribute(int32_t, const ::android::util::TypedValue&, bool) const ;
    void dump(int32_t, const ::java::lang::String&, const ::java::lang::String&) const ;

};
}
}
}


