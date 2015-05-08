#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.widget.CursorAdapter.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace database { class Cursor; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class ResourceCursorAdapter : public virtual ::java::lang::Object,
                              public virtual ::android::support::v4::widget::CursorAdapter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ResourceCursorAdapter(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::widget::CursorAdapter(_obj), ::android::support::v4::widget::CursorFilter_CursorFilterClient(_obj), ::android::widget::Adapter(_obj), ::android::widget::BaseAdapter(_obj), ::android::widget::Filterable(_obj), ::android::widget::ListAdapter(_obj), ::android::widget::SpinnerAdapter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ResourceCursorAdapter(const ::android::support::v4::widget::ResourceCursorAdapter& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::CursorAdapter((jobject)0), ::android::support::v4::widget::CursorFilter_CursorFilterClient((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {obj = x.obj;}
    ResourceCursorAdapter(::android::support::v4::widget::ResourceCursorAdapter&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::CursorAdapter((jobject)0), ::android::support::v4::widget::CursorFilter_CursorFilterClient((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::ResourceCursorAdapter& operator=(const ::android::support::v4::widget::ResourceCursorAdapter& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::ResourceCursorAdapter& operator=(::android::support::v4::widget::ResourceCursorAdapter&& x) {obj = std::move(x.obj); return *this;}
    
    ResourceCursorAdapter(const ::android::content::Context&, int32_t, const ::android::database::Cursor&);
    ResourceCursorAdapter(const ::android::content::Context&, int32_t, const ::android::database::Cursor&, bool);
    ResourceCursorAdapter(const ::android::content::Context&, int32_t, const ::android::database::Cursor&, int32_t);
    ::android::view::View newView(const ::android::content::Context&, const ::android::database::Cursor&, const ::android::view::ViewGroup&) const ;
    ::android::view::View newDropDownView(const ::android::content::Context&, const ::android::database::Cursor&, const ::android::view::ViewGroup&) const ;
    void setViewResource(int32_t) const ;
    void setDropDownViewResource(int32_t) const ;

};
}
}
}
}


