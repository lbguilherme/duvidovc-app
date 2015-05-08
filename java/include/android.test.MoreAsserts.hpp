#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Iterable; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Map; } }
namespace java { namespace util { class Set; } }
namespace java { namespace util { namespace regex { class MatchResult; } } }

namespace android {
namespace test {
class MoreAsserts : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MoreAsserts(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MoreAsserts(const ::android::test::MoreAsserts& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MoreAsserts(::android::test::MoreAsserts&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::MoreAsserts& operator=(const ::android::test::MoreAsserts& x) {obj = x.obj; return *this;}
    ::android::test::MoreAsserts& operator=(::android::test::MoreAsserts&& x) {obj = std::move(x.obj); return *this;}
    
    static void assertAssignableFrom(const ::java::lang::Class&, const ::java::lang::Object&);
    static void assertAssignableFrom(const ::java::lang::Class&, const ::java::lang::Class&);
    static void assertNotEqual(const ::java::lang::String&, const ::java::lang::Object&, const ::java::lang::Object&);
    static void assertNotEqual(const ::java::lang::Object&, const ::java::lang::Object&);
    static void assertEquals(const ::java::lang::String&, const std::vector< int8_t>&, const std::vector< int8_t>&);
    static void assertEquals(const std::vector< int8_t>&, const std::vector< int8_t>&);
    static void assertEquals(const ::java::lang::String&, const std::vector< int32_t>&, const std::vector< int32_t>&);
    static void assertEquals(const std::vector< int32_t>&, const std::vector< int32_t>&);
    static void assertEquals(const ::java::lang::String&, const std::vector< double>&, const std::vector< double>&);
    static void assertEquals(const std::vector< double>&, const std::vector< double>&);
    static void assertEquals(const ::java::lang::String&, const std::vector< ::java::lang::Object>&, const std::vector< ::java::lang::Object>&);
    static void assertEquals(const std::vector< ::java::lang::Object>&, const std::vector< ::java::lang::Object>&);
    static void assertEquals(const ::java::lang::String&, const ::java::util::Set&, const ::java::util::Set&);
    static void assertEquals(const ::java::util::Set&, const ::java::util::Set&);
    static ::java::util::regex::MatchResult assertMatchesRegex(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);
    static ::java::util::regex::MatchResult assertMatchesRegex(const ::java::lang::String&, const ::java::lang::String&);
    static ::java::util::regex::MatchResult assertContainsRegex(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);
    static ::java::util::regex::MatchResult assertContainsRegex(const ::java::lang::String&, const ::java::lang::String&);
    static void assertNotMatchesRegex(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);
    static void assertNotMatchesRegex(const ::java::lang::String&, const ::java::lang::String&);
    static void assertNotContainsRegex(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);
    static void assertNotContainsRegex(const ::java::lang::String&, const ::java::lang::String&);
    static void assertContentsInOrder(const ::java::lang::String&, const ::java::lang::Iterable&, const std::vector< ::java::lang::Object>&);
    static void assertContentsInOrder(const ::java::lang::Iterable&, const std::vector< ::java::lang::Object>&);
    static void assertContentsInAnyOrder(const ::java::lang::String&, const ::java::lang::Iterable&, const std::vector< ::java::lang::Object>&);
    static void assertContentsInAnyOrder(const ::java::lang::Iterable&, const std::vector< ::java::lang::Object>&);
    static void assertEmpty(const ::java::lang::String&, const ::java::lang::Iterable&);
    static void assertEmpty(const ::java::lang::Iterable&);
    static void assertEmpty(const ::java::lang::String&, const ::java::util::Map&);
    static void assertEmpty(const ::java::util::Map&);
    static void assertNotEmpty(const ::java::lang::String&, const ::java::lang::Iterable&);
    static void assertNotEmpty(const ::java::lang::Iterable&);
    static void assertNotEmpty(const ::java::lang::String&, const ::java::util::Map&);
    static void assertNotEmpty(const ::java::util::Map&);
    static void checkEqualsAndHashCodeMethods(const ::java::lang::String&, const ::java::lang::Object&, const ::java::lang::Object&, bool);
    static void checkEqualsAndHashCodeMethods(const ::java::lang::Object&, const ::java::lang::Object&, bool);

};
}
}


