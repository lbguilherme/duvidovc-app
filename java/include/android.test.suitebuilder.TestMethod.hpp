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
namespace java { namespace lang { namespace annotation { class Annotation; } } }
namespace java { namespace lang { namespace reflect { class Method; } } }
namespace junit { namespace framework { class TestCase; } }

namespace android {
namespace test {
namespace suitebuilder {
class TestMethod : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TestMethod(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TestMethod(const ::android::test::suitebuilder::TestMethod& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TestMethod(::android::test::suitebuilder::TestMethod&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::suitebuilder::TestMethod& operator=(const ::android::test::suitebuilder::TestMethod& x) {obj = x.obj; return *this;}
    ::android::test::suitebuilder::TestMethod& operator=(::android::test::suitebuilder::TestMethod&& x) {obj = std::move(x.obj); return *this;}
    
    TestMethod(const ::java::lang::reflect::Method&, const ::java::lang::Class&);
    TestMethod(const ::java::lang::String&, const ::java::lang::Class&);
    TestMethod(const ::junit::framework::TestCase&);
    ::java::lang::String getName() const ;
    ::java::lang::String getEnclosingClassname() const ;
    ::java::lang::annotation::Annotation getAnnotation(const ::java::lang::Class&) const ;
    ::java::lang::Class getEnclosingClass() const ;
    ::junit::framework::TestCase createTest() const ;
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;
    ::java::lang::String toString() const ;

};
}
}
}


