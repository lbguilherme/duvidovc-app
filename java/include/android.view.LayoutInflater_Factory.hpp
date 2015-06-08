#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace view {
class LayoutInflater_Factory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LayoutInflater_Factory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LayoutInflater_Factory(const ::android::view::LayoutInflater_Factory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LayoutInflater_Factory(::android::view::LayoutInflater_Factory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::LayoutInflater_Factory& operator=(const ::android::view::LayoutInflater_Factory& x) {obj = x.obj; return *this;}
    ::android::view::LayoutInflater_Factory& operator=(::android::view::LayoutInflater_Factory&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::view::View onCreateView(const ::java::lang::String&, const ::android::content::Context&, const ::android::util::AttributeSet&) const;

};
}
}


