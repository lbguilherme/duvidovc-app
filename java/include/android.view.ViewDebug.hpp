#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewDebug_HierarchyTraceType; } }
namespace android { namespace view { class ViewDebug_RecyclerTraceType; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace view {
class ViewDebug : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewDebug(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewDebug(const ::android::view::ViewDebug& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewDebug(::android::view::ViewDebug&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ViewDebug& operator=(const ::android::view::ViewDebug& x) {obj = x.obj; return *this;}
    ::android::view::ViewDebug& operator=(::android::view::ViewDebug&& x) {obj = std::move(x.obj); return *this;}
    
    ViewDebug();
    static void trace(const ::android::view::View&, const ::android::view::ViewDebug_RecyclerTraceType&, const std::vector< int32_t>&);
    static void startRecyclerTracing(const ::java::lang::String&, const ::android::view::View&);
    static void stopRecyclerTracing();
    static void trace(const ::android::view::View&, const ::android::view::ViewDebug_HierarchyTraceType&);
    static void startHierarchyTracing(const ::java::lang::String&, const ::android::view::View&);
    static void stopHierarchyTracing();
    static void dumpCapturedView(const ::java::lang::String&, const ::java::lang::Object&);

};
}
}

#include "android.view.ViewDebug_CapturedViewProperty.hpp"
#include "android.view.ViewDebug_ExportedProperty.hpp"
#include "android.view.ViewDebug_FlagToString.hpp"
#include "android.view.ViewDebug_HierarchyTraceType.hpp"
#include "android.view.ViewDebug_IntToString.hpp"
#include "android.view.ViewDebug_RecyclerTraceType.hpp"

