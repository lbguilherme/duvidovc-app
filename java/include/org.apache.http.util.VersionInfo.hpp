#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class ClassLoader; } }
namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { namespace util { class VersionInfo; } } } }

namespace org {
namespace apache {
namespace http {
namespace util {
class VersionInfo : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit VersionInfo(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    VersionInfo(const ::org::apache::http::util::VersionInfo& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    VersionInfo(::org::apache::http::util::VersionInfo&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::util::VersionInfo& operator=(const ::org::apache::http::util::VersionInfo& x) {obj = x.obj; return *this;}
    ::org::apache::http::util::VersionInfo& operator=(::org::apache::http::util::VersionInfo&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getPackage() const ;
    ::java::lang::String getModule() const ;
    ::java::lang::String getRelease() const ;
    ::java::lang::String getTimestamp() const ;
    ::java::lang::String getClassloader() const ;
    ::java::lang::String toString() const ;
    static std::vector< ::org::apache::http::util::VersionInfo> loadVersionInfo(const std::vector< ::java::lang::String>&, const ::java::lang::ClassLoader&);
    static ::org::apache::http::util::VersionInfo loadVersionInfo(const ::java::lang::String&, const ::java::lang::ClassLoader&);

};
}
}
}
}


