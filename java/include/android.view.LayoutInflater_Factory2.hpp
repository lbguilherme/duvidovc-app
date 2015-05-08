#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.LayoutInflater_Factory.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace view {
class LayoutInflater_Factory2 : public virtual ::java::lang::Object,
                                public virtual ::android::view::LayoutInflater_Factory {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LayoutInflater_Factory2(jobject _obj) : ::java::lang::Object(_obj), ::android::view::LayoutInflater_Factory(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LayoutInflater_Factory2(const ::android::view::LayoutInflater_Factory2& x) : ::java::lang::Object((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0) {obj = x.obj;}
    LayoutInflater_Factory2(::android::view::LayoutInflater_Factory2&& x) : ::java::lang::Object((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::LayoutInflater_Factory2& operator=(const ::android::view::LayoutInflater_Factory2& x) {obj = x.obj; return *this;}
    ::android::view::LayoutInflater_Factory2& operator=(::android::view::LayoutInflater_Factory2&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::view::View onCreateView(const ::android::view::View&, const ::java::lang::String&, const ::android::content::Context&, const ::android::util::AttributeSet&) const ;

};
}
}


