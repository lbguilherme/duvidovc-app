#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class LayoutInflater; } }
namespace android { namespace view { class LayoutInflater_Factory; } }
namespace android { namespace view { class LayoutInflater_Factory2; } }
namespace android { namespace view { class LayoutInflater_Filter; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }
namespace java { namespace lang { class String; } }
namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } }

namespace android {
namespace view {
class LayoutInflater : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LayoutInflater(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LayoutInflater(const ::android::view::LayoutInflater& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LayoutInflater(::android::view::LayoutInflater&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::LayoutInflater& operator=(const ::android::view::LayoutInflater& x) {obj = x.obj; return *this;}
    ::android::view::LayoutInflater& operator=(::android::view::LayoutInflater&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::view::LayoutInflater from(const ::android::content::Context&);
    ::android::view::LayoutInflater cloneInContext(const ::android::content::Context&) const;
    ::android::content::Context getContext() const;
    ::android::view::LayoutInflater_Factory getFactory() const;
    ::android::view::LayoutInflater_Factory2 getFactory2() const;
    void setFactory(const ::android::view::LayoutInflater_Factory&) const;
    void setFactory2(const ::android::view::LayoutInflater_Factory2&) const;
    ::android::view::LayoutInflater_Filter getFilter() const;
    void setFilter(const ::android::view::LayoutInflater_Filter&) const;
    ::android::view::View inflate(int32_t, const ::android::view::ViewGroup&) const;
    ::android::view::View inflate(const ::org::xmlpull::v1::XmlPullParser&, const ::android::view::ViewGroup&) const;
    ::android::view::View inflate(int32_t, const ::android::view::ViewGroup&, bool) const;
    ::android::view::View inflate(const ::org::xmlpull::v1::XmlPullParser&, const ::android::view::ViewGroup&, bool) const;
    ::android::view::View createView(const ::java::lang::String&, const ::java::lang::String&, const ::android::util::AttributeSet&) const;

};
}
}

#include "android.view.LayoutInflater_Factory.hpp"
#include "android.view.LayoutInflater_Factory2.hpp"
#include "android.view.LayoutInflater_Filter.hpp"

