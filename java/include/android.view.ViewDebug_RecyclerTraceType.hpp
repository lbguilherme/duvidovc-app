#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace view { class ViewDebug_RecyclerTraceType; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace view {
class ViewDebug_RecyclerTraceType : public virtual ::java::lang::Object,
                                    public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewDebug_RecyclerTraceType(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewDebug_RecyclerTraceType(const ::android::view::ViewDebug_RecyclerTraceType& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    ViewDebug_RecyclerTraceType(::android::view::ViewDebug_RecyclerTraceType&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ViewDebug_RecyclerTraceType& operator=(const ::android::view::ViewDebug_RecyclerTraceType& x) {obj = x.obj; return *this;}
    ::android::view::ViewDebug_RecyclerTraceType& operator=(::android::view::ViewDebug_RecyclerTraceType&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::view::ViewDebug_RecyclerTraceType> values();
    static ::android::view::ViewDebug_RecyclerTraceType valueOf(const ::java::lang::String&);

};
}
}


