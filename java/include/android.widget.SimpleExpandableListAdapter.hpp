#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.BaseExpandableListAdapter.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace android {
namespace widget {
class SimpleExpandableListAdapter : public virtual ::java::lang::Object,
                                    public virtual ::android::widget::BaseExpandableListAdapter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SimpleExpandableListAdapter(jobject _obj) : ::java::lang::Object(_obj), ::android::widget::BaseExpandableListAdapter(_obj), ::android::widget::ExpandableListAdapter(_obj), ::android::widget::HeterogeneousExpandableList(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SimpleExpandableListAdapter(const ::android::widget::SimpleExpandableListAdapter& x) : ::java::lang::Object((jobject)0), ::android::widget::BaseExpandableListAdapter((jobject)0), ::android::widget::ExpandableListAdapter((jobject)0), ::android::widget::HeterogeneousExpandableList((jobject)0) {obj = x.obj;}
    SimpleExpandableListAdapter(::android::widget::SimpleExpandableListAdapter&& x) : ::java::lang::Object((jobject)0), ::android::widget::BaseExpandableListAdapter((jobject)0), ::android::widget::ExpandableListAdapter((jobject)0), ::android::widget::HeterogeneousExpandableList((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::SimpleExpandableListAdapter& operator=(const ::android::widget::SimpleExpandableListAdapter& x) {obj = x.obj; return *this;}
    ::android::widget::SimpleExpandableListAdapter& operator=(::android::widget::SimpleExpandableListAdapter&& x) {obj = std::move(x.obj); return *this;}
    
    SimpleExpandableListAdapter(const ::android::content::Context&, const ::java::util::List&, int32_t, const std::vector< ::java::lang::String>&, const std::vector< int32_t>&, const ::java::util::List&, int32_t, const std::vector< ::java::lang::String>&, const std::vector< int32_t>&);
    SimpleExpandableListAdapter(const ::android::content::Context&, const ::java::util::List&, int32_t, int32_t, const std::vector< ::java::lang::String>&, const std::vector< int32_t>&, const ::java::util::List&, int32_t, const std::vector< ::java::lang::String>&, const std::vector< int32_t>&);
    SimpleExpandableListAdapter(const ::android::content::Context&, const ::java::util::List&, int32_t, int32_t, const std::vector< ::java::lang::String>&, const std::vector< int32_t>&, const ::java::util::List&, int32_t, int32_t, const std::vector< ::java::lang::String>&, const std::vector< int32_t>&);
    ::java::lang::Object getChild(int32_t, int32_t) const;
    int64_t getChildId(int32_t, int32_t) const;
    ::android::view::View getChildView(int32_t, int32_t, bool, const ::android::view::View&, const ::android::view::ViewGroup&) const;
    ::android::view::View newChildView(bool, const ::android::view::ViewGroup&) const;
    int32_t getChildrenCount(int32_t) const;
    ::java::lang::Object getGroup(int32_t) const;
    int32_t getGroupCount() const;
    int64_t getGroupId(int32_t) const;
    ::android::view::View getGroupView(int32_t, bool, const ::android::view::View&, const ::android::view::ViewGroup&) const;
    ::android::view::View newGroupView(bool, const ::android::view::ViewGroup&) const;
    bool isChildSelectable(int32_t, int32_t) const;
    bool hasStableIds() const;

};
}
}


