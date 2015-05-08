#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace java {
namespace lang {
class StrictMath : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit StrictMath(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    StrictMath(const ::java::lang::StrictMath& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    StrictMath(::java::lang::StrictMath&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::StrictMath& operator=(const ::java::lang::StrictMath& x) {obj = x.obj; return *this;}
    ::java::lang::StrictMath& operator=(::java::lang::StrictMath&& x) {obj = std::move(x.obj); return *this;}
    
    static double abs(double);
    static float abs(float);
    static int32_t abs(int32_t);
    static int64_t abs(int64_t);
    static double acos(double);
    static double asin(double);
    static double atan(double);
    static double atan2(double, double);
    static double cbrt(double);
    static double ceil(double);
    static double cosh(double);
    static double cos(double);
    static double exp(double);
    static double expm1(double);
    static double floor(double);
    static double hypot(double, double);
    static double IEEEremainder(double, double);
    static double log(double);
    static double log10(double);
    static double log1p(double);
    static double max(double, double);
    static float max(float, float);
    static int32_t max(int32_t, int32_t);
    static int64_t max(int64_t, int64_t);
    static double min(double, double);
    static float min(float, float);
    static int32_t min(int32_t, int32_t);
    static int64_t min(int64_t, int64_t);
    static double pow(double, double);
    static double random();
    static double rint(double);
    static int64_t round(double);
    static int32_t round(float);
    static double signum(double);
    static float signum(float);
    static double sinh(double);
    static double sin(double);
    static double sqrt(double);
    static double tan(double);
    static double tanh(double);
    static double toDegrees(double);
    static double toRadians(double);
    static double ulp(double);
    static float ulp(float);
    static double copySign(double, double);
    static float copySign(float, float);
    static int32_t getExponent(float);
    static int32_t getExponent(double);
    static double nextAfter(double, double);
    static float nextAfter(float, double);
    static double nextUp(double);
    static float nextUp(float);
    static double scalb(double, int32_t);
    static float scalb(float, int32_t);

};
}
}


