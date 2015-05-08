#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.annotation.Annotation.hpp"

namespace android { namespace view { class ViewDebug_FlagToString; } }
namespace android { namespace view { class ViewDebug_IntToString; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace view {
class ViewDebug_ExportedProperty : public virtual ::java::lang::Object,
                                   public virtual ::java::lang::annotation::Annotation {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewDebug_ExportedProperty(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::annotation::Annotation(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewDebug_ExportedProperty(const ::android::view::ViewDebug_ExportedProperty& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj;}
    ViewDebug_ExportedProperty(::android::view::ViewDebug_ExportedProperty&& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ViewDebug_ExportedProperty& operator=(const ::android::view::ViewDebug_ExportedProperty& x) {obj = x.obj; return *this;}
    ::android::view::ViewDebug_ExportedProperty& operator=(::android::view::ViewDebug_ExportedProperty&& x) {obj = std::move(x.obj); return *this;}
    
    bool resolveId() const ;
    std::vector< ::android::view::ViewDebug_IntToString> mapping() const ;
    std::vector< ::android::view::ViewDebug_IntToString> indexMapping() const ;
    std::vector< ::android::view::ViewDebug_FlagToString> flagMapping() const ;
    bool deepExport() const ;
    ::java::lang::String prefix() const ;
    ::java::lang::String category() const ;

};
}
}


