#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.TabHost_TabContentFactory.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class FragmentTabHost_DummyTabFactory : public virtual ::java::lang::Object,
                                        public virtual ::android::widget::TabHost_TabContentFactory {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FragmentTabHost_DummyTabFactory(jobject _obj) : ::java::lang::Object(_obj), ::android::widget::TabHost_TabContentFactory(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FragmentTabHost_DummyTabFactory(const ::android::support::v4::app::FragmentTabHost_DummyTabFactory& x) : ::java::lang::Object((jobject)0), ::android::widget::TabHost_TabContentFactory((jobject)0) {obj = x.obj;}
    FragmentTabHost_DummyTabFactory(::android::support::v4::app::FragmentTabHost_DummyTabFactory&& x) : ::java::lang::Object((jobject)0), ::android::widget::TabHost_TabContentFactory((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::FragmentTabHost_DummyTabFactory& operator=(const ::android::support::v4::app::FragmentTabHost_DummyTabFactory& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::FragmentTabHost_DummyTabFactory& operator=(::android::support::v4::app::FragmentTabHost_DummyTabFactory&& x) {obj = std::move(x.obj); return *this;}
    
    FragmentTabHost_DummyTabFactory(const ::android::content::Context&);
    ::android::view::View createTabContent(const ::java::lang::String&) const;

};
}
}
}
}


