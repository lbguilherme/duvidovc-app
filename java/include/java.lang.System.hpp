#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class Console; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class PrintStream; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class SecurityManager; } }
namespace java { namespace lang { class String; } }
namespace java { namespace nio { namespace channels { class Channel; } } }
namespace java { namespace util { class Map; } }
namespace java { namespace util { class Properties; } }

namespace java {
namespace lang {
class System : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit System(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    System(const ::java::lang::System& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    System(::java::lang::System&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::System& operator=(const ::java::lang::System& x) {obj = x.obj; return *this;}
    ::java::lang::System& operator=(::java::lang::System&& x) {obj = std::move(x.obj); return *this;}
    
    static void setIn(const ::java::io::InputStream&);
    static void setOut(const ::java::io::PrintStream&);
    static void setErr(const ::java::io::PrintStream&);
    static void arraycopy(const ::java::lang::Object&, int32_t, const ::java::lang::Object&, int32_t, int32_t);
    static int64_t currentTimeMillis();
    static int64_t nanoTime();
    static void exit(int32_t);
    static void gc();
    static ::java::lang::String getenv(const ::java::lang::String&);
    static ::java::util::Map getenv();
    static ::java::nio::channels::Channel inheritedChannel();
    static ::java::util::Properties getProperties();
    static ::java::lang::String getProperty(const ::java::lang::String&);
    static ::java::lang::String getProperty(const ::java::lang::String&, const ::java::lang::String&);
    static ::java::lang::String setProperty(const ::java::lang::String&, const ::java::lang::String&);
    static ::java::lang::String clearProperty(const ::java::lang::String&);
    static ::java::io::Console console();
    static ::java::lang::SecurityManager getSecurityManager();
    static int32_t identityHashCode(const ::java::lang::Object&);
    static void load(const ::java::lang::String&);
    static void loadLibrary(const ::java::lang::String&);
    static void runFinalization();
    static void runFinalizersOnExit(bool);
    static void setProperties(const ::java::util::Properties&);
    static void setSecurityManager(const ::java::lang::SecurityManager&);
    static ::java::lang::String mapLibraryName(const ::java::lang::String&);

};
}
}


