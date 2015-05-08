#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Hashtable.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class OutputStream; } }
namespace java { namespace io { class PrintStream; } }
namespace java { namespace io { class PrintWriter; } }
namespace java { namespace io { class Reader; } }
namespace java { namespace io { class Writer; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Enumeration; } }
namespace java { namespace util { class Set; } }

namespace java {
namespace util {
class Properties : public virtual ::java::lang::Object,
                   public virtual ::java::util::Hashtable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Properties(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::util::Dictionary(_obj), ::java::util::Hashtable(_obj), ::java::util::Map(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Properties(const ::java::util::Properties& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::Dictionary((jobject)0), ::java::util::Hashtable((jobject)0), ::java::util::Map((jobject)0) {obj = x.obj;}
    Properties(::java::util::Properties&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::Dictionary((jobject)0), ::java::util::Hashtable((jobject)0), ::java::util::Map((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::Properties& operator=(const ::java::util::Properties& x) {obj = x.obj; return *this;}
    ::java::util::Properties& operator=(::java::util::Properties&& x) {obj = std::move(x.obj); return *this;}
    
    Properties();
    ::java::lang::String getProperty(const ::java::lang::String&) const ;
    ::java::lang::String getProperty(const ::java::lang::String&, const ::java::lang::String&) const ;
    void list(const ::java::io::PrintStream&) const ;
    void list(const ::java::io::PrintWriter&) const ;
    void load(const ::java::io::InputStream&) const ;
    void load(const ::java::io::Reader&) const ;
    ::java::util::Enumeration propertyNames() const ;
    ::java::util::Set stringPropertyNames() const ;
    void save(const ::java::io::OutputStream&, const ::java::lang::String&) const ;
    ::java::lang::Object setProperty(const ::java::lang::String&, const ::java::lang::String&) const ;
    void store(const ::java::io::OutputStream&, const ::java::lang::String&) const ;
    void store(const ::java::io::Writer&, const ::java::lang::String&) const ;
    void loadFromXML(const ::java::io::InputStream&) const ;
    void storeToXML(const ::java::io::OutputStream&, const ::java::lang::String&) const ;
    void storeToXML(const ::java::io::OutputStream&, const ::java::lang::String&, const ::java::lang::String&) const ;

};
}
}


