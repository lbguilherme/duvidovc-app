#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { class LoggingBehavior; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class StringBuilder; } }

namespace com {
namespace facebook {
namespace internal {
class Logger : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Logger(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Logger(const ::com::facebook::internal::Logger& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Logger(::com::facebook::internal::Logger&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::Logger& operator=(const ::com::facebook::internal::Logger& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::Logger& operator=(::com::facebook::internal::Logger&& x) {obj = std::move(x.obj); return *this;}
    
    static void registerStringToReplace(const ::java::lang::String&, const ::java::lang::String&);
    static void registerAccessToken(const ::java::lang::String&);
    static void log(const ::com::facebook::LoggingBehavior&, const ::java::lang::String&, const ::java::lang::String&);
    static void log(const ::com::facebook::LoggingBehavior&, const ::java::lang::String&, const ::java::lang::String&, const std::vector< ::java::lang::Object>&);
    static void log(const ::com::facebook::LoggingBehavior&, int32_t, const ::java::lang::String&, const ::java::lang::String&);
    Logger(const ::com::facebook::LoggingBehavior&, const ::java::lang::String&);
    int32_t getPriority() const ;
    void setPriority(int32_t) const ;
    ::java::lang::String getContents() const ;
    void log() const ;
    void logString(const ::java::lang::String&) const ;
    void append(const ::java::lang::StringBuilder&) const ;
    void append(const ::java::lang::String&) const ;
    void append(const ::java::lang::String&, const std::vector< ::java::lang::Object>&) const ;
    void appendKeyValue(const ::java::lang::String&, const ::java::lang::Object&) const ;

};
}
}
}


