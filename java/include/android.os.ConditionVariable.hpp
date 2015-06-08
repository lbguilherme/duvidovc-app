#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace os {
class ConditionVariable : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConditionVariable(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConditionVariable(const ::android::os::ConditionVariable& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ConditionVariable(::android::os::ConditionVariable&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::ConditionVariable& operator=(const ::android::os::ConditionVariable& x) {obj = x.obj; return *this;}
    ::android::os::ConditionVariable& operator=(::android::os::ConditionVariable&& x) {obj = std::move(x.obj); return *this;}
    
    ConditionVariable();
    ConditionVariable(bool);
    void open() const;
    void close() const;
    void block() const;
    bool block(int64_t) const;

};
}
}


