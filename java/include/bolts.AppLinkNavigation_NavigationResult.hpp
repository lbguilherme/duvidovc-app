#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace bolts { class AppLinkNavigation_NavigationResult; }
namespace java { namespace lang { class String; } }

namespace bolts {
class AppLinkNavigation_NavigationResult : public virtual ::java::lang::Object,
                                           public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AppLinkNavigation_NavigationResult(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AppLinkNavigation_NavigationResult(const ::bolts::AppLinkNavigation_NavigationResult& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    AppLinkNavigation_NavigationResult(::bolts::AppLinkNavigation_NavigationResult&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::bolts::AppLinkNavigation_NavigationResult& operator=(const ::bolts::AppLinkNavigation_NavigationResult& x) {obj = x.obj; return *this;}
    ::bolts::AppLinkNavigation_NavigationResult& operator=(::bolts::AppLinkNavigation_NavigationResult&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::bolts::AppLinkNavigation_NavigationResult> values();
    static ::bolts::AppLinkNavigation_NavigationResult valueOf(const ::java::lang::String&);
    ::java::lang::String getCode() const ;
    bool isSucceeded() const ;

};
}


