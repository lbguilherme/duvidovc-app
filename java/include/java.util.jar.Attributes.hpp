#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"
#include "java.util.Map.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Map; } }
namespace java { namespace util { class Set; } }
namespace java { namespace util { namespace jar { class Attributes_Name; } } }

namespace java {
namespace util {
namespace jar {
class Attributes : public virtual ::java::lang::Object,
                   public virtual ::java::lang::Cloneable,
                   public virtual ::java::util::Map {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Attributes(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj), ::java::util::Map(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Attributes(const ::java::util::jar::Attributes& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::Map((jobject)0) {obj = x.obj;}
    Attributes(::java::util::jar::Attributes&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::Map((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::jar::Attributes& operator=(const ::java::util::jar::Attributes& x) {obj = x.obj; return *this;}
    ::java::util::jar::Attributes& operator=(::java::util::jar::Attributes&& x) {obj = std::move(x.obj); return *this;}
    
    Attributes();
    Attributes(int32_t);
    void clear() const;
    bool containsKey(const ::java::lang::Object&) const;
    bool containsValue(const ::java::lang::Object&) const;
    ::java::util::Set entrySet() const;
    ::java::lang::Object get(const ::java::lang::Object&) const;
    bool isEmpty() const;
    ::java::util::Set keySet() const;
    ::java::lang::Object put(const ::java::lang::Object&, const ::java::lang::Object&) const;
    void putAll(const ::java::util::Map&) const;
    ::java::lang::Object remove(const ::java::lang::Object&) const;
    int32_t size() const;
    ::java::util::Collection values() const;
    ::java::lang::Object clone() const;
    int32_t hashCode() const;
    bool equals(const ::java::lang::Object&) const;
    ::java::lang::String getValue(const ::java::util::jar::Attributes_Name&) const;
    ::java::lang::String getValue(const ::java::lang::String&) const;
    ::java::lang::String putValue(const ::java::lang::String&, const ::java::lang::String&) const;

};
}
}
}

#include "java.util.jar.Attributes_Name.hpp"

