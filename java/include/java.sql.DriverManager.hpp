#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class PrintStream; } }
namespace java { namespace io { class PrintWriter; } }
namespace java { namespace lang { class String; } }
namespace java { namespace sql { class Connection; } }
namespace java { namespace sql { class Driver; } }
namespace java { namespace util { class Enumeration; } }
namespace java { namespace util { class Properties; } }

namespace java {
namespace sql {
class DriverManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DriverManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DriverManager(const ::java::sql::DriverManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DriverManager(::java::sql::DriverManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::DriverManager& operator=(const ::java::sql::DriverManager& x) {obj = x.obj; return *this;}
    ::java::sql::DriverManager& operator=(::java::sql::DriverManager&& x) {obj = std::move(x.obj); return *this;}
    
    static void deregisterDriver(const ::java::sql::Driver&);
    static ::java::sql::Connection getConnection(const ::java::lang::String&);
    static ::java::sql::Connection getConnection(const ::java::lang::String&, const ::java::util::Properties&);
    static ::java::sql::Connection getConnection(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);
    static ::java::sql::Driver getDriver(const ::java::lang::String&);
    static ::java::util::Enumeration getDrivers();
    static int32_t getLoginTimeout();
    static ::java::io::PrintStream getLogStream();
    static ::java::io::PrintWriter getLogWriter();
    static void println(const ::java::lang::String&);
    static void registerDriver(const ::java::sql::Driver&);
    static void setLoginTimeout(int32_t);
    static void setLogStream(const ::java::io::PrintStream&);
    static void setLogWriter(const ::java::io::PrintWriter&);

};
}
}


