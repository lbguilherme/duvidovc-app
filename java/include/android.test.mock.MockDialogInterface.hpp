#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.DialogInterface.hpp"


namespace android {
namespace test {
namespace mock {
class MockDialogInterface : public virtual ::java::lang::Object,
                            public virtual ::android::content::DialogInterface {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MockDialogInterface(jobject _obj) : ::java::lang::Object(_obj), ::android::content::DialogInterface(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MockDialogInterface(const ::android::test::mock::MockDialogInterface& x) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface((jobject)0) {obj = x.obj;}
    MockDialogInterface(::android::test::mock::MockDialogInterface&& x) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::mock::MockDialogInterface& operator=(const ::android::test::mock::MockDialogInterface& x) {obj = x.obj; return *this;}
    ::android::test::mock::MockDialogInterface& operator=(::android::test::mock::MockDialogInterface&& x) {obj = std::move(x.obj); return *this;}
    
    MockDialogInterface();
    void cancel() const;
    void dismiss() const;

};
}
}
}


