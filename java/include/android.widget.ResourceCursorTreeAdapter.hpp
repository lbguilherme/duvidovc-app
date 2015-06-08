#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.CursorTreeAdapter.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace database { class Cursor; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }

namespace android {
namespace widget {
class ResourceCursorTreeAdapter : public virtual ::java::lang::Object,
                                  public virtual ::android::widget::CursorTreeAdapter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ResourceCursorTreeAdapter(jobject _obj) : ::java::lang::Object(_obj), ::android::widget::BaseExpandableListAdapter(_obj), ::android::widget::CursorTreeAdapter(_obj), ::android::widget::ExpandableListAdapter(_obj), ::android::widget::Filterable(_obj), ::android::widget::HeterogeneousExpandableList(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ResourceCursorTreeAdapter(const ::android::widget::ResourceCursorTreeAdapter& x) : ::java::lang::Object((jobject)0), ::android::widget::BaseExpandableListAdapter((jobject)0), ::android::widget::CursorTreeAdapter((jobject)0), ::android::widget::ExpandableListAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::HeterogeneousExpandableList((jobject)0) {obj = x.obj;}
    ResourceCursorTreeAdapter(::android::widget::ResourceCursorTreeAdapter&& x) : ::java::lang::Object((jobject)0), ::android::widget::BaseExpandableListAdapter((jobject)0), ::android::widget::CursorTreeAdapter((jobject)0), ::android::widget::ExpandableListAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::HeterogeneousExpandableList((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::ResourceCursorTreeAdapter& operator=(const ::android::widget::ResourceCursorTreeAdapter& x) {obj = x.obj; return *this;}
    ::android::widget::ResourceCursorTreeAdapter& operator=(::android::widget::ResourceCursorTreeAdapter&& x) {obj = std::move(x.obj); return *this;}
    
    ResourceCursorTreeAdapter(const ::android::content::Context&, const ::android::database::Cursor&, int32_t, int32_t, int32_t, int32_t);
    ResourceCursorTreeAdapter(const ::android::content::Context&, const ::android::database::Cursor&, int32_t, int32_t, int32_t);
    ResourceCursorTreeAdapter(const ::android::content::Context&, const ::android::database::Cursor&, int32_t, int32_t);
    ::android::view::View newChildView(const ::android::content::Context&, const ::android::database::Cursor&, bool, const ::android::view::ViewGroup&) const;
    ::android::view::View newGroupView(const ::android::content::Context&, const ::android::database::Cursor&, bool, const ::android::view::ViewGroup&) const;

};
}
}


