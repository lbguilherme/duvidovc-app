#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Intent; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace view { class View; } }
namespace android { namespace widget { class TabHost_TabContentFactory; } }
namespace android { namespace widget { class TabHost_TabSpec; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace widget {
class TabHost_TabSpec : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TabHost_TabSpec(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TabHost_TabSpec(const ::android::widget::TabHost_TabSpec& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TabHost_TabSpec(::android::widget::TabHost_TabSpec&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::TabHost_TabSpec& operator=(const ::android::widget::TabHost_TabSpec& x) {obj = x.obj; return *this;}
    ::android::widget::TabHost_TabSpec& operator=(::android::widget::TabHost_TabSpec&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::widget::TabHost_TabSpec setIndicator(const ::java::lang::CharSequence&) const ;
    ::android::widget::TabHost_TabSpec setIndicator(const ::java::lang::CharSequence&, const ::android::graphics::drawable::Drawable&) const ;
    ::android::widget::TabHost_TabSpec setIndicator(const ::android::view::View&) const ;
    ::android::widget::TabHost_TabSpec setContent(int32_t) const ;
    ::android::widget::TabHost_TabSpec setContent(const ::android::widget::TabHost_TabContentFactory&) const ;
    ::android::widget::TabHost_TabSpec setContent(const ::android::content::Intent&) const ;
    ::java::lang::String getTag() const ;

};
}
}


