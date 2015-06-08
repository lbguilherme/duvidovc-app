#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace util {
class TimingLogger : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TimingLogger(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TimingLogger(const ::android::util::TimingLogger& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TimingLogger(::android::util::TimingLogger&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::TimingLogger& operator=(const ::android::util::TimingLogger& x) {obj = x.obj; return *this;}
    ::android::util::TimingLogger& operator=(::android::util::TimingLogger&& x) {obj = std::move(x.obj); return *this;}
    
    TimingLogger(const ::java::lang::String&, const ::java::lang::String&);
    void reset(const ::java::lang::String&, const ::java::lang::String&) const;
    void reset() const;
    void addSplit(const ::java::lang::String&) const;
    void dumpToLog() const;

};
}
}


