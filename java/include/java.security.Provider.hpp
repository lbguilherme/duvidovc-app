#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Properties.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace security { class Provider_Service; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Map; } }
namespace java { namespace util { class Set; } }

namespace java {
namespace security {
class Provider : public virtual ::java::lang::Object,
                 public virtual ::java::util::Properties {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Provider(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::util::Dictionary(_obj), ::java::util::Hashtable(_obj), ::java::util::Map(_obj), ::java::util::Properties(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Provider(const ::java::security::Provider& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::Dictionary((jobject)0), ::java::util::Hashtable((jobject)0), ::java::util::Map((jobject)0), ::java::util::Properties((jobject)0) {obj = x.obj;}
    Provider(::java::security::Provider&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::Dictionary((jobject)0), ::java::util::Hashtable((jobject)0), ::java::util::Map((jobject)0), ::java::util::Properties((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::Provider& operator=(const ::java::security::Provider& x) {obj = x.obj; return *this;}
    ::java::security::Provider& operator=(::java::security::Provider&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getName() const;
    double getVersion() const;
    ::java::lang::String getInfo() const;
    ::java::lang::String toString() const;
    void clear() const;
    void load(const ::java::io::InputStream&) const;
    void putAll(const ::java::util::Map&) const;
    ::java::util::Set entrySet() const;
    ::java::util::Set keySet() const;
    ::java::util::Collection values() const;
    ::java::lang::Object put(const ::java::lang::Object&, const ::java::lang::Object&) const;
    ::java::lang::Object remove(const ::java::lang::Object&) const;
    ::java::security::Provider_Service getService(const ::java::lang::String&, const ::java::lang::String&) const;
    ::java::util::Set getServices() const;

};
}
}

#include "java.security.Provider_Service.hpp"

