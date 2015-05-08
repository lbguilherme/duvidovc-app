#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Object; } }

namespace java {
namespace lang {
namespace reflect {
class Array : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Array(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Array(const ::java::lang::reflect::Array& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Array(::java::lang::reflect::Array&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::reflect::Array& operator=(const ::java::lang::reflect::Array& x) {obj = x.obj; return *this;}
    ::java::lang::reflect::Array& operator=(::java::lang::reflect::Array&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::lang::Object get(const ::java::lang::Object&, int32_t);
    static bool getBoolean(const ::java::lang::Object&, int32_t);
    static int8_t getByte(const ::java::lang::Object&, int32_t);
    static uint16_t getChar(const ::java::lang::Object&, int32_t);
    static double getDouble(const ::java::lang::Object&, int32_t);
    static float getFloat(const ::java::lang::Object&, int32_t);
    static int32_t getInt(const ::java::lang::Object&, int32_t);
    static int32_t getLength(const ::java::lang::Object&);
    static int64_t getLong(const ::java::lang::Object&, int32_t);
    static int16_t getShort(const ::java::lang::Object&, int32_t);
    static ::java::lang::Object newInstance(const ::java::lang::Class&, const std::vector< int32_t>&);
    static ::java::lang::Object newInstance(const ::java::lang::Class&, int32_t);
    static void set(const ::java::lang::Object&, int32_t, const ::java::lang::Object&);
    static void setBoolean(const ::java::lang::Object&, int32_t, bool);
    static void setByte(const ::java::lang::Object&, int32_t, int8_t);
    static void setChar(const ::java::lang::Object&, int32_t, uint16_t);
    static void setDouble(const ::java::lang::Object&, int32_t, double);
    static void setFloat(const ::java::lang::Object&, int32_t, float);
    static void setInt(const ::java::lang::Object&, int32_t, int32_t);
    static void setLong(const ::java::lang::Object&, int32_t, int64_t);
    static void setShort(const ::java::lang::Object&, int32_t, int16_t);

};
}
}
}


