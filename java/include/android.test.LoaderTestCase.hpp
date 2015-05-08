#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.test.AndroidTestCase.hpp"

namespace android { namespace content { class Loader; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace test {
class LoaderTestCase : public virtual ::java::lang::Object,
                       public virtual ::android::test::AndroidTestCase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LoaderTestCase(jobject _obj) : ::java::lang::Object(_obj), ::android::test::AndroidTestCase(_obj), ::junit::framework::Assert(_obj), ::junit::framework::Test(_obj), ::junit::framework::TestCase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LoaderTestCase(const ::android::test::LoaderTestCase& x) : ::java::lang::Object((jobject)0), ::android::test::AndroidTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {obj = x.obj;}
    LoaderTestCase(::android::test::LoaderTestCase&& x) : ::java::lang::Object((jobject)0), ::android::test::AndroidTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::LoaderTestCase& operator=(const ::android::test::LoaderTestCase& x) {obj = x.obj; return *this;}
    ::android::test::LoaderTestCase& operator=(::android::test::LoaderTestCase&& x) {obj = std::move(x.obj); return *this;}
    
    LoaderTestCase();
    ::java::lang::Object getLoaderResultSynchronously(const ::android::content::Loader&) const ;

};
}
}


