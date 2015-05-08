#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace junit {
namespace framework {
class Assert : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Assert(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Assert(const ::junit::framework::Assert& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Assert(::junit::framework::Assert&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::junit::framework::Assert& operator=(const ::junit::framework::Assert& x) {obj = x.obj; return *this;}
    ::junit::framework::Assert& operator=(::junit::framework::Assert&& x) {obj = std::move(x.obj); return *this;}
    
    static void assertTrue(const ::java::lang::String&, bool);
    static void assertTrue(bool);
    static void assertFalse(const ::java::lang::String&, bool);
    static void assertFalse(bool);
    static void fail(const ::java::lang::String&);
    static void fail();
    static void assertEquals(const ::java::lang::String&, const ::java::lang::Object&, const ::java::lang::Object&);
    static void assertEquals(const ::java::lang::Object&, const ::java::lang::Object&);
    static void assertEquals(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);
    static void assertEquals(const ::java::lang::String&, const ::java::lang::String&);
    static void assertEquals(const ::java::lang::String&, double, double, double);
    static void assertEquals(double, double, double);
    static void assertEquals(const ::java::lang::String&, float, float, float);
    static void assertEquals(float, float, float);
    static void assertEquals(const ::java::lang::String&, int64_t, int64_t);
    static void assertEquals(int64_t, int64_t);
    static void assertEquals(const ::java::lang::String&, bool, bool);
    static void assertEquals(bool, bool);
    static void assertEquals(const ::java::lang::String&, int8_t, int8_t);
    static void assertEquals(int8_t, int8_t);
    static void assertEquals(const ::java::lang::String&, uint16_t, uint16_t);
    static void assertEquals(uint16_t, uint16_t);
    static void assertEquals(const ::java::lang::String&, int16_t, int16_t);
    static void assertEquals(int16_t, int16_t);
    static void assertEquals(const ::java::lang::String&, int32_t, int32_t);
    static void assertEquals(int32_t, int32_t);
    static void assertNotNull(const ::java::lang::Object&);
    static void assertNotNull(const ::java::lang::String&, const ::java::lang::Object&);
    static void assertNull(const ::java::lang::Object&);
    static void assertNull(const ::java::lang::String&, const ::java::lang::Object&);
    static void assertSame(const ::java::lang::String&, const ::java::lang::Object&, const ::java::lang::Object&);
    static void assertSame(const ::java::lang::Object&, const ::java::lang::Object&);
    static void assertNotSame(const ::java::lang::String&, const ::java::lang::Object&, const ::java::lang::Object&);
    static void assertNotSame(const ::java::lang::Object&, const ::java::lang::Object&);

};
}
}


