#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Iterator.hpp"

namespace java { namespace io { class File; } }
namespace java { namespace io { class IOException; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class Readable; } }
namespace java { namespace lang { class String; } }
namespace java { namespace math { class BigDecimal; } }
namespace java { namespace math { class BigInteger; } }
namespace java { namespace nio { namespace channels { class ReadableByteChannel; } } }
namespace java { namespace util { class Locale; } }
namespace java { namespace util { class Scanner; } }
namespace java { namespace util { namespace regex { class MatchResult; } } }
namespace java { namespace util { namespace regex { class Pattern; } } }

namespace java {
namespace util {
class Scanner : public virtual ::java::lang::Object,
                public virtual ::java::util::Iterator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Scanner(jobject _obj) : ::java::lang::Object(_obj), ::java::util::Iterator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Scanner(const ::java::util::Scanner& x) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0) {obj = x.obj;}
    Scanner(::java::util::Scanner&& x) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::Scanner& operator=(const ::java::util::Scanner& x) {obj = x.obj; return *this;}
    ::java::util::Scanner& operator=(::java::util::Scanner&& x) {obj = std::move(x.obj); return *this;}
    
    Scanner(const ::java::io::File&);
    Scanner(const ::java::io::File&, const ::java::lang::String&);
    Scanner(const ::java::lang::String&);
    Scanner(const ::java::io::InputStream&);
    Scanner(const ::java::io::InputStream&, const ::java::lang::String&);
    Scanner(const ::java::lang::Readable&);
    Scanner(const ::java::nio::channels::ReadableByteChannel&);
    Scanner(const ::java::nio::channels::ReadableByteChannel&, const ::java::lang::String&);
    void close() const ;
    ::java::util::regex::Pattern delimiter() const ;
    ::java::lang::String findInLine(const ::java::util::regex::Pattern&) const ;
    ::java::lang::String findInLine(const ::java::lang::String&) const ;
    ::java::lang::String findWithinHorizon(const ::java::util::regex::Pattern&, int32_t) const ;
    ::java::lang::String findWithinHorizon(const ::java::lang::String&, int32_t) const ;
    bool hasNext() const ;
    bool hasNext(const ::java::util::regex::Pattern&) const ;
    bool hasNext(const ::java::lang::String&) const ;
    bool hasNextBigDecimal() const ;
    bool hasNextBigInteger() const ;
    bool hasNextBigInteger(int32_t) const ;
    bool hasNextBoolean() const ;
    bool hasNextByte() const ;
    bool hasNextByte(int32_t) const ;
    bool hasNextDouble() const ;
    bool hasNextFloat() const ;
    bool hasNextInt() const ;
    bool hasNextInt(int32_t) const ;
    bool hasNextLine() const ;
    bool hasNextLong() const ;
    bool hasNextLong(int32_t) const ;
    bool hasNextShort() const ;
    bool hasNextShort(int32_t) const ;
    ::java::io::IOException ioException() const ;
    ::java::util::Locale locale() const ;
    ::java::util::regex::MatchResult match() const ;
    ::java::lang::String next() const ;
    ::java::lang::String next(const ::java::util::regex::Pattern&) const ;
    ::java::lang::String next(const ::java::lang::String&) const ;
    ::java::math::BigDecimal nextBigDecimal() const ;
    ::java::math::BigInteger nextBigInteger() const ;
    ::java::math::BigInteger nextBigInteger(int32_t) const ;
    bool nextBoolean() const ;
    int8_t nextByte() const ;
    int8_t nextByte(int32_t) const ;
    double nextDouble() const ;
    float nextFloat() const ;
    int32_t nextInt() const ;
    int32_t nextInt(int32_t) const ;
    ::java::lang::String nextLine() const ;
    int64_t nextLong() const ;
    int64_t nextLong(int32_t) const ;
    int16_t nextShort() const ;
    int16_t nextShort(int32_t) const ;
    int32_t radix() const ;
    ::java::util::Scanner skip(const ::java::util::regex::Pattern&) const ;
    ::java::util::Scanner skip(const ::java::lang::String&) const ;
    ::java::lang::String toString() const ;
    ::java::util::Scanner useDelimiter(const ::java::util::regex::Pattern&) const ;
    ::java::util::Scanner useDelimiter(const ::java::lang::String&) const ;
    ::java::util::Scanner useLocale(const ::java::util::Locale&) const ;
    ::java::util::Scanner useRadix(int32_t) const ;
    void remove() const ;
    ::java::util::Scanner reset() const ;

};
}
}


