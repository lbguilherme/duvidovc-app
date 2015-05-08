#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace view { class ViewDebug_HierarchyTraceType; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace view {
class ViewDebug_HierarchyTraceType : public virtual ::java::lang::Object,
                                     public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewDebug_HierarchyTraceType(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewDebug_HierarchyTraceType(const ::android::view::ViewDebug_HierarchyTraceType& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    ViewDebug_HierarchyTraceType(::android::view::ViewDebug_HierarchyTraceType&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ViewDebug_HierarchyTraceType& operator=(const ::android::view::ViewDebug_HierarchyTraceType& x) {obj = x.obj; return *this;}
    ::android::view::ViewDebug_HierarchyTraceType& operator=(::android::view::ViewDebug_HierarchyTraceType&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::view::ViewDebug_HierarchyTraceType> values();
    static ::android::view::ViewDebug_HierarchyTraceType valueOf(const ::java::lang::String&);

};
}
}


