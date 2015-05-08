#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class File; } }
namespace java { namespace lang { class Process; } }
namespace java { namespace lang { class ProcessBuilder; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }
namespace java { namespace util { class Map; } }

namespace java {
namespace lang {
class ProcessBuilder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProcessBuilder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProcessBuilder(const ::java::lang::ProcessBuilder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ProcessBuilder(::java::lang::ProcessBuilder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::ProcessBuilder& operator=(const ::java::lang::ProcessBuilder& x) {obj = x.obj; return *this;}
    ::java::lang::ProcessBuilder& operator=(::java::lang::ProcessBuilder&& x) {obj = std::move(x.obj); return *this;}
    
    ProcessBuilder(const std::vector< ::java::lang::String>&);
    ProcessBuilder(const ::java::util::List&);
    ::java::util::List command() const ;
    ::java::lang::ProcessBuilder command(const std::vector< ::java::lang::String>&) const ;
    ::java::lang::ProcessBuilder command(const ::java::util::List&) const ;
    ::java::io::File directory() const ;
    ::java::lang::ProcessBuilder directory(const ::java::io::File&) const ;
    ::java::util::Map environment() const ;
    bool redirectErrorStream() const ;
    ::java::lang::ProcessBuilder redirectErrorStream(bool) const ;
    ::java::lang::Process start() const ;

};
}
}


