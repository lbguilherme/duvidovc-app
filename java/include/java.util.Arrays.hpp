#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Comparator; } }
namespace java { namespace util { class List; } }

namespace java {
namespace util {
class Arrays : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Arrays(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Arrays(const ::java::util::Arrays& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Arrays(::java::util::Arrays&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::Arrays& operator=(const ::java::util::Arrays& x) {obj = x.obj; return *this;}
    ::java::util::Arrays& operator=(::java::util::Arrays&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::util::List asList(const std::vector< ::java::lang::Object>&);
    static int32_t binarySearch(const std::vector< int8_t>&, int8_t);
    static int32_t binarySearch(const std::vector< int8_t>&, int32_t, int32_t, int8_t);
    static int32_t binarySearch(const std::vector< uint16_t>&, uint16_t);
    static int32_t binarySearch(const std::vector< uint16_t>&, int32_t, int32_t, uint16_t);
    static int32_t binarySearch(const std::vector< double>&, double);
    static int32_t binarySearch(const std::vector< double>&, int32_t, int32_t, double);
    static int32_t binarySearch(const std::vector< float>&, float);
    static int32_t binarySearch(const std::vector< float>&, int32_t, int32_t, float);
    static int32_t binarySearch(const std::vector< int32_t>&, int32_t);
    static int32_t binarySearch(const std::vector< int32_t>&, int32_t, int32_t, int32_t);
    static int32_t binarySearch(const std::vector< int64_t>&, int64_t);
    static int32_t binarySearch(const std::vector< int64_t>&, int32_t, int32_t, int64_t);
    static int32_t binarySearch(const std::vector< ::java::lang::Object>&, const ::java::lang::Object&);
    static int32_t binarySearch(const std::vector< ::java::lang::Object>&, int32_t, int32_t, const ::java::lang::Object&);
    static int32_t binarySearch(const std::vector< ::java::lang::Object>&, const ::java::lang::Object&, const ::java::util::Comparator&);
    static int32_t binarySearch(const std::vector< ::java::lang::Object>&, int32_t, int32_t, const ::java::lang::Object&, const ::java::util::Comparator&);
    static int32_t binarySearch(const std::vector< int16_t>&, int16_t);
    static int32_t binarySearch(const std::vector< int16_t>&, int32_t, int32_t, int16_t);
    static void fill(const std::vector< int8_t>&, int8_t);
    static void fill(const std::vector< int8_t>&, int32_t, int32_t, int8_t);
    static void fill(const std::vector< int16_t>&, int16_t);
    static void fill(const std::vector< int16_t>&, int32_t, int32_t, int16_t);
    static void fill(const std::vector< uint16_t>&, uint16_t);
    static void fill(const std::vector< uint16_t>&, int32_t, int32_t, uint16_t);
    static void fill(const std::vector< int32_t>&, int32_t);
    static void fill(const std::vector< int32_t>&, int32_t, int32_t, int32_t);
    static void fill(const std::vector< int64_t>&, int64_t);
    static void fill(const std::vector< int64_t>&, int32_t, int32_t, int64_t);
    static void fill(const std::vector< float>&, float);
    static void fill(const std::vector< float>&, int32_t, int32_t, float);
    static void fill(const std::vector< double>&, double);
    static void fill(const std::vector< double>&, int32_t, int32_t, double);
    static void fill(const std::vector< bool>&, bool);
    static void fill(const std::vector< bool>&, int32_t, int32_t, bool);
    static void fill(const std::vector< ::java::lang::Object>&, const ::java::lang::Object&);
    static void fill(const std::vector< ::java::lang::Object>&, int32_t, int32_t, const ::java::lang::Object&);
    static int32_t hashCode(const std::vector< bool>&);
    static int32_t hashCode(const std::vector< int32_t>&);
    static int32_t hashCode(const std::vector< int16_t>&);
    static int32_t hashCode(const std::vector< uint16_t>&);
    static int32_t hashCode(const std::vector< int8_t>&);
    static int32_t hashCode(const std::vector< int64_t>&);
    static int32_t hashCode(const std::vector< float>&);
    static int32_t hashCode(const std::vector< double>&);
    static int32_t hashCode(const std::vector< ::java::lang::Object>&);
    static int32_t deepHashCode(const std::vector< ::java::lang::Object>&);
    static bool equals(const std::vector< int8_t>&, const std::vector< int8_t>&);
    static bool equals(const std::vector< int16_t>&, const std::vector< int16_t>&);
    static bool equals(const std::vector< uint16_t>&, const std::vector< uint16_t>&);
    static bool equals(const std::vector< int32_t>&, const std::vector< int32_t>&);
    static bool equals(const std::vector< int64_t>&, const std::vector< int64_t>&);
    static bool equals(const std::vector< float>&, const std::vector< float>&);
    static bool equals(const std::vector< double>&, const std::vector< double>&);
    static bool equals(const std::vector< bool>&, const std::vector< bool>&);
    static bool equals(const std::vector< ::java::lang::Object>&, const std::vector< ::java::lang::Object>&);
    static bool deepEquals(const std::vector< ::java::lang::Object>&, const std::vector< ::java::lang::Object>&);
    static void sort(const std::vector< int8_t>&);
    static void sort(const std::vector< int8_t>&, int32_t, int32_t);
    static void sort(const std::vector< uint16_t>&);
    static void sort(const std::vector< uint16_t>&, int32_t, int32_t);
    static void sort(const std::vector< double>&);
    static void sort(const std::vector< double>&, int32_t, int32_t);
    static void sort(const std::vector< float>&);
    static void sort(const std::vector< float>&, int32_t, int32_t);
    static void sort(const std::vector< int32_t>&);
    static void sort(const std::vector< int32_t>&, int32_t, int32_t);
    static void sort(const std::vector< int64_t>&);
    static void sort(const std::vector< int64_t>&, int32_t, int32_t);
    static void sort(const std::vector< int16_t>&);
    static void sort(const std::vector< int16_t>&, int32_t, int32_t);
    static void sort(const std::vector< ::java::lang::Object>&);
    static void sort(const std::vector< ::java::lang::Object>&, int32_t, int32_t);
    static void sort(const std::vector< ::java::lang::Object>&, int32_t, int32_t, const ::java::util::Comparator&);
    static void sort(const std::vector< ::java::lang::Object>&, const ::java::util::Comparator&);
    static ::java::lang::String toString(const std::vector< bool>&);
    static ::java::lang::String toString(const std::vector< int8_t>&);
    static ::java::lang::String toString(const std::vector< uint16_t>&);
    static ::java::lang::String toString(const std::vector< double>&);
    static ::java::lang::String toString(const std::vector< float>&);
    static ::java::lang::String toString(const std::vector< int32_t>&);
    static ::java::lang::String toString(const std::vector< int64_t>&);
    static ::java::lang::String toString(const std::vector< int16_t>&);
    static ::java::lang::String toString(const std::vector< ::java::lang::Object>&);
    static ::java::lang::String deepToString(const std::vector< ::java::lang::Object>&);
    static std::vector< bool> copyOf(const std::vector< bool>&, int32_t);
    static std::vector< int8_t> copyOf(const std::vector< int8_t>&, int32_t);
    static std::vector< uint16_t> copyOf(const std::vector< uint16_t>&, int32_t);
    static std::vector< double> copyOf(const std::vector< double>&, int32_t);
    static std::vector< float> copyOf(const std::vector< float>&, int32_t);
    static std::vector< int32_t> copyOf(const std::vector< int32_t>&, int32_t);
    static std::vector< int64_t> copyOf(const std::vector< int64_t>&, int32_t);
    static std::vector< int16_t> copyOf(const std::vector< int16_t>&, int32_t);
    static std::vector< ::java::lang::Object> copyOf(const std::vector< ::java::lang::Object>&, int32_t);
    static std::vector< ::java::lang::Object> copyOf(const std::vector< ::java::lang::Object>&, int32_t, const ::java::lang::Class&);
    static std::vector< bool> copyOfRange(const std::vector< bool>&, int32_t, int32_t);
    static std::vector< int8_t> copyOfRange(const std::vector< int8_t>&, int32_t, int32_t);
    static std::vector< uint16_t> copyOfRange(const std::vector< uint16_t>&, int32_t, int32_t);
    static std::vector< double> copyOfRange(const std::vector< double>&, int32_t, int32_t);
    static std::vector< float> copyOfRange(const std::vector< float>&, int32_t, int32_t);
    static std::vector< int32_t> copyOfRange(const std::vector< int32_t>&, int32_t, int32_t);
    static std::vector< int64_t> copyOfRange(const std::vector< int64_t>&, int32_t, int32_t);
    static std::vector< int16_t> copyOfRange(const std::vector< int16_t>&, int32_t, int32_t);
    static std::vector< ::java::lang::Object> copyOfRange(const std::vector< ::java::lang::Object>&, int32_t, int32_t);
    static std::vector< ::java::lang::Object> copyOfRange(const std::vector< ::java::lang::Object>&, int32_t, int32_t, const ::java::lang::Class&);

};
}
}


